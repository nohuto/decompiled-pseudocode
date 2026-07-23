/*
 * XREFs of BcpDisplayErrorInformation @ 0x140239D28
 * Callers:
 *     BgpFwDisplayBugCheckScreen @ 0x14023A6D0 (BgpFwDisplayBugCheckScreen.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     BcpDisplayCriticalCharacter @ 0x140239920 (BcpDisplayCriticalCharacter.c)
 *     BcpDisplayCriticalString @ 0x1402399E4 (BcpDisplayCriticalString.c)
 *     BcpSanitizeDriverName @ 0x14023A448 (BcpSanitizeDriverName.c)
 *     BcpSetCursorPosition @ 0x14023A4FC (BcpSetCursorPosition.c)
 */

__int64 __fastcall BcpDisplayErrorInformation(
        unsigned int a1,
        int a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned int v6; // edi
  __int64 v7; // r15
  unsigned __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned int v13; // r8d
  __int64 v14; // rdx
  unsigned int v15; // ebx
  __int64 v16; // r10
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // r8d
  unsigned int v20; // r8d
  __int64 v21; // rcx
  unsigned int v22; // r8d
  unsigned int v23; // r11d
  int v24; // r12d
  int v25; // edx
  __int16 v26; // ax
  unsigned __int16 *v27; // rdi
  unsigned int v28; // ebx
  char v29; // cl
  unsigned int v30; // r9d
  unsigned int v31; // r8d
  unsigned __int64 v32; // r10
  __int16 *v33; // rdx
  __int16 v34; // ax
  unsigned __int8 v35; // al
  __int64 result; // rax
  __int64 v37; // r11
  unsigned int v38; // [rsp+28h] [rbp-A1h] BYREF
  __int64 v39; // [rsp+30h] [rbp-99h] BYREF
  char *v40; // [rsp+38h] [rbp-91h] BYREF
  int v41; // [rsp+40h] [rbp-89h] BYREF
  int v42; // [rsp+44h] [rbp-85h]
  int v43; // [rsp+48h] [rbp-81h]
  char v44; // [rsp+50h] [rbp-79h] BYREF

  v6 = BcpCursor;
  v7 = a1;
  v42 = a2;
  v41 = BcpCursor;
  v9 = a3;
  BcpTextBoxLeftEdgeOverride = (__int64)&v41;
  BcpDisplayCriticalString((__int16 *)&stru_1403293E0, dword_1402F6930[18 * a1 + 1], (unsigned int)a3, a1);
  v10 = dword_1402F6930[18 * v7 + 11];
  v11 = (unsigned int)(v10 + dword_140358298);
  v12 = v10 + v11;
  v38 = v10 + v11;
  BcpSetCursorPosition(v6, v11, &v38);
  BcpDisplayCriticalString((__int16 *)&stru_140329330, dword_1402F6930[18 * v7], v13, v7);
  v14 = v12;
  v15 = dword_1402F6930[18 * v7 + 11] + v12;
  v38 = v15;
  BcpSetCursorPosition(v6, v14, &v38);
  BcpDisplayCriticalString((__int16 *)&stru_1403293D0, *(_DWORD *)(v16 + 72 * v7), v17, v7);
  BcpDisplayCriticalCharacter(v18, dword_1402F6930[18 * v7]);
  BcpDisplayCriticalString((__int16 *)(a5 + 16), dword_1402F6930[18 * v7], v19, v7);
  if ( a4 )
  {
    v38 = dword_1402F6930[18 * v7 + 11] + v15;
    BcpSetCursorPosition(v6, v15, &v38);
    BcpDisplayCriticalString((__int16 *)&stru_1403293C0, dword_1402F6930[18 * v7], v20, v7);
    BcpDisplayCriticalCharacter(v21, dword_1402F6930[18 * v7]);
    LODWORD(v39) = 0x800000;
    v40 = &v44;
    BcpSanitizeDriverName(a4, &v39);
    BcpDisplayCriticalString((__int16 *)&v39, dword_1402F6930[18 * v7], v22, v7);
  }
  v39 = BcpCursor;
  LODWORD(v40) = dword_140358298;
  v38 = 0;
  BcpSetCursorPosition(0LL, 0LL, &v38);
  v24 = v42;
  v26 = v25 + 48;
  v43 = v25 + 48;
  v27 = (unsigned __int16 *)(a5 + 34);
  v28 = v23;
  do
  {
    v29 = 60;
    v30 = *v27 >> 1;
    v31 = v23;
    v32 = *v9;
    v33 = *(__int16 **)(v27 + 3);
    if ( v30 )
    {
      while ( !v31 )
      {
        *v33 = v26;
LABEL_17:
        ++v31;
        ++v33;
        if ( v31 >= v30 )
          goto LABEL_18;
      }
      if ( v31 == 1 )
      {
        v34 = 120;
      }
      else
      {
        if ( v31 == v30 - 1 )
        {
          *v33 = v23;
LABEL_16:
          v26 = 48;
          goto LABEL_17;
        }
        v35 = (v32 >> v29) & 0xF;
        if ( v35 >= 0xAu )
          v34 = (unsigned __int8)(v35 - 10) + 65;
        else
          v34 = v43 + ((v32 >> v29) & 0xF);
        v29 -= 4;
      }
      *v33 = v34;
      goto LABEL_16;
    }
LABEL_18:
    if ( BcpDisplayParameters != (_BYTE)v23 || (a6 & 8) != 0 && v24 == 317 )
    {
      BcpDisplayCriticalString((__int16 *)(a5 + 16 * (v28 + 2LL)), dword_1402F6930[18 * v7], v31, v7);
      v23 = 0;
      LODWORD(BcpCursor) = 0;
      HIDWORD(BcpCursor) = dword_140358298;
    }
    ++v28;
    v27 += 8;
    ++v9;
    v26 = 48;
  }
  while ( v28 < 4 );
  result = BcpSetCursorPosition((unsigned int)v39, HIDWORD(v39), &v40);
  BcpTextBoxLeftEdgeOverride = v37;
  return result;
}
