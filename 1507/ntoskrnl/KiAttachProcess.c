/*
 * XREFs of KiAttachProcess @ 0x14010C4D0
 * Callers:
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KeAttachProcess @ 0x14010C324 (KeAttachProcess.c)
 *     KeStackAttachProcess @ 0x14010C3E0 (KeStackAttachProcess.c)
 * Callees:
 *     KiMoveApcState @ 0x14009A9E0 (KiMoveApcState.c)
 *     KiInSwapSingleProcess @ 0x14010C694 (KiInSwapSingleProcess.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiSetAddressPolicy @ 0x14020A1B8 (KiSetAddressPolicy.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140270914 (HvlSwitchVirtualAddressSpace.c)
 */

__int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  int v8; // r9d
  _QWORD *v9; // r10
  unsigned int v10; // ebx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // r14
  unsigned __int64 GroupIndex; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 result; // rax

  KiMoveApcState((__int64 *)(a1 + 152), a5);
  v9[1] = v9;
  *v9 = v9;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( a5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( !v8 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 572), 8u) & 7) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiInSwapSingleProcess(a1, a2, a3);
    __writecr8(2uLL);
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v10);
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = *(_QWORD *)(a5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v14 = 8LL * CurrentPrcb->Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), GroupIndex);
  v15 = *(_QWORD *)(a2 + 40);
  if ( KiKvaShadow )
  {
    v16 = *(_QWORD *)(a2 + 40);
    if ( (v15 & 2) != 0 )
      v16 = v15 | 0x8000000000000000uLL;
    __writegsqword(0x7000u, v16);
    KiSetAddressPolicy(*(unsigned __int8 *)(a2 + 640));
  }
  if ( (HvlEnlightenments & 1) != 0 )
    HvlSwitchVirtualAddressSpace(v15);
  else
    __writecr3(v15);
  if ( KiKvaShadow && !KiFlushPcid )
  {
    v17 = __readcr4();
    if ( (v17 & 0x20080) != 0 )
    {
      __writecr4(v17 ^ 0x80);
      __writecr4(v17);
    }
    else
    {
      v18 = __readcr3();
      __writecr3(v18);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v14 + v12), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  result = a3;
  __writecr8(a3);
  return result;
}
