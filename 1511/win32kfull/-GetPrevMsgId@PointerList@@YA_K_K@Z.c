/*
 * XREFs of ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01FCA04
 * Callers:
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     <none>
 */

PointerList *__fastcall PointerList::GetPrevMsgId(PointerList *this)
{
  while ( 1 )
  {
    this = *(PointerList **)this;
    if ( !*((_WORD *)this + 8) )
      break;
    if ( (*((_DWORD *)this + 9) & 0x10) == 0 )
      return this;
  }
  return 0LL;
}
