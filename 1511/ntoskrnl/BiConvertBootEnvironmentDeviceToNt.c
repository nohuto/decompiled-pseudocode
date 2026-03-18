/*
 * XREFs of BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertRegistryDataToElement @ 0x1404FDAE8 (BiConvertRegistryDataToElement.c)
 *     BiVerifyBootPartition @ 0x1404FE654 (BiVerifyBootPartition.c)
 * Callees:
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     BiVerifyBootPartition @ 0x1404FE654 (BiVerifyBootPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14068E4C4 (BiConvertBootEnvironmentDeviceToUnknown.c)
 */

__int64 __fastcall BiConvertBootEnvironmentDeviceToNt(char *Src, int a2, char a3, wchar_t **a4, unsigned int *a5)
{
  char *v5; // rdi
  int v6; // ecx
  wchar_t *v7; // rbx
  unsigned int v8; // esi
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int NtPartitionPath; // edi
  void *v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // eax
  wchar_t *v16; // rax
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
  wchar_t *v28; // rax
  const wchar_t *v29; // r8
  __int64 v30; // rax
  wchar_t *v31; // rax
  unsigned int v32; // esi
  wchar_t *v33; // rax
  int v34; // eax
  int v35; // eax
  void *v36; // rax
  void *v37; // rdi
  __int64 v38; // rsi
  unsigned int v39; // ecx
  wchar_t *PoolWithTag; // rax
  __int64 v41; // rax
  int v42; // eax
  char v43; // [rsp+30h] [rbp-48h]
  unsigned int v44; // [rsp+34h] [rbp-44h] BYREF
  unsigned int v45; // [rsp+38h] [rbp-40h] BYREF
  int v46; // [rsp+3Ch] [rbp-3Ch]
  PVOID v47; // [rsp+40h] [rbp-38h]
  size_t v48; // [rsp+48h] [rbp-30h]
  void *Srca; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h]
  size_t Size; // [rsp+60h] [rbp-18h]
  unsigned int v53; // [rsp+A0h] [rbp+28h]
  size_t v54; // [rsp+A0h] [rbp+28h]

  v47 = 0LL;
  v5 = Src;
  P = 0LL;
  v6 = *(_DWORD *)Src;
  v7 = 0LL;
  Srca = 0LL;
  v8 = 0;
  Size = 0LL;
  v43 = 0;
  v46 = 0;
  if ( !v6 )
  {
    v35 = *((_DWORD *)v5 + 4);
    if ( v35 == 3 )
    {
      v36 = v5 + 52;
    }
    else
    {
      if ( v35 != 5 )
        goto LABEL_84;
      v36 = v5 + 32;
    }
    v48 = (size_t)v36;
    NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(v36, (__int64)&v44);
    if ( NtPartitionPath >= 0 )
    {
      if ( *(_DWORD *)v47 == 3 )
        goto LABEL_83;
      v37 = (void *)(v48 + *(unsigned int *)(v48 + 8));
      P = v37;
      v38 = -1LL;
      do
        ++v38;
      while ( *((_WORD *)v37 + v38) );
      v39 = 2 * v38 + 34;
      LODWORD(Srca) = 2 * v38 + 2;
      if ( v39 < 0x20 || v39 + v44 < v39 )
      {
LABEL_83:
        v5 = Src;
        goto LABEL_84;
      }
      v45 = (2 * v38 + 33) & 0xFFFFFFF8;
      v8 = v45 + v44;
      v48 = v45 + v44;
      v46 = v45 + v44;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v48, 0x4B444342u);
      Size = (size_t)PoolWithTag;
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v48);
        memmove(v7 + 12, v37, (unsigned int)Srca);
        v41 = v45;
        *((_DWORD *)v7 + 5) = v45;
        memmove((char *)v7 + v41, v47, v44);
        *(_DWORD *)v7 = 4 - (*((_DWORD *)Src + 4) != 3);
        NtPartitionPath = 0;
        goto LABEL_77;
      }
LABEL_19:
      NtPartitionPath = -1073741670;
      goto LABEL_14;
    }
LABEL_80:
    if ( NtPartitionPath == -1073741670 )
      goto LABEL_85;
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    goto LABEL_83;
  }
  v9 = v6 - 2;
  if ( !v9 )
    goto LABEL_5;
  v10 = v9 - 3;
  if ( !v10 )
  {
    v8 = 20;
    v7 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x4B444342u);
    if ( !v7 )
      goto LABEL_19;
    *(_QWORD *)v7 = 0LL;
    *((_QWORD *)v7 + 1) = 0LL;
    *((_DWORD *)v7 + 4) = 0;
    *(_DWORD *)v7 = 1;
    goto LABEL_12;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
LABEL_5:
    NtPartitionPath = BiVerifyBootPartition((_DWORD)v5, 0, 0, 0, 0LL, (__int64)&v45);
    if ( NtPartitionPath < 0 )
      goto LABEL_80;
    if ( (a3 & 0x20) != 0 && v45 )
    {
      NtPartitionPath = -1073741823;
      goto LABEL_56;
    }
    NtPartitionPath = BiGetNtPartitionPath(Src, &Srca);
    if ( NtPartitionPath < 0 )
    {
      P = Srca;
LABEL_56:
      if ( !v45 )
        goto LABEL_77;
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&Src[v45], (__int64)&v44);
      if ( NtPartitionPath >= 0 )
      {
        v32 = v44 + 34;
        v48 = v44 + 34;
        v46 = v44 + 34;
        v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v48, 0x4B444342u);
        Size = (size_t)v33;
        v7 = v33;
        if ( v33 )
        {
          memset(v33, 0, v32);
          *(_DWORD *)v7 = 8;
          v34 = 301989890;
          *((_DWORD *)v7 + 5) = 0;
          if ( a2 )
          {
            if ( a2 == 553648129 )
            {
              v34 = 570425346;
            }
            else if ( a2 == 285212739 )
            {
              v34 = 301989956;
            }
          }
          *((_DWORD *)v7 + 7) = v34;
          *((_DWORD *)v7 + 6) = 34;
          memmove(v7 + 17, v47, v44);
          v8 = v48;
LABEL_77:
          if ( NtPartitionPath < 0 )
            goto LABEL_80;
LABEL_13:
          *a4 = v7;
          *a5 = v8;
          goto LABEL_14;
        }
        goto LABEL_19;
      }
      goto LABEL_80;
    }
    v13 = Srca;
    v14 = -1LL;
    P = Srca;
    v43 = 1;
    do
      ++v14;
    while ( *((_WORD *)Srca + v14) );
    v15 = 2 * v14 + 2;
    v8 = 2 * v14 + 22;
    v53 = v15;
    Size = v8;
    v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v8, 0x4B444342u);
    v7 = v16;
    if ( !v16 )
      goto LABEL_19;
    memset(v16, 0, Size);
    *(_DWORD *)v7 = 2;
    memmove(v7 + 10, v13, v53);
LABEL_12:
    NtPartitionPath = 0;
    goto LABEL_13;
  }
  v18 = v11 - 1;
  if ( !v18 )
  {
    v8 = 36;
    v31 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x24uLL, 0x4B444342u);
    v7 = v31;
    if ( !v31 )
      goto LABEL_19;
    memset(v31, 0, 0x24uLL);
    *(_DWORD *)v7 = 7;
    *(_OWORD *)(v7 + 10) = *((_OWORD *)v5 + 2);
    goto LABEL_12;
  }
  if ( v18 == 1 )
  {
    v19 = 34LL;
    v20 = -1LL;
    v48 = 34LL;
    v46 = 34;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v5[2 * v21 + 28] );
      v19 = (unsigned int)(2 * v21 + 34);
      v48 = v19;
      v46 = v19;
    }
    v22 = *((_DWORD *)v5 + 6);
    v44 = 0;
    v45 = v22;
    if ( !v22 )
    {
LABEL_40:
      v54 = v19;
      v28 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19, 0x4B444342u);
      v7 = v28;
      if ( v28 )
      {
        memset(v28, 0, v54);
        *(_DWORD *)v7 = 8;
        if ( *((_DWORD *)v5 + 4) )
        {
          *((_DWORD *)v7 + 5) = 1;
          v29 = (const wchar_t *)(v5 + 28);
          do
            ++v20;
          while ( v29[v20] );
          wcscpy_s(v7 + 16, v20 + 1, v29);
        }
        else
        {
          *((_DWORD *)v7 + 5) = 0;
          *((_DWORD *)v7 + 7) = *((_DWORD *)v5 + 5);
        }
        if ( v47 )
        {
          v30 = v45;
          *((_DWORD *)v7 + 6) = v45;
          memmove((char *)v7 + v30, v47, v44);
        }
        v8 = v48;
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
        v43 = 1;
        v24 = -1LL;
        do
          ++v24;
        while ( *((_WORD *)Srca + v24) );
        LODWORD(Srca) = 2 * v24 + 2;
        v44 = 2 * v24 + 22;
        v25 = ExAllocatePoolWithTag(PagedPool, v44, 0x4B444342u);
        v47 = v25;
        if ( !v25 )
        {
          NtPartitionPath = -1073741670;
LABEL_17:
          ExFreePoolWithTag(P, 0);
          return (unsigned int)NtPartitionPath;
        }
        memset(v25, 0, v44);
        v26 = (unsigned int)Srca;
        v27 = P;
        *(_DWORD *)v47 = 2;
        memmove((char *)v47 + 20, v27, v26);
      }
      if ( v47 )
      {
LABEL_39:
        v45 = v48;
        v19 = v44 + (unsigned int)v48;
        v48 = v19;
        goto LABEL_40;
      }
      v22 = v45;
    }
    if ( *((_DWORD *)v5 + 2) - v22 >= 0x4C )
    {
      NtPartitionPath = BiConvertBootEnvironmentDeviceToNt(&v5[v22 + 40], (__int64)&v44);
      if ( NtPartitionPath < 0 )
      {
        v8 = v48;
        goto LABEL_80;
      }
      v5 = Src;
      goto LABEL_39;
    }
  }
LABEL_84:
  v42 = BiConvertBootEnvironmentDeviceToUnknown(v5);
  v7 = (wchar_t *)Size;
  NtPartitionPath = v42;
  v8 = v46;
LABEL_85:
  if ( NtPartitionPath >= 0 )
    goto LABEL_13;
LABEL_14:
  if ( v47 )
    ExFreePoolWithTag(v47, 0);
  if ( v43 )
    goto LABEL_17;
  return (unsigned int)NtPartitionPath;
}
