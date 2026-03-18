/*
 * XREFs of UsbhQueueWorkItemWithRetry @ 0x1C0022800
 * Callers:
 *     UsbhSS_SignalPdoWake @ 0x1C001F72C (UsbhSS_SignalPdoWake.c)
 *     UsbhHubIsr @ 0x1C0021DA0 (UsbhHubIsr.c)
 *     UsbhInitCallback @ 0x1C0027570 (UsbhInitCallback.c)
 *     UsbhIsrRetryTimer @ 0x1C0043ED0 (UsbhIsrRetryTimer.c)
 *     UsbhResetIrqPipeRetryTimer @ 0x1C0044330 (UsbhResetIrqPipeRetryTimer.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C004AAD0 (UsbHubhInitTimeoutTimer.c)
 *     UsbhInitRetryTimer @ 0x1C004B600 (UsbhInitRetryTimer.c)
 *     UsbhIdleIrpRetryTimer @ 0x1C0055240 (UsbhIdleIrpRetryTimer.c)
 *     UsbhIdleIrp_NoIrp @ 0x1C0055770 (UsbhIdleIrp_NoIrp.c)
 *     UsbhSS_WakeIrpRetryTimer @ 0x1C0056020 (UsbhSS_WakeIrpRetryTimer.c)
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000E3D0 (UsbhEnableTimerObject.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dd @ 0x1C003D168 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhQueueWorkItemWithRetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _DWORD *PoolWithTag; // rax
  _DWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64, _QWORD); // rax
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  PDEVICE_OBJECT v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  void (__fastcall *v34)(__int64, _QWORD, void *, _QWORD, _DWORD *, int); // rax
  int v35; // edx
  int v37; // [rsp+28h] [rbp-60h]
  unsigned __int8 v38; // [rsp+90h] [rbp+8h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v40 = a4;
  v7 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10, a3, a4);
  if ( (UsbhLogMask & 8) != 0 )
  {
    v11 = *(_QWORD *)(v10 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
    *(_DWORD *)v11 = 1129141329;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_QWORD *)(v11 + 16) = a7;
    *(_QWORD *)(v11 + 24) = a5;
  }
  v12 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      48,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
      a6);
    v12 = WPP_GLOBAL_Control;
  }
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v13 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v38 = *(_BYTE *)(v13 + 5268);
  if ( LOWORD(v12->DeviceType) )
  {
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 46, (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids, a6);
    v12 = WPP_GLOBAL_Control;
  }
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v14 = *(_QWORD *)(a1 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 1297568097;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = a7;
      *(_QWORD *)(v15 + 24) = a5;
      v12 = WPP_GLOBAL_Control;
    }
  }
  v16 = *(_QWORD *)(a1 + 64);
  if ( !v16 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v16 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v17 = *(_QWORD *)(v16 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
    *(_DWORD *)v17 = 1296783201;
    *(_QWORD *)(v17 + 16) = a6;
    *(_QWORD *)(v17 + 8) = 0LL;
    *(_QWORD *)(v17 + 24) = a5;
    v12 = WPP_GLOBAL_Control;
  }
  if ( LOWORD(v12->DeviceType) )
    WPP_RECORDER_SF_d(v12->DeviceExtension, 0, 1, 45, (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids, a6);
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0x48uLL, 0x42554855u);
  v19 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_60;
  memset(PoolWithTag, 0, 0x48uLL);
  v22 = *(_QWORD *)(a1 + 64);
  if ( !v22 )
    UsbhTrapFatal_Dbg(a1, 0LL, v20, v21);
  if ( *(_DWORD *)v22 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v20, v21);
  v23 = *(__int64 (__fastcall **)(__int64, _QWORD))(v22 + 4768);
  if ( !v23 || (v24 = v23(a1, v38)) == 0 )
  {
    ExFreePoolWithTag(v19, 0);
LABEL_60:
    v30 = a6;
    v35 = -1073741670;
    goto LABEL_42;
  }
  *((_QWORD *)v19 + 5) = v24;
  v19[3] = a6;
  *v19 = 1230463592;
  v19[1] = a7;
  *((_QWORD *)v19 + 4) = a5;
  *((_QWORD *)v19 + 2) = a1;
  *((_QWORD *)v19 + 3) = a3;
  ExInterlockedInsertTailList((PLIST_ENTRY)(v16 + 2784), (PLIST_ENTRY)v19 + 3, (PKSPIN_LOCK)(v16 + 2800));
  if ( v19[1] != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v27 = *(_QWORD *)(a1 + 64);
    if ( v27 )
    {
      v28 = *(_QWORD *)(v27 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
      *(_DWORD *)v28 = 726485847;
      *(_QWORD *)(v28 + 8) = 0LL;
      *(_QWORD *)(v28 + 16) = 0LL;
      *(_QWORD *)(v28 + 24) = v19;
    }
  }
  _InterlockedIncrement(v19 + 2);
  v29 = WPP_GLOBAL_Control;
  v30 = a6;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      47,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
      a6);
    v29 = WPP_GLOBAL_Control;
  }
  if ( a7 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    v31 = *(_QWORD *)(a1 + 64);
    if ( v31 )
    {
      v32 = *(_QWORD *)(v31 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
      *(_DWORD *)v32 = 726488145;
      *(_QWORD *)(v32 + 8) = 0LL;
      *(_QWORD *)(v32 + 16) = a7;
      *(_QWORD *)(v32 + 24) = v19;
      v29 = WPP_GLOBAL_Control;
    }
  }
  v33 = *(_QWORD *)(a1 + 64);
  if ( !v33 )
    UsbhTrapFatal_Dbg(a1, 0LL, v25, v26);
  if ( *(_DWORD *)v33 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v25, v26);
  v34 = *(void (__fastcall **)(__int64, _QWORD, void *, _QWORD, _DWORD *, int))(v33 + 4784);
  if ( v34 )
  {
    LOBYTE(v37) = v38;
    v34(a1, *((_QWORD *)v19 + 5), &UsbhHubWorker, v40, v19, v37);
    v35 = 0;
LABEL_42:
    v29 = WPP_GLOBAL_Control;
    goto LABEL_43;
  }
  v35 = -1073741822;
LABEL_43:
  if ( (v35 & 0xC0000000) == 0xC0000000 )
  {
    if ( LOWORD(v29->DeviceType) )
      WPP_RECORDER_SF_dd(
        v29->DeviceExtension,
        v35,
        1,
        49,
        (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
        v30,
        v35);
    Log(a1, 8, 1364476705, a7, a5);
    v35 = a2;
    if ( a2 )
      UsbhEnableTimerObject(a1, a2, 0LL, v30, a5, a7);
    v29 = WPP_GLOBAL_Control;
    v7 = 1;
  }
  if ( LOWORD(v29->DeviceType) )
    WPP_RECORDER_SF_dd(
      v29->DeviceExtension,
      v35,
      1,
      50,
      (__int64)&WPP_a5ab263a51257b83d9b9ce18201b3fa5_Traceguids,
      v30,
      v7);
  return v7;
}
