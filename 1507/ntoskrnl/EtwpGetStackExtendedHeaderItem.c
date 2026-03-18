/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x14025C7C4
 * Callers:
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
 *     KeAreInterruptsEnabled @ 0x140048A30 (KeAreInterruptsEnabled.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 */

void __fastcall EtwpGetStackExtendedHeaderItem(__int64 a1, int a2, ULONG a3, __int64 a4, char a5, unsigned __int64 *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 v8; // r13
  unsigned __int64 v9; // rdi
  ULONG v14; // esi
  unsigned __int64 v15; // r8
  unsigned __int8 CurrentIrql; // al
  __int16 v17; // si
  int v18; // r15d
  __int16 v19; // ax
  __int16 v20; // si
  unsigned __int16 v21; // bx

  v6 = 0LL;
  v7 = *(_QWORD *)a4 + 16LL;
  v8 = 0;
  v9 = 0LL;
  if ( a5 )
  {
    v14 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)a4 + 16LL), a3, 0x300u);
    if ( v14 > 3 )
      v6 = v14 - 3;
    else
      v6 = 0LL;
  }
  LOWORD(v15) = 1;
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0
    && (*(_DWORD *)(a1 + 1724) & 1) == 0
    && (unsigned __int8)KeAreInterruptsEnabled() )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql == 2 )
    {
      if ( !KeGetCurrentPrcb()->NestingLevel )
LABEL_10:
        v9 = v15 + _InterlockedExchangeAdd64(&EtwpStackMatchId, v15);
    }
    else
    {
      if ( CurrentIrql >= 2u )
        goto LABEL_11;
      if ( *(_BYTE *)(a1 + 1738) )
        goto LABEL_10;
      if ( KeGetCurrentThread()->ApcStateIndex == (_BYTE)v15 )
        goto LABEL_10;
      v18 = v15 & a2;
      if ( v18 )
      {
        if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
          goto LABEL_10;
      }
      if ( !v18 )
      {
        v19 = RtlWalkFrameChain((PVOID *)(v7 + 8 * v6), a3 - v6, v15);
        LOWORD(v15) = 1;
        v8 = v19;
        if ( a6 )
          v9 = *a6;
      }
    }
  }
LABEL_11:
  v17 = v8 + v6;
  if ( v17 || v9 )
  {
    v20 = 8 * (v15 + v17);
    v21 = (v20 + 15) & 0xFFF8;
    *(_QWORD *)(*(_QWORD *)a4 + 8LL) = v9;
    memset((void *)(*(_QWORD *)a4 + (unsigned __int16)(v20 + 8)), 0, v21 - (unsigned __int16)(v20 + 8));
    **(_WORD **)a4 = v21;
    *(_WORD *)(*(_QWORD *)a4 + 2LL) = 6;
    *(_WORD *)(*(_QWORD *)a4 + 6LL) = v20;
    *(_WORD *)(*(_QWORD *)a4 + 4LL) &= ~1u;
    *(_WORD *)(*(_QWORD *)a4 + 4LL) &= 1u;
  }
  else
  {
    if ( a3 == 256 )
      RtlpInterlockedPushEntrySList(&EtwpStackLookAsideList, (PSLIST_ENTRY)(*(_QWORD *)a4 - 16LL));
    *(_QWORD *)a4 = 0LL;
  }
}
