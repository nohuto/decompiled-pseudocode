/*
 * XREFs of ?MD5Update@@YAXPEAUMD5_CTX@@PEBEI@Z @ 0x1C009E9FC
 * Callers:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C009DF58 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 *     ?MD5Final@@YAXPEAUMD5_CTX@@@Z @ 0x1C009E01C (-MD5Final@@YAXPEAUMD5_CTX@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     TransformMD5 @ 0x1C009E124 (TransformMD5.c)
 */

void __fastcall MD5Update(struct MD5_CTX *a1, const unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v3; // eax
  struct MD5_CTX *v4; // rbx
  unsigned int v6; // edi
  unsigned int v7; // edx
  unsigned int v8; // r8d
  int *v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  int v12; // edx
  int v13[16]; // [rsp+20h] [rbp-58h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = a1;
  v6 = a3;
  LODWORD(a1) = (*(_DWORD *)a1 >> 3) & 0x3F;
  v7 = v3 + 8 * a3;
  if ( v7 < v3 )
    ++*((_DWORD *)v4 + 1);
  *(_DWORD *)v4 = v7;
  *((_DWORD *)v4 + 1) += a3 >> 29;
  if ( a3 )
  {
    a1 = (struct MD5_CTX *)(int)a1;
    do
    {
      --v6;
      *((_BYTE *)a1 + (_QWORD)v4 + 24) = *a2++;
      a1 = (struct MD5_CTX *)((char *)a1 + 1);
      if ( a1 == (struct MD5_CTX *)64 )
      {
        v8 = 2;
        v9 = v13;
        v10 = 16LL;
        do
        {
          v11 = v8 - 2;
          v12 = (*((unsigned __int8 *)v4 + v8 + 23) | ((*((unsigned __int8 *)v4 + v8 + 24) | (*((unsigned __int8 *)v4
                                                                                              + v8
                                                                                              + 25) << 8)) << 8)) << 8;
          v8 += 4;
          *v9++ = *((unsigned __int8 *)v4 + v11 + 24) | v12;
          --v10;
        }
        while ( v10 );
        TransformMD5((int *)v4 + 2, v13);
        a1 = 0LL;
      }
    }
    while ( v6 );
  }
}
