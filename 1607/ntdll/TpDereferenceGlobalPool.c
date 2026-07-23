/*
 * XREFs of TpDereferenceGlobalPool @ 0x180086728
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x180090038 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18009052C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18003B80C (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(PVOID a1)
{
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr);
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
