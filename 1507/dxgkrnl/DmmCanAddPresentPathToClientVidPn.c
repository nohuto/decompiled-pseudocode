/*
 * XREFs of DmmCanAddPresentPathToClientVidPn @ 0x1C0061084
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 */

__int64 __fastcall DmmCanAddPresentPathToClientVidPn(DXGADAPTER *a1, unsigned int a2, unsigned int a3, char *a4)
{
  __int64 v4; // r14
  __int64 v6; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  struct VIDPN_MGR *v13; // rdi
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  char v20; // al
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v4 = a3;
  v6 = a2;
  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdError(v23);
    return 3221225485LL;
  }
  *a4 = 0;
  if ( !a1 )
  {
    v22 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v22 + 24) = 0LL;
    goto LABEL_16;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v24);
  }
  v12 = *((_QWORD *)a1 + 247);
  if ( !v12 )
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = a1;
LABEL_16:
    WdLogEvent5_WdError(v22);
    return 3223191554LL;
  }
  v13 = *(struct VIDPN_MGR **)(v12 + 88);
  if ( v13 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v28, (__int64)v13);
    v29 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
    v15 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v26 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v26);
    }
    else
    {
      v16 = v29 + 96;
      v17 = VIDPN_MGR::AddPathToVidPnTopology(
              v13,
              (struct DMMVIDPNTOPOLOGY *const)(v29 + 96),
              v6,
              v4,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)255,
              0xFFFFu,
              0,
              D3DKMDT_MCC_ENFORCE);
      v15 = v17;
      if ( v17 == -1071774976 || v17 == -1071774975 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
        v19[3] = v6;
        v19[4] = v4;
        v19[5] = v16;
        WdLogEvent5_WdDmmEvent(v19);
        v20 = 0;
      }
      else
      {
        if ( v17 < 0 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v27[3] = v6;
          v27[4] = v4;
          v27[5] = v16;
          v27[6] = v15;
          WdLogEvent5_WdError(v27);
          goto LABEL_11;
        }
        v20 = 1;
      }
      *a4 = v20;
      LODWORD(v15) = 0;
    }
LABEL_11:
    auto_rc<DMMVIDPN>::reset(&v29, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
    return (unsigned int)v15;
  }
  v25 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v25 + 24) = a1;
  WdLogEvent5_WdError(v25);
  return 3223192373LL;
}
