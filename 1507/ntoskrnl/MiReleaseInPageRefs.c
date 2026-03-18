/*
 * XREFs of MiReleaseInPageRefs @ 0x14012CE5C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14012CBCC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiDereferenceControlAreaPfn @ 0x1400E6738 (MiDereferenceControlAreaPfn.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

int __fastcall MiReleaseInPageRefs(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // si
  unsigned int v6; // edi
  __int64 *PrototypePteDirect; // rax
  int result; // eax

  MiLockAndDecrementShareCount(48 * (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    PrototypePteDirect = (__int64 *)MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), v2, v3, v4);
    return MiDereferenceControlAreaPfn(*PrototypePteDirect, (__int64)PrototypePteDirect, 3);
  }
  else
  {
    *(_QWORD *)(a1 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
