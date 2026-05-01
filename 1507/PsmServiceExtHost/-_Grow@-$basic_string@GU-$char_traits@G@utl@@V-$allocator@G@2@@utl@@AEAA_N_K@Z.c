/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x180016700
 * Callers:
 *     ?resize@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_N_KG@Z @ 0x180016764 (-resize@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_N_KG@Z.c)
 * Callees:
 *     ?_GrowTo@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x180016650 (-_GrowTo@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA_N_K@Z.c)
 */

bool __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Grow(
        _QWORD *a1)
{
  char *v1; // rax
  unsigned __int64 v2; // rdx

  if ( (_QWORD *)*a1 == a1 + 2 )
    v1 = (char *)a1 + 30;
  else
    v1 = (char *)a1[2];
  v2 = 2 * ((__int64)&v1[-*a1] >> 1) + 1;
  if ( v2 < 0xE8 )
    v2 = 232LL;
  if ( v2 > 0x3FFFFFFFFFFFFFFELL )
    v2 = 0x3FFFFFFFFFFFFFFELL;
  return utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowTo(
           (__int64)a1,
           v2) != 0;
}
