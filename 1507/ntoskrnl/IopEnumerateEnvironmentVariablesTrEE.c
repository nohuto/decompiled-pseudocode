/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140678EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     IopIssueTrEERequest @ 0x1401F8E5C (IopIssueTrEERequest.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x140678C40 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int64 a4,
        _DWORD *a5)
{
  _OWORD *v6; // r13
  __int64 *v7; // r14
  _OWORD *PoolWithTagPriority; // rax
  _OWORD *v10; // rbx
  int v11; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v13; // rsi
  _OWORD *v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  void *v17; // rcx
  unsigned __int64 v18; // r12
  int v19; // eax
  unsigned __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // ebx
  __int64 *v23; // rax
  _DWORD *v24; // rcx
  void *v25; // r12
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rbx
  int v28; // eax
  int v29; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+58h] [rbp-70h]
  unsigned __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  _DWORD *v33; // [rsp+70h] [rbp-58h]
  unsigned __int64 v34; // [rsp+78h] [rbp-50h]
  unsigned __int64 v35; // [rsp+80h] [rbp-48h]
  _OWORD *v36; // [rsp+88h] [rbp-40h]
  char v39; // [rsp+E0h] [rbp+18h]

  if ( a3 == 2 )
  {
    v39 = 1;
  }
  else
  {
    v39 = 0;
    if ( a3 != 1 )
      return 3221225485LL;
  }
  v32 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                            PagedPool,
                            0x214uLL,
                            0x20206F49u,
                            (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, 0x214uLL, 0x20206F49u);
  v10 = PoolWithTagPriority;
  P = PoolWithTagPriority;
  if ( PoolWithTagPriority )
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTag = (__int64 *)ExAllocatePoolWithTagPriority(
                                 PagedPool,
                                 0x220uLL,
                                 0x20206F49u,
                                 (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x220uLL, 0x20206F49u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_14;
    if ( v39 )
    {
      if ( ViVerifierDriverAddedThunkListHead )
        v14 = ExAllocatePoolWithTagPriority(
                PagedPool,
                0x214uLL,
                0x20206F49u,
                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
      else
        v14 = ExAllocatePoolWithTag(PagedPool, 0x214uLL, 0x20206F49u);
      v6 = v14;
      if ( !v14
        || ((v32 = 288LL, ViVerifierDriverAddedThunkListHead)
          ? (v15 = (__int64 *)ExAllocatePoolWithTagPriority(
                                PagedPool,
                                0x120uLL,
                                0x20206F49u,
                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1)))
          : (v15 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x20206F49u)),
            (v7 = v15) == 0LL) )
      {
LABEL_14:
        v11 = -1073741670;
LABEL_61:
        ExFreePoolWithTag(P, 0);
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
        if ( v6 )
          ExFreePoolWithTag(v6, 0);
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        goto LABEL_67;
      }
      v10 = P;
    }
    v16 = (unsigned int)*a5;
    *a5 = 0;
    v34 = a4 + v16;
    memset(v13, 0, 0x220uLL);
    v17 = v10 + 1;
    v35 = a4;
    v36 = v10 + 1;
    v18 = a4;
    v31 = a4;
    while ( 1 )
    {
      *v10 = *(_OWORD *)(v13 + 1);
      memmove(v17, (char *)v13 + 28, *((unsigned int *)v13 + 6));
      *((_WORD *)v10 + ((unsigned __int64)*((unsigned int *)v13 + 6) >> 1) + 8) = 0;
      v19 = IopIssueTrEERequest(1, a1, a2, (__int64)v10, 0x214u, (__int64)v13, 0x220u, 0x1Cu, &v29);
      LODWORD(v20) = 0;
      v11 = v19;
      if ( v19 < 0 )
        break;
      if ( *v13 == 0x800000000000000EuLL )
      {
        v11 = 0;
        break;
      }
      if ( *v13 < 0 )
      {
        v11 = IopEfiStatusToNTSTATUS(*v13);
        break;
      }
      if ( v39 )
      {
        *v6 = *(_OWORD *)(v13 + 1);
        memmove(v6 + 1, (char *)v13 + 28, *((unsigned int *)v13 + 6));
        while ( 1 )
        {
          v21 = IopIssueTrEERequest(0, a1, a2, (__int64)v6, 0x214u, (__int64)v7, v32, 0x18u, &v29);
          v20 = 0LL;
          v11 = v21;
          if ( v21 < 0 )
            goto LABEL_58;
          if ( *v7 == 0x8000000000000005uLL )
          {
            if ( a4 )
            {
              v22 = *((_DWORD *)v7 + 4) + 32;
              v32 = v22;
              ExFreePoolWithTag(v7, 0);
              if ( ViVerifierDriverAddedThunkListHead )
                v23 = (__int64 *)ExAllocatePoolWithTagPriority(
                                   PagedPool,
                                   v22,
                                   0x20206F49u,
                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
              else
                v23 = (__int64 *)ExAllocatePoolWithTag(PagedPool, v22, 0x20206F49u);
              v20 = 0LL;
              v7 = v23;
              if ( !v23 )
              {
                v11 = -1073741670;
                goto LABEL_58;
              }
              v11 = -1073741789;
            }
          }
          else if ( *v7 < 0 )
          {
            v11 = IopEfiStatusToNTSTATUS(*v7);
LABEL_43:
            if ( v11 < 0 )
              goto LABEL_58;
            v24 = (_DWORD *)v31;
            v25 = (void *)((*((unsigned int *)v13 + 6) + v31 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
            v26 = ((unsigned __int64)v25 + v7[2] + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            if ( v26 > v34 )
              a4 = v20;
            if ( a4 )
            {
              *(_OWORD *)(v31 + 16) = *(_OWORD *)(v13 + 1);
              memmove(v24 + 8, (char *)v13 + 28, *((unsigned int *)v13 + 6));
              *(_DWORD *)(v31 + 4) = (_DWORD)v25 - v31;
              memmove(v25, v7 + 3, v7[2]);
              v24 = (_DWORD *)v31;
              *(_DWORD *)(v31 + 8) = *((_DWORD *)v7 + 4);
              v24[3] = *((_DWORD *)v7 + 2);
              *v24 = v26 - (_DWORD)v24;
            }
            v18 = v35;
            v33 = v24;
            v31 = v26;
            *a5 += v26 - (_DWORD)v24;
            goto LABEL_54;
          }
          if ( v11 != -1073741789 )
            goto LABEL_43;
        }
      }
      v27 = (*((unsigned int *)v13 + 6) + v18 + 27) & 0xFFFFFFFFFFFFFFF8uLL;
      if ( v27 > v34 )
        a4 = 0LL;
      if ( a4 )
      {
        *(_OWORD *)(v18 + 4) = *(_OWORD *)(v13 + 1);
        memmove((void *)(v18 + 20), (char *)v13 + 28, *((unsigned int *)v13 + 6));
        *(_DWORD *)v18 = v27 - v18;
      }
      v28 = v27 - v18;
      v33 = (_DWORD *)v18;
      v18 = v27;
      v35 = v27;
      *a5 += v28;
LABEL_54:
      v10 = P;
      v17 = v36;
    }
LABEL_58:
    if ( v33 && a4 )
      *v33 = v20;
    goto LABEL_61;
  }
  v11 = -1073741670;
LABEL_67:
  if ( !a4 )
    return (unsigned int)-1073741789;
  return (unsigned int)v11;
}
