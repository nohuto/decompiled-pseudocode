/*
 * XREFs of MiCombineCompareThread @ 0x140227B24
 * Callers:
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     MiTransientCombineAddress @ 0x14022C8AC (MiTransientCombineAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCombineCompareThread(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 24);
  if ( a1 <= v2 )
    return (unsigned int)-(a1 < v2);
  else
    return 1LL;
}
