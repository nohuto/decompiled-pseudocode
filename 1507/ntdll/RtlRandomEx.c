/*
 * XREFs of RtlRandomEx @ 0x18006E540
 * Callers:
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800E16EC (RtlpHeapTrkGenerateHashRandoms.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall RtlRandomEx(__int32 *a1)
{
  __int64 v2; // r8
  __int32 v3; // r9d
  __int32 v4; // r9d
  int v5; // ecx
  unsigned int v8; // r9d

  RtlRunOnceExecuteOnce(
    &RtlpRandomExInit,
    (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpInitRandomExVector,
    0LL,
    0LL);
  v2 = RtlpRandomExAuxVarY & 0x7F;
  v3 = (2147483629 * (unsigned __int64)(unsigned int)*a1 + 2147483587) % 0x7FFFFFFF;
  *a1 = v3;
  v4 = _InterlockedExchange(&RtlpRandomExConstantVector[v2], v3);
  if ( MEMORY[0x7FFE0290] )
  {
    v5 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      if ( _CF )
        break;
      if ( (unsigned int)++v5 >= 0xA )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(_RDX) = 0;
  }
  v8 = _RDX ^ v4;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v8);
  return v8;
}
