/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800048DC
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180002E30 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180002EB0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180002F10 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x18000AEBC (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     ?do_grouping@?$numpunct@G@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180015F60 (-do_grouping@-$numpunct@G@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800049F8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180004B0C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180004BC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800280A8 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::assign(_QWORD *a1, char *Src, size_t Size)
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
        return (_QWORD *)std::string::assign(v5);
    }
  }
  if ( Size == -1LL )
    std::wstring::_Xlen(v5);
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
    memcpy_0(v9, Src, Size);
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
