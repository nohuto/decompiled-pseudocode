/*
 * XREFs of MiIncreaseNonPagedPoolUsage @ 0x14010137C
 * Callers:
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiCountNonPagedPool @ 0x140101A3C (MiCountNonPagedPool.c)
 */

__int64 __fastcall MiIncreaseNonPagedPoolUsage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r8
  __int64 v6; // rax

  if ( !a2 )
  {
    v4 = (a3 + 511) & 0xFFFFFFFFFFFFFE00uLL;
    v5 = (a4 + a3) & 0xFFFFFFFFFFFFFE00uLL;
    v6 = a4;
    if ( v5 > v4 )
      v6 = a4 + v4 - v5;
    *(_QWORD *)(a1 + 296) += v6;
  }
  *(_QWORD *)(a1 + 280) += a4;
  if ( (unsigned __int64)MiCountNonPagedPool(a4, 1LL) >= 0x300 )
    return 0LL;
  ++dword_140326514;
  return 1LL;
}
