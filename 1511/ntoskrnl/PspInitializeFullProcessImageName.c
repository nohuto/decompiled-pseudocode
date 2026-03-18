/*
 * XREFs of PspInitializeFullProcessImageName @ 0x1404ABF8C
 * Callers:
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rdx
  __m128i v5; // xmm0
  unsigned __int16 v6; // ax
  unsigned __int64 v7; // xmm0_8
  _WORD *v8; // rcx
  __int64 v9; // rax
  _BYTE *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rcx
  int NameStringMode; // eax
  int v15; // edi
  char *v16; // rax
  void *v17; // rbx
  PVOID PoolWithTag; // rax
  PVOID v20; // rax
  unsigned int NumberOfBytes[4]; // [rsp+30h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF

  if ( (*(_DWORD *)(a2 + 1724) & 1) == 0 )
  {
    v4 = (_BYTE *)(a2 + 1104);
    v5 = *(__m128i *)(*(_QWORD *)(a1 + 168) + 88LL);
    v6 = _mm_cvtsi128_si32(v5);
    v7 = _mm_srli_si128(v5, 8).m128i_u64[0];
    v8 = (_WORD *)(v7 + v6);
    v9 = 0LL;
    if ( v7 )
    {
      if ( (unsigned __int64)v8 > v7 )
      {
        while ( *--v8 != 92 )
        {
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned __int64)v8 <= v7 )
            goto LABEL_8;
        }
        ++v8;
LABEL_8:
        if ( (unsigned int)v9 >= 0xF )
          v9 = 14LL;
      }
      v10 = &v4[v9];
      v11 = 0LL;
      v12 = v10 - v4;
      if ( v4 > v10 )
        v12 = 0LL;
      if ( v12 )
      {
        do
        {
          ++v11;
          *v4++ = *(_BYTE *)v8++;
        }
        while ( v11 < v12 );
      }
    }
    *v4 = 0;
    v13 = *(char **)(a1 + 168);
    Src[0] = 0LL;
    Src[1] = 0LL;
    NumberOfBytes[0] = 272;
    NameStringMode = ObQueryNameStringMode(v13, (__int64)Src, 0x110u, NumberOfBytes, 0);
    v15 = NameStringMode;
    if ( NameStringMode == -2147483643 || NameStringMode == -1073741789 || NameStringMode == -1073741820 )
    {
      if ( NumberOfBytes[0] > 0x110 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes[0], 0x6E497350u);
        v17 = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = ObQueryNameStringMode(*(char **)(a1 + 168), (__int64)PoolWithTag, NumberOfBytes[0], NumberOfBytes, 0);
          if ( v15 >= 0 )
            goto LABEL_22;
          ExFreePoolWithTag(v17, 0);
LABEL_21:
          if ( v15 >= 0 )
            goto LABEL_22;
        }
      }
    }
    else if ( NameStringMode >= 0 && NumberOfBytes[0] - 17 <= 0xFF )
    {
      v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes[0], 0x6E497350u);
      v17 = v16;
      if ( v16 )
      {
        *(_OWORD *)v16 = *(_OWORD *)Src;
        *((_QWORD *)v16 + 1) = v16 + 16;
        memmove(v16 + 16, Src[1], WORD1(Src[0]));
        goto LABEL_21;
      }
    }
  }
  NumberOfBytes[0] = 16;
  v20 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v17 = v20;
  if ( v20 )
  {
    memset(v20, 0, NumberOfBytes[0]);
    v15 = 0;
  }
  else
  {
    v15 = -1073741801;
  }
LABEL_22:
  *(_QWORD *)(a2 + 1128) = v17;
  return (unsigned int)v15;
}
