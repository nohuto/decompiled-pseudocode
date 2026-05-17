/*
 * XREFs of TpDereferenceGlobalPool @ 0x18007D790
 * Callers:
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpIoAlloc @ 0x18007E7CC (RtlpTpIoAlloc.c)
 *     RtlpTpIoDllLoaded @ 0x18007ED38 (RtlpTpIoDllLoaded.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18003DA5C (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool(
                            (const void **)&TppPoolpGlobalPool,
                            (char *)&TppPoolpGlobalPoolLock,
                            a3,
                            a4);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3);
  return result;
}
