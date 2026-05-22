/*
 * XREFs of ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180046630
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180043968 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180021980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180021C60 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     sprintf_s @ 0x18009D964 (sprintf_s.c)
 *     _scprintf @ 0x18009D9B8 (_scprintf.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Floating_to_string<float>(_QWORD *Src, __int64 a2, float a3)
{
  int v4; // eax
  unsigned __int64 v5; // rsi
  int v6; // edx
  size_t v7; // rdi
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  void *v10; // rcx
  _QWORD *v11; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rcx
  size_t v14; // rdi
  _BYTE *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax

  v4 = scprintf("%f", a3);
  v5 = v4;
  v6 = v4 + 1;
  v7 = v4 + 1;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  if ( v7 == -1LL )
    std::wstring::_Xlen();
  if ( v4 == -1 )
  {
    Src[2] = 0LL;
    if ( Src[3] < 0x10uLL )
      v8 = Src;
    else
      v8 = (_BYTE *)*Src;
    *v8 = 0;
  }
  else
  {
    if ( Src[3] < (unsigned __int64)v6 )
      std::string::_Copy((const void **)Src, v6);
    if ( v7 == 1 )
    {
      if ( Src[3] < 0x10uLL )
        v9 = Src;
      else
        v9 = (_BYTE *)*Src;
      *v9 = 0;
    }
    else
    {
      if ( Src[3] < 0x10uLL )
        v10 = Src;
      else
        v10 = (void *)*Src;
      memset(v10, 0, v7);
    }
    Src[2] = v7;
    if ( Src[3] < 0x10uLL )
      v11 = Src;
    else
      v11 = (_QWORD *)*Src;
    *((_BYTE *)v11 + v7) = 0;
  }
  if ( Src[3] < 0x10uLL )
    v12 = (char *)Src;
  else
    v12 = (char *)*Src;
  sprintf_s(v12, v7, "%f", a3);
  v13 = Src[2];
  if ( v5 <= v13 )
  {
    Src[2] = v5;
LABEL_48:
    if ( Src[3] < 0x10uLL )
      v19 = Src;
    else
      v19 = (_QWORD *)*Src;
    *((_BYTE *)v19 + v5) = 0;
    return Src;
  }
  v14 = v5 - v13;
  if ( ~v13 <= v5 - v13 )
    std::wstring::_Xlen();
  if ( v14 )
  {
    if ( v5 )
    {
      if ( Src[3] < v5 )
        std::string::_Copy((const void **)Src, v5);
      v16 = Src[2];
      if ( v14 == 1 )
      {
        if ( Src[3] < 0x10uLL )
          v17 = Src;
        else
          v17 = (_QWORD *)*Src;
        *((_BYTE *)v17 + v16) = 0;
      }
      else
      {
        if ( Src[3] < 0x10uLL )
          v18 = Src;
        else
          v18 = (_QWORD *)*Src;
        memset((char *)v18 + v16, 0, v14);
      }
      Src[2] = v5;
      goto LABEL_48;
    }
    Src[2] = 0LL;
    if ( Src[3] < 0x10uLL )
      v15 = Src;
    else
      v15 = (_BYTE *)*Src;
    *v15 = 0;
  }
  return Src;
}
