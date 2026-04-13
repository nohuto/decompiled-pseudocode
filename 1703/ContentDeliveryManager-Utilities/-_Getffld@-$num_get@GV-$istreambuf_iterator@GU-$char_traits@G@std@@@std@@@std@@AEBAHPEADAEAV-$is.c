/*
 * XREFs of ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18002F0E4
 * Callers:
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18002DCA0 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002DCA0.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x18002DD80 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002DD80.c)
 *     ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x18002DE60 (-do_get@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18002DE60.c)
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x1800238E4 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?grouping@?$numpunct@G@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18002F0C0 (-grouping@-$numpunct@G@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800301CC (-_Getffldx@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x180030948 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180030C9C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x180031274 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180031454 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180032640 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x180032F38 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffld(
        int a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r14
  _QWORD *v10; // rax
  __int64 v11; // rsi
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char *v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rbx
  _WORD *v18; // rax
  __int64 v19; // rcx
  _WORD *v20; // rax
  char v21; // r15
  int v22; // r13d
  int v23; // r12d
  void **v24; // rax
  unsigned __int64 v25; // r15
  char v26; // al
  _QWORD *v27; // r14
  __int16 v28; // dx
  __int16 *v29; // rax
  __int16 i; // cx
  unsigned __int64 v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  char *v35; // rax
  void **v36; // rdx
  char v37; // cl
  _QWORD *v38; // rax
  char *v39; // rax
  __int16 v40; // dx
  __int16 *v41; // rax
  __int16 j; // cx
  unsigned __int64 v43; // rax
  __int16 v44; // bx
  _WORD *v45; // rax
  __int16 v46; // dx
  __int16 *v47; // rax
  __int16 k; // cx
  unsigned __int64 v49; // rax
  _WORD *v50; // rax
  _WORD *v51; // rax
  _WORD *v52; // rax
  __int64 v53; // rcx
  _WORD *v54; // rax
  _WORD *v55; // rax
  __int16 v56; // dx
  __int16 *v57; // rax
  __int16 m; // cx
  unsigned __int64 v59; // rax
  char v60; // [rsp+38h] [rbp-99h]
  char v61; // [rsp+39h] [rbp-98h]
  __int64 v62; // [rsp+40h] [rbp-91h] BYREF
  __int64 v63; // [rsp+48h] [rbp-89h]
  __int64 v64; // [rsp+50h] [rbp-81h]
  __int64 v65; // [rsp+58h] [rbp-79h] BYREF
  void **v66; // [rsp+60h] [rbp-71h]
  char *v67; // [rsp+68h] [rbp-69h]
  __int64 v68; // [rsp+70h] [rbp-61h]
  _QWORD v69[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v70; // [rsp+90h] [rbp-41h]
  void *v71[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v72; // [rsp+B0h] [rbp-21h]
  _WORD v73[10]; // [rsp+B8h] [rbp-19h] BYREF
  __int16 v74; // [rsp+CCh] [rbp-5h]
  __int16 v75; // [rsp+CEh] [rbp-3h]
  __int16 v76; // [rsp+D0h] [rbp-1h]
  __int16 v77; // [rsp+D2h] [rbp+1h]

  v68 = -2LL;
  v6 = a4;
  v63 = a4;
  v67 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
             a1,
             (_DWORD)a2,
             a3,
             a4,
             a5,
             a6);
  v10 = std::ios_base::getloc(a5, &v65);
  v11 = std::use_facet<std::numpunct<unsigned short>>(v10);
  v64 = v11;
  if ( v65 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  std::numpunct<unsigned short>::grouping(v11, (__int64)v71);
  v13 = a2;
  v61 = 0;
  v14 = std::ios_base::getloc(a5, &v62);
  v15 = std::use_facet<std::ctype<unsigned short>>(v14);
  if ( v62 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v15 + 88LL))(
    v15,
    "0123456789-+Ee",
    "",
    v73);
  v17 = 0LL;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v18 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v19 = a3;
    if ( *v18 == v75 )
    {
      *a2 = 43;
    }
    else
    {
      v20 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v20 != v74 )
        goto LABEL_15;
      *a2 = 45;
      v19 = a3;
    }
    v13 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc(v19);
  }
LABEL_15:
  v21 = 0;
  v60 = 0;
  v22 = 0;
  v23 = 0;
  LODWORD(v62) = 0;
  v24 = v71;
  if ( v72 >= 0x10 )
    v24 = (void **)v71[0];
  v66 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) <= 0x7Du )
  {
    if ( v71[2] )
      LOWORD(v23) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
    v25 = 15LL;
    v70 = 15LL;
    LOWORD(v69[0]) = 0;
    v69[2] = 1LL;
    v26 = std::istreambuf_iterator<wchar_t>::equal(a3, v6);
    v27 = (_QWORD *)v69[0];
    if ( v26 )
      goto LABEL_50;
    while ( 1 )
    {
      v28 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v29 = v73;
      for ( i = v73[0]; i && i != v28; i = *v29 )
        ++v29;
      v31 = v29 - v73;
      if ( v31 >= 0xA )
      {
        v34 = v69;
        if ( v25 >= 0x10 )
          v34 = v27;
        if ( !*((_BYTE *)v34 + v17)
          || !(_WORD)v23
          || *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) != (_WORD)v23 )
        {
LABEL_45:
          if ( v17 )
          {
            v35 = (char *)v69;
            if ( v25 >= 0x10 )
              v35 = (char *)v27;
            if ( v35[v17] > 0 )
            {
              ++v17;
              goto LABEL_50;
            }
LABEL_63:
            v61 = 1;
          }
          else
          {
LABEL_50:
            v36 = v66;
            while ( v17 )
            {
              v37 = *(_BYTE *)v36;
              if ( *(_BYTE *)v36 == 127 )
                break;
              if ( --v17 )
              {
                v38 = v69;
                if ( v25 >= 0x10 )
                  v38 = v27;
                if ( v37 != *((_BYTE *)v38 + v17) )
                  goto LABEL_63;
              }
              if ( !v17 )
              {
                v39 = (char *)v69;
                if ( v25 >= 0x10 )
                  v39 = (char *)v27;
                if ( v37 < *v39 )
                  goto LABEL_63;
              }
              if ( *((char *)v36 + 1) > 0 )
                v36 = (void **)((char *)v36 + 1);
            }
          }
          if ( v25 >= 0x10 )
            operator delete(v27);
          LODWORD(v17) = 0;
          v23 = v62;
          v21 = v60;
          v6 = v63;
LABEL_80:
          if ( v21 && !v22 )
            *v13++ = 48;
          goto LABEL_83;
        }
        std::string::append(v69, 1LL);
        ++v17;
      }
      else
      {
        v60 = 1;
        if ( v22 < 36 )
        {
          if ( v31 || v22 )
          {
            *v13++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v31];
            ++v22;
          }
        }
        else
        {
          LODWORD(v62) = v62 + 1;
        }
        v32 = v69;
        if ( v25 >= 0x10 )
          v32 = v27;
        if ( *((_BYTE *)v32 + v17) == 127 )
          goto LABEL_44;
        v33 = v69;
        if ( v25 >= 0x10 )
          v33 = v27;
        ++*((_BYTE *)v33 + v17);
      }
      v27 = (_QWORD *)v69[0];
      v25 = v70;
LABEL_44:
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v63) )
        goto LABEL_45;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v40 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v41 = v73;
      for ( j = v73[0]; j && j != v40; j = *v41 )
        ++v41;
      v43 = v41 - v73;
      if ( v43 >= 0xA )
        break;
      if ( v22 < 36 )
      {
        if ( v43 || v22 )
        {
          *v13++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v43];
          ++v22;
        }
      }
      else
      {
        ++v23;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    LODWORD(v62) = v23;
    goto LABEL_80;
  }
LABEL_83:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 24LL))(v64);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v44 )
    {
      *v13++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    LODWORD(v17) = 0;
  }
  if ( !v22 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      do
      {
        v45 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        if ( *v45 != v73[0] )
          break;
        --v23;
        v21 = 1;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
      LODWORD(v62) = v23;
    }
    if ( v23 < 0 )
    {
      *v13++ = 48;
      LODWORD(v62) = ++v23;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    do
    {
      v46 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v47 = v73;
      for ( k = v73[0]; k && k != v46; k = *v47 )
        ++v47;
      v49 = v47 - v73;
      if ( v49 >= 0xA )
        break;
      if ( v22 < 36 )
      {
        *v13++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v49];
        ++v22;
      }
      v21 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
    v23 = v62;
  }
  if ( v21 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v50 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v50 == v77 || (v51 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v51 == v76) )
      {
        *v13++ = 101;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v21 = 0;
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
          goto LABEL_114;
        v52 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v53 = a3;
        if ( *v52 == v75 )
        {
          *v13 = 43;
        }
        else
        {
          v54 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v54 != v74 )
            goto LABEL_114;
          *v13 = 45;
          v53 = a3;
        }
        ++v13;
        std::istreambuf_iterator<unsigned short>::_Inc(v53);
LABEL_114:
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          do
          {
            v55 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            if ( *v55 != v73[0] )
              break;
            v21 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
          if ( v21 )
            *v13++ = 48;
        }
        if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          do
          {
            v56 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
            v57 = v73;
            for ( m = v73[0]; m && m != v56; m = *v57 )
              ++v57;
            v59 = v57 - v73;
            if ( v59 >= 0xA )
              break;
            if ( (int)v17 < 8 )
            {
              *v13++ = `std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getffld'::`2'::_Src[v59];
              LODWORD(v17) = v17 + 1;
            }
            v21 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
          while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) );
          v23 = v62;
        }
      }
    }
  }
  if ( v61 || !v21 )
    v13 = v67;
  *v13 = 0;
  if ( v72 >= 0x10 )
    operator delete(v71[0]);
  return (unsigned int)v23;
}
