/*
 * XREFs of ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18004FE84
 * Callers:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180051C8C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 * Callees:
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180021780 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 */

bool __fastcall std::wstring::_Grow(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( *(_QWORD *)(a1 + 24) >= a2 )
  {
    if ( !a2 )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( *(_QWORD *)(a1 + 24) >= 8uLL )
        a1 = *(_QWORD *)a1;
      *(_WORD *)a1 = 0;
    }
  }
  else
  {
    std::wstring::_Copy(a1, a2, *(void **)(a1 + 16));
  }
  return a2 != 0;
}
