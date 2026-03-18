/*
 * XREFs of PsIsProcessInAppSilo @ 0x14067DF9C
 * Callers:
 *     <none>
 * Callees:
 *     PspIsServerSilo @ 0x1400B2DF8 (PspIsServerSilo.c)
 *     PsGetProcessSilo @ 0x14020F120 (PsGetProcessSilo.c)
 */

bool __fastcall PsIsProcessInAppSilo(__int64 a1)
{
  __int64 ProcessSilo; // rax
  char v2; // dl

  ProcessSilo = PsGetProcessSilo(a1);
  v2 = 0;
  if ( ProcessSilo )
    return !PspIsServerSilo(ProcessSilo);
  return v2;
}
