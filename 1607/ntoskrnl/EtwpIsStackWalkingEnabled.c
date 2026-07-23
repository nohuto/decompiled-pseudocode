/*
 * XREFs of EtwpIsStackWalkingEnabled @ 0x14049A418
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall EtwpIsStackWalkingEnabled(__int64 a1, __int16 a2)
{
  char v2; // r8

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 816) & 0x80u) != 0 )
    return _bittest(*(const signed __int32 **)(a1 + 832), a2 & 0x1FFF);
  return v2;
}
