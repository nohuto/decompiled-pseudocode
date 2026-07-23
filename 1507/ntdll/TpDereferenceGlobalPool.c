/*
 * XREFs of TpDereferenceGlobalPool @ 0x18007D790
 * Callers:
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x18007ED38 (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 */

void __fastcall TpDereferenceGlobalPool(PVOID a1, __int64 a2)
{
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 != TppPoolpGlobalPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    Ldr = NtCurrentPeb()->Ldr;
    if ( !Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter(Ldr, a2);
  }
  else
  {
    TppPoolpDereferenceGlobalPool((const void **)&TppPoolpGlobalPool, &TppPoolpGlobalPoolLock);
  }
}
