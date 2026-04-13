/*
 * XREFs of sub_18001702C @ 0x18001702C
 * Callers:
 *     sub_180018A44 @ 0x180018A44 (sub_180018A44.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memset @ 0x18002654C (memset.c)
 */

_QWORD *__fastcall sub_18001702C(_QWORD *a1, size_t Size, char a3)
{
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  void *v8; // rcx
  bool v9; // cf
  _QWORD *v10; // rax

  if ( Size == -1LL )
    std::vector<void *>::_Xlen();
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
      memset(v8, a3, Size);
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
