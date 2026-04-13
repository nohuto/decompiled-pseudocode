/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180029408
 * Callers:
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x18002A384 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18000D980 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18000DAAC (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, size_t Size, char a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  void *v8; // rcx
  bool v9; // cf
  _QWORD *v10; // rax

  if ( Size == -1LL )
    std::wstring::_Xlen();
  if ( a1[3] >= Size )
  {
    if ( !Size )
    {
      a1[2] = 0LL;
      if ( a1[3] < 0x10uLL )
        v6 = a1;
      else
        v6 = (_BYTE *)*a1;
      *v6 = 0;
    }
  }
  else
  {
    std::string::_Copy((const void **)a1, Size, a1[2]);
  }
  if ( Size )
  {
    if ( Size == 1 )
    {
      if ( a1[3] < 0x10uLL )
        v7 = a1;
      else
        v7 = (_BYTE *)*a1;
      *v7 = a3;
    }
    else
    {
      if ( a1[3] < 0x10uLL )
        v8 = a1;
      else
        v8 = (void *)*a1;
      memset_0(v8, a3, Size);
    }
    v9 = a1[3] < 0x10uLL;
    a1[2] = Size;
    if ( v9 )
      v10 = a1;
    else
      v10 = (_QWORD *)*a1;
    *((_BYTE *)v10 + Size) = 0;
  }
  return a1;
}
