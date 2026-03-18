/*
 * XREFs of ?HasRecievedUpdates@CFlipExBuffer@@UEBA_NXZ @ 0x1C001D900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipExBuffer::HasRecievedUpdates(CFlipExBuffer *this)
{
  return *((_DWORD *)this + 88) != -1;
}
