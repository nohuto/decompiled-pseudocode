/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18005D764
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18005D53C (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180012D14 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180049D7C (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *Src,
        unsigned __int64 a2,
        char *a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // rsi
  char *v8; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char *v15; // rcx
  char *v16; // r15
  unsigned __int64 v17; // r13
  bool v18; // cf
  _WORD *v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  char *v27; // rdx
  char *v28; // rcx
  size_t v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  char *v34; // rsi
  _QWORD *v35; // rax
  _QWORD *v36; // rcx
  _QWORD *v37; // rcx
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rcx
  _QWORD *v41; // rdx
  _QWORD *v42; // rcx
  _QWORD *v43; // rax

  v7 = a4;
  v8 = (char *)Src[2];
  if ( (unsigned __int64)v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::wstring::_Xran();
  v13 = a6;
  if ( &v8[-a2] < a3 )
    a3 = &v8[-a2];
  v14 = v11 - a5;
  if ( v14 < a6 )
    v13 = v14;
  v15 = (char *)(v8 - a3);
  if ( ~v13 <= v8 - a3 )
    std::wstring::_Xlen();
  v16 = (char *)(&v8[-a2] - a3);
  v17 = (unsigned __int64)&v15[v13];
  if ( v8 < &v15[v13] )
  {
    if ( v17 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( Src[3] >= v17 )
    {
      if ( !v17 )
      {
        v18 = Src[3] < 8uLL;
        Src[2] = 0LL;
        if ( v18 )
          v19 = Src;
        else
          v19 = (_WORD *)*Src;
        *v19 = 0;
      }
    }
    else
    {
      std::wstring::_Copy((const void **)Src, (unsigned __int64)&v15[v13], v8);
    }
  }
  if ( Src != v7 )
  {
    if ( Src[3] < 8uLL )
      v20 = Src;
    else
      v20 = (_QWORD *)*Src;
    if ( Src[3] < 8uLL )
      v21 = Src;
    else
      v21 = (_QWORD *)*Src;
    if ( v16 )
      memmove((char *)v21 + 2 * a2 + 2 * v13, (char *)v20 + 2 * (_QWORD)&a3[a2], 2LL * (_QWORD)v16);
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( Src[3] < 8uLL )
      v22 = Src;
    else
      v22 = (_QWORD *)*Src;
    if ( v13 )
      memcpy_0((char *)v22 + 2 * a2, (char *)v7 + 2 * a5, 2 * v13);
    goto LABEL_109;
  }
  if ( v13 > (unsigned __int64)a3 )
  {
    if ( a5 > a2 )
    {
      v34 = &a3[a2];
      if ( (unsigned __int64)&a3[a2] > a5 )
      {
        if ( Src[3] < 8uLL )
          v37 = Src;
        else
          v37 = (_QWORD *)*Src;
        if ( Src[3] < 8uLL )
          v38 = Src;
        else
          v38 = (_QWORD *)*Src;
        if ( a3 )
          memmove((char *)v38 + 2 * a2, (char *)v37 + 2 * a5, 2LL * (_QWORD)a3);
        if ( Src[3] < 8uLL )
          v39 = Src;
        else
          v39 = (_QWORD *)*Src;
        if ( Src[3] < 8uLL )
          v40 = Src;
        else
          v40 = (_QWORD *)*Src;
        if ( v16 )
          memmove((char *)v40 + 2 * a2 + 2 * v13, (char *)v39 + 2 * (_QWORD)v34, 2LL * (_QWORD)v16);
        if ( Src[3] < 8uLL )
          v41 = Src;
        else
          v41 = (_QWORD *)*Src;
        if ( Src[3] < 8uLL )
          v42 = Src;
        else
          v42 = (_QWORD *)*Src;
        if ( (char *)v13 != a3 )
        {
          v29 = 2 * (v13 - (_QWORD)a3);
          v27 = (char *)v41 + 2 * a5 + 2 * v13;
          v28 = (char *)v42 + 2 * (_QWORD)v34;
          goto LABEL_108;
        }
        goto LABEL_109;
      }
      if ( Src[3] < 8uLL )
        v35 = Src;
      else
        v35 = (_QWORD *)*Src;
      if ( Src[3] < 8uLL )
        v36 = Src;
      else
        v36 = (_QWORD *)*Src;
      if ( v16 )
        memmove((char *)v36 + 2 * a2 + 2 * v13, (char *)v35 + 2 * (_QWORD)v34, 2LL * (_QWORD)v16);
      if ( Src[3] < 8uLL )
        v32 = Src;
      else
        v32 = (_QWORD *)*Src;
      if ( Src[3] < 8uLL )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
      v12 = v13 + a5 - (_QWORD)a3;
    }
    else
    {
      if ( Src[3] < 8uLL )
        v30 = Src;
      else
        v30 = (_QWORD *)*Src;
      if ( Src[3] < 8uLL )
        v31 = Src;
      else
        v31 = (_QWORD *)*Src;
      if ( v16 )
        memmove((char *)v31 + 2 * a2 + 2 * v13, (char *)v30 + 2 * (_QWORD)&a3[a2], 2LL * (_QWORD)v16);
      if ( Src[3] < 8uLL )
        v32 = Src;
      else
        v32 = (_QWORD *)*Src;
      if ( Src[3] < 8uLL )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
    }
    v27 = (char *)v32 + 2 * v12;
    v28 = (char *)v33 + 2 * a2;
    v29 = 2 * v13;
    goto LABEL_108;
  }
  if ( Src[3] < 8uLL )
    v23 = Src;
  else
    v23 = (_QWORD *)*Src;
  if ( Src[3] < 8uLL )
    v24 = Src;
  else
    v24 = (_QWORD *)*Src;
  if ( v13 )
    memmove((char *)v24 + 2 * a2, (char *)v23 + 2 * a5, 2 * v13);
  if ( Src[3] < 8uLL )
    v25 = Src;
  else
    v25 = (_QWORD *)*Src;
  if ( Src[3] < 8uLL )
    v26 = Src;
  else
    v26 = (_QWORD *)*Src;
  if ( v16 )
  {
    v27 = (char *)v25 + 2 * (_QWORD)&a3[a2];
    v28 = (char *)v26 + 2 * a2 + 2 * v13;
    v29 = 2LL * (_QWORD)v16;
LABEL_108:
    memmove(v28, v27, v29);
  }
LABEL_109:
  v18 = Src[3] < 8uLL;
  Src[2] = v17;
  if ( v18 )
    v43 = Src;
  else
    v43 = (_QWORD *)*Src;
  *((_WORD *)v43 + v17) = 0;
  return Src;
}
