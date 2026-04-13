/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180053608
 * Callers:
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x180052F8C (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x180065A34 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x180065B18 (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_WAEBV10@@Z @ 0x180067180 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@PEB_W@Z @ 0x180067254 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_180067254.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180049D7C (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005375C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::append(_QWORD *Src, char *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  bool v11; // cf
  _WORD *v12; // rax
  char *v13; // rcx
  _WORD *v14; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 8uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + 2 * v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 <= a3 )
      std::wstring::_Xlen();
    if ( !a3 )
      return v5;
    v10 = v9 + a3;
    if ( v9 + a3 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( v5[3] >= v10 )
    {
      if ( v10 )
        goto LABEL_24;
      v11 = v5[3] < 8uLL;
      v5[2] = 0LL;
      if ( v11 )
        v12 = v5;
      else
        v12 = (_WORD *)*v5;
      *v12 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)v5, v9 + a3, (const void *)v9);
    }
    if ( !v10 )
      return v5;
LABEL_24:
    if ( v5[3] < 8uLL )
      v13 = (char *)v5;
    else
      v13 = (char *)*v5;
    memcpy_0(&v13[2 * v5[2]], a2, 2 * a3);
    v11 = v5[3] < 8uLL;
    v5[2] = v10;
    if ( v11 )
      v14 = v5;
    else
      v14 = (_WORD *)*v5;
    v14[v10] = 0;
    return v5;
  }
  if ( v5[3] < 8uLL )
    v7 = v5;
  else
    v7 = (_BYTE *)*v5;
  return (_QWORD *)std::wstring::append(v5, v5, (a2 - v7) >> 1, a3);
}
