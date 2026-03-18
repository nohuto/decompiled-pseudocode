/*
 * XREFs of BgpConsoleDrawCursor @ 0x1406DE870
 * Callers:
 *     BgpConsoleSetCursor @ 0x1406DEBDC (BgpConsoleSetCursor.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14021EF28 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleDrawCursor()
{
  unsigned __int16 v0; // cx
  int v1; // r11d
  int v2; // ebx
  unsigned __int64 v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF

  if ( dword_1402C98AC )
  {
    v1 = dword_1402C9870;
    v2 = dword_1402C986C;
    if ( (unsigned int)dword_1402C98AC >= 0x22 )
    {
      v0 = 9604;
      if ( (unsigned int)dword_1402C98AC >= 0x43 )
        v0 = 9608;
    }
    else
    {
      v0 = 95;
    }
  }
  else
  {
    v0 = dword_1402C9860[75 * dword_1402C98A4 + 22 + 3 * dword_1402C98A8];
    v1 = dword_1402C9860[75 * dword_1402C98A4 + 21 + 3 * dword_1402C98A8];
    v2 = dword_1402C9860[75 * dword_1402C98A4 + 20 + 3 * dword_1402C98A8];
  }
  return BgpDisplayCharacterEx(
           v0,
           (__int64 *)qword_1402C9888,
           dword_1402C989C + dword_1402C98A4 * dword_1402C9890,
           dword_1402C98A0 + dword_1402C98A8 * dword_1402C9894,
           v1,
           v2,
           &v6,
           &v5,
           v4);
}
