/*
 * XREFs of ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18006686C
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x180066724 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@SAXXZ @ 0x180066858 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800669E0 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::wstring::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  _WORD *v12; // rax
  _WORD *v13; // rcx
  unsigned __int64 v14; // rsi
  bool v15; // cf
  _WORD *v16; // rax
  _WORD *v17; // rcx
  _WORD *v18; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  if ( v9 < a4 )
    v5 = v9;
  if ( a1 == a2 )
  {
    v10 = a3 + v5;
    if ( a1[2] < a3 + v5 )
      std::wstring::_Xran();
    a1[2] = v10;
    if ( a1[3] >= 8uLL )
      a1 = (_QWORD *)*a1;
    *((_WORD *)a1 + v10) = 0;
    v11 = v8[2];
    if ( v11 <= a3 )
    {
      v8[2] = 0LL;
      if ( v8[3] >= 8uLL )
      {
        v12 = (_WORD *)*v8;
LABEL_23:
        *v12 = 0;
        return v8;
      }
      goto LABEL_22;
    }
    if ( a3 )
    {
      if ( v8[3] < 8uLL )
        v13 = v8;
      else
        v13 = (_WORD *)*v8;
      v14 = v11 - a3;
      memmove(v13, &v13[a3], 2 * v14);
      v15 = v8[3] < 8uLL;
      v8[2] = v14;
      if ( v15 )
        v16 = v8;
      else
        v16 = (_WORD *)*v8;
      v16[v14] = 0;
    }
  }
  else
  {
    if ( !v5 )
    {
      v15 = a1[3] < 8uLL;
      a1[2] = 0LL;
      if ( !v15 )
      {
        v12 = (_WORD *)*a1;
        goto LABEL_23;
      }
LABEL_22:
      v12 = v8;
      goto LABEL_23;
    }
    if ( a1[3] < v5 )
      std::wstring::_Copy(a1);
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( v8[3] < 8uLL )
      v17 = v8;
    else
      v17 = (_WORD *)*v8;
    memcpy_0(v17, (char *)v7 + 2 * a3, 2 * v5);
    v15 = v8[3] < 8uLL;
    v8[2] = v5;
    if ( v15 )
      v18 = v8;
    else
      v18 = (_WORD *)*v8;
    v18[v5] = 0;
  }
  return v8;
}
