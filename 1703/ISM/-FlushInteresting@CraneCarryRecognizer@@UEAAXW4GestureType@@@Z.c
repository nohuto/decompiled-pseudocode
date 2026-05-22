/*
 * XREFs of ?FlushInteresting@CraneCarryRecognizer@@UEAAXW4GestureType@@@Z @ 0x1800385A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CraneCarryRecognizer::FlushInteresting(__int64 a1, int a2)
{
  if ( (a2 & 0x10000) != 0 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 28) = 0xFFFF;
  }
}
