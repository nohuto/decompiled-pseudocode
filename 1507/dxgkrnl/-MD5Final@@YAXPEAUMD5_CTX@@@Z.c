/*
 * XREFs of ?MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C009E01C
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C009DF58 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C009E124 (TransformMD5.c)
 *     ?MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C009E9FC (-MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z.c)
 */

void __fastcall MD5Final(struct MD5_CTX *a1)
{
  int v1; // r8d
  int v2; // eax
  unsigned int v4; // edi
  int *v5; // r9
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // edx
  char *v10; // rdx
  __int64 v11; // r8
  char v12; // al
  __int64 v13; // rcx
  _BYTE v14[56]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+58h] [rbp-20h]
  int v16; // [rsp+5Ch] [rbp-1Ch]

  v1 = 56;
  v2 = *((_DWORD *)a1 + 1);
  v15 = *(_DWORD *)a1;
  v16 = v2;
  if ( ((v15 >> 3) & 0x3F) >= 0x38 )
    v1 = 120;
  MD5Update(a1, &byte_1C00467A0, v1 - ((v15 >> 3) & 0x3F));
  v4 = 2;
  v5 = (int *)v14;
  LODWORD(v6) = 2;
  v7 = 14LL;
  do
  {
    v8 = (unsigned int)(v6 - 2);
    v9 = (*((unsigned __int8 *)a1 + (unsigned int)(v6 - 1) + 24) | ((*((unsigned __int8 *)a1 + (unsigned int)v6 + 24) | (*((unsigned __int8 *)a1 + (unsigned int)(v6 + 1) + 24) << 8)) << 8)) << 8;
    v6 = (unsigned int)(v6 + 4);
    *v5++ = *((unsigned __int8 *)a1 + v8 + 24) | v9;
    --v7;
  }
  while ( v7 );
  TransformMD5((char *)a1 + 8, v14, v6, v5);
  v10 = (char *)a1 + 9;
  v11 = 4LL;
  do
  {
    *((_BYTE *)a1 + v4 + 86) = *(v10 - 1);
    v12 = *v10;
    v10 += 4;
    *((_BYTE *)a1 + v4 + 87) = v12;
    *((_BYTE *)a1 + v4 + 88) = *(v10 - 3);
    v13 = v4 + 1;
    v4 += 4;
    *((_BYTE *)a1 + v13 + 88) = *(v10 - 2);
    --v11;
  }
  while ( v11 );
}
