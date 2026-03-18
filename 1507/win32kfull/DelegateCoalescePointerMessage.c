/*
 * XREFs of DelegateCoalescePointerMessage @ 0x1C01FB800
 * Callers:
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0115D6C (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01E0B08 (DelegateReleasePointerMessage.c)
 * Callees:
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022EFF4 (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F19C (-FindAndReferenceFrameById@@YAPEAUtagPOINTERINPUTFRAME@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z @ 0x1C022FECC (-SetPointerInfoNodeDelegateAction@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KIHH@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C023090C (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

__int64 __fastcall DelegateCoalescePointerMessage(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // r11
  struct tagPOINTERINPUTFRAME *v7; // rbx
  int v8; // r9d
  int v9; // r10d
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // rbp
  unsigned int v13; // r8d
  const struct tagPOINTERINPUTFRAME *v14; // rdx
  struct tagPOINTERINPUTFRAME *v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // r9
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-20h]

  if ( __CFSHR__(*(_DWORD *)(a3 + 92), 7) )
  {
    if ( !__CFSHR__(*(_DWORD *)(a3 + 92), 6) )
      goto LABEL_3;
  }
  else if ( __CFSHR__(*(_DWORD *)(a3 + 92), 6) )
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
  v7 = FindAndReferenceFrameById(*(_DWORD *)(v6 + 28));
  if ( !v7 )
    return 0LL;
  v11 = *(unsigned int *)(v10 + 32);
  v12 = *((_QWORD *)v7 + 9) + 216 * v11;
  if ( v9 )
  {
    if ( !v8 )
      goto LABEL_8;
  }
  else if ( v8 )
  {
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v15 = v7;
    goto LABEL_23;
  }
LABEL_8:
  PointerFrameList::SetPointerInfoNodeDelegateAction(
    v7,
    (const struct tagPOINTERINPUTFRAME *)(unsigned int)v11,
    *(_DWORD *)(a3 + 24),
    a2,
    v8,
    v20);
  v14 = (const struct tagPOINTERINPUTFRAME *)*(unsigned int *)(v12 + 8);
  v15 = v7;
  if ( (*(_DWORD *)(*((_QWORD *)v7 + 10) + 40LL * (_QWORD)v14 + 20) & 4) != 0 )
  {
LABEL_23:
    UnreferenceFrameInt(v15);
    return 0LL;
  }
  v16 = PointerFrameList::DelegateCoalesceQFrame(v7, v14, v13);
  if ( !v16 )
    EtwTracePointerNoCoalesce(
      *(unsigned __int16 *)(v12 + 48),
      *(unsigned __int16 *)(v12 + 60),
      *(unsigned int *)(*((_QWORD *)v7 + 10) + 40LL * *(unsigned int *)(v12 + 8) + 28),
      1LL);
  UnreferenceFrameInt(v7);
  if ( a2 && v16 )
  {
    v18 = *(_QWORD *)(a1 + 392);
    if ( *(_QWORD *)(v18 + 40) == a3 )
      *(_QWORD *)(v18 + 40) = 0LL;
    DelQEntry(*(_QWORD *)(a1 + 392), (__int64 *)a3, 1LL, v17);
  }
  return v16;
}
