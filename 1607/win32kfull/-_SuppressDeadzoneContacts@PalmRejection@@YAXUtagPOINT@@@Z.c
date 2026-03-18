/*
 * XREFs of ?_SuppressDeadzoneContacts@PalmRejection@@YAXUtagPOINT@@@Z @ 0x1C0229558
 * Callers:
 *     ?ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C0228FC8 (-ProcessInput@PalmRejection@@YAHPEAUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C0E14 (-GetNextFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z @ 0x1C02295D0 (-_SuppressDeadzoneContactsInFrame@PalmRejection@@YAXPEAUtagPOINTERINPUTFRAME@@0UtagPOINT@@@Z.c)
 */

void __fastcall PalmRejection::_SuppressDeadzoneContacts(PalmRejection *this, struct tagPOINT a2)
{
  struct tagPOINTERINPUTFRAME *v2; // rbx
  PalmRejection *v3; // r9
  struct tagPOINTERINPUTFRAME *v4; // rdi
  struct _LIST_ENTRY *v5; // r8
  const struct tagPOINTERINPUTFRAME *NextFrame; // rax
  PalmRejection *v7; // [rsp+30h] [rbp+8h]

  v7 = this;
  v2 = xmmword_1C0331C70;
  v3 = 0LL;
  v4 = *(&xmmword_1C0331C70 + 1);
  if ( xmmword_1C0331C70 )
  {
    do
    {
      if ( v2 == v4 )
        break;
      PalmRejection::_SuppressDeadzoneContactsInFrame(v3, v2, this, (struct tagPOINT)v3);
      NextFrame = PointerFrameList::GetNextFrame(v2, (const struct tagPOINTERINPUTFRAME *)&gFrameListHead, v5);
      this = v7;
      v2 = NextFrame;
    }
    while ( NextFrame );
    if ( v2 )
      PalmRejection::_SuppressDeadzoneContactsInFrame(v3, v2, this, (struct tagPOINT)v3);
  }
}
