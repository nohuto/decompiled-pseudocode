/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0058740
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _W32ExceptionHandler @ 0x1C02D8144 (_W32ExceptionHandler.c)
 */

unsigned __int8 *__fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int8 *result; // rax
  __int64 v13; // rdx
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-308h] BYREF
  int v25; // [rsp+38h] [rbp-300h] BYREF
  __int64 v26; // [rsp+40h] [rbp-2F8h]
  unsigned __int64 v27; // [rsp+48h] [rbp-2F0h] BYREF
  _QWORD v28[3]; // [rsp+58h] [rbp-2E0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-2C8h]
  __int64 v30; // [rsp+80h] [rbp-2B8h]
  _BYTE v31[24]; // [rsp+88h] [rbp-2B0h] BYREF
  unsigned __int8 v32[96]; // [rsp+A0h] [rbp-298h] BYREF
  unsigned __int8 v33[512]; // [rsp+100h] [rbp-238h] BYREF
  int v34; // [rsp+370h] [rbp+38h]

  LODWORD(v26) = a2;
  v34 = a7 & 1;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 432LL);
  else
    v10 = 0LL;
  v11 = 0;
  if ( ((a3 >> 15) & 1) != 0 && a4 && a4 >= MmSystemRangeStart )
    v11 = *a4;
  result = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v11, v33, 1, 0x200uLL);
  v14 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    if ( result != v32 && result != v33 )
      PushW32ThreadLock(result, v31, Win32FreePool);
    *((_QWORD *)v14 + 5) = v10;
    *((_DWORD *)v14 + 12) = v26;
    *((_QWORD *)v14 + 7) = a3;
    if ( v11 )
    {
      if ( CaptureCallbackData((struct _CAPTUREBUF *)v14, a4, *a4, (void **)v14 + 10) < 0 )
        goto LABEL_30;
    }
    else
    {
      *((_QWORD *)v14 + 10) = a4;
    }
    *((_DWORD *)v14 + 22) = v34;
    *((_QWORD *)v14 + 8) = a5;
    *((_QWORD *)v14 + 9) = a6;
    v28[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v28;
    v28[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v15 = *(_QWORD *)(gptiCurrent + 440LL);
    v29 = *(_OWORD *)(v15 + 64);
    v26 = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(v15 + 72) = v10;
    if ( a1 )
      v16 = *a1;
    else
      v16 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 64LL) = v16;
    if ( a1 )
      v17 = a1[33];
    else
      v17 = 0LL;
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 440LL) + 80LL) = v17;
    UserSessionSwitchLeaveCrit(v17, v13);
    EtwTraceBeginCallback(28LL);
    *((_QWORD *)v14 + 2) = 0LL;
    v18 = KeUserModeCallback(28LL, v14, *(unsigned int *)v14, &v27, &v25);
    EtwTraceEndCallback(28LL);
    EnterCrit(1LL);
    ThreadUnlock1(v20, v19);
    v21 = *(_QWORD *)(gptiCurrent + 440LL);
    *(_OWORD *)(v21 + 64) = v29;
    *(_QWORD *)(v21 + 80) = v26;
    if ( v18 >= 0 && v25 == 24 )
    {
      v22 = (__int64 *)v27;
      if ( v27 + 8 < v27 || v27 + 8 > W32UserProbeAddress )
        v22 = (__int64 *)W32UserProbeAddress;
      v23 = *v22;
      v30 = *v22;
      goto LABEL_31;
    }
LABEL_30:
    v23 = 0LL;
LABEL_31:
    if ( v14 != v32 && v14 != v33 )
    {
      if ( *((_QWORD *)v14 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock(v31);
    }
    return (unsigned __int8 *)v23;
  }
  return result;
}
