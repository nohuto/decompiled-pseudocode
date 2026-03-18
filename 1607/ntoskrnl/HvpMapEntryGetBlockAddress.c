/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x14002D380
 * Callers:
 *     HvpGetCellPaged @ 0x14043FC60 (HvpGetCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x1406128AC (HvpCopyModifiedData.c)
 * Callees:
 *     HvpIncrementCellReferenceCount @ 0x14002D6BC (HvpIncrementCellReferenceCount.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, _WORD *a3)
{
  unsigned __int64 Count; // rbx
  BOOLEAN v6; // al

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v6 = 0;
  }
  else
  {
    v6 = ExAcquireRundownProtection(a2 + 3);
    if ( v6 )
      Count = a2[2].Count;
    else
      Count = a2[1].Count;
  }
  *a3 = *a3 & 0xFFFD | (2 * (v6 & 1)) | 1;
  HvpIncrementCellReferenceCount();
  return (Count & 0xFFFFFFFFFFFFFFF0uLL) + a2->Count;
}
