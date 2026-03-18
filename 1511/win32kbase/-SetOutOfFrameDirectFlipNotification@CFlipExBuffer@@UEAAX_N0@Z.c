/*
 * XREFs of ?SetOutOfFrameDirectFlipNotification@CFlipExBuffer@@UEAAX_N0@Z @ 0x1C008D620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetOutOfFrameDirectFlipNotification(CFlipExBuffer *this, char a2, char a3)
{
  *((_BYTE *)this + 398) = a2;
  *((_BYTE *)this + 399) = a3;
}
