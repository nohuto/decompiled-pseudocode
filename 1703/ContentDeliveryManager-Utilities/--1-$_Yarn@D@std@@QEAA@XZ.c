/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x18002C21C
 * Callers:
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x180071023 (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x180071033 (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x180071043 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x180071053 (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x180071063 (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x180071073 (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<char>::~_Yarn<char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
