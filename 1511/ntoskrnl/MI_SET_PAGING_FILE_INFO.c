/*
 * XREFs of MI_SET_PAGING_FILE_INFO @ 0x1400F5214
 * Callers:
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x1400AD8D0 (MiConfirmPageIsZero.c)
 *     MiFindFreePageFileSpace @ 0x1400F4EDC (MiFindFreePageFileSpace.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     MiUpdatePfnBackingStore @ 0x14010B604 (MiUpdatePfnBackingStore.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC (MiTrimUnusedPageFileRegionsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_SET_PAGING_FILE_INFO(__int64 a1, _DWORD *a2, __int64 a3, int a4, char a5)
{
  __int16 v5; // r8
  __int64 result; // rax

  v5 = *(_WORD *)(a3 + 204);
  *(_QWORD *)a1 = 0LL;
  result = *a2 & 0x3E0;
  *(_QWORD *)a1 = result | (2LL * (v5 & 0xF));
  *(_DWORD *)(a1 + 4) = a4;
  if ( (a5 & 1) != 0 )
    *(_QWORD *)a1 |= 0x2000uLL;
  if ( (a5 & 2) != 0 )
    *(_QWORD *)a1 |= 0x1000uLL;
  return result;
}
