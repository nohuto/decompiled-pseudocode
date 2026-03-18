/*
 * XREFs of MmContainingPageForReservedMapping @ 0x140214D0C
 * Callers:
 *     PnprCopyReservedMapping @ 0x1401FC738 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x1401FCD44 (PnprRecopyMappingReserve.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MmContainingPageForReservedMapping(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 *v2; // rcx
  unsigned __int64 v3; // r9
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = (unsigned __int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v3 = 2040LL;
  PteShadow = *v2;
  if ( (unsigned __int64)(v2 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v2, *v2);
  v6 = PteShadow;
  if ( (unsigned __int64)&v6 + v1 <= v3 )
    PteShadow = MiReadPteShadow(&v6, PteShadow);
  return (PteShadow >> 12) & 0xFFFFFFFFFLL;
}
