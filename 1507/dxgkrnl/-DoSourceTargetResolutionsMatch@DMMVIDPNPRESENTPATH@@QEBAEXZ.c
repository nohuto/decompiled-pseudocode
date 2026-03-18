/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000604C
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006000 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C0089BE8 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     BmlPinPathContentScaling @ 0x1C009B1A8 (BmlPinPathContentScaling.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C00085E0 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00950C8 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  DMMVIDPNPRESENTPATH *v11; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v12; // r9d
  int v13; // eax
  int v14; // ecx
  __int64 v16; // [rsp+30h] [rbp+8h]
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF
  __int64 v18; // [rsp+40h] [rbp+18h] BYREF

  v2 = 1;
  v3 = *((_QWORD *)this + 11);
  v4 = *(_QWORD *)(v3 + 104);
  if ( v4 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v4 + 96), 1u);
    v5 = *(_QWORD *)(v3 + 104);
  }
  else
  {
    v5 = 0LL;
  }
  v6 = *((_QWORD *)this + 12);
  v18 = v5;
  v7 = *(_QWORD *)(v6 + 104);
  if ( v7 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v7 + 96), 1u);
    v8 = *(_QWORD *)(v6 + 104);
  }
  else
  {
    v8 = 0LL;
  }
  v9 = *(_QWORD *)(v5 + 144);
  v17 = v8;
  v10 = *(_QWORD *)(v8 + 144);
  v16 = *(_QWORD *)(v9 + 76);
  v12 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29));
  if ( ((v12 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v12 == D3DKMDT_VPPR_UNPINNED && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v11) )
    {
      v13 = v16;
      v14 = HIDWORD(v16);
      if ( v16 == *(_QWORD *)(v10 + 84) )
        goto LABEL_11;
    }
    else
    {
      v13 = HIDWORD(v16);
      v14 = v16;
    }
  }
  else
  {
    v13 = v16;
    v14 = HIDWORD(v16);
  }
  if ( v14 != *(_DWORD *)(v10 + 84) || v13 != *(_DWORD *)(v10 + 88) )
    v2 = 0;
LABEL_11:
  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v17, 0LL);
  auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v18, 0LL);
  return v2;
}
