/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180027010
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18001C348 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?truename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18002645C (-truename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?falsename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180026488 (-falsename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180028228 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800292F8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180029644 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18002A04C (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18002A384 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?equal@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z @ 0x18002A91C (-equal@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _Stoulx @ 0x180053F84 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v7; // r12d
  int v10; // edi
  _QWORD *v11; // rax
  __int64 v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void **v16; // r9
  __int64 v17; // r12
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // r12d
  void (__fastcall ***v21)(_QWORD, __int64); // rax
  __int64 v23; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-99h]
  __int64 v25; // [rsp+40h] [rbp-91h]
  __int64 v26; // [rsp+48h] [rbp-89h] BYREF
  _BYTE *v27; // [rsp+50h] [rbp-81h] BYREF
  bool *v28; // [rsp+58h] [rbp-79h]
  __int64 v29; // [rsp+60h] [rbp-71h]
  void *v30[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-51h]
  void *v32[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v33; // [rsp+A0h] [rbp-31h]
  _BYTE v34[32]; // [rsp+A8h] [rbp-29h] BYREF

  v29 = -2LL;
  v7 = a4;
  v24 = a4;
  v25 = a1;
  v28 = a7;
  v10 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v11 = std::ios_base::getloc(a5, &v23);
    v12 = std::use_facet<std::numpunct<unsigned short>>(v11);
    if ( v23 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
    v31 = 7LL;
    LODWORD(v30[0]) = 0;
    v30[2] = (void *)1;
    v14 = std::numpunct<unsigned short>::falsename(v12, (__int64)v32);
    std::wstring::append(v30, v14, 0LL, -1LL);
    if ( v33 >= 8 )
      operator delete(v32[0]);
    std::wstring::append(v30, 1LL, 0LL);
    v15 = std::numpunct<unsigned short>::truename(v12, (__int64)v32);
    std::wstring::append(v30, v15, 0LL, -1LL);
    if ( v33 >= 8 )
      operator delete(v32[0]);
    v16 = v30;
    if ( v31 >= 8 )
      v16 = (void **)v30[0];
    v17 = v24;
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, v24, 2LL, v16);
    if ( v31 >= 8 )
      operator delete(v30[0]);
  }
  else
  {
    LODWORD(v23) = 0;
    v18 = std::ios_base::getloc(a5, &v26);
    v19 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            v25,
            (unsigned int)v34,
            (_DWORD)a3,
            v7,
            *(_DWORD *)(a5 + 24),
            (__int64)v18);
    v20 = Stoulx(v34, &v27, v19, &v23);
    if ( v26 )
    {
      v21 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      if ( v21 )
        (**v21)(v21, 1LL);
    }
    if ( v27 != v34 && !(_DWORD)v23 && v20 <= 1 )
      v10 = v20;
    v17 = v24;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v17) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *v28 = v10 != 0;
  else
    *a6 |= 2u;
  *a2 = *a3;
  return a2;
}
