/*
 * XREFs of HvFreeDirtyData @ 0x14051A35C
 * Callers:
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140605EF4 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
