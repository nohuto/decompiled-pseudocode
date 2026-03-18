/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1C011EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8D78 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E8E14 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v9; // r14
  unsigned int v10; // r10d
  int v11; // r15d
  unsigned __int8 *v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 *result; // rax
  __int64 v18; // rdx
  void **v19; // r9
  unsigned int v20; // r8d
  CHAR *v21; // rdx
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // r8d
  void **v25; // r9
  CHAR *v26; // rdx
  int v27; // eax
  unsigned int v28; // r8d
  ULONG_PTR v29; // r14
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-348h] BYREF
  unsigned __int8 *v40; // [rsp+38h] [rbp-340h]
  unsigned __int64 v41; // [rsp+40h] [rbp-338h]
  unsigned int v42; // [rsp+48h] [rbp-330h]
  int v43; // [rsp+4Ch] [rbp-32Ch] BYREF
  __int64 v44; // [rsp+50h] [rbp-328h]
  unsigned __int64 v45; // [rsp+58h] [rbp-320h] BYREF
  __int128 v46; // [rsp+60h] [rbp-318h]
  _QWORD v47[5]; // [rsp+70h] [rbp-308h] BYREF
  _QWORD v48[3]; // [rsp+98h] [rbp-2E0h] BYREF
  _DWORD v49[36]; // [rsp+B0h] [rbp-2C8h] BYREF
  unsigned __int8 v50[512]; // [rsp+140h] [rbp-238h] BYREF

  *(_QWORD *)&v46 = a3;
  v42 = a2;
  LODWORD(v9) = 0;
  LODWORD(a3) = 0;
  v41 = 0LL;
  v10 = 0;
  v11 = a7 & 1;
  v12 = (unsigned __int8 *)v49;
  RegionSize = gptiCurrent;
  if ( a1 )
    v13 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v13 = 0LL;
  v44 = v13;
  v14 = *(_QWORD *)(a4 + 8);
  if ( v14 && (v14 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v15 = *(_DWORD *)(a4 + 56);
    v9 = v15 + 2;
    if ( (unsigned int)v9 < v15 )
      goto LABEL_62;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_62;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && (*(_QWORD *)a4 >= (unsigned __int64)MmSystemRangeStart || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v16 = *(_DWORD *)(a4 + 72);
    a3 = v16 + 2;
    v41 = a3;
    if ( (unsigned int)a3 < v16 )
      goto LABEL_62;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      a3 *= 2LL;
      v41 = a3;
      if ( a3 > 0xFFFFFFFF )
        goto LABEL_62;
    }
    ++v10;
  }
  if ( (int)a3 + (int)v9 >= (unsigned int)v9 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(a3 + v9), v50, 1, 0x200uLL);
      v12 = result;
      v40 = result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = (unsigned __int8 *)v49;
      v40 = (unsigned __int8 *)v49;
      memset(v49, 0, sizeof(v49));
      v49[0] = 144;
    }
    if ( v12 != (unsigned __int8 *)v49 && v12 != v50 )
      PushW32ThreadLock((__int64)v12, v48, (__int64)Win32FreePool);
    *((_QWORD *)v12 + 5) = v13;
    *((_DWORD *)v12 + 12) = v42;
    *((_QWORD *)v12 + 7) = v46;
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v9 )
      goto LABEL_38;
    v19 = (void **)(v12 + 72);
    v20 = *(_DWORD *)(a4 + 56);
    v21 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v22 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v21, 2 * v20 + 2, v19);
LABEL_37:
        if ( v22 < 0 )
          goto LABEL_62;
LABEL_38:
        if ( !(_DWORD)v41 )
        {
LABEL_48:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v47[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v47;
          v47[1] = a1;
          if ( a1 )
            ++*((_DWORD *)a1 + 2);
          v29 = RegionSize;
          v30 = *(_QWORD *)(RegionSize + 440);
          v46 = *(_OWORD *)(v30 + 64);
          RegionSize = *(_QWORD *)(v30 + 80);
          *(_QWORD *)(v30 + 72) = v44;
          if ( a1 )
            v31 = *a1;
          else
            v31 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v29 + 440) + 64LL) = v31;
          if ( a1 )
            v32 = a1[33];
          else
            v32 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v29 + 440) + 80LL) = v32;
          UserSessionSwitchLeaveCrit(v32, v18);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v33 = KeUserModeCallback(15LL, v12, *(unsigned int *)v12, &v45, &v43);
          EtwTraceEndCallback(15LL);
          EnterCrit(1LL);
          ThreadUnlock1(v35, v34);
          v36 = *(_QWORD *)(v29 + 440);
          *(_OWORD *)(v36 + 64) = v46;
          *(_QWORD *)(v36 + 80) = RegionSize;
          if ( v33 >= 0 && v43 == 24 )
          {
            v37 = (__int64 *)v45;
            if ( v45 + 8 < v45 || v45 + 8 > W32UserProbeAddress )
              v37 = (__int64 *)W32UserProbeAddress;
            v38 = *v37;
            v47[4] = *v37;
            goto LABEL_63;
          }
          goto LABEL_62;
        }
        v24 = *(_DWORD *)(a4 + 72);
        v25 = (void **)(v12 + 64);
        v26 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v26, 2 * v24 + 2, v25);
LABEL_47:
            if ( v27 < 0 )
              goto LABEL_62;
            goto LABEL_48;
          }
          v28 = v24 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v26, (v24 >> 1) + 1, v25);
            goto LABEL_47;
          }
          v28 = v24 + 2;
        }
        v27 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v26, v28, v25);
        goto LABEL_47;
      }
      v23 = v20 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v22 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v21, (v20 >> 1) + 1, v19);
        goto LABEL_37;
      }
      v23 = v20 + 2;
    }
    v22 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v21, v23, v19);
    goto LABEL_37;
  }
LABEL_62:
  v38 = 0LL;
LABEL_63:
  if ( v12 != (unsigned __int8 *)v49 && v12 != v50 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v48);
  }
  return (unsigned __int8 *)v38;
}
