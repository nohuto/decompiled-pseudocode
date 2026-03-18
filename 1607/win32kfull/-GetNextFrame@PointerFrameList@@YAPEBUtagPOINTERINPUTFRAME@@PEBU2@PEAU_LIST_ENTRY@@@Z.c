/*
 * XREFs of ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14
 * Callers:
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01EBE78 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     ?xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z @ 0x1C01F222C (-xxxProcessEdgyAndGeneratePointerMessages@@YAHPEAXPEBUtagPOINTERINPUTFRAME@@HH@Z.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C021F888 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
 *     ?DispatchBufferedInputFrames@PalmRejection@@YAXXZ @ 0x1C0228E54 (-DispatchBufferedInputFrames@PalmRejection@@YAXXZ.c)
 *     ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C0229558 (-_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z.c)
 * Callees:
 *     <none>
 */

const struct tagPOINTERINPUTFRAME *__fastcall PointerFrameList::GetNextFrame(
        PointerFrameList *this,
        const struct tagPOINTERINPUTFRAME *a2,
        struct _LIST_ENTRY *a3)
{
  const struct tagPOINTERINPUTFRAME *v3; // r8
  const struct tagPOINTERINPUTFRAME *result; // rax

  v3 = (const struct tagPOINTERINPUTFRAME *)*((_QWORD *)this + 1);
  result = 0LL;
  if ( v3 )
  {
    if ( v3 != a2 )
      return (const struct tagPOINTERINPUTFRAME *)*((_QWORD *)this + 1);
  }
  return result;
}
