/*
 * XREFs of ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180049B8C
 * Callers:
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x180065A34 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_WAEBV10@@Z @ 0x180067180 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180049D7C (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

bool __fastcall std::wstring::_Grow(void **a1, unsigned __int64 a2, char a3)
{
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rsi
  void *v6; // rbp
  bool v7; // zf
  bool v8; // cf

  v4 = a1;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < a2 )
  {
    std::wstring::_Copy(a1);
LABEL_17:
    v7 = a2 == 0;
    return !v7;
  }
  if ( a3 && a2 < 8 )
  {
    v5 = (unsigned __int64)a1[2];
    if ( a2 < v5 )
      v5 = a2;
    if ( (unsigned __int64)a1[3] >= 8 )
    {
      v6 = *a1;
      if ( v5 )
        memcpy_0(a1, *a1, 2 * v5);
      operator delete(v6);
    }
    v4[3] = 7LL;
    v4[2] = v5;
    *((_WORD *)v4 + v5) = 0;
    goto LABEL_17;
  }
  v7 = a2 == 0;
  if ( !a2 )
  {
    v8 = (unsigned __int64)a1[3] < 8;
    a1[2] = 0LL;
    if ( !v8 )
      v4 = *a1;
    *(_WORD *)v4 = 0;
    goto LABEL_17;
  }
  return !v7;
}
