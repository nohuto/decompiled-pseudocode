/*
 * XREFs of ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180019DF4
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18001A070 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180008E74 (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180009ABC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180019F6C (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rdi
  _QWORD *v6; // r14
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  _WORD *v11; // rax
  _WORD *v12; // rcx
  _WORD *v13; // rax
  _WORD *v14; // rcx
  _WORD *v15; // rax

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
    if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( a1[3] >= v8 )
    {
      if ( v8 )
      {
LABEL_28:
        if ( v6[3] >= 8uLL )
          v6 = (_QWORD *)*v6;
        if ( v7[3] < 8uLL )
          v14 = v7;
        else
          v14 = (_WORD *)*v7;
        memcpy_0(v14, (char *)v6 + 2 * a3, 2 * v8);
        goto LABEL_34;
      }
      a1[2] = 0LL;
      if ( a1[3] < 8uLL )
        v13 = a1;
      else
        v13 = (_WORD *)*a1;
      *v13 = 0;
    }
    else
    {
      std::wstring::_Copy(a1);
    }
    if ( !v8 )
      return v7;
    goto LABEL_28;
  }
  v9 = v8 + a3;
  if ( a1[2] < v8 + a3 )
    std::wstring::_Xran();
  a1[2] = v9;
  if ( a1[3] >= 8uLL )
    a1 = (_QWORD *)*a1;
  *((_WORD *)a1 + v9) = 0;
  v10 = v7[2];
  if ( v10 <= a3 )
  {
    v7[2] = 0LL;
    if ( v7[3] < 8uLL )
      v11 = v7;
    else
      v11 = (_WORD *)*v7;
    *v11 = 0;
    return v7;
  }
  if ( !a3 )
    return v7;
  if ( v7[3] < 8uLL )
    v12 = v7;
  else
    v12 = (_WORD *)*v7;
  v8 = v10 - a3;
  if ( v8 )
    memmove(v12, &v12[a3], 2 * v8);
LABEL_34:
  v7[2] = v8;
  if ( v7[3] < 8uLL )
    v15 = v7;
  else
    v15 = (_WORD *)*v7;
  v15[v8] = 0;
  return v7;
}
