/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800049F8
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800048DC (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800049E0 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?erase@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0@Z @ 0x180004B24 (-erase@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004BC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

void **__fastcall std::string::assign(void **a1, void **a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // rsi
  void **v7; // rbx
  size_t v8; // rdi
  size_t v9; // rax
  bool v10; // cf
  _BYTE *v11; // rax
  void *v12; // rcx
  void **v13; // rax

  v4 = (unsigned __int64)a2[2];
  v6 = a2;
  v7 = a1;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v8 = v4 - a3;
  if ( a4 < v8 )
    v8 = a4;
  if ( a1 == a2 )
  {
    v9 = v8 + a3;
    if ( (unsigned __int64)a1[2] < v8 + a3 )
      std::wstring::_Xran();
    v10 = (unsigned __int64)a1[3] < 0x10;
    a1[2] = (void *)v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_BYTE *)a1 + v9) = 0;
    std::string::erase(v7, 0LL);
    return v7;
  }
  if ( v8 == -1LL )
    std::wstring::_Xlen(a1);
  if ( (unsigned __int64)a1[3] < v8 )
  {
    std::string::_Copy(a1);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    a1[2] = 0LL;
    if ( (unsigned __int64)a1[3] < 0x10 )
      v11 = a1;
    else
      v11 = *a1;
    *v11 = 0;
LABEL_17:
    if ( !v8 )
      return v7;
  }
  if ( (unsigned __int64)v6[3] >= 0x10 )
    v6 = (void **)*v6;
  if ( (unsigned __int64)v7[3] < 0x10 )
    v12 = v7;
  else
    v12 = *v7;
  memcpy_0(v12, (char *)v6 + a3, v8);
  v10 = (unsigned __int64)v7[3] < 0x10;
  v7[2] = (void *)v8;
  if ( v10 )
    v13 = v7;
  else
    v13 = (void **)*v7;
  *((_BYTE *)v13 + v8) = 0;
  return v7;
}
