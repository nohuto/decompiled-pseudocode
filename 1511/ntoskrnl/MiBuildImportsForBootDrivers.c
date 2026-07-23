/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x14074BBEC
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x14074BAF4 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // rbp
  PVOID *v4; // rsi
  PVOID v5; // rax
  char *PoolWithTag; // r15
  PVOID *i; // r14
  unsigned __int64 *v8; // rdi
  PVOID v9; // rcx
  ULONG v10; // r11d
  unsigned __int64 v11; // r8
  ULONG j; // r10d
  ULONG v13; // edi
  unsigned __int64 v14; // rcx
  void **v15; // rdx
  __int64 v16; // r8
  PVOID *v17; // rax
  PVOID *v18; // rdx
  unsigned int v19; // r9d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned int v23; // r10d
  char *v24; // rdx
  __int64 v25; // r9
  PVOID *v26; // rcx
  PVOID *k; // rbx
  PVOID v29; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v31; // [rsp+68h] [rbp+10h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v31 = &PsLoadedModuleList;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    return 3221226021LL;
  do
  {
    v5 = v0[6];
    if ( PsNtosImageBase == v5 )
    {
      v3 = v0;
    }
    else if ( PsHalImageBase == v5 )
    {
      v4 = v0;
    }
    *((_WORD *)v0 + 54) = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v4 || v0 == v3;
    v0[17] = (PVOID)1;
    ++v2;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v3 || !v4 )
    return 3221226021LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)257, 8LL * v2, 0x54446D4Du);
  if ( PoolWithTag )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      v8 = (unsigned __int64 *)RtlImageDirectoryEntryToData(i[6], 1u, 0xCu, &Size);
      if ( !v8 )
        goto LABEL_15;
      memset(PoolWithTag, 0, 8LL * v2);
      v9 = 0LL;
      v10 = Size >> 3;
      v11 = 0LL;
      for ( j = 0; j < v10; ++v8 )
      {
        if ( !v9 || *v8 < (unsigned __int64)v9 || *v8 >= v11 )
        {
          v18 = (PVOID *)PsLoadedModuleList;
          v19 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v20 = *v8;
            while ( 1 )
            {
              v9 = v18[6];
              v11 = (unsigned __int64)v9 + *((unsigned int *)v18 + 16);
              if ( v20 >= (unsigned __int64)v9 && v20 < v11 )
                break;
              v18 = (PVOID *)*v18;
              ++v19;
              if ( v18 == v31 )
                goto LABEL_35;
            }
            *(_QWORD *)&PoolWithTag[8 * v19] = v18;
          }
LABEL_35:
          v21 = *v8;
          if ( *v8 < (unsigned __int64)v9 || v21 >= v11 )
          {
            if ( v21 )
              goto LABEL_59;
            v9 = 0LL;
          }
        }
        ++j;
      }
      Size = 0;
      v13 = 0;
      v14 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v15 = (void **)PoolWithTag;
      v16 = v2;
      do
      {
        v17 = (PVOID *)*v15;
        if ( *v15 && v17 != v3 && v17 != v4 && v17 != i )
        {
          v14 = (unsigned __int64)*v15;
          ++v13;
        }
        ++v15;
        --v16;
      }
      while ( v16 );
      Size = v13;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          i[17] = (PVOID)(v14 | 1);
          ++*(_WORD *)(v14 + 108);
        }
        else
        {
          if ( v13 > 0x1FFFFFFE || (v22 = ExAllocatePoolWithTag((POOL_TYPE)257, 8 * v13 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_59:
            v1 = 1;
            break;
          }
          v23 = 0;
          *v22 = v13;
          v24 = PoolWithTag;
          v25 = v2;
          do
          {
            v26 = *(PVOID **)v24;
            if ( *(_QWORD *)v24 && v26 != v3 && v26 != v4 && v26 != i )
            {
              v22[v23 + 1] = v26;
              ++*(_WORD *)(*(_QWORD *)v24 + 108LL);
              ++v23;
            }
            v24 += 8;
            --v25;
          }
          while ( v25 );
          i[17] = v22;
        }
      }
      else
      {
LABEL_15:
        i[17] = (PVOID)-2LL;
      }
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    v3[17] = (PVOID)1;
    v4[17] = (PVOID)1;
    if ( v1 != 1 )
      return 0LL;
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v29 = k[17];
      if ( v29 != (PVOID)1 && v29 != (PVOID)-2LL && ((unsigned __int8)v29 & 1) == 0 )
        ExFreePoolWithTag(v29, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
