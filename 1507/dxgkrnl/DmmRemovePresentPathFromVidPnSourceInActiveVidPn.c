/*
 * XREFs of DmmRemovePresentPathFromVidPnSourceInActiveVidPn @ 0x1C00BA068
 * Callers:
 *     ?DxgkCddDisable@@YAJIII@Z @ 0x1C005F540 (-DxgkCddDisable@@YAJIII@Z.c)
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z @ 0x1C00B9520 (-RemovePresentPathFromVidPnSourceInActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEE@Z.c)
 */

__int64 __fastcall DmmRemovePresentPathFromVidPnSourceInActiveVidPn(
        struct DXGDEVICE *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // bp
  char v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rax
  ADAPTER_DISPLAY **v10; // rsi
  unsigned int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2338);
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !v4 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_QWORD *)(v4 + 1976);
  v10 = *(ADAPTER_DISPLAY ***)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v9 + 88));
    v11 = VIDPN_MGR::RemovePresentPathFromVidPnSourceInActiveVidPn(v10, a1, v7, v6, v5);
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
