/*
 * XREFs of ??1?$PagedPoolZeroedArray@I$0BA@@@QEAA@XZ @ 0x1C00A8034
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C00A7BD0 (DxgkSignalSynchronizationObjectFromGpu2.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<unsigned int,16>::~PagedPoolZeroedArray<unsigned int,16>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
