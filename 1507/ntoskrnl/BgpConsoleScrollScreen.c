/*
 * XREFs of BgpConsoleScrollScreen @ 0x140761A60
 * Callers:
 *     BgpConsoleDisplayCharacterEx @ 0x140761548 (BgpConsoleDisplayCharacterEx.c)
 * Callees:
 *     BgpDisplayCharacterEx @ 0x14026E350 (BgpDisplayCharacterEx.c)
 */

__int64 BgpConsoleScrollScreen()
{
  int v0; // ecx
  unsigned int v1; // edi
  __int64 v2; // rsi
  unsigned int v3; // edx
  unsigned int v4; // r14d
  unsigned __int16 v5; // bp
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // r15d
  int v9; // r12d
  int v10; // ebp
  unsigned int v11; // esi
  int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+10h] BYREF

  v0 = dword_1403188C4;
  v1 = 0;
  v2 = 0LL;
  do
  {
    v3 = 0;
    if ( v0 != 1 )
    {
      do
      {
        v4 = v3 + 1;
        v5 = dword_1403188C0[3 * v2 + 25 + 3 * v3];
        v6 = v2 + v3;
        v7 = 3 * v6;
        if ( LOWORD(dword_1403188C0[3 * v6 + 22]) != v5
          || dword_1403188C0[3 * v6 + 20] != dword_1403188C0[3 * v2 + 23 + 3 * v3]
          || dword_1403188C0[3 * v6 + 21] != dword_1403188C0[3 * v2 + 24 + 3 * v3] )
        {
          v8 = dword_1403188C0[3 * v2 + 23 + 3 * v3];
          v9 = dword_1403188C0[3 * v2 + 24 + 3 * v3];
          if ( (int)BgpDisplayCharacterEx(
                      v5,
                      (__int64 *)qword_1403188E8,
                      dword_1403188FC + v1 * dword_1403188F0,
                      dword_140318900 + v3 * dword_1403188F4,
                      v9,
                      v8,
                      &v19,
                      &v18,
                      v17) >= 0 )
          {
            dword_1403188C0[v7 + 21] = v9;
            dword_1403188C0[v7 + 20] = v8;
            LOWORD(dword_1403188C0[v7 + 22]) = v5;
          }
          v0 = dword_1403188C4;
        }
        v3 = v4;
      }
      while ( v4 < v0 - 1 );
    }
    ++v1;
    v2 += 25LL;
  }
  while ( v1 < 0x50 );
  v10 = dword_1403188D0;
  v11 = v0 - 1;
  v12 = dword_1403188CC;
  v13 = 0;
  v14 = 0LL;
  do
  {
    if ( (int)BgpDisplayCharacterEx(
                0x20u,
                (__int64 *)qword_1403188E8,
                dword_1403188FC + v13 * dword_1403188F0,
                dword_140318900 + v11 * dword_1403188F4,
                v10,
                v12,
                &v19,
                &v18,
                v17) >= 0 )
    {
      v15 = 3 * (v14 + v11);
      LOWORD(dword_1403188C0[v15 + 22]) = 32;
      dword_1403188C0[v15 + 21] = v10;
      dword_1403188C0[v15 + 20] = v12;
    }
    ++v13;
    v14 += 25LL;
  }
  while ( v13 < 0x50 );
  dword_140318904 = 0;
  result = (unsigned int)(dword_1403188C4 - 1);
  dword_140318908 = dword_1403188C4 - 1;
  return result;
}
