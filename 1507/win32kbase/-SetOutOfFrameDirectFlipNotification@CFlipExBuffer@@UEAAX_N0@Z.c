/*
 * XREFs of ?SetOutOfFrameDirectFlipNotification@CFlipExBuffer@@UEAAX_N0@Z @ 0x1C008A220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetOutOfFrameDirectFlipNotification(CFlipExBuffer *this, char a2, char a3)
{
  *((_BYTE *)this + 400) = a2;
  *((_BYTE *)this + 401) = a3;
}
