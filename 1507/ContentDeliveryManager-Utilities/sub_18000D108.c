/*
 * XREFs of sub_18000D108 @ 0x18000D108
 * Callers:
 *     sub_18000D280 @ 0x18000D280 (sub_18000D280.c)
 * Callees:
 *     sub_1800011FC @ 0x1800011FC (sub_1800011FC.c)
 *     sub_18000BC34 @ 0x18000BC34 (sub_18000BC34.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

int __fastcall sub_18000D108(__int64 a1, int *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  void *v6; // r8
  void *v7; // r9
  __int64 v8; // rax
  void *v9; // rdx
  void *v10; // rdx
  void *v11; // r8
  int v13; // [rsp+30h] [rbp-49h] BYREF
  int v14; // [rsp+34h] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-39h] BYREF
  void *v16; // [rsp+60h] [rbp-19h]
  int v17; // [rsp+68h] [rbp-11h]
  int v18; // [rsp+6Ch] [rbp-Dh]
  int *v19; // [rsp+70h] [rbp-9h]
  __int64 v20; // [rsp+78h] [rbp-1h]
  void *v21; // [rsp+80h] [rbp+7h]
  int v22; // [rsp+88h] [rbp+Fh]
  int v23; // [rsp+8Ch] [rbp+13h]
  int *v24; // [rsp+90h] [rbp+17h]
  __int64 v25; // [rsp+98h] [rbp+1Fh]
  int *v26; // [rsp+A0h] [rbp+27h]
  __int64 v27; // [rsp+A8h] [rbp+2Fh]
  void *v28; // [rsp+B0h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]

  v3 = (__int64)sub_18000BC34();
  v4 = *(_QWORD *)(v3 + 8);
  if ( *(_DWORD *)v4 > 5u && (*(_QWORD *)(v4 + 16) & 0x400000000000LL) != 0 )
  {
    v3 = *(_QWORD *)(v4 + 24) & 0x400000000000LL;
    if ( v3 == *(_QWORD *)(v4 + 24) )
    {
      v5 = *((_QWORD *)a2 + 6);
      v6 = &unk_18002B658;
      v7 = &unk_18002B658;
      LODWORD(v8) = 0;
      if ( v5 )
      {
        v7 = (void *)*((_QWORD *)a2 + 6);
        v8 = -1LL;
        do
          ++v8;
        while ( *(_BYTE *)(v5 + v8) );
      }
      v9 = (void *)*((_QWORD *)a2 + 15);
      v17 = v8 + 1;
      v19 = a2 + 14;
      LODWORD(v8) = 0;
      v16 = v7;
      v18 = 0;
      v20 = 4LL;
      if ( v9 )
      {
        v6 = v9;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_BYTE *)v9 + v8) );
      }
      v10 = (void *)*((_QWORD *)a2 + 2);
      v22 = v8 + 1;
      v14 = *a2;
      v24 = &v14;
      v13 = a2[1];
      v26 = &v13;
      LODWORD(v8) = 0;
      v21 = v6;
      v11 = &unk_18002B65C;
      v23 = 0;
      v25 = 4LL;
      v27 = 4LL;
      if ( v10 )
      {
        v11 = v10;
        v8 = -1LL;
        do
          ++v8;
        while ( *((_WORD *)v10 + v8) );
      }
      v28 = v11;
      v29 = 2 * v8 + 2;
      v30 = 0;
      LODWORD(v3) = sub_1800011FC(v4, byte_180033077, 0LL, 0LL, 8u, &v15);
    }
  }
  return v3;
}
