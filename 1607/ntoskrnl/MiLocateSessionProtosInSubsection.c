/*
 * XREFs of MiLocateSessionProtosInSubsection @ 0x1401F5114
 * Callers:
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F4EDC (MiGetSharedProtosAtDpcLevel.c)
 *     MiCreatePerSessionProtos @ 0x140661C44 (MiCreatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140661EB8 (MiDereferenceSubsectionProtos.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiLocateSessionProtosInSubsection(__int64 a1, unsigned int a2)
{
  __int64 *result; // rax
  unsigned int v3; // ecx

  result = *(__int64 **)(a1 + 24);
  while ( result )
  {
    v3 = *((_DWORD *)result + 6);
    if ( a2 > v3 )
    {
      result = (__int64 *)result[1];
    }
    else
    {
      if ( a2 >= v3 )
        return result;
      result = (__int64 *)*result;
    }
  }
  return 0LL;
}
