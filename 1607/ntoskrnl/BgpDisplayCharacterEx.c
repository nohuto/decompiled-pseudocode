/*
 * XREFs of BgpDisplayCharacterEx @ 0x140239538
 * Callers:
 *     BcpDisplayCriticalCharacter @ 0x140239A3C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x140239B00 (BcpDisplayCriticalString.c)
 *     BcpDisplayProgress @ 0x14023A124 (BcpDisplayProgress.c)
 *     BcpPrintSpaces @ 0x14023A4BC (BcpPrintSpaces.c)
 *     BgpConsoleDisplayCharacter @ 0x14072A3E8 (BgpConsoleDisplayCharacter.c)
 *     BgpConsoleDisplayCharacterEx @ 0x14072A4F8 (BgpConsoleDisplayCharacterEx.c)
 *     BgpConsoleDrawCursor @ 0x14072A82C (BgpConsoleDrawCursor.c)
 *     BgpConsoleScrollScreen @ 0x14072A9AC (BgpConsoleScrollScreen.c)
 * Callees:
 *     BgpTxtDisplayCharacter @ 0x140127284 (BgpTxtDisplayCharacter.c)
 *     BgpTxtAdjustStaticRegion @ 0x1402398F0 (BgpTxtAdjustStaticRegion.c)
 */

__int64 __fastcall BgpDisplayCharacterEx(
        unsigned __int16 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        unsigned __int64 a9)
{
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r11
  int v14; // [rsp+28h] [rbp-40h]
  _DWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  if ( (dword_1402F9F90 & 1) == 0 )
    return 3221225473LL;
  v11 = a2[3];
  v15[0] = a5;
  v15[1] = a6;
  v17 = *((_DWORD *)a2 + 2);
  v12 = *a2;
  a9 = __PAIR64__(a4, a3);
  v16 = v12;
  result = BgpTxtAdjustStaticRegion(v11, &a9, v15);
  if ( (int)result >= 0 )
    return BgpTxtDisplayCharacter(*(_QWORD *)(v13 + 24), a1, 0, a7, a8, v14);
  return result;
}
