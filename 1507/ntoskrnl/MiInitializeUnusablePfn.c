/*
 * XREFs of MiInitializeUnusablePfn @ 0x1407C4D2C
 * Callers:
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
 * Callees:
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MiPageToChannel @ 0x1400FFFF0 (MiPageToChannel.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiInitializeUnusablePfn(__int64 a1, int a2)
{
  unsigned __int64 v4; // rsi
  _KPROCESS *Process; // r14
  unsigned __int8 CurrentIrql; // r15
  unsigned int v7; // edi
  __int64 DemandZeroPte; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  char v12; // al
  unsigned __int64 v13; // rcx
  __int64 result; // rax

  v4 = (a1 + 0x58000000000LL) / 48;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v7 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( *(__int64 *)(a1 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 16) = DemandZeroPte;
  *(_QWORD *)a1 = Process;
  v10 = v9 & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
  *(_WORD *)(a1 + 32) = 2;
  v11 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(a1 + 40) = v10;
  *(_QWORD *)(a1 + 24) = v11 | 1;
  v12 = *(_BYTE *)(a1 + 34) & 0x3F | 0x40;
  *(_BYTE *)(a1 + 34) = v12;
  if ( a2 == 29 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 40) = v10 & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
  }
  *(_BYTE *)(a1 + 34) = v12 & 0xF8 | 6;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0x3FFFFFFFFFFFFFFLL | ((unsigned __int64)(unsigned int)MiPageToNode(v4, 0) << 58);
  v13 = *(_QWORD *)(a1 + 40) ^ (*(_QWORD *)(a1 + 40) ^ ((unsigned __int64)(unsigned __int8)MiPageToChannel(v4) << 36)) & 0x3000000000LL | 0x20000000000000LL;
  *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  *(_QWORD *)(a1 + 40) = v13;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  ++qword_14034FCE0;
  return result;
}
