/*
 * XREFs of ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005108
 * Callers:
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00050BC (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C007FD98 (-UpdatePathSupportInfo@DMMVIDPNTOPOLOGY@@QEAAJIIPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@.c)
 *     BmlPinPathContentScaling @ 0x1C00BD4B8 (BmlPinPathContentScaling.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0080E38 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(DMMVIDPNPRESENTPATH *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdi
  DMMVIDPNPRESENTPATH *v10; // r8
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v11; // r9d
  int v12; // ecx
  int v13; // eax
  __int64 v15; // [rsp+30h] [rbp+8h]

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
  v9 = *(_QWORD *)(v8 + 144);
  v15 = *(_QWORD *)(*(_QWORD *)(v5 + 144) + 76LL);
  v11 = D3DKMDT_VPPR_GET_OFFSET_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)this + 29));
  if ( ((v11 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v11 == D3DKMDT_VPPR_UNPINNED && DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(v10) )
    {
      v12 = v15;
      v13 = HIDWORD(v15);
      if ( v15 == *(_QWORD *)(v9 + 84) )
        goto LABEL_13;
    }
    else
    {
      v12 = HIDWORD(v15);
      v13 = v15;
    }
  }
  else
  {
    v12 = v15;
    v13 = HIDWORD(v15);
  }
  if ( v13 != *(_DWORD *)(v9 + 84) || v12 != *(_DWORD *)(v9 + 88) )
    v2 = 0;
LABEL_13:
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v5 + 88));
  return v2;
}
