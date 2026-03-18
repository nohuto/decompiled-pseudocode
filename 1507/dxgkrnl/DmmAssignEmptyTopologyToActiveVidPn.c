/*
 * XREFs of DmmAssignEmptyTopologyToActiveVidPn @ 0x1C0175350
 * Callers:
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01283F4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00CC220 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DmmAssignEmptyTopologyToActiveVidPn(DXGADAPTER *a1)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  DMMVIDPNTOPOLOGY *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]
  _BYTE v23[40]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v24; // [rsp+70h] [rbp+8h] BYREF
  __int64 v25; // [rsp+78h] [rbp+10h] BYREF

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
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_QWORD *)a1 + 247);
  if ( !v9 )
  {
    v2 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v2 + 24) = a1;
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, v10);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 32LL));
    v14 = *(_QWORD *)(v10 + 72);
    v24 = v14;
    v15 = (DMMVIDPNTOPOLOGY *)(v14 + 96);
    if ( v14 == -96 )
      v16 = 0LL;
    else
      v16 = v14 + 152;
    LOBYTE(v12) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v23,
      v16,
      v12,
      v13,
      v22,
      *(_QWORD *)(v14 + 136));
    if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPaths(v15) < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v21);
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v23);
    auto_rc<DMMVIDPN>::reset(&v24, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v25 + 40));
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = a1;
    WdLogEvent5_WdError(v11);
    return 3223192373LL;
  }
}
