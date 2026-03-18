/*
 * XREFs of Win32FreePagedLookasideListImpl @ 0x1C01277F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32FreePagedLookasideListImpl(char *a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rbx

  v1 = (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator;
  ExDeletePagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 16));
  NSInstrumentation::CLeakTrackingAllocator::Free(v1, a1);
}
