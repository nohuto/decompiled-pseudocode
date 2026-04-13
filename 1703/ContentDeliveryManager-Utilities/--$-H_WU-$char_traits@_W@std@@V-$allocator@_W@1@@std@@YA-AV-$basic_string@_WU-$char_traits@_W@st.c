/*
 * XREFs of ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_WAEBV10@@Z @ 0x180067180
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180065870 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x180049B8C (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180053608 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005375C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::operator+<wchar_t>(_QWORD *Src, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax

  v5 = 0LL;
  Src[3] = 7LL;
  Src[2] = 0LL;
  *(_WORD *)Src = 0;
  v6 = (asc_1800D7508[0] != 0) + a3[2];
  v7 = Src[2];
  if ( v7 <= v6 && Src[3] != v6 && std::wstring::_Grow((void **)Src, v6, 1) )
  {
    Src[2] = v7;
    if ( Src[3] < 8uLL )
      v8 = Src;
    else
      v8 = (_QWORD *)*Src;
    *((_WORD *)v8 + v7) = 0;
  }
  LOBYTE(v5) = asc_1800D7508[0] != 0;
  std::wstring::append(Src, (char *)L"{", v5);
  std::wstring::append((_WORD **)Src, a3, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return Src;
}
