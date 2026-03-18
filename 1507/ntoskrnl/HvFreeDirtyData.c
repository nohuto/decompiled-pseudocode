/*
 * XREFs of HvFreeDirtyData @ 0x14044C574
 * Callers:
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x14065DD48 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
