/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x1406B742C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1406BF180 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x1406BFC10 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x1406C0FB8 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x1406C121C (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1406C81E4 (VfIrpDatabaseEntryReleaseLock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfUtilAddressRangeRemoveCheckEmpty(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 != *a1 )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  result = a2 + 208;
  if ( a2 + 208 != a1[1] )
    return VfUtilAddressRangeRemove(a1, a2, 208LL);
  *a1 = 0LL;
  a1[1] = 0LL;
  return result;
}
