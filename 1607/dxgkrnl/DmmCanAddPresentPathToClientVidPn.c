/*
 * XREFs of DmmCanAddPresentPathToClientVidPn @ 0x1C00C3274
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, unsigned int a2, unsigned int a3, char *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  const struct DMMVIDPN **v10; // rdi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  char v18; // al
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // [rsp+40h] [rbp-28h] BYREF
  __int64 v27; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    v21 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v21 + 24) = 0LL;
    WdLogEvent5_WdError(v21);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = 0LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v22);
  }
  v9 = *((_QWORD *)a1 + 266);
  if ( !v9 )
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = a1;
LABEL_16:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  v10 = *(const struct DMMVIDPN ***)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, (__int64)v10);
    v27 = 0LL;
    v11 = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v10, &v27);
    v13 = v11;
    if ( v11 < 0 )
    {
      v24 = WdLogNewEntry5_WdDmmEvent(v12);
      *(_QWORD *)(v24 + 24) = v13;
      WdLogEvent5_WdDmmEvent(v24);
    }
    else
    {
      v14 = v27 + 96;
      v15 = VIDPN_MGR::AddPathToVidPnTopology(
              (VIDPN_MGR *)v10,
              (struct DMMVIDPNTOPOLOGY *const)(v27 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v13 = v15;
      if ( v15 == -1071774976 || v15 == -1071774975 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v16);
        v17[3] = v6;
        v17[4] = v4;
        v17[5] = v14;
        WdLogEvent5_WdDmmEvent(v17);
        v18 = 0;
      }
      else
      {
        if ( v15 < 0 )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v16);
          v25[3] = v6;
          v25[4] = v4;
          v25[5] = v14;
          v25[6] = v13;
          WdLogEvent5_WdError(v25);
          goto LABEL_11;
        }
        v18 = 1;
      }
      *a4 = v18;
      LODWORD(v13) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v27, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v26 + 40));
    return (unsigned int)v13;
  }
  v23 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v23 + 24) = a1;
  WdLogEvent5_WdError(v23);
  return 3223192373LL;
}
