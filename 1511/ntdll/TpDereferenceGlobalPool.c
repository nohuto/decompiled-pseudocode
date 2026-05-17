/*
 * XREFs of TpDereferenceGlobalPool @ 0x180082298
 * Callers:
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     RtlpTpIoDllLoaded @ 0x18008D098 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18008DD2C (RtlpTpIoAlloc.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18000CCFC (TppPoolpDereferenceGlobalPool.c)
 */

struct _PEB *__fastcall TpDereferenceGlobalPool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PEB *result; // rax
  _PEB_LDR_DATA *Ldr; // rcx

  if ( a1 == TppPoolpGlobalPool && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return (struct _PEB *)TppPoolpDereferenceGlobalPool(
                            (const void **)&TppPoolpGlobalPool,
                            (__int64)&TppPoolpGlobalPoolLock);
  result = NtCurrentPeb();
  Ldr = result->Ldr;
  if ( !Ldr->ShutdownInProgress )
    return (struct _PEB *)TppRaiseInvalidParameter(Ldr, a2, a3, a4);
  return result;
}
