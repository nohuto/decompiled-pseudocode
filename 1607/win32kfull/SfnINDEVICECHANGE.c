/*
 * XREFs of SfnINDEVICECHANGE @ 0x1C0105D90
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        unsigned __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v10; // r14
  unsigned int v11; // r15d
  unsigned __int8 *v12; // rax
  __int64 v13; // r9
  unsigned __int8 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 v25; // rdi
  PVOID *v27; // rdx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-338h] BYREF
  _DWORD v29[6]; // [rsp+38h] [rbp-330h] BYREF
  unsigned __int8 *v30; // [rsp+50h] [rbp-318h]
  unsigned __int64 v31; // [rsp+60h] [rbp-308h] BYREF
  __int64 v32; // [rsp+68h] [rbp-300h]
  __int128 v33; // [rsp+70h] [rbp-2F8h]
  __int64 v34; // [rsp+80h] [rbp-2E8h]
  _QWORD v35[3]; // [rsp+A0h] [rbp-2C8h] BYREF
  _QWORD v36[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v37[96]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v38[512]; // [rsp+130h] [rbp-238h] BYREF
  int v39; // [rsp+3A0h] [rbp+38h]

  LODWORD(RegionSize) = a2;
  v39 = a7 & 1;
  v32 = 0LL;
  if ( a1 )
    v10 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v10 = 0LL;
  v11 = 0;
  if ( ((a3 >> 15) & 1) != 0 && a4 && a4 >= MmSystemRangeStart )
    v11 = *(_DWORD *)a4;
  v12 = AllocCallbackMessage(96, 1u, v11, v38, 1, 0x200uLL);
  v14 = v12;
  v30 = v12;
  if ( !v12 )
    return 0LL;
  if ( v12 != v37 && v12 != v38 )
    PushW32ThreadLock((__int64)v12, v36, (__int64)Win32FreePool, v13);
  *((_QWORD *)v14 + 5) = v10;
  *((_DWORD *)v14 + 12) = RegionSize;
  *((_QWORD *)v14 + 7) = a3;
  if ( v11 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v14, a4, *(_DWORD *)a4, (void **)v14 + 10) < 0 )
      goto LABEL_36;
  }
  else
  {
    *((_QWORD *)v14 + 10) = a4;
  }
  *((_DWORD *)v14 + 22) = v39;
  *((_QWORD *)v14 + 8) = a5;
  *((_QWORD *)v14 + 9) = a6;
  v35[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v35;
  v35[1] = a1;
  if ( a1 )
    ++*((_DWORD *)a1 + 2);
  v15 = *(_QWORD *)(gptiCurrent + 432LL);
  v33 = *(_OWORD *)(v15 + 64);
  v34 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v10;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 64LL) = v16;
  if ( a1 )
    v17 = a1[33];
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 80LL) = v17;
  if ( gdwInAtomicOperation )
  {
    v17 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v17, gdwInAtomicOperation);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v18 = KeUserModeCallback(28LL, v14, *(unsigned int *)v14, &v31, v29);
  EtwTraceEndCallback(28LL);
  EnterCrit(0LL, 1LL);
  ThreadUnlock1(v20, v19);
  v23 = *(_QWORD *)(gptiCurrent + 432LL);
  *(_OWORD *)(v23 + 64) = v33;
  *(_QWORD *)(v23 + 80) = v34;
  if ( v18 >= 0 && v29[0] == 24 )
  {
    v24 = (__int64 *)v31;
    if ( v31 + 8 < v31 || v31 + 8 > W32UserProbeAddress )
      v24 = (__int64 *)W32UserProbeAddress;
    v25 = *v24;
    v32 = *v24;
    goto LABEL_25;
  }
LABEL_36:
  v25 = 0LL;
LABEL_25:
  if ( v14 != v37 && v14 != v38 )
  {
    v27 = (PVOID *)(v14 + 32);
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v36, (__int64)v27, v21, v22);
  }
  return v25;
}
