/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x140711F00
 * Callers:
 *     <none>
 * Callees:
 *     ViKeInjectStatusAlerted @ 0x140712F08 (ViKeInjectStatusAlerted.c)
 */

__int64 __fastcall VerifierKeDelayExecutionThread(__int64 a1, char a2, __int64 a3)
{
  char v3; // si
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = a1;
  LOBYTE(a1) = a2;
  if ( (unsigned int)ViKeInjectStatusAlerted(a1) )
    return 257LL;
  LOBYTE(v6) = a2;
  LOBYTE(v7) = v3;
  return pXdvKeDelayExecutionThread(v7, v6, a3);
}
