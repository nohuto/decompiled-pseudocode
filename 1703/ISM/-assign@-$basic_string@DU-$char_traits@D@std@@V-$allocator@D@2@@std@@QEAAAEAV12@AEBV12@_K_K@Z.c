/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x180021994
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x180020194 (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     ?_Xran@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021C4C (-_Xran@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memcpy_0 @ 0x18009EAF8 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  unsigned __int64 v4; // rax
  size_t v5; // rsi
  _QWORD *v7; // r15
  _QWORD *v8; // rbx
  size_t v9; // rax
  size_t v10; // rax
  unsigned __int64 v11; // rsi
  _BYTE *v12; // rax
  char *v13; // rcx
  void *v14; // rcx
  _QWORD *v15; // rax

  v4 = a2[2];
  v5 = a4;
  v7 = a2;
  v8 = a1;
  if ( v4 < a3 )
    std::wstring::_Xran();
  v9 = v4 - a3;
  if ( v9 < a4 )
    v5 = v9;
  if ( a1 != a2 )
  {
    if ( !v5 )
    {
      a1[2] = 0LL;
      if ( a1[3] >= 0x10uLL )
      {
        v12 = (_BYTE *)*a1;
        goto LABEL_20;
      }
LABEL_19:
      v12 = v8;
      goto LABEL_20;
    }
    if ( a1[3] < v5 )
      std::string::_Copy(a1);
    if ( v7[3] >= 0x10uLL )
      v7 = (_QWORD *)*v7;
    if ( v8[3] < 0x10uLL )
      v14 = v8;
    else
      v14 = (void *)*v8;
    memcpy_0(v14, (char *)v7 + a3, v5);
    goto LABEL_29;
  }
  v10 = a3 + v5;
  if ( a1[2] < a3 + v5 )
    std::wstring::_Xran();
  a1[2] = v10;
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  *((_BYTE *)a1 + v10) = 0;
  v11 = v8[2];
  if ( v11 <= a3 )
  {
    v8[2] = 0LL;
    if ( v8[3] >= 0x10uLL )
    {
      v12 = (_BYTE *)*v8;
LABEL_20:
      *v12 = 0;
      return v8;
    }
    goto LABEL_19;
  }
  if ( a3 )
  {
    if ( v8[3] < 0x10uLL )
      v13 = (char *)v8;
    else
      v13 = (char *)*v8;
    v5 = v11 - a3;
    memmove(v13, &v13[a3], v5);
LABEL_29:
    v8[2] = v5;
    if ( v8[3] < 0x10uLL )
      v15 = v8;
    else
      v15 = (_QWORD *)*v8;
    *((_BYTE *)v15 + v5) = 0;
  }
  return v8;
}
