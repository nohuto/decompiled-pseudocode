/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x1406C5EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ViKeInjectStatusAlerted @ 0x1406C6EB8 (ViKeInjectStatusAlerted.c)
 */

NTSTATUS __fastcall VerifierKeDelayExecutionThread(__int64 a1, BOOLEAN a2, LARGE_INTEGER *a3)
{
  KPROCESSOR_MODE v3; // si

  v3 = a1;
  LOBYTE(a1) = a2;
  if ( (unsigned int)ViKeInjectStatusAlerted(a1) )
    return 257;
  else
    return pXdvKeDelayExecutionThread(v3, a2, a3);
}
