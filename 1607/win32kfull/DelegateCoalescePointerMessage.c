/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01F2FF8
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C014717C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01D7470 (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C0057FA0 (DelQEntry.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C079C (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C01C0A3C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C01C1740 (-SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // r11
  __int64 v7; // rdx
  struct tagPOINTERINPUTFRAME *v8; // rbx
  __int64 v9; // r8
  int v10; // r9d
  int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rbp
  struct tagPOINTERINPUTFRAME *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  __int64 v18; // r8
  __int64 v19; // rax

  if ( __CFSHR__(*(_DWORD *)(a3 + 100), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 100), 6) )
      goto LABEL_3;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 100), 6) )
  {
    goto LABEL_3;
  }
  if ( !a2 )
    return 0LL;
LABEL_3:
  if ( *(_DWORD *)(a3 + 24) == 595 )
    return 0LL;
  v6 = *(_QWORD *)(a3 + 40);
  if ( !v6 )
    return 0LL;
  v8 = FindAndReferenceFrameById(*(_DWORD *)(v6 + 28));
  if ( !v8 )
    return 0LL;
  v13 = *(unsigned int *)(v12 + 32);
  v14 = *((_QWORD *)v8 + 11) + 216 * v13;
  if ( v11 )
  {
    if ( !v10 )
      goto LABEL_8;
  }
  else if ( v10 )
  {
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v15 = v8;
    goto LABEL_23;
  }
LABEL_8:
  PointerFrameList::SetPointerInfoNodeDelegateAction(
    v8,
    (const struct tagPOINTERINPUTFRAME *)(unsigned int)v13,
    *(_DWORD *)(a3 + 24),
    a2,
    v10);
  v7 = *(unsigned int *)(v14 + 8);
  v15 = v8;
  if ( (*(_DWORD *)(*((_QWORD *)v8 + 12) + 40 * v7 + 20) & 4) != 0 )
  {
LABEL_23:
    UnreferenceFrameInt(v15, v7, v9);
    return 0LL;
  }
  v17 = PointerFrameList::DelegateCoalesceQFrame(v8, (const struct tagPOINTERINPUTFRAME *)v7);
  if ( !v17 )
    EtwTracePointerNoCoalesce(
      *(unsigned __int16 *)(v14 + 48),
      *(unsigned __int16 *)(v14 + 60),
      *(unsigned int *)(*((_QWORD *)v8 + 12) + 40LL * *(unsigned int *)(v14 + 8) + 28),
      1LL);
  UnreferenceFrameInt(v8, v16, v18);
  if ( a2 && v17 )
  {
    v19 = *(_QWORD *)(a1 + 384);
    if ( *(_QWORD *)(v19 + 48) == a3 )
      *(_QWORD *)(v19 + 48) = 0LL;
    DelQEntry(*(_QWORD **)(a1 + 384), a3);
  }
  return v17;
}
