/*
 * XREFs of KiAttachProcess @ 0x1400CB390
 * Callers:
 *     KeAttachProcess @ 0x1400AC4A0 (KeAttachProcess.c)
 *     KeStackAttachProcess @ 0x1400CAFB0 (KeStackAttachProcess.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiLoadDirectoryTableBase @ 0x1400979E0 (KiLoadDirectoryTableBase.c)
 *     KiMoveApcState @ 0x1400CC940 (KiMoveApcState.c)
 *     KiInSwapSingleProcess @ 0x1400CCAA4 (KiInSwapSingleProcess.c)
 */

__int64 __fastcall KiAttachProcess(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int v9; // r9d
  _QWORD *v10; // r10
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v12; // rsi
  unsigned __int64 GroupIndex; // rbp
  __int64 v14; // rdi
  __int64 result; // rax
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v5 = a5;
  KiMoveApcState(a1 + 152, a5);
  v10[1] = v10;
  *v10 = v10;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( !v9 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 572), 8u) & 7) != 0 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    KiInSwapSingleProcess(a1, a2, a3);
    __writecr8(2uLL);
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v16);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)(a1 + 64) = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = *(_QWORD *)(v5 + 32);
  GroupIndex = CurrentPrcb->GroupIndex;
  v14 = 8LL * CurrentPrcb->Group + 280;
  _interlockedbittestandset64((volatile signed __int32 *)(v14 + a2), GroupIndex);
  KiLoadDirectoryTableBase(a2, *(_QWORD *)(a2 + 40));
  _interlockedbittestandreset64((volatile signed __int32 *)(v14 + v12), GroupIndex);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  result = a3;
  __writecr8(a3);
  return result;
}
