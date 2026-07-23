/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x140224D8C
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeAreApcsDisabled @ 0x140009710 (KeAreApcsDisabled.c)
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 *     KeGetEffectiveIrql @ 0x140051224 (KeGetEffectiveIrql.c)
 *     KeIsAttachedProcess @ 0x1400E5D20 (KeIsAttachedProcess.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

void __fastcall EtwpGetStackExtendedHeaderItem(__int64 a1, char a2, ULONG a3, __int64 a4, char a5, signed __int64 *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int16 v8; // r13
  signed __int64 v9; // rdi
  ULONG v14; // esi
  unsigned __int8 EffectiveIrql; // al
  int v16; // r15d
  __int16 v17; // si
  __int16 v18; // si
  unsigned __int16 v19; // bx

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
  if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 && (*(_DWORD *)(a1 + 1728) & 1) == 0 )
  {
    EffectiveIrql = KeGetEffectiveIrql();
    if ( EffectiveIrql == 2 )
    {
      if ( !KeGetCurrentPrcb()->NestingLevel )
LABEL_15:
        v9 = _InterlockedIncrement64(&EtwpStackMatchId);
    }
    else if ( EffectiveIrql < 2u )
    {
      if ( *(_BYTE *)(a1 + 1742) )
        goto LABEL_15;
      if ( KeIsAttachedProcess() )
        goto LABEL_15;
      v16 = a2 & 1;
      if ( v16 )
      {
        if ( KeAreApcsDisabled() )
          goto LABEL_15;
      }
      if ( !v16 )
      {
        v8 = RtlWalkFrameChain((PVOID *)(v7 + 8 * v6), a3 - v6, 1u);
        if ( a6 )
          v9 = *a6;
      }
    }
  }
  v17 = v8 + v6;
  if ( v17 || v9 )
  {
    v18 = 8 * (v17 + 1);
    v19 = (v18 + 15) & 0xFFF8;
    *(_QWORD *)(*(_QWORD *)a4 + 8LL) = v9;
    memset((void *)(*(_QWORD *)a4 + (unsigned __int16)(v18 + 8)), 0, v19 - (unsigned __int16)(v18 + 8));
    **(_WORD **)a4 = v19;
    *(_WORD *)(*(_QWORD *)a4 + 2LL) = 6;
    *(_WORD *)(*(_QWORD *)a4 + 6LL) = v18;
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
