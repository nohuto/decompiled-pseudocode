/*
 * XREFs of IopSetEnvironmentVariableTrEE @ 0x140679CEC
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     IopIssueTrEERequest @ 0x1401F8E5C (IopIssueTrEERequest.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x140678C40 (IopEfiStatusToNTSTATUS.c)
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
  size_t v12; // rsi
  unsigned int v13; // edi
  unsigned int v14; // ebp
  char *PoolWithTagPriority; // rax
  char *v16; // rbx
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
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (char *)ExAllocatePoolWithTagPriority(
                                    PagedPool,
                                    v14,
                                    0x20206F49u,
                                    (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (char *)ExAllocatePoolWithTag(PagedPool, v14, 0x20206F49u);
  v16 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    v18 = a7;
    *(_OWORD *)(v16 + 4) = *a4;
    if ( (v18 & 1) != 0 )
      v18 |= 6u;
    *((_DWORD *)v16 + 5) = v18;
    *(_DWORD *)v16 = 36;
    memmove(v16 + 36, a3, v13);
    *((_DWORD *)v16 + 8) = v13 + 36;
    *((_QWORD *)v16 + 3) = v12;
    memmove(&v16[v13 + 36], Src, v12);
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
