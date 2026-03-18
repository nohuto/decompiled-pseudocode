/*
 * XREFs of ?_RemoveAllocationFromLookup@UmfdAllocation@@CAXPEAX00@Z @ 0x1C02D6F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C02D53A0 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 */

void __fastcall UmfdAllocation::_RemoveAllocationFromLookup(unsigned __int64 a1, char *a2, void *a3)
{
  void *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  NSInstrumentation::CPointerHashTable::Remove(UmfdAllocation::s_allocationLookup, a1, &v4);
  *(_QWORD *)(a2 - 12) = 0LL;
}
