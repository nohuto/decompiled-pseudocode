/*
 * XREFs of DmmIsSourceInActiveVidPnTopology @ 0x1C0097CD8
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C006C7E8 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0079E00 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C009B154 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00B7320 (DxgkCheckMonitorPowerState.c)
 *     DxgkGetScanLine @ 0x1C00C8510 (DxgkGetScanLine.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

char __fastcall DmmIsSourceInActiveVidPnTopology(__int64 a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // bl
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128));
  if ( !*(_QWORD *)(a1 + 1984) )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1984) + 112LL);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
    v9 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v9);
  }
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v6 + 40));
  v10 = 1;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(v6 + 72) + 32LL), 1u);
  v11 = *(_QWORD *)(v6 + 72);
  if ( !v11 )
    goto LABEL_18;
  v12 = (_QWORD *)(v11 + 120);
  if ( (_QWORD *)*v12 == v12 )
    goto LABEL_18;
  v13 = *v12 - 8LL;
  if ( !v13 )
    goto LABEL_18;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v13 + 88) + 24LL) == a2 )
      break;
    v14 = *(_QWORD *)(v13 + 8);
    v13 = v14 == v11 + 120 ? 0LL : v14 - 8;
  }
  while ( v13 );
  if ( !v13 )
LABEL_18:
    v10 = 0;
  if ( v11 )
    ReferenceCounted::Release((ReferenceCounted *)(v11 + 24));
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v6 + 40));
  return v10;
}
