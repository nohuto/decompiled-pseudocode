/*
 * XREFs of DmmGetMostImportantVidPnPathTargetsFromSource @ 0x1C00E195C
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_D3DKMT_DISPLAYMODE@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C00E1094 (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C000ADA0 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C00D996C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DmmGetMostImportantVidPnPathTargetsFromSource(
        DXGADAPTER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned int MostImportantVidPnPathTargetsFromSource; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  if ( !a4 || (v7 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(a2)) == 0 )
  {
    v14 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  if ( !this )
  {
    v13 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v13 + 24) = 0LL;
    goto LABEL_10;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = *((_QWORD *)this + 266);
  if ( !v9 )
  {
    v13 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v13 + 24) = this;
LABEL_10:
    WdLogEvent5_WdError(v13);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v17, v10);
    MostImportantVidPnPathTargetsFromSource = GetMostImportantVidPnPathTargetsFromSource(
                                                (const struct DMMVIDPNTOPOLOGY *)(v7 + 96),
                                                a3,
                                                a4);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v17 + 40));
    return MostImportantVidPnPathTargetsFromSource;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3223192373LL;
  }
}
