/*
 * XREFs of ?assign@?$_CharTraitsBase@GGG@utl@@SAPEAGPEAG_KG@Z @ 0x180004A94
 * Callers:
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 *     ?replace@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_K00G@Z @ 0x180039808 (-replace@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_K00G@Z.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall utl::_CharTraitsBase<unsigned short,unsigned short,unsigned short>::assign(
        _WORD *a1,
        __int64 a2,
        __int16 a3)
{
  _WORD *v4; // rdi
  __int64 i; // rcx

  if ( a2 )
  {
    v4 = a1;
    for ( i = a2; i; --i )
      *v4++ = a3;
  }
  return a1;
}
