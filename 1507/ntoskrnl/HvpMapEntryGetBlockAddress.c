/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1400CA830
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     HvpGetCellPaged @ 0x1404C2850 (HvpGetCellPaged.c)
 *     HvpCopyModifiedData @ 0x1406664C4 (HvpCopyModifiedData.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, BOOLEAN *a3, _DWORD *a4)
{
  unsigned __int64 Count; // rax
  BOOLEAN v8; // cl
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rtt

  if ( (a2[3].Count & 1) != 0 )
  {
    Count = a2[1].Count;
    v8 = 0;
  }
  else
  {
    _m_prefetchw(&a2[3]);
    v10 = a2[3].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v10 == _InterlockedCompareExchange64((volatile signed __int64 *)&a2[3], v10 + 2, v10) )
    {
      v8 = 1;
    }
    else
    {
      v8 = ExfAcquireRundownProtection(a2 + 3);
      if ( !v8 )
      {
        Count = a2[1].Count;
        goto LABEL_3;
      }
    }
    Count = a2[2].Count;
    *a4 = -1;
  }
LABEL_3:
  result = a2->Count + (Count & 0xFFFFFFFFFFFFFFF0uLL);
  *a3 = v8;
  return result;
}
