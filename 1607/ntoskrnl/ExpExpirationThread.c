/*
 * XREFs of ExpExpirationThread @ 0x1406AD178
 * Callers:
 *     <none>
 * Callees:
 *     PsTerminateSystemThread @ 0x1404CFC1C (PsTerminateSystemThread.c)
 *     ExRaiseHardError @ 0x1406B61A0 (ExRaiseHardError.c)
 */

void __fastcall ExpExpirationThread(PVOID StartContext)
{
  NTSTATUS v1; // eax
  char v2; // [rsp+40h] [rbp+8h] BYREF

  if ( StartContext )
  {
    v1 = ExRaiseHardError(StartContext, 0LL, 0LL, 0LL, 1, &v2);
    PsTerminateSystemThread(v1);
  }
}
