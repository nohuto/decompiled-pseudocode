/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_K@Z @ 0x180061F20
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800238E4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180032F38 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x180062FA0 (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     _Stoullx @ 0x18006B588 (_Stoullx.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v16; // [rsp+30h] [rbp-88h] BYREF
  __int64 v17; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-68h] BYREF

  v18[1] = -2LL;
  v16 = 0;
  v11 = std::ios_base::getloc(a5, &v17);
  v12 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
          a1,
          (unsigned int)v19,
          (_DWORD)a3,
          (_DWORD)a4,
          *(_DWORD *)(a5 + 24),
          (__int64)v11);
  v13 = Stoullx(v19, v18, v12, &v16);
  if ( v17 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  if ( std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( (_BYTE *)v18[0] == v19 || v16 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *(_OWORD *)a3;
  return a2;
}
