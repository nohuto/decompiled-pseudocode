/*
 * XREFs of VerifierKeDelayExecutionThread @ 0x1407480E4
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ViKeInjectStatusAlerted @ 0x140749C44 (ViKeInjectStatusAlerted.c)
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
