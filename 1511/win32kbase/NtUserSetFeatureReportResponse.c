/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00B1CA0
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0010E70 (RawInputManagerDeviceObjectResolveHandle.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C00211D0 (Win32AllocPoolWithQuota.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0022470 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C00226F8 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     Template_xqx @ 0x1C00AF860 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00C5C18 (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00C7720 (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(void *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  unsigned int v6; // edi
  struct tagTHREADINFO *v7; // r12
  __int64 v8; // rcx
  LONGLONG v9; // rdx
  __int64 v10; // r14
  LARGE_INTEGER v11; // rcx
  LARGE_INTEGER v12; // rsi
  LARGE_INTEGER v13; // r8
  bool v14; // al
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rcx
  char *v19; // rax
  char *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rcx
  PVOID v23; // r15
  char *v24; // rsi
  __int64 v25; // rsi
  unsigned int v26; // r12d
  _DWORD *v27; // r14
  int v28; // r8d
  int v29; // eax
  __int64 v31; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  char *v33; // [rsp+48h] [rbp-40h]

  v3 = a3;
  Object = 0LL;
  v33 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 1;
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v10 = PsGetCurrentThreadWin32Thread(v8);
  if ( v10 )
  {
    v12 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v10 + 8));
    v9 = 0x200000010000000LL;
    if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x200000010000000LL) != 0 )
    {
      v14 = (unsigned __int8)(byte_1C01020C8 - 1) > 2u
         && (qword_1C01020B0 & 0x200000010000000LL) != 0
         && (qword_1C01020B8 & 0x200000010000000LL) == qword_1C01020B8;
      if ( v14 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v11.LowPart) = byte_1C01020C8 - 1;
        Template_xqx(
          v11.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v13.QuadPart,
          v12.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v12.QuadPart >= (__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
    {
      v9 = 1000 * v12.QuadPart % gliQpcFreq.QuadPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
      {
        LODWORD(v31) = 1000 * v12.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          gullUserCritAcquireToken,
          &AcquiredExclusiveUserCritTelemetryEvent,
          v13.QuadPart,
          0LL,
          v31,
          gullUserCritAcquireToken);
      }
    }
    *(_QWORD *)(v10 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)(v3 - 1) > 6 || (v15 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v18 = 87LL;
    goto LABEL_80;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v18 = 5LL;
LABEL_80:
    v6 = 0;
    UserSetLastError(v18, v9);
    goto LABEL_81;
  }
  if ( v15 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v16, v9, v17) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v15 + a2 > (unsigned __int64)W32UserProbeAddress || v15 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v19 = (char *)Win32AllocPoolWithQuota();
  v20 = v19;
  v33 = v19;
  if ( !v19 )
    ExRaiseStatus(-1073741801);
  memmove(v19, (const void *)a2, (unsigned int)v15);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v6 = 0;
    UserSetLastError(87LL, v21);
    v23 = Object;
  }
  else
  {
    v23 = Object;
    if ( Object )
      v24 = (char *)Object + 64;
    else
      v24 = 0LL;
    v25 = *((_QWORD *)v24 + 52);
    if ( *(_DWORD *)(*((_QWORD *)Object + 54) + 16LL) || (*(_DWORD *)(v25 + 252) & 0x10000) == 0 )
    {
LABEL_73:
      v6 = 0;
      UserSetLastError(87LL, v21);
    }
    else
    {
      v26 = 0;
      if ( a3 )
      {
        v27 = v20 + 4;
        v21 = 65280LL;
        while ( 1 )
        {
          v22 = *((unsigned __int16 *)v27 - 2);
          if ( (_WORD)v22 != 13 )
            goto LABEL_52;
          if ( *((_WORD *)v27 - 1) != 85 )
            break;
          v21 = (unsigned int)*v27;
          if ( (int)v21 > 256
            || (v28 = *(_DWORD *)(v25 + 24), v22 = (unsigned int)(v28 - 1) <= 4, (unsigned int)(v28 - 1) > 4) )
          {
            v28 = *(_DWORD *)(v25 + 24);
            if ( v28 != 8 || (int)v21 > 5 )
              goto LABEL_73;
          }
          v29 = *(_DWORD *)(v25 + 720);
          if ( v28 == 8 )
          {
            v22 = 0xFFFFFFFFLL;
            --v29;
          }
          if ( (_DWORD)v21 != v29 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v25) )
            goto LABEL_73;
          v21 = 65280LL;
LABEL_71:
          ++v26;
          v27 += 3;
          if ( v26 >= a3 )
            goto LABEL_75;
        }
        if ( *((_WORD *)v27 - 1) == 89 && *(_DWORD *)(v25 + 24) == 8 && *v27 <= 1u )
        {
          *(_DWORD *)(v25 + 1560) = *v27;
          goto LABEL_71;
        }
LABEL_52:
        if ( (unsigned __int16)v22 < 0xFF00u )
          goto LABEL_73;
        if ( *((_WORD *)v27 - 1) == 226 && *(_DWORD *)(v25 + 24) == 8 )
        {
          *(_BYTE *)(v25 + 232) |= 1u;
          *(_DWORD *)(v25 + 236) = *v27;
        }
        else if ( *((_WORD *)v27 - 1) == 227 && *(_DWORD *)(v25 + 24) == 8 )
        {
          *(_BYTE *)(v25 + 232) |= 1u;
          *(_DWORD *)(v25 + 240) = *v27;
        }
        else if ( *((_WORD *)v27 - 1) == 225 && *(_DWORD *)(v25 + 24) == 8 )
        {
          *(_BYTE *)(v25 + 232) ^= (*(_BYTE *)(v25 + 232) ^ (4 * (*v27 != 0))) & 4;
        }
        else if ( *((_WORD *)v27 - 1) == 228 && *(_DWORD *)(v25 + 24) == 8 && (unsigned int)(*v27 - 1) <= 0x63 )
        {
          *(_BYTE *)(v25 + 232) |= 2u;
          *(_DWORD *)(v25 + 244) = *v27;
        }
        else
        {
          if ( *((_WORD *)v27 - 1) != 229 || *(_DWORD *)(v25 + 24) != 8 || (unsigned int)(*v27 - 1) > 0x63 )
            goto LABEL_73;
          *(_BYTE *)(v25 + 232) |= 2u;
          *(_DWORD *)(v25 + 248) = *v27;
        }
        goto LABEL_71;
      }
    }
  }
LABEL_75:
  if ( v23 )
    ObfDereferenceObject(v23);
  if ( v20 )
    Win32FreePool();
LABEL_81:
  UserSessionSwitchLeaveCrit(v22, v21);
  return v6;
}
