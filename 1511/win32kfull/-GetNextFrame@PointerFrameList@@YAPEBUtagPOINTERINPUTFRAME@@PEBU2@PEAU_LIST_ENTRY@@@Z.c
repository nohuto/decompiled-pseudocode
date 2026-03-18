/*
 * XREFs of ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C022FA8C
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxDoTouchpadProcessing@@YAHPEAXH@Z @ 0x1C01F4F58 (-xxxDoTouchpadProcessing@@YAHPEAXH@Z.c)
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C0229734 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
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
