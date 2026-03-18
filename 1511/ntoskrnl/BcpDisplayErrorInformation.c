/*
 * XREFs of BcpDisplayErrorInformation @ 0x14021FE2C
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x140220678 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     BcpDisplayCriticalCharacter @ 0x14021FA6C (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x14021FB28 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x1402203F0 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x1402204A4 (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(
        unsigned int a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int64 *v9; // r14
  int *v10; // rbx
  int v11; // eax
  int v12; // edx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r11d
  int v16; // edx
  __int16 v17; // ax
  unsigned int v18; // edi
  unsigned __int16 *v19; // rsi
  char v20; // cl
  unsigned int v21; // r9d
  unsigned int v22; // r8d
  unsigned __int64 v23; // r10
  __int16 *v24; // rdx
  __int16 v25; // ax
  unsigned __int8 v26; // al
  __int64 v28; // [rsp+20h] [rbp-A9h] BYREF
  char *v29; // [rsp+28h] [rbp-A1h] BYREF
  int v30; // [rsp+30h] [rbp-99h]
  __int64 v31; // [rsp+38h] [rbp-91h]
  int v32[4]; // [rsp+40h] [rbp-89h] BYREF
  char v33; // [rsp+50h] [rbp-79h] BYREF

  v9 = a3;
  v10 = (int *)((char *)&unk_1402CF700 + 56 * a1);
  v11 = v10[3] + v10[7];
  v12 = *v10;
  HIDWORD(BcpCursor) = v10[10] + dword_1403352A0;
  LODWORD(BcpCursor) = v11;
  BcpDisplayCriticalString((__int16 *)&stru_1403062D0, v12, (unsigned int)a3, a1);
  BcpDisplayCriticalCharacter(0x20u, *v10);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), *v10, v13, a1);
  if ( a4 )
  {
    BcpDisplayCriticalCharacter(0x20u, *v10);
    BcpDisplayCriticalCharacter(0x28u, *v10);
    LODWORD(v28) = 0x800000;
    v29 = &v33;
    BcpSanitizeDriverName(a4, &v28);
    BcpDisplayCriticalString((__int16 *)&v28, *v10, v14, a1);
    BcpDisplayCriticalCharacter(0x29u, *v10);
  }
  v31 = BcpCursor;
  v32[0] = dword_1403352A0;
  v28 = 0LL;
  LODWORD(v29) = 0;
  BcpSetCursorPosition(0LL, 0LL, &v29);
  v17 = v16 + 48;
  v18 = v15;
  v30 = v16 + 48;
  v19 = (unsigned __int16 *)(a5 + 34);
  do
  {
    v20 = 60;
    v21 = *v19 >> 1;
    v22 = v15;
    v23 = *v9;
    v24 = *(__int16 **)(v19 + 3);
    if ( v21 )
    {
      while ( !v22 )
      {
        *v24 = v17;
LABEL_17:
        ++v22;
        ++v24;
        if ( v22 >= v21 )
          goto LABEL_18;
      }
      if ( v22 == 1 )
      {
        v25 = 120;
      }
      else
      {
        if ( v22 == v21 - 1 )
        {
          *v24 = v15;
LABEL_16:
          v17 = 48;
          goto LABEL_17;
        }
        v26 = (v23 >> v20) & 0xF;
        if ( v26 >= 0xAu )
          v25 = (unsigned __int8)(v26 - 10) + 65;
        else
          v25 = v30 + ((v23 >> v20) & 0xF);
        v20 -= 4;
      }
      *v24 = v25;
      goto LABEL_16;
    }
LABEL_18:
    if ( BcpDisplayParameters != (_BYTE)v15 || (a6 & 8) != 0 && a2 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(a5 + 16 * (v18 + 2LL)), *v10, v22, a1);
      v15 = 0;
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_1403352A0;
    }
    ++v18;
    v19 += 8;
    ++v9;
    v17 = 48;
  }
  while ( v18 < 4 );
  return BcpSetCursorPosition((unsigned int)v31, HIDWORD(v31), v32);
}
