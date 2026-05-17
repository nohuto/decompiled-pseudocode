/*
 * XREFs of TpAllocPool @ 0x180004BD0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18000DE5C (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocPool(__int64 a1, __int64 a2)
{
  if ( a1 && !a2 && !NtCurrentPeb()->Ldr->ShutdownInProgress )
    return TpAllocPoolInternal(a1, 0LL);
  TppRaiseInvalidParameter();
  return 3221225485LL;
}
