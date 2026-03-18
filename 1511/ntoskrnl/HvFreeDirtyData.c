/*
 * XREFs of HvFreeDirtyData @ 0x1403BA3D4
 * Callers:
 *     CmpDeleteHive @ 0x140002C90 (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x1405E68E8 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 2864);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 2856) = 0;
    *(_QWORD *)(a1 + 2864) = 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 2880), 0);
    *(_QWORD *)(a1 + 2880) = 0LL;
    *(_DWORD *)(a1 + 2888) = 0;
  }
}
