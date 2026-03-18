/*
 * XREFs of DmmRestorePresentPathFromVidPnSourceToActiveVidPn @ 0x1C00BA110
 * Callers:
 *     ?EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z @ 0x1C00B60B8 (-EnsureGdiOutput@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@PEAE2@Z.c)
 *     DxgkDisplayOnOff @ 0x1C00BA1C0 (DxgkDisplayOnOff.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8CFC (-RestorePresentPathFromVidPnSourceToActiveVidPn@VIDPN_MGR@@QEAAJPEAVDXGDEVICE@@IEPEAVCOREDEVICEA.c)
 */

__int64 __fastcall DmmRestorePresentPathFromVidPnSourceToActiveVidPn(
        struct DXGDEVICE *a1,
        __int64 a2,
        __int64 a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v4; // rbx
  char v6; // r14
  unsigned int v7; // r15d
  __int64 v9; // rax
  VIDPN_MGR *v10; // rsi
  unsigned int active; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2338);
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
  v10 = *(VIDPN_MGR **)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v16, *(_QWORD *)(v9 + 88));
    active = VIDPN_MGR::RestorePresentPathFromVidPnSourceToActiveVidPn(v10, a1, v7, v6, a4);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40));
    return active;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v15 + 24) = v4;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
