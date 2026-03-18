/*
 * XREFs of DmmIsSourceInActiveVidPnTopology @ 0x1C0088C5C
 * Callers:
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C0087BB8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0094560 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C009F904 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00CB110 (DxgkCheckMonitorPowerState.c)
 *     DxgkGetScanLine @ 0x1C00DD610 (DxgkGetScanLine.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DmmIsSourceInActiveVidPnTopology(__int64 a1, int a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  char v8; // di
  void (__fastcall ***v9)(_QWORD, __int64); // rcx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax

  if ( !a1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144));
  if ( !*(_QWORD *)(a1 + 2128) )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2128) + 88LL);
  if ( !v4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
    v16 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v16);
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v4 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v4 + 72) + 32LL));
  v5 = *(_QWORD *)(v4 + 72);
  if ( !v5 )
    goto LABEL_20;
  v6 = (_QWORD *)(v5 + 120);
  if ( (_QWORD *)*v6 == v6 )
    goto LABEL_20;
  v7 = *v6 - 8LL;
  if ( !v7 )
    goto LABEL_20;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 88) + 24LL) == a2 )
      break;
    v17 = *(_QWORD *)(v7 + 8);
    v7 = v17 == v5 + 120 ? 0LL : v17 - 8;
  }
  while ( v7 );
  if ( v7 )
    v8 = 1;
  else
LABEL_20:
    v8 = 0;
  if ( v5 )
  {
    v9 = (void (__fastcall ***)(_QWORD, __int64))(v5 + 24);
    v10 = _InterlockedDecrement((volatile signed __int32 *)(v5 + 32));
    if ( v10 )
    {
      if ( v10 < 0 )
      {
        v18 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v18 + 24) = v10;
        WdLogEvent5_WdError(v18);
      }
    }
    else if ( v5 != -24 )
    {
      (**v9)(v9, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v4 + 40));
  return v8;
}
