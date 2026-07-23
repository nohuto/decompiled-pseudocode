/*
 * XREFs of IopSetEnvironmentVariableTrEE @ 0x140629260
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     IopIssueTrEERequest @ 0x1401CC048 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401CC134 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x1406283B0 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopSetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int64 v7; // rax
  size_t v12; // rbp
  unsigned int v13; // edi
  unsigned int v14; // r14d
  char *Pool_4; // rax
  _DWORD *v16; // rbx
  int v17; // edi
  int v18; // eax
  unsigned __int64 v20; // [rsp+50h] [rbp-38h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v12 = (unsigned int)Size;
  v13 = 2 * v7 + 2;
  v14 = v13 + Size + 36;
  Pool_4 = (char *)IopVerifierExAllocatePool_4(0LL, v14);
  v16 = Pool_4;
  if ( Pool_4 )
  {
    *(_OWORD *)(Pool_4 + 4) = *a4;
    v18 = a7;
    if ( (a7 & 1) != 0 )
      v18 = a7 | 6;
    v16[5] = v18;
    *v16 = 36;
    memmove(v16 + 9, a3, v13);
    v16[8] = v13 + 36;
    *((_QWORD *)v16 + 3) = v12;
    memmove((char *)v16 + v13 + 36, Src, v12);
    v17 = IopIssueTrEERequest(2, a1, a2, (__int64)v16, v14, (__int64)&v20, 8u, 8u, &Size);
    if ( v17 >= 0 && v20 )
      v17 = IopEfiStatusToNTSTATUS(v20);
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v17;
}
