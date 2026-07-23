/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x14053F474 (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x14053F474 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1406D2DE4 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(char *Src, int a2, char a3, size_t *a4, unsigned int *a5)
{
  char *v5; // rdi
  int v6; // ecx
  size_t v7; // rbx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int NtPartitionPath; // edi
  void *v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // eax
  PVOID v16; // rax
  int v18; // ecx
  size_t v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  PVOID v25; // rax
  size_t v26; // r8
  PVOID v27; // rdx
  PVOID v28; // rax
  const wchar_t *v29; // r8
  __int64 v30; // rax
  PVOID v31; // rax
  PVOID v32; // rax
  int v33; // eax
  int v34; // eax
  _DWORD *v35; // rcx
  unsigned int v36; // r8d
  unsigned __int64 v37; // rdx
  void *v38; // rdi
  __int64 v39; // rsi
  unsigned int v40; // ecx
  PVOID PoolWithTag; // rax
  __int64 v42; // rax
  int v43; // eax
  char v44; // [rsp+30h] [rbp-48h]
  unsigned int v45; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v46; // [rsp+38h] [rbp-40h] BYREF
  PVOID v47; // [rsp+40h] [rbp-38h]
  int v48; // [rsp+48h] [rbp-30h]
  size_t v49; // [rsp+50h] [rbp-28h]
  void *Srca; // [rsp+58h] [rbp-20h] BYREF
  size_t Size; // [rsp+60h] [rbp-18h]
  PVOID P; // [rsp+68h] [rbp-10h]
  unsigned int v54; // [rsp+A0h] [rbp+28h]
  size_t v55; // [rsp+A0h] [rbp+28h]

  v47 = 0LL;
  v5 = Src;
  P = 0LL;
  v6 = *(_DWORD *)Src;
  v7 = 0LL;
  Srca = 0LL;
  v8 = 0;
  Size = 0LL;
  v44 = 0;
  v48 = 0;
  if ( !v6 )
  {
    v34 = *((_DWORD *)v5 + 4);
    if ( v34 == 3 )
    {
      v35 = v5 + 52;
      v36 = 52;
    }
    else
    {
      if ( v34 != 5 )
        goto LABEL_86;
      v35 = v5 + 32;
      v36 = 32;
    }
    v37 = *((unsigned int *)v5 + 2);
    v49 = (size_t)v35;
    if ( v37 < (unsigned __int64)v36 + 12 || v35[2] > (unsigned int)v37 - v36 )
    {
      NtPartitionPath = -1073741811;
      goto LABEL_81;
    }
    NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(v35, (__int64)&v45);
    if ( NtPartitionPath < 0 )
      goto LABEL_82;
    if ( *(_DWORD *)v47 == 3 )
      goto LABEL_85;
    v38 = (void *)(v49 + *(unsigned int *)(v49 + 8));
    P = v38;
    v39 = -1LL;
    do
      ++v39;
    while ( *((_WORD *)v38 + v39) );
    v40 = 2 * v39 + 34;
    LODWORD(Srca) = 2 * v39 + 2;
    if ( v40 < 0x20 || v40 + v45 < v40 )
    {
LABEL_85:
      v5 = Src;
      goto LABEL_86;
    }
    v46 = (2 * v39 + 33) & 0xFFFFFFF8;
    v8 = v45 + v46;
    Size = v45 + v46;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x4B444342u);
    v7 = (size_t)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_19;
    memset(PoolWithTag, 0, Size);
    memmove((void *)(v7 + 24), v38, (unsigned int)Srca);
    v42 = v46;
    *(_DWORD *)(v7 + 20) = v46;
    memmove((void *)(v7 + v42), v47, v45);
    *(_DWORD *)v7 = 4 - (*((_DWORD *)Src + 4) != 3);
    goto LABEL_12;
  }
  v9 = v6 - 2;
  if ( !v9 )
    goto LABEL_5;
  v10 = v9 - 3;
  if ( !v10 )
  {
    v8 = 20;
    v7 = (size_t)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
    if ( !v7 )
      goto LABEL_19;
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)v7 = 1;
    goto LABEL_12;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_5:
    NtPartitionPath = BiVerifyBootPartition((_DWORD)v5, 0, 0, 0, 0LL, (__int64)&v46);
    if ( NtPartitionPath < 0 )
      goto LABEL_82;
    if ( (a3 & 0x20) != 0 && v46 )
    {
      NtPartitionPath = -1073741823;
      goto LABEL_56;
    }
    NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
    if ( NtPartitionPath < 0 )
    {
      P = Srca;
LABEL_56:
      if ( !v46 )
        goto LABEL_81;
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&Src[v46], (__int64)&v45);
      if ( NtPartitionPath >= 0 )
      {
        v8 = v45 + 34;
        v49 = v45 + 34;
        v48 = v45 + 34;
        v32 = ExAllocatePoolWithTag(PagedPool, v49, 0x4B444342u);
        Size = (size_t)v32;
        v7 = (size_t)v32;
        if ( v32 )
        {
          memset(v32, 0, v49);
          *(_DWORD *)v7 = 8;
          v33 = 301989890;
          *(_DWORD *)(v7 + 20) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v33 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v33 = 301989956;
            }
          }
          *(_DWORD *)(v7 + 28) = v33;
          *(_DWORD *)(v7 + 24) = 34;
          memmove((void *)(v7 + 34), v47, v45);
LABEL_81:
          if ( NtPartitionPath < 0 )
            goto LABEL_82;
LABEL_13:
          *a4 = v7;
          *a5 = v8;
          goto LABEL_14;
        }
LABEL_19:
        NtPartitionPath = -1073741670;
        goto LABEL_14;
      }
LABEL_82:
      if ( NtPartitionPath == -1073741670 )
        goto LABEL_87;
      if ( v7 )
        ExFreePoolWithTag((PVOID)v7, 0x4B444342u);
      goto LABEL_85;
    }
    v13 = Srca;
    v14 = -1LL;
    P = Srca;
    v44 = 1;
    do
      ++v14;
    while ( *((_WORD *)Srca + v14) );
    v15 = 2 * v14 + 2;
    v8 = 2 * v14 + 22;
    v54 = v15;
    Size = v8;
    v16 = ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
    v7 = (size_t)v16;
    if ( !v16 )
      goto LABEL_19;
    memset(v16, 0, Size);
    *(_DWORD *)v7 = 2;
    memmove((void *)(v7 + 20), v13, v54);
LABEL_12:
    NtPartitionPath = 0;
    goto LABEL_13;
  }
  v18 = v11 - 1;
  if ( !v18 )
  {
    v8 = 36;
    v31 = ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
    v7 = (size_t)v31;
    if ( !v31 )
      goto LABEL_19;
    memset(v31, 0, 0x24uLL);
    *(_DWORD *)v7 = 7;
    *(_OWORD *)(v7 + 20) = *((_OWORD *)v5 + 2);
    goto LABEL_12;
  }
  if ( v18 == 1 )
  {
    v19 = 34LL;
    v20 = -1LL;
    v49 = 34LL;
    v48 = 34;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v5[2 * v21 + 28] );
      v19 = (unsigned int)(2 * v21 + 34);
      v49 = v19;
      v48 = v19;
    }
    v22 = *((_DWORD *)v5 + 6);
    v45 = 0;
    v46 = v22;
    if ( !v22 )
    {
LABEL_40:
      v55 = v19;
      v28 = ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
      v7 = (size_t)v28;
      if ( v28 )
      {
        memset(v28, 0, v55);
        *(_DWORD *)v7 = 8;
        if ( *((_DWORD *)v5 + 4) )
        {
          *(_DWORD *)(v7 + 20) = 1;
          v29 = (const wchar_t *)(v5 + 28);
          do
            ++v20;
          while ( v29[v20] );
          wcscpy_s((wchar_t *)(v7 + 32), v20 + 1, v29);
        }
        else
        {
          *(_DWORD *)(v7 + 20) = 0;
          *(_DWORD *)(v7 + 28) = *((_DWORD *)v5 + 5);
        }
        if ( v47 )
        {
          v30 = v46;
          *(_DWORD *)(v7 + 24) = v46;
          memmove((void *)(v7 + v30), v47, v45);
        }
        v8 = v49;
        NtPartitionPath = 0;
        goto LABEL_13;
      }
      goto LABEL_19;
    }
    if ( (a3 & 0x20) == 0 )
    {
      v23 = BiGetNtPartitionPath(v5, &Srca);
      P = Srca;
      if ( v23 >= 0 )
      {
        v44 = 1;
        v24 = -1LL;
        do
          ++v24;
        while ( *((_WORD *)Srca + v24) );
        LODWORD(Srca) = 2 * v24 + 2;
        v45 = 2 * v24 + 22;
        v25 = ExAllocatePoolWithTag(PagedPool, v45, 0x4B444342u);
        v47 = v25;
        if ( !v25 )
        {
          NtPartitionPath = -1073741670;
LABEL_17:
          ExFreePoolWithTag(P, 0x4B444342u);
          return (unsigned int)NtPartitionPath;
        }
        memset(v25, 0, v45);
        v26 = (unsigned int)Srca;
        v27 = P;
        *(_DWORD *)v47 = 2;
        memmove((char *)v47 + 20, v27, v26);
      }
      if ( v47 )
      {
LABEL_39:
        v46 = v49;
        v19 = v45 + (unsigned int)v49;
        v49 = v19;
        goto LABEL_40;
      }
      v22 = v46;
    }
    if ( *((_DWORD *)v5 + 2) - v22 >= 0x4C )
    {
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&v5[v22 + 40], (__int64)&v45);
      if ( NtPartitionPath < 0 )
      {
        v8 = v49;
        goto LABEL_82;
      }
      v5 = Src;
      goto LABEL_39;
    }
  }
LABEL_86:
  v43 = BiConvertBootEnvironmentDeviceToUnknown(v5);
  v7 = Size;
  NtPartitionPath = v43;
  v8 = v48;
LABEL_87:
  if ( NtPartitionPath >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( v47 )
    ExFreePoolWithTag(v47, 0x4B444342u);
  if ( v44 )
    goto LABEL_17;
  return (unsigned int)NtPartitionPath;
}
