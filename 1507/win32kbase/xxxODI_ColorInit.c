/*
 * XREFs of xxxODI_ColorInit @ 0x1C007DE20
 * Callers:
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     xxxSetSysColors @ 0x1C0025244 (xxxSetSysColors.c)
 *     GetProcessLuid @ 0x1C0031610 (GetProcessLuid.c)
 *     FastGetProfileStringFromIDW @ 0x1C007E110 (FastGetProfileStringFromIDW.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall xxxODI_ColorInit(__int64 a1)
{
  _OWORD *v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdi
  char *v5; // rcx
  unsigned __int16 v6; // dx
  char *v7; // r14
  unsigned __int16 *v8; // r8
  int v9; // r9d
  int *v10; // r10
  int v11; // r11d
  char v12; // cl
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID AuthenticationId; // [rsp+48h] [rbp-B8h] BYREF
  char v16[128]; // [rsp+50h] [rbp-B0h] BYREF
  char v17[128]; // [rsp+D0h] [rbp-30h] BYREF
  _WORD v18[28]; // [rsp+150h] [rbp+50h] BYREF

  v2 = gpsi;
  v3 = 0;
  v4 = 0LL;
  *((_OWORD *)gpsi + 223) = gargbInitial;
  v2[224] = xmmword_1C00EA6B0;
  v2[225] = xmmword_1C00EA6C0;
  v2[226] = xmmword_1C00EA6D0;
  v2[227] = xmmword_1C00EA6E0;
  v2[228] = xmmword_1C00EA6F0;
  v2[229] = xmmword_1C00EA700;
  *((_QWORD *)v2 + 460) = 0xFF993300F2E4D7LL;
  *((_DWORD *)v2 + 922) = 15790320;
  v5 = (char *)gpsi;
  *(_OWORD *)((char *)gpsi + 3444) = *((_OWORD *)gpsi + 223);
  *(_OWORD *)(v5 + 3460) = *((_OWORD *)v5 + 224);
  *(_OWORD *)(v5 + 3476) = *((_OWORD *)v5 + 225);
  *(_OWORD *)(v5 + 3492) = *((_OWORD *)v5 + 226);
  *(_OWORD *)(v5 + 3508) = *((_OWORD *)v5 + 227);
  *(_OWORD *)(v5 + 3524) = *((_OWORD *)v5 + 228);
  *(_OWORD *)(v5 + 3540) = *((_OWORD *)v5 + 229);
  *(_QWORD *)(v5 + 3556) = *((_QWORD *)v5 + 460);
  *((_DWORD *)v5 + 891) = *((_DWORD *)v5 + 922);
  do
  {
    v18[0] = 0;
    if ( v3 != 1
      || (GetProcessLuid(0LL, &AuthenticationId), AuthenticationId.LowPart != 999)
      || AuthenticationId.HighPart
      || (FastGetProfileStringFromIDW(a1, 26LL, 33LL, &szNull, v18, 25, 0), (v6 = v18[0]) == 0) )
    {
      FastGetProfileStringFromIDW(a1, 0LL, v3 + 32, &szNull, v18, 25, 0);
      v6 = v18[0];
    }
    v7 = &v16[v4];
    v8 = v18;
    v9 = *(_DWORD *)&v16[v4 + 3568LL - (_QWORD)v16 + (_QWORD)gpsi];
    if ( v6 )
    {
      v10 = &v14;
      v11 = 0;
      while ( v6 )
      {
        do
        {
          if ( (unsigned __int16)(v6 - 48) <= 9u )
            break;
          v6 = *++v8;
        }
        while ( *v8 );
        v6 = *v8;
        if ( !*v8 )
          break;
        v12 = 0;
        while ( v6 >= 0x30u && v6 <= 0x39u )
        {
          v12 = *(_BYTE *)v8++ + 10 * v12 - 48;
          v6 = *v8;
        }
        *(_BYTE *)v10 = v12;
        ++v11;
        v10 = (int *)((char *)v10 + 1);
        if ( v11 >= 3 )
        {
          *(_BYTE *)v10 = 0;
          v9 = v14;
          break;
        }
      }
    }
    *(_DWORD *)&v17[v4] = v3++;
    v4 += 4LL;
    *(_DWORD *)v7 = v9;
  }
  while ( v3 < 0x1F );
  return xxxSetSysColors(a1, v3, v17, v16, 6u);
}
