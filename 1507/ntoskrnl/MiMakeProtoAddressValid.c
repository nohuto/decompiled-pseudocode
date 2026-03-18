/*
 * XREFs of MiMakeProtoAddressValid @ 0x1400E08B8
 * Callers:
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiLockProtoPage @ 0x14007B590 (MiLockProtoPage.c)
 *     MiCaptureProtectionFromProto @ 0x1400E0DD8 (MiCaptureProtectionFromProto.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiMakeProtoAddressValid(unsigned __int64 Process, __int64 a2)
{
  signed __int64 v2; // r13
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  BOOL v14; // eax
  __int16 v15; // r9
  unsigned __int64 v16; // r11
  __int64 v17; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v19; // ebp
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = Process;
  v3 = ((Process >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = v3 + 0x90482413000LL;
  while ( 2 )
  {
    v5 = 0xFFFFFFFFFLL;
    v6 = 2040LL;
    do
    {
      v7 = *(_QWORD *)v3;
      if ( v4 <= v6
        && (unsigned int)MiPteHasShadow(Process, a2)
        && (v7 & 1) != 0
        && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
      {
        Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        a2 = *(_QWORD *)(Process + 1520);
        if ( a2 )
        {
          v8 = *(_QWORD *)(a2 + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v8 & 0x20) != 0 )
            v7 |= 0x20uLL;
          if ( (v8 & 0x42) != 0 )
            v7 |= 0x42uLL;
        }
      }
      v22 = v7;
      if ( (v7 & 1) == 0 )
        goto LABEL_41;
      v9 = v7;
      if ( (unsigned __int64)&STACK[0x90482413050] <= v6
        && (unsigned int)MiPteHasShadow(Process, a2)
        && ((v10 & 0x20) == 0 || (v10 & 0x42) == 0) )
      {
        v11 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v11 )
        {
          v12 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v22 >> 3) & 0x1FF));
          if ( (v12 & 0x20) != 0 )
            v9 |= 0x20uLL;
          if ( (v12 & 0x42) != 0 )
            v9 |= 0x42uLL;
        }
      }
      v13 = v5 & (v9 >> 12);
      v14 = MI_IS_PFN(v13);
      v5 = 0xFFFFFFFFFLL;
    }
    while ( !v14 );
    if ( (v15 & 0x200) != 0 )
      goto LABEL_41;
    v17 = 48 * v13 - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v19 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v19);
      }
      while ( *(__int64 *)(v17 + 24) < 0 || _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) );
      v6 = 2040LL;
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    PteShadow = *(_QWORD *)v3;
    if ( v4 <= v6 )
      PteShadow = MiReadPteShadow(v3, *(_QWORD *)v3);
    v22 = PteShadow;
    if ( (PteShadow & 1) == 0 || (PteShadow & 0x200) != 0 )
      goto LABEL_40;
    if ( (unsigned __int64)&STACK[0x90482413050] <= v6 )
      PteShadow = MiReadPteShadow(&v22, PteShadow);
    if ( v13 != ((PteShadow >> 12) & 0xFFFFFFFFFLL) )
    {
LABEL_40:
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), v16);
      __writecr8(CurrentIrql);
LABEL_41:
      MmAccessFault(2uLL, v2, 0, 0LL);
      continue;
    }
    break;
  }
  MiAddLockedPageCharge(48 * v13 - 0x58000000000LL, 1LL, v5);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return 48 * v13 - 0x58000000000LL;
}
