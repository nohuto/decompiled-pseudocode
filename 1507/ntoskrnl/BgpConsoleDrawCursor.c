/*
 * XREFs of BgpConsoleDrawCursor @ 0x1407618EC
 * Callers:
 *     BgpConsoleSetCursor @ 0x140761C58 (BgpConsoleSetCursor.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14026E350 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleDrawCursor()
{
  unsigned __int16 v0; // cx
  int v1; // r11d
  int v2; // ebx
  unsigned __int64 v4; // [rsp+40h] [rbp-18h]
  int v5; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF

  if ( dword_14031890C )
  {
    v1 = dword_1403188D0;
    v2 = dword_1403188CC;
    if ( (unsigned int)dword_14031890C >= 0x22 )
    {
      v0 = 9604;
      if ( (unsigned int)dword_14031890C >= 0x43 )
        v0 = 9608;
    }
    else
    {
      v0 = 95;
    }
  }
  else
  {
    v0 = dword_1403188C0[75 * dword_140318904 + 22 + 3 * dword_140318908];
    v1 = dword_1403188C0[75 * dword_140318904 + 21 + 3 * dword_140318908];
    v2 = dword_1403188C0[75 * dword_140318904 + 20 + 3 * dword_140318908];
  }
  return BgpDisplayCharacterEx(
           v0,
           (__int64 *)qword_1403188E8,
           dword_1403188FC + dword_140318904 * dword_1403188F0,
           dword_140318900 + dword_140318908 * dword_1403188F4,
           v1,
           v2,
           &v6,
           &v5,
           v4);
}
