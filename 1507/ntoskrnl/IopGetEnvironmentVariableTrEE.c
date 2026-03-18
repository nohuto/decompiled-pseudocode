/*
 * XREFs of IopGetEnvironmentVariableTrEE @ 0x140679594
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

__int64 __fastcall IopGetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r15d
  _OWORD *PoolWithTagPriority; // rax
  _OWORD *v14; // rbp
  int v15; // edi
  unsigned int v16; // r14d
  char *PoolWithTag; // rax
  char *v18; // rbx
  size_t v19; // r8
  int v21[4]; // [rsp+50h] [rbp-38h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v11 = 2 * v7 + 2;
  v12 = 2 * v7 + 18;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            v12,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v12, 0x20206F49u);
  v14 = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    memmove(PoolWithTagPriority + 1, a3, v11);
    *v14 = *a4;
    v16 = *a6 + 24;
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = (char *)ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v16,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x20206F49u);
    v18 = PoolWithTag;
    if ( PoolWithTag )
    {
      v15 = IopIssueTrEERequest(0, a1, a2, (__int64)v14, v12, (__int64)PoolWithTag, v16, 0x18u, v21);
      if ( v15 >= 0 )
      {
        if ( *(_QWORD *)v18 )
        {
          if ( *(_QWORD *)v18 == 0x8000000000000005uLL )
          {
            v15 = -1073741789;
            *a6 = *((_DWORD *)v18 + 4);
          }
          else
          {
            *a6 = 0;
            v15 = IopEfiStatusToNTSTATUS(*(_QWORD *)v18);
          }
        }
        else
        {
          if ( a7 )
            *a7 = *((_DWORD *)v18 + 2);
          v19 = *((_QWORD *)v18 + 2);
          if ( (unsigned int)*a6 < v19 )
            v19 = (unsigned int)*a6;
          memmove(a5, v18 + 24, v19);
          *a6 = *((_DWORD *)v18 + 4);
        }
      }
      else
      {
        *a6 = 0;
      }
    }
    else
    {
      v15 = -1073741670;
    }
    ExFreePoolWithTag(v14, 0);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v15;
}
