/*
 * XREFs of ?length@?$char_traits@D@std@@SA_KPEBD@Z @ 0x180068DC0
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x180068AD8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::char_traits<char>::length(_BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  if ( *a1 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a1[v3] );
    return v3;
  }
  return result;
}
