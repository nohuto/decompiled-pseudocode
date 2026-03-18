/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x140040CA0
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     HvpGetCellPaged @ 0x140406480 (HvpGetCellPaged.c)
 *     HvpCopyModifiedData @ 0x1405EDFD4 (HvpCopyModifiedData.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, BOOLEAN *a3, _DWORD *a4)
{
  unsigned __int64 Count; // rax
  BOOLEAN v8; // cl
  unsigned __int64 result; // rax

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v8 = 0;
  }
  else
  {
    v8 = ExAcquireRundownProtection(a2 + 3);
    if ( v8 )
    {
      Count = a2[2].Count;
      *a4 = -1;
    }
    else
    {
      Count = a2[1].Count;
    }
  }
  result = a2->Count + (Count & 0xFFFFFFFFFFFFFFF0uLL);
  *a3 = v8;
  return result;
}
