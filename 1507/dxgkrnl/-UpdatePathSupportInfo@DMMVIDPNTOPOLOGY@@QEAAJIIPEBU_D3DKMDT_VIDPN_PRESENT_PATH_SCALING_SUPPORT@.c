/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C0089BE8
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0099AA0 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004338 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005CD0 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0005D28 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000604C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006128 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00076DC (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C000770C (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v6; // r14
  __int64 v8; // rbp
  __int64 v10; // rcx
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v12; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *v13; // rbx
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v21; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT v25; // [rsp+40h] [rbp+8h] BYREF

  v6 = a2;
  v8 = a3;
  if ( ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u) )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v6, v8);
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)Path;
    if ( Path )
    {
      IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(Path);
      v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      if ( IsSourceAndTargetPinned )
      {
        if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v13) )
        {
          if ( VIDPN_MGR::_bShouldLogOn1277688 )
          {
            if ( (*(_DWORD *)a4 & 6) != 0 )
            {
              v20 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
              *(_QWORD *)(v20 + 24) = v6;
              *(_QWORD *)(v20 + 32) = v8;
              WdLogEvent5_WdWarning(v20);
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
          }
          v25 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT)1;
          v21 = &v25;
          v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
          goto LABEL_9;
        }
        v15 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v13;
      }
      v21 = a4;
LABEL_9:
      DMMVIDPNPRESENTPATH::SetScalingSupport(v15, v21);
      DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v13, a5);
      v13[42] = *a6;
      ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u);
      return 0LL;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v24[3] = v6;
    v24[4] = v8;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    return 3223192359LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    return 3221225506LL;
  }
}
