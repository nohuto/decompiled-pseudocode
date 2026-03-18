/*
 * XREFs of MiUpdatePfnBackingStore @ 0x14013E180
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 */

__int64 __fastcall MiUpdatePfnBackingStore(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned __int8 CurrentIrql; // r14
  unsigned int v9; // edi
  __int64 result; // rax
  __int64 *v11; // r10

  CurrentIrql = 0;
  if ( !a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v9 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  result = MiTransferSoftwarePte(*(_QWORD *)(a1 + 16), a2, a3);
  *v11 = result;
  if ( (unsigned __int64)(v11 + 0x12090482600LL) <= 0x7F8 )
    result = MiWritePteShadow(v11, result);
  if ( !a4 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
