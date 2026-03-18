/*
 * XREFs of MiDeleteDirectMapFixupPfn @ 0x1401F48FC
 * Callers:
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiFreeRelocations @ 0x14052CC54 (MiFreeRelocations.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 *     MiRemoveLockedPageCharge @ 0x14004D1E0 (MiRemoveLockedPageCharge.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 */

__int64 __fastcall MiDeleteDirectMapFixupPfn(__int64 a1)
{
  volatile signed __int64 *v2; // rdi
  unsigned __int8 v3; // si
  char v4; // dl
  __int64 result; // rax

  v2 = (volatile signed __int64 *)(a1 + 24);
  v3 = MiLockPageInline(a1);
  v4 = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_BYTE *)(a1 + 34) = v4;
  if ( (unsigned int)MiRemoveLockedPageCharge(a1) )
    MiInsertPageInFreeOrZeroedList((a1 + 0x58000000000LL) / 48, 2);
  _InterlockedAnd64(v2, 0x7FFFFFFFFFFFFFFFuLL);
  result = v3;
  __writecr8(v3);
  return result;
}
