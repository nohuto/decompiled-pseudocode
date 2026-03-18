/*
 * XREFs of NtUserSetFeatureReportResponse @ 0x1C00BBA90
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000EB80 (RawInputManagerDeviceObjectResolveHandle.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C001CCF0 (UserSessionSwitchLeaveCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C001D470 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C003AA10 (Win32AllocPoolWithQuota.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     Template_xqx @ 0x1C00B90E0 (Template_xqx.c)
 *     RIMIDECheckCurrentProcessForInjectionPermissions @ 0x1C00D510C (RIMIDECheckCurrentProcessForInjectionPermissions.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00D6E88 (RIMIDEResetPointerDeviceMaxCount.c)
 */

__int64 __fastcall NtUserSetFeatureReportResponse(void *a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  int v6; // edi
  struct tagTHREADINFO *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // r14
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rsi
  LARGE_INTEGER v12; // r8
  bool v13; // al
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rcx
  char *v17; // rax
  char *v18; // r13
  PVOID v19; // r15
  char *v20; // rsi
  __int64 v21; // rsi
  unsigned int v22; // r12d
  _DWORD *v23; // r14
  unsigned __int16 v24; // cx
  int v25; // edx
  int v26; // r8d
  int v27; // eax
  __int64 v29; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  char *v31; // [rsp+48h] [rbp-40h]

  v3 = a3;
  Object = 0LL;
  v31 = 0LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 1;
  v7 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x200000010000000LL) != 0 )
    {
      v13 = (unsigned __int8)(byte_1C0118B28 - 1) > 2u
         && (qword_1C0118B10 & 0x200000010000000LL) != 0
         && (qword_1C0118B18 & 0x200000010000000LL) == qword_1C0118B18;
      if ( v13 && (Microsoft_Windows_Win32kEnableBits & 0x400000) != 0 )
      {
        LOBYTE(v10.LowPart) = byte_1C0118B28 - 1;
        Template_xqx(
          v10.QuadPart,
          &AcquiredExclusiveUserCritEvent,
          v12.QuadPart,
          v11.QuadPart,
          0,
          gullUserCritAcquireToken);
      }
    }
    if ( v11.QuadPart >= *(__int64 *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
      && (Microsoft_Windows_Win32kEnableBits & 0x4000000) != 0 )
    {
      LODWORD(v29) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v29,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  gptiCurrent = v7;
  gbValidateHandleForIL = 1;
  if ( (unsigned int)(v3 - 1) > 6 || (v14 = 12 * v3, (unsigned __int64)(12 * v3) > 0xFFFFFFFF) )
  {
    v16 = 87LL;
    goto LABEL_79;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionPermissions(1LL) )
  {
    v16 = 5LL;
LABEL_79:
    v6 = 0;
    UserSetLastError(v16);
    goto LABEL_80;
  }
  if ( v14 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(v15) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v14 + a2 > W32UserProbeAddress || v14 + a2 < a2 )
      *(_BYTE *)W32UserProbeAddress = 0;
  }
  v17 = (char *)Win32AllocPoolWithQuota();
  v18 = v17;
  v31 = v17;
  if ( !v17 )
    ExRaiseStatus(-1073741801);
  memmove(v17, (const void *)a2, (unsigned int)v14);
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v6 = 0;
    UserSetLastError(87LL);
    v19 = Object;
  }
  else
  {
    v19 = Object;
    if ( Object )
      v20 = (char *)Object + 64;
    else
      v20 = 0LL;
    v21 = *((_QWORD *)v20 + 60);
    if ( *(_DWORD *)(*((_QWORD *)Object + 56) + 16LL) || (*(_DWORD *)(v21 + 252) & 0x10000) == 0 )
    {
LABEL_72:
      v6 = 0;
      UserSetLastError(87LL);
    }
    else
    {
      v22 = 0;
      if ( a3 )
      {
        v23 = v18 + 4;
        while ( 1 )
        {
          v24 = *((_WORD *)v23 - 2);
          if ( v24 != 13 )
            goto LABEL_52;
          if ( *((_WORD *)v23 - 1) != 85 )
            break;
          v25 = *v23;
          if ( (int)*v23 > 256 || (v26 = *(_DWORD *)(v21 + 24), (unsigned int)(v26 - 1) > 3) )
          {
            v26 = *(_DWORD *)(v21 + 24);
            if ( v26 != 7 || v25 > 5 )
              goto LABEL_72;
          }
          v27 = *(_DWORD *)(v21 + 688);
          if ( v26 == 7 )
            --v27;
          if ( v25 != v27 && !(unsigned int)RIMIDEResetPointerDeviceMaxCount(v21) )
            goto LABEL_72;
LABEL_70:
          ++v22;
          v23 += 3;
          if ( v22 >= a3 )
            goto LABEL_74;
        }
        if ( *((_WORD *)v23 - 1) == 89 && *(_DWORD *)(v21 + 24) == 7 && *v23 <= 1u )
        {
          *(_DWORD *)(v21 + 1520) = *v23;
          goto LABEL_70;
        }
LABEL_52:
        if ( v24 < 0xFF00u )
          goto LABEL_72;
        if ( *((_WORD *)v23 - 1) == 226 && *(_DWORD *)(v21 + 24) == 7 )
        {
          *(_BYTE *)(v21 + 232) |= 1u;
          *(_DWORD *)(v21 + 236) = *v23;
        }
        else if ( *((_WORD *)v23 - 1) == 227 && *(_DWORD *)(v21 + 24) == 7 )
        {
          *(_BYTE *)(v21 + 232) |= 1u;
          *(_DWORD *)(v21 + 240) = *v23;
        }
        else if ( *((_WORD *)v23 - 1) == 225 && *(_DWORD *)(v21 + 24) == 7 )
        {
          *(_BYTE *)(v21 + 232) ^= (*(_BYTE *)(v21 + 232) ^ (4 * (*v23 != 0))) & 4;
        }
        else if ( *((_WORD *)v23 - 1) == 228 && *(_DWORD *)(v21 + 24) == 7 && (unsigned int)(*v23 - 1) <= 0x63 )
        {
          *(_BYTE *)(v21 + 232) |= 2u;
          *(_DWORD *)(v21 + 244) = *v23;
        }
        else
        {
          if ( *((_WORD *)v23 - 1) != 229 || *(_DWORD *)(v21 + 24) != 7 || (unsigned int)(*v23 - 1) > 0x63 )
            goto LABEL_72;
          *(_BYTE *)(v21 + 232) |= 2u;
          *(_DWORD *)(v21 + 248) = *v23;
        }
        goto LABEL_70;
      }
    }
  }
LABEL_74:
  if ( v19 )
    ObfDereferenceObject(v19);
  if ( v18 )
    Win32FreePool();
LABEL_80:
  UserSessionSwitchLeaveCrit();
  return v6;
}
