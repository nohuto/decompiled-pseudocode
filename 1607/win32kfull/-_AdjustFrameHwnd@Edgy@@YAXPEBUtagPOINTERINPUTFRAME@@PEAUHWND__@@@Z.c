/*
 * XREFs of ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C021F888
 * Callers:
 *     ?_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C02201D8 (-_OnEnterActive@Edgy@@YAXAEAUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01C0990 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01C0FF4 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01C1994 (-SetPointerInfoNodeTarget@PointerFrameList@@YAXPEBUtagPOINTERINPUTFRAME@@KPEAUtagWND@@HPEBUtagPO.c)
 *     ?SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z @ 0x1C01F4044 (-SetPointerInputCapture@PointerList@@YAHGPEAUtagWND@@H@Z.c)
 */

void __fastcall Edgy::_AdjustFrameHwnd(Edgy *this, const struct tagPOINTERINPUTFRAME *a2, HWND a3)
{
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  struct tagWND *v4; // rsi
  struct tagWND *v5; // r8
  struct tagPOINTERINFONODE *v6; // rdi
  struct _LIST_ENTRY *v7; // r8
  __int64 v8; // rcx
  const struct tagPOINT *v9; // [rsp+28h] [rbp-30h]

  if ( this )
  {
    NextFrame = this;
    v4 = (struct tagWND *)ValidateHwnd(a2);
    PointerList::SetPointerInputCapture(
      (PointerList *)*(unsigned __int16 *)(*((_QWORD *)NextFrame + 11) + 60LL),
      (__int64)v4,
      v5);
    do
    {
      v6 = (struct tagPOINTERINFONODE *)*((_QWORD *)NextFrame + 11);
      if ( (unsigned int)IsPointerInfoNodeValid(v6) )
      {
        LODWORD(v9) = 0;
        PointerFrameList::SetPointerInfoNodeTarget(NextFrame, 0LL, v4, (struct tagWND *)1, 0LL, v9, 1, 0, 0);
        v8 = *((_QWORD *)NextFrame + 12);
        if ( *(_QWORD *)(v8 + 8) == -1LL )
          EndQFrameNodeDeferment((struct tagPOINTERQFRAME *)v8, v6, NextFrame);
        NextFrame = PointerFrameList::GetNextFrame(NextFrame, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v7);
      }
    }
    while ( NextFrame );
  }
}
