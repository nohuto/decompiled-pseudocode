/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180014E90
 * Callers:
 *     <none>
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?falsename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180015EA0 (-falsename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?truename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x180015EEC (-truename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180016658 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x180017670 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800181A0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x180018474 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180018DD8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180019008 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     _Stoulx @ 0x180024174 (_Stoulx.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        int a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  _DWORD *v10; // rdi
  int v11; // r14d
  _QWORD *v12; // rax
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  void **v17; // r9
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  void (__fastcall ***v21)(_QWORD, __int64); // rax
  _OWORD *result; // rax
  __int64 v23; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A9h]
  __int64 v25; // [rsp+40h] [rbp-A1h]
  bool *v26; // [rsp+48h] [rbp-99h]
  __int64 v27; // [rsp+50h] [rbp-91h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-89h] BYREF
  _OWORD *v29; // [rsp+60h] [rbp-81h]
  __int64 v30; // [rsp+68h] [rbp-79h]
  void *v31[3]; // [rsp+70h] [rbp-71h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-59h]
  void *v33[3]; // [rsp+90h] [rbp-51h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-39h]
  _BYTE v35[32]; // [rsp+B0h] [rbp-31h] BYREF

  v30 = -2LL;
  v29 = a2;
  v10 = a6;
  v25 = (__int64)a6;
  v26 = a7;
  v11 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = std::ios_base::getloc(a5, &v23);
    v24 = std::use_facet<std::numpunct<unsigned short>>(v12);
    if ( v23 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v13 )
        (**v13)(v13, 1LL);
      v10 = (_DWORD *)v25;
    }
    v32 = 7LL;
    LODWORD(v31[0]) = 0;
    v31[2] = (void *)1;
    v14 = v24;
    v15 = std::numpunct<unsigned short>::falsename(v24, v33);
    std::wstring::append(v31, v15, 0LL, -1LL);
    if ( v34 >= 8 )
      operator delete(v33[0]);
    std::wstring::append(v31, 1LL, 0LL);
    v16 = std::numpunct<unsigned short>::truename(v14, v33);
    std::wstring::append(v31, v16, 0LL, -1LL);
    if ( v34 >= 8 )
      operator delete(v33[0]);
    v17 = v31;
    if ( v32 >= 8 )
      v17 = (void **)v31[0];
    v11 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, a4, 2LL, v17);
    if ( v32 >= 8 )
      operator delete(v31[0]);
  }
  else
  {
    LODWORD(v23) = 0;
    v18 = std::ios_base::getloc(a5, &v27);
    v19 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            a1,
            (unsigned int)v35,
            a3,
            a4,
            *(_DWORD *)(a5 + 24),
            (__int64)v18);
    v20 = Stoulx(v35, &v28, v19, &v23);
    LODWORD(v24) = v20;
    if ( v27 )
    {
      v21 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v21 )
        (**v21)(v21, 1LL);
      v20 = v24;
      v10 = (_DWORD *)v25;
    }
    if ( v28 != v35 && !(_DWORD)v23 && v20 <= 1 )
      v11 = v20;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( !*(_QWORD *)a4 )
LABEL_30:
    *v10 |= 1u;
LABEL_31:
  if ( v11 >= 0 )
    *v26 = v11 != 0;
  else
    *v10 |= 2u;
  result = v29;
  *v29 = *(_OWORD *)a3;
  return result;
}
