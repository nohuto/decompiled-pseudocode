/*
 * XREFs of HvResetDirtyData @ 0x1403D0520
 * Callers:
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     HvSyncHive @ 0x1405E6E00 (HvSyncHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14001ABDC (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140492D40 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 80) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 72));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 88));
    *(_DWORD *)(a1 + 88) = 0;
  }
  return result;
}
