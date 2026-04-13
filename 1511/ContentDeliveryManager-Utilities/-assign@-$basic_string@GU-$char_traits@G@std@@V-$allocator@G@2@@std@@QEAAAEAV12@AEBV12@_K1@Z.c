/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800162C4
 * Callers:
 *     ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180012890 (-substr@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA-AV12@_K0@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800163F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800049E0 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0@Z @ 0x180017780 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x1800182C4 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

void **__fastcall std::wstring::assign(void **a1, void **a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  void **v6; // r14
  void **v7; // rbx
  unsigned __int64 v8; // rdi
  void *v9; // rax
  bool v10; // cf
  _WORD *v11; // rax
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
    v9 = (void *)(v8 + a3);
    if ( (unsigned __int64)a1[2] < v8 + a3 )
      std::wstring::_Xran();
    v10 = (unsigned __int64)a1[3] < 8;
    a1[2] = v9;
    if ( !v10 )
      a1 = (void **)*a1;
    *((_WORD *)a1 + (_QWORD)v9) = 0;
    std::wstring::erase(v7, 0LL);
    return v7;
  }
  if ( v8 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  if ( (unsigned __int64)a1[3] < v8 )
  {
    std::wstring::_Copy(a1);
    goto LABEL_17;
  }
  if ( !v8 )
  {
    v10 = (unsigned __int64)a1[3] < 8;
    a1[2] = 0LL;
    if ( v10 )
      v11 = a1;
    else
      v11 = *a1;
    *v11 = 0;
LABEL_17:
    if ( !v8 )
      return v7;
  }
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  if ( (unsigned __int64)v7[3] < 8 )
    v12 = v7;
  else
    v12 = *v7;
  memcpy_0(v12, (char *)v6 + 2 * a3, 2 * v8);
  v10 = (unsigned __int64)v7[3] < 8;
  v7[2] = (void *)v8;
  if ( v10 )
    v13 = v7;
  else
    v13 = (void **)*v7;
  *((_WORD *)v13 + v8) = 0;
  return v7;
}
