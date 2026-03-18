/*
 * XREFs of DmmIsSourceInActiveVidPnTopology @ 0x1C00B6E28
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     DxgkCheckMonitorPowerState @ 0x1C00A4930 (DxgkCheckMonitorPowerState.c)
 *     DxgkGetScanLine @ 0x1C00B2CE0 (DxgkGetScanLine.c)
 *     ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C00B62C8 (-IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAI@Z @ 0x1C00B74D4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C011E940 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DmmIsSourceInActiveVidPnTopology(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  char v10; // di
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax

  v4 = a2;
  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 144) )
    ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 128));
  if ( !*(_QWORD *)(a1 + 1976) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1976) + 88LL);
  if ( !v6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v16);
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    WdLogEvent5_WdAssertion(v21);
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v6 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v6 + 72) + 32LL));
  v7 = *(_QWORD *)(v6 + 72);
  if ( !v7 )
    goto LABEL_20;
  v8 = (_QWORD *)(v7 + 120);
  if ( (_QWORD *)*v8 == v8 )
    goto LABEL_20;
  v9 = *v8 - 8LL;
  if ( !v9 )
    goto LABEL_20;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 88) + 24LL) == v4 )
      break;
    v22 = *(_QWORD *)(v9 + 8);
    v9 = v22 == v7 + 120 ? 0LL : v22 - 8;
  }
  while ( v9 );
  if ( v9 )
    v10 = 1;
  else
LABEL_20:
    v10 = 0;
  if ( v7 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(v7 + 24);
    v12 = _InterlockedDecrement((volatile signed __int32 *)(v7 + 32));
    if ( v12 )
    {
      if ( v12 < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v23 + 24) = v12;
        WdLogEvent5_WdError(v23);
      }
    }
    else if ( v7 != -24 )
    {
      (**v11)(v11, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v6 + 40));
  return v10;
}
