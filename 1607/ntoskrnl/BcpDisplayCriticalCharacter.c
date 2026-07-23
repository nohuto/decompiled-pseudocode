/*
 * XREFs of BcpDisplayCriticalCharacter @ 0x140239920
 * Callers:
 *     BcpDisplayErrorInformation @ 0x140239D28 (BcpDisplayErrorInformation.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14023941C (BgpDisplayCharacterEx.c)
 *     BcpSetCursorPosition @ 0x14023A4FC (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayCriticalCharacter(__int64 a1, int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // r9d
  int v6; // esi
  unsigned int v7; // r8d
  __int64 result; // rax
  unsigned __int64 v9; // [rsp+40h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp-8h] BYREF
  int v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+90h] [rbp+30h] BYREF

  v12 = 0;
  v11 = 0;
  v2 = *(_QWORD *)(qword_1403293F0 + 24);
  v3 = dword_140358298;
  v4 = HIDWORD(BcpCursor);
  v5 = HIDWORD(BcpCursor);
  v6 = BcpCursor;
  v7 = BcpCursor;
  *(_DWORD *)(v2 + 56) = a2;
  *(_DWORD *)(qword_1403293F0 + 8) = a2;
  result = BgpDisplayCharacterEx(0x20u, (__int64 *)qword_1403293F0, v7, v5, *(_DWORD *)(v2 + 40), -1, &v12, &v11, v9);
  if ( (int)result >= 0 )
  {
    if ( v3 < v4 + v11 )
      v3 = v4 + v11;
    v10 = v3;
    return BcpSetCursorPosition((unsigned int)(v6 + v12), v4, &v10);
  }
  return result;
}
