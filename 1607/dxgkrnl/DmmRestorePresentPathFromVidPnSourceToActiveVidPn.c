/*
 * XREFs of DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00709C0
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008388C (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 */

__int64 __fastcall DmmRestorePresentPathFromVidPnSourceToActiveVidPn(
        struct DXGDEVICE *a1,
        unsigned int a2,
        unsigned __int8 a3,
        struct COREDEVICEACCESS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v5; // rbx
  __int64 v10; // rax
  VIDPN_MGR *v11; // rsi
  unsigned int active; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)a1 + 357);
  if ( !v5 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v10 = *(_QWORD *)(v5 + 2128);
  v11 = *(VIDPN_MGR **)(v10 + 88);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, *(_QWORD *)(v10 + 88));
    active = VIDPN_MGR::RestorePresentPathFromVidPnSourceToActiveVidPn(v11, a1, a2, a3, a4, a5);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
    return active;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
