/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x14021FA6C
 * Callers:
 *     BcpDisplayErrorInformation @ 0x14021FE2C (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x140220678 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14021EF28 (BgpDisplayCharacterEx.c)
 *     BcpSetCursorPosition @ 0x1402204A4 (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(unsigned __int16 a1, int a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // r9d
  unsigned int v6; // esi
  __int64 result; // rax
  unsigned __int64 v8; // [rsp+40h] [rbp-20h]
  unsigned int v9; // [rsp+58h] [rbp-8h] BYREF
  int v10; // [rsp+88h] [rbp+28h] BYREF
  int v11; // [rsp+90h] [rbp+30h] BYREF

  v10 = 0;
  v11 = 0;
  v2 = *(_QWORD *)(qword_140306360 + 24);
  v3 = dword_1403352A0;
  v4 = HIDWORD(BcpCursor);
  v5 = HIDWORD(BcpCursor);
  v6 = BcpCursor;
  *(_DWORD *)(v2 + 56) = a2;
  *(_DWORD *)(qword_140306360 + 8) = a2;
  result = BgpDisplayCharacterEx(a1, (__int64 *)qword_140306360, v6, v5, *(_DWORD *)(v2 + 40), -1, &v10, &v11, v8);
  if ( (int)result >= 0 )
  {
    if ( v3 < v4 + v11 )
      v3 = v4 + v11;
    v9 = v3;
    return BcpSetCursorPosition(v6 + v10, v4, &v9);
  }
  return result;
}
