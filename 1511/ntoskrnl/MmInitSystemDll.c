/*
 * XREFs of MmInitSystemDll @ 0x1407628DC
 * Callers:
 *     Phase1InitializationIoReady @ 0x140763CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140043280 (ObFastDereferenceObject.c)
 *     PsQuerySystemDllInfo @ 0x14044704C (PsQuerySystemDllInfo.c)
 *     PspReferenceSystemDll @ 0x140464590 (PspReferenceSystemDll.c)
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
    qword_1402FE680 = *(_QWORD *)(v1 + 24);
    if ( result )
      return ObFastDereferenceObject((signed __int64 *)(v1 - 16), result);
  }
  return result;
}
