/*
 * XREFs of ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180017830
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180016B3C (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18000B058 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?grouping@?$numpunct@G@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180017428 (-grouping@-$numpunct@G@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800174A8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x1800183E4 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?_Peek@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEBAGXZ @ 0x180018474 (-_Peek@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEBAGXZ.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800188B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180018DD8 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
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
  _QWORD *v9; // rax
  __int64 v10; // r12
  void (__fastcall ***v11)(_QWORD, __int64); // rax
  _QWORD *v12; // rax
  __int64 v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  _WORD *v15; // rdi
  int v16; // ebx
  char *v17; // rdi
  int v18; // r15d
  void **v19; // rax
  __int16 v20; // r12
  unsigned __int64 v21; // r15
  __int64 v22; // rbx
  size_t *v23; // r13
  __int16 *v24; // rcx
  __int16 j; // ax
  unsigned __int64 v26; // rcx
  int v27; // edx
  size_t *v28; // rax
  size_t *v29; // rax
  size_t *v30; // rax
  size_t *v31; // rax
  void **v32; // rdx
  char v33; // cl
  size_t *v34; // rax
  size_t *v35; // rax
  __int16 *v36; // rcx
  __int16 i; // ax
  unsigned __int64 v38; // rcx
  __int64 v39; // r12
  char v40; // r13
  int k; // r12d
  __int16 *v42; // rcx
  __int16 m; // ax
  unsigned __int64 v44; // rcx
  int v45; // ebx
  __int16 *v46; // rax
  __int16 n; // cx
  unsigned __int64 v48; // rax
  char v50; // [rsp+28h] [rbp-A9h]
  char v51; // [rsp+29h] [rbp-A8h]
  int v52; // [rsp+2Ch] [rbp-A5h]
  __int64 v53; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v54; // [rsp+38h] [rbp-99h]
  void **v55; // [rsp+40h] [rbp-91h]
  char *v56; // [rsp+48h] [rbp-89h]
  __int64 v57; // [rsp+50h] [rbp-81h] BYREF
  int *v58; // [rsp+58h] [rbp-79h]
  __int64 v59; // [rsp+60h] [rbp-71h]
  size_t v60[3]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v61; // [rsp+80h] [rbp-51h]
  void *v62[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v63; // [rsp+A0h] [rbp-31h]
  _WORD v64[22]; // [rsp+A8h] [rbp-29h] BYREF
  __int16 v65; // [rsp+D4h] [rbp+3h]
  __int16 v66; // [rsp+D6h] [rbp+5h]
  __int16 v67; // [rsp+D8h] [rbp+7h]
  __int16 v68; // [rsp+DAh] [rbp+9h]
  __int16 v69; // [rsp+DCh] [rbp+Bh]
  __int16 v70; // [rsp+DEh] [rbp+Dh]

  v59 = -2LL;
  v56 = a2;
  v58 = a6;
  v9 = std::ios_base::getloc(a5, &v57);
  v10 = std::use_facet<std::numpunct<unsigned short>>(v9);
  v54 = v10;
  if ( v57 )
  {
    v11 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
    if ( v11 )
      (**v11)(v11, 1LL);
  }
  std::numpunct<unsigned short>::grouping(v10, (__int64)v62);
  v12 = std::ios_base::getloc(a5, &v53);
  v13 = std::use_facet<std::ctype<unsigned short>>(v12);
  if ( v53 )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v13 + 88LL))(
    v13,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v64);
  v15 = a2;
  v16 = 0;
  v51 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_24;
  }
  else if ( !*(_QWORD *)a4 )
  {
    goto LABEL_24;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( *(_WORD *)(a3 + 10) == v66 )
  {
    *a2 = 43;
LABEL_23:
    v15 = a2 + 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    goto LABEL_24;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( *(_WORD *)(a3 + 10) == v65 )
  {
    *a2 = 45;
    goto LABEL_23;
  }
LABEL_24:
  *v15 = 30768;
  v17 = (char *)(v15 + 1);
  v50 = 0;
  v18 = 0;
  LODWORD(v53) = 0;
  v52 = 0;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_32;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_32:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) != v64[0] )
      goto LABEL_51;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_50;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_50;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == v68 )
      goto LABEL_49;
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == v67 )
    {
LABEL_49:
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      goto LABEL_51;
    }
LABEL_50:
    v50 = 1;
  }
LABEL_51:
  v19 = v62;
  if ( v63 >= 0x10 )
    v19 = (void **)v62[0];
  v55 = v19;
  if ( (unsigned __int8)(*(_BYTE *)v19 - 1) > 0x7Du )
  {
    while ( 1 )
    {
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<unsigned short>::_Peek(a3);
      if ( !*(_BYTE *)(a4 + 8) )
        std::istreambuf_iterator<unsigned short>::_Peek(a4);
      if ( *(_QWORD *)a3 )
      {
        if ( *(_QWORD *)a4 )
          goto LABEL_136;
      }
      else if ( !*(_QWORD *)a4 )
      {
        goto LABEL_136;
      }
      if ( !*(_BYTE *)(a3 + 8) )
        std::istreambuf_iterator<unsigned short>::_Peek(a3);
      v36 = v64;
      for ( i = v64[0]; i && i != *(_WORD *)(a3 + 10); i = *v36 )
        ++v36;
      v38 = v36 - v64;
      if ( v38 >= 0x16 )
      {
LABEL_136:
        v52 = v16;
        goto LABEL_138;
      }
      if ( v18 < 36 )
      {
        if ( v38 || v18 )
        {
          *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v38];
          ++v18;
        }
      }
      else
      {
        ++v16;
      }
      v50 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v62[2] )
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  else
    v20 = 0;
  v21 = 15LL;
  v61 = 15LL;
  LOWORD(v60[0]) = 0;
  v60[2] = 1LL;
  v22 = 0LL;
  v23 = (size_t *)v60[0];
  while ( 1 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        goto LABEL_94;
    }
    else if ( !*(_QWORD *)a4 )
    {
      goto LABEL_94;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    v24 = v64;
    for ( j = v64[0]; j && j != *(_WORD *)(a3 + 10); j = *v24 )
      ++v24;
    v26 = v24 - v64;
    if ( v26 >= 0x16 )
      break;
    v50 = 1;
    v27 = v53;
    if ( (int)v53 < 36 )
    {
      if ( v26 || (_DWORD)v53 )
      {
        *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v26];
        LODWORD(v53) = v27 + 1;
      }
    }
    else
    {
      ++v52;
    }
    v28 = v60;
    if ( v21 >= 0x10 )
      v28 = v23;
    if ( *((_BYTE *)v28 + v22) != 127 )
    {
      v29 = v60;
      if ( v21 >= 0x10 )
        v29 = v23;
      ++*((_BYTE *)v29 + v22);
      goto LABEL_92;
    }
LABEL_93:
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v30 = v60;
  if ( v21 >= 0x10 )
    v30 = v23;
  if ( *((_BYTE *)v30 + v22) && v20 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == v20 )
    {
      std::string::append(v60, 1uLL, 0);
      ++v22;
LABEL_92:
      v23 = (size_t *)v60[0];
      v21 = v61;
      goto LABEL_93;
    }
  }
LABEL_94:
  if ( v22 )
  {
    v31 = v60;
    if ( v21 >= 0x10 )
      v31 = v23;
    if ( *((char *)v31 + v22) > 0 )
    {
      ++v22;
      goto LABEL_99;
    }
LABEL_112:
    v51 = 1;
  }
  else
  {
LABEL_99:
    v32 = v55;
    while ( v22 )
    {
      v33 = *(_BYTE *)v32;
      if ( *(_BYTE *)v32 == 127 )
        break;
      if ( --v22 )
      {
        v34 = v60;
        if ( v21 >= 0x10 )
          v34 = v23;
        if ( v33 != *((_BYTE *)v34 + v22) )
          goto LABEL_112;
      }
      if ( !v22 )
      {
        v35 = v60;
        if ( v21 >= 0x10 )
          v35 = v23;
        if ( v33 < *(char *)v35 )
          goto LABEL_112;
      }
      if ( *((char *)v32 + 1) > 0 )
        v32 = (void **)((char *)v32 + 1);
    }
  }
  if ( v21 >= 0x10 )
    operator delete(v23);
  v18 = v53;
LABEL_138:
  v39 = v54;
  v40 = v50;
  if ( v50 && !v18 )
    *v17++ = 48;
  if ( !*(_BYTE *)(a3 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    std::istreambuf_iterator<unsigned short>::_Peek(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_149;
  }
  else if ( *(_QWORD *)a4 )
  {
LABEL_149:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) == (*(unsigned __int16 (__fastcall **)(__int64))(*(_QWORD *)v39 + 24LL))(v39) )
    {
      *v17++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( v18 )
    goto LABEL_169;
  for ( k = v52; ; --k )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( *(_WORD *)(a3 + 10) != v64[0] )
      break;
    v40 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v52 = k;
  if ( k < 0 )
  {
    *v17++ = 48;
    v52 = k + 1;
  }
  while ( 1 )
  {
LABEL_169:
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( *(_QWORD *)a4 )
        break;
    }
    else if ( !*(_QWORD *)a4 )
    {
      break;
    }
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    v42 = v64;
    for ( m = v64[0]; m && m != *(_WORD *)(a3 + 10); m = *v42 )
      ++v42;
    v44 = v42 - v64;
    if ( v44 >= 0x16 )
      break;
    if ( v18 < 36 )
    {
      *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v44];
      ++v18;
    }
    v40 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( v40 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a3);
    if ( !*(_BYTE *)(a4 + 8) )
      std::istreambuf_iterator<unsigned short>::_Peek(a4);
    if ( *(_QWORD *)a3 )
    {
      if ( !*(_QWORD *)a4 )
      {
LABEL_196:
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<unsigned short>::_Peek(a3);
        if ( *(_WORD *)(a3 + 10) == v70 )
          goto LABEL_202;
        if ( !*(_BYTE *)(a3 + 8) )
          std::istreambuf_iterator<unsigned short>::_Peek(a3);
        if ( *(_WORD *)(a3 + 10) == v69 )
        {
LABEL_202:
          *v17++ = 112;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
          v40 = 0;
          v45 = 0;
          if ( !*(_BYTE *)(a3 + 8) )
            std::istreambuf_iterator<unsigned short>::_Peek(a3);
          if ( !*(_BYTE *)(a4 + 8) )
            std::istreambuf_iterator<unsigned short>::_Peek(a4);
          if ( *(_QWORD *)a3 )
          {
            if ( *(_QWORD *)a4 )
              goto LABEL_220;
          }
          else if ( !*(_QWORD *)a4 )
          {
            goto LABEL_220;
          }
          if ( !*(_BYTE *)(a3 + 8) )
            std::istreambuf_iterator<unsigned short>::_Peek(a3);
          if ( *(_WORD *)(a3 + 10) == v66 )
          {
            *v17 = 43;
          }
          else
          {
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a3);
            if ( *(_WORD *)(a3 + 10) != v65 )
              goto LABEL_220;
            *v17 = 45;
          }
          ++v17;
          while ( 1 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
LABEL_220:
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a3);
            if ( *(_WORD *)(a3 + 10) != v64[0] )
              break;
            v40 = 1;
          }
          if ( v40 )
            *v17++ = 48;
          while ( 1 )
          {
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a3);
            if ( !*(_BYTE *)(a4 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a4);
            if ( *(_QWORD *)a3 )
            {
              if ( *(_QWORD *)a4 )
                break;
            }
            else if ( !*(_QWORD *)a4 )
            {
              break;
            }
            if ( !*(_BYTE *)(a3 + 8) )
              std::istreambuf_iterator<unsigned short>::_Peek(a3);
            v46 = v64;
            for ( n = v64[0]; n && n != *(_WORD *)(a3 + 10); n = *v46 )
              ++v46;
            v48 = v46 - v64;
            if ( v48 >= 0x16 )
              break;
            if ( v45 < 8 )
            {
              *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v48];
              ++v45;
            }
            v40 = 1;
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
          }
        }
      }
    }
    else if ( *(_QWORD *)a4 )
    {
      goto LABEL_196;
    }
  }
  if ( v51 || !v40 )
    v17 = v56;
  *v17 = 0;
  *v58 = v52;
  if ( v63 >= 0x10 )
    operator delete(v62[0]);
  return 0LL;
}
