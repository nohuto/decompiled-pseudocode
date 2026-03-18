/*
 * XREFs of ??1?$PagedPoolZeroedArray@PEAVDXGSYNCOBJECT@@$03@@QEAA@XZ @ 0x1C00C8C40
 * Callers:
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z @ 0x1C00C7330 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PagedPoolZeroedArray<DXGSYNCOBJECT *,4>::~PagedPoolZeroedArray<DXGSYNCOBJECT *,4>(PVOID *a1)
{
  if ( *a1 != a1 + 1 )
  {
    if ( *a1 )
      ExFreePoolWithTag(*a1, 0);
  }
}
