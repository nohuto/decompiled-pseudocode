/*
 * XREFs of ACPIEcDisconnectGpeVector @ 0x1C009ADAC
 * Callers:
 *     ACPIEcInitOpRegionHandler @ 0x1C0007414 (ACPIEcInitOpRegionHandler.c)
 *     ACPIEcDisconnectInterrupt @ 0x1C009AE14 (ACPIEcDisconnectInterrupt.c)
 * Callees:
 *     ACPIVectorDisconnect @ 0x1C0057C50 (ACPIVectorDisconnect.c)
 */

__int64 __fastcall ACPIEcDisconnectGpeVector(__int64 a1)
{
  unsigned int *v2; // rcx
  __int64 result; // rax

  v2 = *(unsigned int **)(a1 + 72);
  if ( !v2 )
    return 0LL;
  result = ACPIVectorDisconnect(v2);
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
