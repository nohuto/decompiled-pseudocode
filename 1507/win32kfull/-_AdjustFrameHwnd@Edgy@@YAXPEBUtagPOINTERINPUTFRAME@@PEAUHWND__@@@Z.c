/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C0229434
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C0229C80 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB140 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01FC924 (-SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C022F0F0 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022F640 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C0230184 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, const struct tagPOINTERINPUTFRAME *a2, HWND a3)
{
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  __int64 v4; // rsi
  struct tagWND *v5; // r8
  struct tagPOINTERINFONODE *v6; // rdi
  struct _LIST_ENTRY *v7; // r8
  __int64 v8; // rcx
  const struct tagPOINT *v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+48h] [rbp-10h]

  if ( this )
  {
    NextFrame = this;
    v4 = ValidateHwnd(a2);
    PointerList::SetPointerInputCapture((PointerList *)*(unsigned __int16 *)(*((_QWORD *)NextFrame + 9) + 60LL), v4, v5);
    do
    {
      v6 = (struct tagPOINTERINFONODE *)*((_QWORD *)NextFrame + 9);
      if ( (unsigned int)IsPointerInfoNodeValid(v6) )
      {
        LODWORD(v9) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(NextFrame, 0LL, v4, (struct tagWND *)1, 0LL, v9, 1, 0, 0, v10);
        v8 = *((_QWORD *)NextFrame + 10);
        if ( *(_QWORD *)(v8 + 8) == -1LL )
          EndQFrameNodeDeferment(
            (struct tagPOINTERQFRAME *)v8,
            v6,
            NextFrame,
            *(_QWORD *)(*(_QWORD *)(v4 + 16) + 392LL));
        NextFrame = PointerFrameList::GetNextFrame(NextFrame, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v7);
      }
    }
    while ( NextFrame );
  }
}
