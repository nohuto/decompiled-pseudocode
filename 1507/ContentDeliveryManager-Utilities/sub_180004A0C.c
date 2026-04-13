/*
 * XREFs of sub_180004A0C @ 0x180004A0C
 * Callers:
 *     sub_180002DB0 @ 0x180002DB0 (sub_180002DB0.c)
 *     sub_180002E30 @ 0x180002E30 (sub_180002E30.c)
 *     sub_180002E90 @ 0x180002E90 (sub_180002E90.c)
 *     sub_18000B29C @ 0x18000B29C (sub_18000B29C.c)
 *     sub_180015BA0 @ 0x180015BA0 (sub_180015BA0.c)
 * Callees:
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180004C3C (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004CF0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy @ 0x180026528 (memcpy.c)
 */

_QWORD *__fastcall sub_180004A0C(_QWORD *a1, char *Src, size_t Size)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rcx
  bool v10; // cf
  _BYTE *v11; // rax

  v5 = a1;
  if ( Src )
  {
    v6 = a1[3] < 0x10uLL ? (char *)a1 : (char *)*a1;
    if ( Src >= v6 )
    {
      if ( a1[3] >= 0x10uLL )
        a1 = (_QWORD *)*a1;
      if ( (char *)a1 + v5[2] > Src )
        return (_QWORD *)sub_180004B28(v5);
    }
  }
  if ( Size == -1LL )
    std::vector<void *>::_Xlen(v5);
  if ( v5[3] >= Size )
  {
    if ( !Size )
    {
      v5[2] = 0LL;
      if ( v5[3] < 0x10uLL )
        v8 = v5;
      else
        v8 = (_BYTE *)*v5;
      *v8 = 0;
    }
  }
  else
  {
    std::string::_Copy(v5);
  }
  if ( Size )
  {
    if ( v5[3] < 0x10uLL )
      v9 = v5;
    else
      v9 = (_BYTE *)*v5;
    memcpy(v9, Src, Size);
    v10 = v5[3] < 0x10uLL;
    v5[2] = Size;
    if ( v10 )
      v11 = v5;
    else
      v11 = (_BYTE *)*v5;
    v11[Size] = 0;
  }
  return v5;
}
