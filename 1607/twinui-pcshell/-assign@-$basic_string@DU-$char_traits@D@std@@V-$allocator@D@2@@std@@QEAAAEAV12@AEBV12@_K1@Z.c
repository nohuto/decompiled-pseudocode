/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180009960
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180009784 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180008E74 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180009ABC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  size_t v8; // rdi
  size_t v9; // rax
  unsigned __int64 v10; // rdi
  _BYTE *v11; // rax
  char *v12; // rcx
  _BYTE *v13; // rax
  _BYTE *v14; // rcx
  _BYTE *v15; // rax

  v4 = a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 != a2 )
  {
    if ( v8 == -1LL )
      std::wstring::_Xlen();
    if ( a1[3] >= v8 )
    {
      if ( v8 )
      {
LABEL_28:
        if ( v6[3] >= 0x10uLL )
          v6 = (_QWORD *)*v6;
        if ( v7[3] < 0x10uLL )
          v14 = v7;
        else
          v14 = (_BYTE *)*v7;
        memcpy_0(v14, (char *)v6 + a3, v8);
        goto LABEL_34;
      }
      a1[2] = 0LL;
      if ( a1[3] < 0x10uLL )
        v13 = a1;
      else
        v13 = (_BYTE *)*a1;
      *v13 = 0;
    }
    else
    {
      std::string::_Copy(a1);
    }
    if ( !v8 )
      return v7;
    goto LABEL_28;
  }
  v9 = v8 + a3;
  if ( a1[2] < v8 + a3 )
    std::wstring::_Xran();
  a1[2] = v9;
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  *((_BYTE *)a1 + v9) = 0;
  v10 = v7[2];
  if ( v10 <= a3 )
  {
    v7[2] = 0LL;
    if ( v7[3] < 0x10uLL )
      v11 = v7;
    else
      v11 = (_BYTE *)*v7;
    *v11 = 0;
    return v7;
  }
  if ( !a3 )
    return v7;
  if ( v7[3] < 0x10uLL )
    v12 = (char *)v7;
  else
    v12 = (char *)*v7;
  v8 = v10 - a3;
  if ( v8 )
    memmove(v12, &v12[a3], v8);
LABEL_34:
  v7[2] = v8;
  if ( v7[3] < 0x10uLL )
    v15 = v7;
  else
    v15 = (_BYTE *)*v7;
  v15[v8] = 0;
  return v7;
}
