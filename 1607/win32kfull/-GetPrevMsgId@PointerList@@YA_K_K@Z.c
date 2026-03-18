/*
 * XREFs of ?GetPrevMsgId@PointerList@@YA_K_K@Z @ 0x1C01F3CA4
 * Callers:
 *     ?DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0840 (-DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
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
