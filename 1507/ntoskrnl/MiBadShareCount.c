/*
 * XREFs of MiBadShareCount @ 0x140226228
 * Callers:
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     MiDeleteTopLevelPage @ 0x14020F0E8 (MiDeleteTopLevelPage.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MiBadShareCount(__int64 a1)
{
  KeBugCheckEx(
    0x4Eu,
    0x99uLL,
    (a1 + 0x58000000000LL) / 48,
    *(_BYTE *)(a1 + 34) & 7,
    *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL);
}
