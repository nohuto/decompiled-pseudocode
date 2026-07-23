/*
 * XREFs of SymCryptSha256Append @ 0x1401381E8
 * Callers:
 *     SymCryptSha256 @ 0x140136DE8 (SymCryptSha256.c)
 * Callees:
 *     SymCryptSha256AppendBlocks_ul1 @ 0x140136F40 (SymCryptSha256AppendBlocks_ul1.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SymCryptSha256AppendBlocks_shani @ 0x140235918 (SymCryptSha256AppendBlocks_shani.c)
 */

__int64 __fastcall SymCryptSha256Append(unsigned int *a1, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbx
  char *v5; // rbp
  __int64 result; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  int *v10; // rcx
  int *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = a3;
  *((_QWORD *)a1 + 2) += a3;
  v5 = a2;
  if ( (_DWORD)v3 )
  {
    v8 = (unsigned int)(64 - v3);
    if ( a3 >= v8 )
    {
      memmove((char *)a1 + v3 + 32, a2, (unsigned int)v8);
      v9 = (__int64)(a1 + 8);
      v5 += v8;
      v10 = (int *)(a1 + 24);
      v4 -= v8;
      if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
        result = SymCryptSha256AppendBlocks_ul1(v10, v9, 0x40uLL, &v13);
      else
        result = SymCryptSha256AppendBlocks_shani(v10, v9, 64LL, &v13);
      LODWORD(v3) = 0;
    }
  }
  if ( v4 >= 0x40 )
  {
    v11 = (int *)(a1 + 24);
    if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
      SymCryptSha256AppendBlocks_ul1(v11, (__int64)v5, v4, &v13);
    else
      SymCryptSha256AppendBlocks_shani(v11, v5, v4, &v13);
    v12 = v4;
    v4 = v13;
    result = v12 - v13;
    v5 += result;
  }
  if ( v4 )
  {
    result = (__int64)memmove((char *)a1 + (unsigned int)v3 + 32, v5, v4);
    LODWORD(v3) = v4 + v3;
  }
  *a1 = v3;
  return result;
}
