/*
 * XREFs of ?_GrowTo@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x180002744
 * Callers:
 *     ?_Grow@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA_N_K@Z @ 0x1800027F4 (-_Grow@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA_N_K@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18002BC72 (memcpy_0.c)
 */

char __fastcall utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowTo(
        __int64 a1,
        __int64 a2)
{
  char v3; // di
  char *v5; // rsi
  __int64 v6; // rbx

  v3 = 0;
  if ( (unsigned __int64)(a2 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v5 = 0LL;
  else
    v5 = (char *)operator new(2 * (a2 + 1), (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v3 = 1;
    v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 1;
    memcpy_0(v5, *(const void **)a1, 2 * v6 + 2);
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(a1);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = &v5[2 * v6];
    *(_QWORD *)(a1 + 16) = &v5[2 * a2];
  }
  return v3;
}
