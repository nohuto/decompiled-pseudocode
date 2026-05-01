/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180009784
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800093A0 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800093F0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180009960 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180009ABC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::string(_QWORD *a1, _BYTE *Src)
{
  _QWORD *v3; // rbx
  size_t v4; // rdi
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rcx
  _BYTE *v9; // rax

  a1[2] = 0LL;
  a1[3] = 15LL;
  v3 = a1;
  *(_BYTE *)a1 = 0;
  if ( *Src )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
  }
  else
  {
    v4 = 0LL;
  }
  v5 = a1[3];
  if ( v5 < 0x10 )
    v6 = a1;
  else
    v6 = (_QWORD *)*a1;
  if ( Src >= (_BYTE *)v6 )
  {
    if ( v5 >= 0x10 )
      a1 = (_QWORD *)*a1;
    if ( (char *)a1 + v3[2] > Src )
    {
      std::string::assign(v3);
      return v3;
    }
  }
  if ( v4 == -1LL )
    std::wstring::_Xlen();
  if ( v5 < v4 )
  {
    std::string::_Copy(v3);
    goto LABEL_21;
  }
  if ( !v4 )
  {
    v3[2] = 0LL;
    if ( v5 < 0x10 )
      v7 = v3;
    else
      v7 = (_BYTE *)*v3;
    *v7 = 0;
LABEL_21:
    if ( !v4 )
      return v3;
  }
  if ( v3[3] < 0x10uLL )
    v8 = v3;
  else
    v8 = (_BYTE *)*v3;
  memcpy_0(v8, Src, v4);
  v3[2] = v4;
  if ( v3[3] < 0x10uLL )
    v9 = v3;
  else
    v9 = (_BYTE *)*v3;
  v9[v4] = 0;
  return v3;
}
