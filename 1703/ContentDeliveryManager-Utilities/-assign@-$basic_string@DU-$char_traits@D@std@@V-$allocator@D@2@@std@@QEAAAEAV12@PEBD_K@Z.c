/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x180012D28
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800068F0 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180006970 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800069D0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z @ 0x180023754 (--0failure@ios_base@std@@QEAA@PEBDAEBVerror_code@2@@Z.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800292B4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 *     ?do_grouping@?$numpunct@_W@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18002DAD0 (-do_grouping@-$numpunct@_W@std@@MEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180012F28 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180012FF4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800133F0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x18006F914 (memcpy_0.c)
 */

void **__fastcall std::string::assign(void **a1, char *Src, size_t Size)
{
  void **v5; // rbx
  char *v6; // rax
  _BYTE *v8; // rax
  void *v9; // rcx
  bool v10; // cf
  _BYTE *v11; // rax

  v5 = a1;
  if ( Src )
  {
    v6 = (unsigned __int64)a1[3] < 0x10 ? (char *)a1 : (char *)*a1;
    if ( Src >= v6 )
    {
      if ( (unsigned __int64)a1[3] >= 0x10 )
        a1 = (void **)*a1;
      if ( (char *)a1 + (unsigned __int64)v5[2] > Src )
        return (void **)std::string::assign(v5);
    }
  }
  if ( Size == -1LL )
    std::wstring::_Xlen(v5);
  if ( (unsigned __int64)v5[3] >= Size )
  {
    if ( Size )
    {
LABEL_19:
      if ( (unsigned __int64)v5[3] < 0x10 )
        v9 = v5;
      else
        v9 = *v5;
      if ( Size )
        memcpy_0(v9, Src, Size);
      v10 = (unsigned __int64)v5[3] < 0x10;
      v5[2] = (void *)Size;
      if ( v10 )
        v11 = v5;
      else
        v11 = *v5;
      v11[Size] = 0;
      return v5;
    }
    v5[2] = 0LL;
    if ( (unsigned __int64)v5[3] < 0x10 )
      v8 = v5;
    else
      v8 = *v5;
    *v8 = 0;
  }
  else
  {
    std::string::_Copy(v5);
  }
  if ( Size )
    goto LABEL_19;
  return v5;
}
