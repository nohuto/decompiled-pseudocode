/*
 * XREFs of PfSnCleanupPrefetchSectionInfo @ 0x14042D2D8
 * Callers:
 *     PfSnCleanupPrefetchHeader @ 0x14042D1C0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14047329C (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PfpOpenHandleClose @ 0x14042D5B8 (PfpOpenHandleClose.c)
 */

LONG_PTR __fastcall PfSnCleanupPrefetchSectionInfo(PVOID *a1, __int64 a2, char a3)
{
  LONG_PTR result; // rax
  PVOID v6; // rcx
  PVOID v7; // rcx

  if ( a3 )
  {
    if ( ((_DWORD)a1[6] & 1) != 0 )
    {
      ObfDereferenceObject(a1[4]);
      a1[4] = 0LL;
      *((_DWORD *)a1 + 12) &= ~1u;
    }
    if ( ((_DWORD)a1[6] & 2) != 0 )
    {
      ObfDereferenceObject(a1[5]);
      a1[5] = 0LL;
      *((_DWORD *)a1 + 12) &= ~2u;
    }
    result = *((unsigned int *)a1 + 12);
    if ( (result & 4) != 0 )
    {
      PfpOpenHandleClose(a1, a2 + 8);
      memset(a1, 0, 0x20uLL);
      result = 0x200000000LL;
      a1[3] = (PVOID)((unsigned __int64)a1[3] | 0x200000000LL);
      *((_DWORD *)a1 + 12) &= ~4u;
    }
  }
  else
  {
    v6 = a1[4];
    if ( v6 )
      result = ObfDereferenceObject(v6);
    v7 = a1[5];
    if ( v7 )
      result = ObfDereferenceObject(v7);
    if ( ((unsigned __int64)a1[3] & 0x400000000LL) != 0 )
      return PfpOpenHandleClose(a1, a2 + 8);
  }
  return result;
}
