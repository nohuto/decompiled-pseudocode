/*
 * XREFs of ?FlushInteresting@CraneGrabRecognizer@@UEAAXW4GestureType@@@Z @ 0x180039B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CraneGrabRecognizer::FlushInteresting(__int64 a1, __int16 a2)
{
  if ( a2 < 0 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 20) = 0;
  }
}
