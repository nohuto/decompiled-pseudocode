/*
 * XREFs of ClientFrame @ 0x1C0249F8C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall ClientFrame(HDC a1, int *a2, __int64 a3)
{
  int v5; // ebx
  int v7; // r8d
  int v8; // edx
  int v9; // r15d
  int v10; // r9d
  int v11; // r11d
  int v12; // r10d
  int v13; // ecx
  _DWORD v15[2]; // [rsp+38h] [rbp-49h] BYREF
  _DWORD v16[2]; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v17[4]; // [rsp+48h] [rbp-39h] BYREF
  __int64 v18; // [rsp+58h] [rbp-29h]
  int v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+64h] [rbp-1Dh]
  int v21; // [rsp+68h] [rbp-19h]
  int v22; // [rsp+6Ch] [rbp-15h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  int v24; // [rsp+78h] [rbp-9h]
  int v25; // [rsp+7Ch] [rbp-5h]
  int v26; // [rsp+80h] [rbp-1h]
  int v27; // [rsp+84h] [rbp+3h]
  __int64 v28; // [rsp+88h] [rbp+7h]
  int v29; // [rsp+90h] [rbp+Fh]
  int v30; // [rsp+94h] [rbp+13h]
  int v31; // [rsp+98h] [rbp+17h]
  int v32; // [rsp+9Ch] [rbp+1Bh]
  __int64 v33; // [rsp+A0h] [rbp+1Fh]

  v5 = 1;
  if ( !(unsigned int)GreGetDCPoint(a1, 1LL, v15) || !(unsigned int)GreGetDCPoint(a1, 2LL, v16) )
    return 0LL;
  v7 = 1;
  v8 = a2[3];
  if ( (v15[0] ^ v16[0]) < 0 )
    v7 = -1;
  v9 = a2[1];
  if ( (v15[1] ^ v16[1]) < 0 )
    v5 = -1;
  v10 = v8 - v9;
  if ( v8 - v9 < 0 )
    return 0LL;
  v11 = a2[2];
  v12 = *a2;
  v13 = v11 - *a2;
  if ( (v13 ^ v7) < 0 || (v10 ^ v5) < 0 )
    return 0LL;
  v17[3] = v5;
  v20 = v8 - v5;
  v22 = v5;
  v17[2] = v13;
  v21 = v13;
  v25 = v9 + v5;
  v26 = v7;
  v30 = v9 + v5;
  v31 = v7;
  v27 = v10 - 2 * v5;
  v32 = v27;
  v17[0] = v12;
  v17[1] = v9;
  v18 = a3;
  v19 = v12;
  v23 = a3;
  v24 = v12;
  v28 = a3;
  v29 = v11 - v7;
  v33 = a3;
  return GrePolyPatBlt(a1, 0x5A0049u, (struct _POLYPATBLT *)v17, 4u);
}
