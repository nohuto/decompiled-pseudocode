/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00A1528
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00BD4C4 (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0006838 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0008860 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0008C2C (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0009FA8 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000CCD8 (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  __int64 v6; // rcx
  char v7; // bl
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v8; // eax
  __int64 v9; // rcx
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r12
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // r12
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax

  v7 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v8 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v8)) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v10 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v10)) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v11 = *((_QWORD *)this + 12);
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
    v13 = *(_QWORD *)(v11 + 104);
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *(_QWORD *)(v13 + 144);
  if ( !v14 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v31);
  }
  v15 = *((_QWORD *)a2 + 12);
  v16 = *(_QWORD *)(v15 + 104);
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
    v17 = *(_QWORD *)(v15 + 104);
  }
  else
  {
    v17 = 0LL;
  }
  v18 = *(_QWORD *)(v17 + 144);
  if ( !v18 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v15);
    WdLogEvent5_WdAssertion(v32);
  }
  if ( !DMMVIDPNTARGETMODE::operator!=(v14, v18) )
  {
    v20 = *((_QWORD *)this + 11);
    v21 = *(_QWORD *)(v20 + 104);
    if ( v21 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 96));
      v22 = *(_QWORD *)(v20 + 104);
    }
    else
    {
      v22 = 0LL;
    }
    v23 = *(_QWORD *)(v22 + 144);
    if ( !v23 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v33);
    }
    v24 = *((_QWORD *)a2 + 11);
    v25 = *(_QWORD *)(v24 + 104);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 96));
      v26 = *(_QWORD *)(v24 + 104);
    }
    else
    {
      v26 = 0LL;
    }
    v27 = *(_QWORD *)(v26 + 144);
    if ( !v27 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v19);
      WdLogEvent5_WdAssertion(v34);
    }
    v7 = DMMVIDPNSOURCEMODE::operator==(v23, v27);
    ReferenceCounted::Release((ReferenceCounted *)(v26 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v22 + 88));
  }
  ReferenceCounted::Release((ReferenceCounted *)(v17 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v13 + 88));
  return v7;
}
