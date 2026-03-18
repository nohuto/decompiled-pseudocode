/*
 * XREFs of MiProcessWsInSwapFault @ 0x1400DDE3C
 * Callers:
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleaseWsSwapReservationPfn @ 0x1400DE69C (MiReleaseWsSwapReservationPfn.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiProcessWsInSwapFault(_KPROCESS *Process)
{
  unsigned __int64 *v1; // r10
  unsigned int v2; // r8d
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int16 *v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v1 = (unsigned __int64 *)Process;
  v2 = 0;
  v3 = 2040LL;
  while ( 1 )
  {
    v4 = *v1;
    v5 = *(_QWORD *)*v1;
    if ( *v1 + 0x90482413000LL <= v3
      && (unsigned int)MiPteHasShadow(Process, v4)
      && (v5 & 1) != 0
      && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v6 = *(_QWORD *)&Process[2].ProcessLock;
      if ( v6 )
      {
        v4 = (v4 >> 3) & 0x1FF;
        v7 = *(_QWORD *)(v6 + 8 * v4);
        if ( (v7 & 0x20) != 0 )
          v5 |= 0x20uLL;
        if ( (v7 & 0x42) != 0 )
          v5 |= 0x42uLL;
      }
    }
    v15 = v5;
    if ( (v5 & 1) == 0 || v2 == 2 && (v5 & 0x80u) != 0LL )
      break;
    ++v2;
    ++v1;
    if ( v2 >= 4 )
    {
      if ( (unsigned __int64)&STACK[0x90482413038] <= v3
        && (unsigned int)MiPteHasShadow(Process, v4)
        && (v5 & 1) != 0
        && ((v5 & 0x20) == 0 || (v5 & 0x42) == 0) )
      {
        v8 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v8 )
        {
          v9 = *(_QWORD *)(v8 + 8 * (((unsigned __int64)&v15 >> 3) & 0x1FF));
          if ( (v9 & 0x20) != 0 )
            v5 |= 0x20uLL;
          if ( (v9 & 0x42) != 0 )
            v5 |= 0x42uLL;
        }
      }
      if ( MI_IS_PFN((v5 >> 12) & 0xFFFFFFFFFLL) )
      {
        v11 = 48 * v10 - 0x58000000000LL;
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v12);
          }
          while ( *(__int64 *)(v11 + 24) < 0 );
        }
        MiReleaseWsSwapReservationPfn(v11);
        v13 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v11 + 40)) >> 8) & 0x3FF);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v14 )
          MiReleasePageFileInfo((struct _KEVENT *)v13, v14, 1);
      }
      return;
    }
  }
}
