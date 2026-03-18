/*
 * XREFs of DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C0070918
 * Callers:
 *     DxgkDisplayOnOff @ 0x1C0071620 (DxgkDisplayOnOff.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0087994 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2PEAU_DXGK_DISPL.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00C3DC0 (-DxgkCddDisable@@YAJIII@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00840B4 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 */

__int64 __fastcall DmmRemovePresentPathFromVidPnSourceInActiveVidPn(
        struct DXGDEVICE *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4)
{
  __int64 v4; // rbx
  __int64 v9; // rax
  VIDPN_MGR *v10; // rsi
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 357);
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_QWORD *)(v4 + 2128);
  v10 = *(VIDPN_MGR **)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v9 + 88));
    v11 = VIDPN_MGR::RemovePresentPathFromVidPnSourceInActiveVidPn(v10, a1, a2, a3, a4);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    return v11;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = v4;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
