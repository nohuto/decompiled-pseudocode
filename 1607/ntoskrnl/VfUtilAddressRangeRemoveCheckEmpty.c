/*
 * XREFs of VfUtilAddressRangeRemoveCheckEmpty @ 0x140702C1C
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B1D8 (IovpCompleteRequest2.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     VfPendingMoreProcessingRequired @ 0x14070D020 (VfPendingMoreProcessingRequired.c)
 *     ViPendingCompleteAfterWait @ 0x14070D284 (ViPendingCompleteAfterWait.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140716B8C (VfIrpDatabaseEntryReleaseLock.c)
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
