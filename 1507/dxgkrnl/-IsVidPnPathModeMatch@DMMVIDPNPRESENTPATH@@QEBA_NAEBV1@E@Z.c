/*
 * XREFs of ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C00951B4
 * Callers:
 *     ?DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEACCESS@@@Z @ 0x1C00A9BAC (-DmmCommitVidPnOnAdapter@@YAJPEAVDXGDEVICE@@PEAUD3DKMDT_HVIDPN__@@KPEAK22PEAEQEAJPEAVCOREDEVICEA.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0002FFC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0005BF0 (-IsFunctional@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C00085BC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C00085FC (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ??9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C000A270 (--9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 */

char __fastcall DMMVIDPNPRESENTPATH::IsVidPnPathModeMatch(
        D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *this,
        const struct DMMVIDPNPRESENTPATH *a2,
        char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax

  v10 = 0;
  if ( !DMMVIDPNPRESENTPATH::IsFunctional((DMMVIDPNPRESENTPATH *)this)
    || (v11 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v11)) )
  {
    v39 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    WdLogEvent5_WdAssertion(v39);
  }
  if ( !DMMVIDPNPRESENTPATH::IsFunctional(a2)
    || (v16 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(this[29]), !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v16)) )
  {
    v40 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    WdLogEvent5_WdAssertion(v40);
  }
  if ( !a3 && *((_DWORD *)this + 29) != *((_DWORD *)a2 + 29) || *((_DWORD *)this + 28) != *((_DWORD *)a2 + 28) )
    return 0;
  v17 = *((_QWORD *)this + 12);
  v18 = *(_QWORD *)(v17 + 104);
  if ( v18 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
    v19 = *(_QWORD *)(v17 + 104);
  }
  else
  {
    v19 = 0LL;
  }
  v20 = *(_QWORD *)(v19 + 144);
  if ( !v20 )
  {
    v41 = WdLogNewEntry5_WdAssertion(v17, v12, v14, v15);
    WdLogEvent5_WdAssertion(v41);
  }
  v21 = *((_QWORD *)a2 + 12);
  v22 = *(_QWORD *)(v21 + 104);
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
    v23 = *(_QWORD *)(v21 + 104);
  }
  else
  {
    v23 = 0LL;
  }
  v24 = *(_QWORD *)(v23 + 144);
  if ( v24 )
  {
    v25 = v24 + 72;
  }
  else
  {
    v42 = WdLogNewEntry5_WdAssertion(v21, v12, v14, v15);
    WdLogEvent5_WdAssertion(v42);
    v25 = 0LL;
  }
  if ( !operator!=(v20 + 72, v25) )
  {
    v30 = *((_QWORD *)this + 11);
    v31 = *(_QWORD *)(v30 + 104);
    if ( v31 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 96));
      v32 = *(_QWORD *)(v30 + 104);
    }
    else
    {
      v32 = 0LL;
    }
    v33 = *(_QWORD *)(v32 + 144);
    if ( !v33 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v43);
    }
    v34 = *((_QWORD *)a2 + 11);
    v35 = *(_QWORD *)(v34 + 104);
    if ( v35 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v35 + 96));
      v36 = *(_QWORD *)(v34 + 104);
    }
    else
    {
      v36 = 0LL;
    }
    v37 = *(_QWORD *)(v36 + 144);
    if ( !v37 )
    {
      v44 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
      WdLogEvent5_WdAssertion(v44);
    }
    v10 = DMMVIDPNSOURCEMODE::operator==(v33, v37);
    ReferenceCounted::Release((ReferenceCounted *)(v36 + 88));
    ReferenceCounted::Release((ReferenceCounted *)(v32 + 88));
  }
  ReferenceCounted::Release((ReferenceCounted *)(v23 + 88));
  ReferenceCounted::Release((ReferenceCounted *)(v19 + 88));
  return v10;
}
