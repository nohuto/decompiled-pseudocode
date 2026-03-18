/*
 * XREFs of DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00B17E8
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C009AF4C (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C00AE440 (-DxgkCddDisable@@YAJIII@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00AF0F0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C008F004 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 */

__int64 __fastcall DmmRemovePresentPathFromVidPnSourceInActiveVidPn(
        struct DXGDEVICE *a1,
        unsigned int a2,
        char a3,
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

  v4 = *((_QWORD *)a1 + 354);
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
  v9 = *(_QWORD *)(v4 + 1984);
  v10 = *(VIDPN_MGR **)(v9 + 112);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v9 + 112));
    v11 = VIDPN_MGR::RemovePresentPathFromVidPnSourceInActiveVidPn(v10, a1, a2, a3, a4);
    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v16 + 40));
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
