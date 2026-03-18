/*
 * XREFs of DmmAssignEmptyTopologyToActiveVidPn @ 0x1C01A3350
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0148460 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z @ 0x1C007E638 (-RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN@@QEAAXPEAVVIDPN_MGR@@PEAVDXGADAPTER@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00F53F8 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DmmAssignEmptyTopologyToActiveVidPn(struct DXGADAPTER *a1)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rsi
  struct VIDPN_MGR *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  unsigned __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // [rsp+20h] [rbp-58h]
  _BYTE v18[56]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 *v19; // [rsp+80h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v2 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v2 + 24) = 0LL;
LABEL_3:
    WdLogEvent5_WdError(v2);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *((_QWORD *)a1 + 266);
  if ( !v6 )
  {
    v2 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v2 + 24) = a1;
    goto LABEL_3;
  }
  v7 = *(struct VIDPN_MGR **)(v6 + 88);
  if ( v7 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v20, (__int64)v7);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v7 + 9) + 32LL));
    v10 = (unsigned __int64 *)*((_QWORD *)v7 + 9);
    v19 = v10;
    if ( v10 == (unsigned __int64 *)-96LL )
      v11 = 0LL;
    else
      v11 = (__int64)(v10 + 19);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope((__int64)v18, v11, 2u, v9, v17, v10[17]);
    if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPaths((DMMVIDPNTOPOLOGY *)(v10 + 12)) < 0 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v13);
    }
    DMMVIDPN::RequestIdlePowerStateForTargetsNotInTopology((DMMVIDPN *)v10, v7, a1);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v18,
      v14,
      v15,
      v16);
    auto_rc<DMMVIDPN>::reset((__int64 *)&v19, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v20 + 40));
    return 0LL;
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = a1;
    WdLogEvent5_WdError(v8);
    return 3223192373LL;
  }
}
