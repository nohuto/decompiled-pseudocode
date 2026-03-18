/*
 * XREFs of MmInitSystemDll @ 0x1407BCFB8
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407934EC (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x14045A7D4 (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x14046C06C (PspReferenceSystemDll.c)
 */

unsigned __int64 MmInitSystemDll()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // rbx

  result = PsQuerySystemDllInfo(0);
  v1 = result;
  if ( result )
  {
    result = PspReferenceSystemDll(result - 16);
    qword_140326960 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
