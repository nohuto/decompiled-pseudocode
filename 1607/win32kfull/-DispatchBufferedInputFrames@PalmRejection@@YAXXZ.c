/*
 * XREFs of ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C0228E54
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 *     ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8 (-ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 */

void __fastcall PalmRejection::DispatchBufferedInputFrames(PalmRejection *this, __int64 a2, struct _LIST_ENTRY *a3)
{
  PointerFrameList *v3; // rcx
  __int64 *v4; // rdi
  const struct tagPOINTERINPUTFRAME *NextFrame; // rbx
  __int64 v6; // rcx

  if ( *(&gPalmRejectData + 1) == 1 && !*(&gPalmRejectData + 1) )
  {
    v4 = (__int64 *)*(&xmmword_1C0331C70 + 1);
    v3 = xmmword_1C0331C70;
    if ( xmmword_1C0331C70 )
    {
      do
      {
        if ( v3 == (PointerFrameList *)v4 )
          break;
        NextFrame = PointerFrameList::GetNextFrame(v3, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, a3);
        xxxProcessEdgyAndGeneratePointerMessages(
          *(_QWORD *)(v6 + 56),
          (const struct tagPOINTERINPUTFRAME *)v6,
          (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v6 + 104) + 252LL), 6),
          -__CFSHR__(*(_DWORD *)(*(_QWORD *)(v6 + 104) + 252LL), 7));
        v3 = NextFrame;
      }
      while ( NextFrame );
    }
    if ( v4 )
      xxxProcessEdgyAndGeneratePointerMessages(
        v4[7],
        (const struct tagPOINTERINPUTFRAME *)v4,
        (unsigned int)-__CFSHR__(*(_DWORD *)(v4[13] + 252), 6),
        -__CFSHR__(*(_DWORD *)(v4[13] + 252), 7));
    *(_OWORD *)&xmmword_1C0331C70 = 0LL;
    if ( (_QWORD)xmmword_1C0331C60 )
    {
      *(&gPalmRejectData + 1) = 2;
    }
    else
    {
      xmmword_1C0331C50 = 0uLL;
      *(&gPalmRejectData + 1) = 0;
    }
  }
}
