/*
 * XREFs of ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C007FD98
 * Callers:
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00D1EC0 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00047D8 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0004D74 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0004DB0 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005108 (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00051F0 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z @ 0x1C0005B94 (-OnModifyingActionCompletion@ProtectableFromChange@@QEAAXE@Z.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::UpdatePathSupportInfo(
        DMMVIDPNTOPOLOGY *this,
        unsigned int a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *a4,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a5,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a6)
{
  __int64 v7; // rbp
  __int64 v9; // r14
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v11; // rcx
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *v12; // rbx
  char IsSourceAndTargetPinned; // al
  struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *v19; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // [rsp+40h] [rbp+8h] BYREF

  v7 = a3;
  v9 = a2;
  if ( *((_BYTE *)this + 76) <= 3u )
  {
    v22 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( (*((_BYTE *)this + 78) & 8) != 0 )
  {
    Path = DMMVIDPNTOPOLOGY::FindPath(this, v9, v7);
    v12 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *)Path;
    if ( Path )
    {
      IsSourceAndTargetPinned = DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(Path);
      v14 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v12;
      if ( IsSourceAndTargetPinned )
      {
        if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch((DMMVIDPNPRESENTPATH *)v12) )
        {
          if ( VIDPN_MGR::_bShouldLogOn1277688 )
          {
            if ( (*(_DWORD *)a4 & 6) != 0 )
            {
              v21 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
              *(_QWORD *)(v21 + 24) = v9;
              *(_QWORD *)(v21 + 32) = v7;
              WdLogEvent5_WdWarning(v21);
              VIDPN_MGR::_bShouldLogOn1277688 = 0;
            }
          }
          v25 = 1;
          v19 = (const struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)&v25;
          v14 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v12;
          goto LABEL_9;
        }
        v14 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)v12;
      }
      v19 = a4;
LABEL_9:
      DMMVIDPNPRESENTPATH::SetScalingSupport(v14, v19);
      DMMVIDPNPRESENTPATH::SetRotationSupport((DMMVIDPNPRESENTPATH *)v12, a5);
      v12[42] = *a6;
      ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 3u);
      return 0LL;
    }
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v24[3] = v9;
    v24[4] = v7;
    v24[5] = this;
    WdLogEvent5_WdError(v24);
    return 3223192359LL;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    return 3221225506LL;
  }
}
