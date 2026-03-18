/*
 * XREFs of sub_1C00A7D7C @ 0x1C00A7D7C
 * Callers:
 *     sub_1C00A7A84 @ 0x1C00A7A84 (sub_1C00A7A84.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0004E38 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0008F94 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z @ 0x1C008FC64 (-QueryDxgDmmVidPnTopologyInterface@VIDPN_MGR@@QEAAXPEAPEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@@Z.c)
 *     ?BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C00A0F70 (-BmlIsSupportedPathRotation@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@U_D3DKMDT_VIDPN_PRESENT.c)
 */

__int64 __fastcall sub_1C00A7D7C(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v4; // rdi
  DMMVIDPNPRESENTPATH *Path; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v14; // [rsp+40h] [rbp+8h] BYREF
  _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT v15; // [rsp+50h] [rbp+18h] BYREF

  v4 = 104LL * a3;
  v15 = 0;
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 16LL),
           *(_DWORD *)(*(_QWORD *)(v4 + a1 + 16) + 20LL));
  DMMVIDPNPRESENTPATH::GetRotationSupport(Path, &v15);
  if ( BmlIsSupportedPathRotation(*(D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)(v4 + a1 + 28), v15) )
  {
    VIDPN_MGR::QueryDxgDmmVidPnTopologyInterface(*(VIDPN_MGR **)(a2 + 48), &v14);
    if ( a2 == -289 )
      v11 = 0LL;
    else
      v11 = a2 + 96;
    result = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char))v14 + 10))(
               v11,
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 16LL),
               *(unsigned int *)(*(_QWORD *)(v4 + a1 + 16) + 20LL),
               *(unsigned int *)(v4 + a1 + 28),
               1);
    if ( (int)result < 0 )
    {
      ++*(_DWORD *)(v4 + a1 + 84);
      *(_DWORD *)(v4 + a1 + 88) = result;
    }
    if ( (_DWORD)result == -1071774907 )
      return 3223192326LL;
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = *(int *)(v4 + a1 + 28);
    WdLogEvent5_WdWarning(v13);
    return 3223192326LL;
  }
  return result;
}
