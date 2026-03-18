/*
 * XREFs of MiInitializePfnForOtherProcess @ 0x14006A908
 * Callers:
 *     MiDuplicateCloneLeaf @ 0x140004A08 (MiDuplicateCloneLeaf.c)
 *     MiInitializeSystemPageTable @ 0x14006A1F8 (MiInitializeSystemPageTable.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MmCreateProcessAddressSpace @ 0x1404A2834 (MmCreateProcessAddressSpace.c)
 *     MiMapNewSession @ 0x14057A744 (MiMapNewSession.c)
 *     MiAllocateTopLevelPage @ 0x1406A13F8 (MiAllocateTopLevelPage.c)
 *     MiInitializeShadowPageTable @ 0x1406A7E80 (MiInitializeShadowPageTable.c)
 *     MiInitializeBootProcess @ 0x1407E2258 (MiInitializeBootProcess.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializePfnForOtherProcess(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // esi
  __int64 v5; // rbx
  unsigned int v9; // edi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rbx
  unsigned __int8 v15; // bp

  v4 = 0;
  v5 = 48 * a1 - 0x58000000000LL;
  v9 = 0;
  if ( (a4 & 0x10) != 0 )
  {
    CurrentIrql = 17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( (*(_QWORD *)(v5 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v5 + 24), 0x3FuLL) );
    }
  }
  v11 = *(_QWORD *)(v5 + 24) & 0xF0FFFFFFFFFFFFFFuLL;
  *(_QWORD *)(v5 + 8) = a2;
  *(_QWORD *)(v5 + 24) = v11;
  *(_QWORD *)(v5 + 16) = MiMakeDemandZeroPte(4LL);
  *(_WORD *)(v5 + 32) = 1;
  if ( a4 >= 0 )
  {
    result = 0xC000000000000001uLL;
    *(_QWORD *)(v5 + 24) = v12 & 0xC000000000000000uLL | 1;
  }
  else
  {
    result = v12 ^ (v12 ^ (v12 + 1)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v5 + 24) = result;
  }
  *(_BYTE *)(v5 + 34) |= 0x10u;
  _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( CurrentIrql != 17 )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( a3 != -1 )
  {
    *(_QWORD *)(v5 + 40) ^= (a3 ^ *(_QWORD *)(v5 + 40)) & 0xFFFFFFFFFLL;
    v14 = 48 * a3 - 0x58000000000LL;
    v15 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
      }
      while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
    }
    *(_QWORD *)(v14 + 24) ^= (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    result = v15;
    __writecr8(v15);
  }
  return result;
}
