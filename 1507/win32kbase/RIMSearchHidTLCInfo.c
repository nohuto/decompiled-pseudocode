/*
 * XREFs of RIMSearchHidTLCInfo @ 0x1C0077E40
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00775D0 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C00C4E54 (RIMIDECreateHIDDesc.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RIMSearchHidTLCInfo(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 *result; // rax

  for ( result = (__int64 *)RawInputManagerObject::gHidRequestTable;
        result != (__int64 *)&RawInputManagerObject::gHidRequestTable;
        result = (__int64 *)*result )
  {
    if ( *((_WORD *)result + 8) == a2 && *((_WORD *)result + 9) == a3 )
      return result;
  }
  return 0LL;
}
