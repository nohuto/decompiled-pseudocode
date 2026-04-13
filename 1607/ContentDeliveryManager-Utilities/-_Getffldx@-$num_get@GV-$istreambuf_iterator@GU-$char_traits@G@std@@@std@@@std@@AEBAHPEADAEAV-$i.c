/*
 * XREFs of ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800289E8
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180027B2C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18001C348 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?grouping@?$numpunct@G@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180027B00 (-grouping@-$numpunct@G@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18002916C (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800294D8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800295D0 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180029768 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18002A04C (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z @ 0x18002A91C (-equal@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r15
  _QWORD *v9; // rax
  __int64 v10; // r12
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  _QWORD *v12; // rax
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _WORD *v15; // rsi
  _WORD *v16; // rax
  __int64 v17; // rcx
  _WORD *v18; // rax
  char *v19; // rsi
  int v20; // r14d
  __int64 v21; // rbx
  _WORD *v22; // rax
  _WORD *v23; // rax
  _WORD *v24; // rax
  void **v25; // r13
  __int16 v26; // r12
  unsigned __int64 v27; // r15
  char v28; // al
  _QWORD *v29; // r14
  int v30; // r13d
  __int16 v31; // dx
  __int16 *v32; // rax
  __int16 j; // cx
  unsigned __int64 v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  char *v38; // rax
  char v39; // cl
  _QWORD *v40; // rax
  char *v41; // rax
  __int16 v42; // dx
  __int16 *v43; // rax
  __int16 i; // cx
  unsigned __int64 v45; // rax
  char v46; // r12
  __int16 v47; // bx
  int v48; // r14d
  _WORD *v49; // rax
  int v50; // r13d
  __int16 v51; // dx
  __int16 *v52; // rax
  __int16 k; // cx
  unsigned __int64 v54; // rax
  _WORD *v55; // rax
  _WORD *v56; // rax
  int v57; // ebx
  _WORD *v58; // rax
  __int64 v59; // rcx
  _WORD *v60; // rax
  _WORD *v61; // rax
  __int16 v62; // dx
  __int16 *v63; // rax
  __int16 m; // cx
  unsigned __int64 v65; // rax
  char v67; // [rsp+38h] [rbp-B9h]
  char v68; // [rsp+39h] [rbp-B8h]
  int v69; // [rsp+3Ch] [rbp-B5h]
  __int64 v70; // [rsp+40h] [rbp-B1h] BYREF
  __int64 v71; // [rsp+48h] [rbp-A9h]
  __int64 v72; // [rsp+50h] [rbp-A1h] BYREF
  void **v73; // [rsp+58h] [rbp-99h]
  __int64 v74; // [rsp+60h] [rbp-91h]
  char *v75; // [rsp+68h] [rbp-89h]
  int *v76; // [rsp+70h] [rbp-81h]
  __int64 v77; // [rsp+78h] [rbp-79h]
  _QWORD v78[3]; // [rsp+80h] [rbp-71h] BYREF
  __int64 v79; // [rsp+98h] [rbp-59h]
  void *v80[3]; // [rsp+A0h] [rbp-51h] BYREF
  unsigned __int64 v81; // [rsp+B8h] [rbp-39h]
  _WORD v82[22]; // [rsp+C0h] [rbp-31h] BYREF
  __int16 v83; // [rsp+ECh] [rbp-5h]
  __int16 v84; // [rsp+EEh] [rbp-3h]
  __int16 v85; // [rsp+F0h] [rbp-1h]
  __int16 v86; // [rsp+F2h] [rbp+1h]
  __int16 v87; // [rsp+F4h] [rbp+3h]
  __int16 v88; // [rsp+F6h] [rbp+5h]

  v77 = -2LL;
  v6 = a4;
  v71 = a4;
  v75 = a2;
  v76 = a6;
  v9 = std::ios_base::getloc(a5, &v72);
  v10 = std::use_facet<std::numpunct<unsigned short>>(v9);
  v74 = v10;
  if ( v72 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  std::numpunct<unsigned short>::grouping(v10, (__int64)v80);
  v12 = std::ios_base::getloc(a5, &v70);
  v13 = std::use_facet<std::ctype<unsigned short>>(v12);
  if ( v70 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v13 + 88LL))(
    v13,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v82);
  v15 = a2;
  v68 = 0;
  if ( (unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
    goto LABEL_13;
  v16 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  v17 = a3;
  if ( *v16 == v84 )
  {
    *a2 = 43;
  }
  else
  {
    v18 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v18 != v83 )
      goto LABEL_13;
    *a2 = 45;
    v17 = a3;
  }
  v15 = a2 + 1;
  std::istreambuf_iterator<unsigned short>::_Inc(v17);
LABEL_13:
  *v15 = 30768;
  v19 = (char *)(v15 + 1);
  v67 = 0;
  v20 = 0;
  LODWORD(v70) = 0;
  v21 = 0LL;
  v69 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
  {
    v22 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v22 == v82[0] )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6)
        && ((v23 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v23 == v86)
         || (v24 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v24 == v85)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      else
      {
        v67 = 1;
      }
    }
  }
  v25 = v80;
  if ( v81 >= 0x10 )
    v25 = (void **)v80[0];
  v73 = v25;
  if ( (unsigned __int8)(*(_BYTE *)v25 - 1) > 0x7Du )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
    {
      do
      {
        v42 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v43 = v82;
        for ( i = v82[0]; i && i != v42; i = *v43 )
          ++v43;
        v45 = v43 - v82;
        if ( v45 >= 0x16 )
          break;
        if ( v20 < 36 )
        {
          if ( v45 || v20 )
          {
            *v19++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v45];
            ++v20;
          }
        }
        else
        {
          LODWORD(v21) = v21 + 1;
        }
        v67 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) );
      v69 = v21;
      LODWORD(v70) = v20;
    }
    goto LABEL_86;
  }
  if ( v80[2] )
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  else
    v26 = 0;
  v27 = 15LL;
  v79 = 15LL;
  LOWORD(v78[0]) = 0;
  v78[2] = 1LL;
  v28 = std::istreambuf_iterator<unsigned short>::equal(a3, v71);
  v29 = (_QWORD *)v78[0];
  if ( v28 )
  {
LABEL_57:
    while ( v21 )
    {
      v39 = *(_BYTE *)v25;
      if ( *(_BYTE *)v25 == 127 )
        break;
      if ( --v21 )
      {
        v40 = v78;
        if ( v27 >= 0x10 )
          v40 = v29;
        if ( v39 != *((_BYTE *)v40 + v21) )
          goto LABEL_69;
      }
      if ( !v21 )
      {
        v41 = (char *)v78;
        if ( v27 >= 0x10 )
          v41 = (char *)v29;
        if ( v39 < *v41 )
          goto LABEL_69;
      }
      if ( *((char *)v25 + 1) > 0 )
        v25 = (void **)((char *)v25 + 1);
    }
    goto LABEL_70;
  }
  v30 = 0;
  while ( 1 )
  {
    v31 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v32 = v82;
    for ( j = v82[0]; j && j != v31; j = *v32 )
      ++v32;
    v34 = v32 - v82;
    if ( v34 >= 0x16 )
      break;
    v67 = 1;
    if ( v30 < 36 )
    {
      if ( v34 || v30 )
      {
        *v19++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v34];
        ++v30;
      }
    }
    else
    {
      ++v69;
    }
    v35 = v78;
    if ( v27 >= 0x10 )
      v35 = v29;
    if ( *((_BYTE *)v35 + v21) == 127 )
      goto LABEL_51;
    v36 = v78;
    if ( v27 >= 0x10 )
      v36 = v29;
    ++*((_BYTE *)v36 + v21);
LABEL_50:
    v29 = (_QWORD *)v78[0];
    v27 = v79;
LABEL_51:
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    if ( (unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v71) )
      goto LABEL_52;
  }
  v37 = v78;
  if ( v27 >= 0x10 )
    v37 = v29;
  if ( *((_BYTE *)v37 + v21) && v26 && *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v26 )
  {
    std::string::append(v78, 1LL);
    ++v21;
    goto LABEL_50;
  }
LABEL_52:
  LODWORD(v70) = v30;
  v25 = v73;
  if ( v21 )
  {
    v38 = (char *)v78;
    if ( v27 >= 0x10 )
      v38 = (char *)v29;
    if ( v38[v21] > 0 )
    {
      ++v21;
      goto LABEL_57;
    }
LABEL_69:
    v68 = 1;
  }
LABEL_70:
  if ( v27 >= 0x10 )
    operator delete(v29);
  v6 = v71;
  v20 = v70;
LABEL_86:
  v46 = v67;
  if ( v67 && !v20 )
    *v19++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
  {
    v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v74 + 24LL))(v74);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v47 )
    {
      *v19++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v20 )
  {
    v50 = v69;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
    {
      v48 = v69;
      do
      {
        v49 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        if ( *v49 != v82[0] )
          break;
        --v48;
        v46 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) );
      v69 = v48;
      v20 = v70;
    }
    v50 = v69;
    if ( v69 < 0 )
    {
      *v19++ = 48;
      v50 = ++v69;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
  {
    do
    {
      v51 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v52 = v82;
      for ( k = v82[0]; k && k != v51; k = *v52 )
        ++v52;
      v54 = v52 - v82;
      if ( v54 >= 0x16 )
        break;
      if ( v20 < 36 )
      {
        *v19++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v54];
        ++v20;
      }
      v46 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) );
    v50 = v69;
  }
  if ( v46 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
    {
      v55 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v55 == v88 || (v56 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v56 == v87) )
      {
        *v19++ = 112;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v46 = 0;
        v57 = 0;
        if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
        {
          v58 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          v59 = a3;
          if ( *v58 == v84 )
          {
            *v19 = 43;
            goto LABEL_120;
          }
          v60 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v60 == v83 )
          {
            *v19 = 45;
            v59 = a3;
LABEL_120:
            ++v19;
            std::istreambuf_iterator<unsigned short>::_Inc(v59);
          }
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
        {
          do
          {
            v61 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            if ( *v61 != v82[0] )
              break;
            v46 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) );
          if ( v46 )
            *v19++ = 48;
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) )
        {
          do
          {
            v62 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v63 = v82;
            for ( m = v82[0]; m && m != v62; m = *v63 )
              ++v63;
            v65 = v63 - v82;
            if ( v65 >= 0x16 )
              break;
            if ( v57 < 8 )
            {
              *v19++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v65];
              ++v57;
            }
            v46 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<unsigned short>::equal(a3, v6) );
          v50 = v69;
        }
      }
    }
  }
  if ( v68 || !v46 )
    v19 = v75;
  *v19 = 0;
  *v76 = v50;
  if ( v81 >= 0x10 )
    operator delete(v80[0]);
  return 0LL;
}
