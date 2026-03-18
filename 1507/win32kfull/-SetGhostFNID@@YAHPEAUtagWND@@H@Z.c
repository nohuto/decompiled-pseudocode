/*
 * XREFs of ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C01180FC
 * Callers:
 *     xxxRegisterGhostWindow @ 0x1C01178D0 (xxxRegisterGhostWindow.c)
 *     xxxRegisterSiblingFrostWindow @ 0x1C01F70C0 (xxxRegisterSiblingFrostWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGhostFNID(struct tagWND *a1, int a2)
{
  __int16 v2; // r8
  __int64 result; // rax

  v2 = *((_WORD *)a1 + 33);
  result = 0LL;
  if ( v2 >= 0 )
  {
    *((_WORD *)a1 + 33) = v2 & 0xC000 | (a2 != 0 ? 0x2AA : 0);
    return 1LL;
  }
  return result;
}
