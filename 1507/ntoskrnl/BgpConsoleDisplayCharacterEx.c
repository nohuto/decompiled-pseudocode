/*
 * XREFs of BgpConsoleDisplayCharacterEx @ 0x140761548
 * Callers:
 *     BgpConsoleDisplayString @ 0x140761850 (BgpConsoleDisplayString.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14026E350 (BgpDisplayCharacterEx.c)
 *     BgpConsoleScrollScreen @ 0x140761A60 (BgpConsoleScrollScreen.c)
 */

__int64 BgpConsoleDisplayCharacterEx(unsigned __int16 a1, unsigned int a2, unsigned int a3, int a4, int a5, ...)
{
  int v7; // edi
  int v8; // r14d
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v13; // edx
  int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]
  int v20; // [rsp+78h] [rbp+10h] BYREF
  va_list va; // [rsp+98h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( a2 > 0x50 || a3 > dword_1403188C4 )
    return 3221225485LL;
  v7 = 0;
  if ( a1 == 8 )
  {
    v10 = dword_140318904;
    if ( !dword_140318904 )
      goto LABEL_27;
    v17 = a5;
    --dword_140318904;
    v7 = BgpDisplayCharacterEx(
           0x20u,
           (__int64 *)qword_1403188E8,
           dword_1403188FC + (v10 - 1) * dword_1403188F0,
           dword_140318900 + dword_1403188F4 * dword_140318908,
           a5,
           a4,
           (int *)va,
           &v20,
           v19);
    if ( v7 >= 0 )
    {
      v18 = 3 * ((unsigned int)dword_140318908 + 25LL * (unsigned int)dword_140318904);
      LOWORD(dword_1403188C0[v18 + 22]) = 32;
      dword_1403188C0[v18 + 20] = a4;
      dword_1403188C0[v18 + 21] = v17;
    }
    goto LABEL_26;
  }
  if ( a1 != 9 )
  {
    if ( a1 == 10 )
    {
      dword_140318904 = 0;
LABEL_15:
      v11 = ++dword_140318908;
      goto LABEL_11;
    }
    if ( a1 == 13 )
    {
      dword_140318904 = 0;
      goto LABEL_10;
    }
    v8 = a5;
    v7 = BgpDisplayCharacterEx(
           a1,
           (__int64 *)qword_1403188E8,
           dword_1403188FC + dword_140318904 * dword_1403188F0,
           dword_140318900 + dword_1403188F4 * dword_140318908,
           a5,
           a4,
           (int *)va,
           &v20,
           v19);
    if ( v7 >= 0 )
    {
      v9 = 3 * ((unsigned int)dword_140318908 + 25LL * (unsigned int)dword_140318904);
      LOWORD(dword_1403188C0[v9 + 22]) = a1;
      dword_1403188C0[v9 + 20] = a4;
      dword_1403188C0[v9 + 21] = v8;
      v10 = ++dword_140318904;
      goto LABEL_27;
    }
LABEL_26:
    v10 = dword_140318904;
    goto LABEL_27;
  }
  v10 = dword_140318904;
  v13 = 5;
  if ( (unsigned int)(80 - dword_140318904) >= 5 || (v13 = 80 - dword_140318904, 80 != dword_140318904) )
  {
    v14 = a5;
    v15 = v13;
    do
    {
      v7 = BgpDisplayCharacterEx(
             0x20u,
             (__int64 *)qword_1403188E8,
             dword_1403188FC + v10 * dword_1403188F0,
             dword_140318900 + dword_1403188F4 * dword_140318908,
             v14,
             a4,
             (int *)va,
             &v20,
             v19);
      if ( v7 >= 0 )
      {
        v16 = 3 * ((unsigned int)dword_140318908 + 25LL * (unsigned int)dword_140318904);
        LOWORD(dword_1403188C0[v16 + 22]) = 32;
        dword_1403188C0[v16 + 20] = a4;
        dword_1403188C0[v16 + 21] = v14;
      }
      v10 = ++dword_140318904;
      --v15;
    }
    while ( v15 );
  }
LABEL_27:
  if ( v10 >= 0x50 )
  {
    dword_140318904 = 0;
    goto LABEL_15;
  }
LABEL_10:
  v11 = dword_140318908;
LABEL_11:
  if ( v11 >= dword_1403188C4 )
  {
    dword_140318908 = v11 - 1;
    BgpConsoleScrollScreen();
  }
  return (unsigned int)v7;
}
