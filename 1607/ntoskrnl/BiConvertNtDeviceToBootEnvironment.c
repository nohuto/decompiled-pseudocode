/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C
 * Callers:
 *     BiConvertElementToRegistryData @ 0x14053E864 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2E90 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x14053F0D4 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x14053F390 (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2E90 (BiConvertNtFilePathToBootEnvironment.c)
 */

__int64 __fastcall BiConvertNtDeviceToBootEnvironment(const WCHAR *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  int v5; // edx
  char *v7; // rdi
  int v8; // edx
  int v9; // edx
  int PartitionDevice; // ebx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  __int64 v16; // rcx
  size_t v17; // rax
  unsigned int *v18; // rax
  unsigned int v19; // ebx
  bool v20; // zf
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // r8d
  void *PartitionVhdFilePath; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  char *v27; // rax
  int v28; // eax
  unsigned int v29; // ebx
  __int64 v30; // rdx
  char *v31; // r9
  int v32; // eax
  char *v33; // rax
  unsigned int v34; // eax
  char *v35; // rax
  __int64 v36; // rax
  unsigned int *v37; // rbx
  unsigned int v38; // esi
  char *v39; // rax
  void *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // esi
  char *v43; // rax
  char *PoolWithTag; // rax
  unsigned int v45; // [rsp+30h] [rbp-20h]
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+40h] [rbp-10h]
  PVOID P; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v49; // [rsp+80h] [rbp+30h]
  _QWORD *v50; // [rsp+88h] [rbp+38h]

  v50 = a4;
  v49 = a3;
  v5 = *(_DWORD *)a1;
  Src = 0LL;
  v7 = 0LL;
  v8 = v5 - 1;
  if ( !v8 )
  {
    if ( a2 < 0x14 )
      goto LABEL_10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_DWORD *)v7 = 5;
      *((_DWORD *)v7 + 2) = 72;
      goto LABEL_6;
    }
    goto LABEL_40;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    if ( a2 >= 0x16 )
    {
      if ( (unsigned __int8)BiIsVolumePartitionInformationRetained(a1 + 10) )
      {
        v7 = 0LL;
        PartitionDevice = BiCreatePartitionDevice(a1 + 10);
        if ( PartitionDevice < 0 )
          goto LABEL_7;
        goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_10:
    PartitionDevice = -1073741811;
    goto LABEL_9;
  }
  v12 = v9 - 1;
  if ( !v12 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v41 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v41 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment((char *)a1 + v41, a2 - (unsigned int)v41, a1 + 12, a3, &P);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v37 = (unsigned int *)P;
    v42 = *((_DWORD *)P + 1) + 20;
    v43 = (char *)ExAllocatePoolWithTag(PagedPool, v42, 0x4B444342u);
    v7 = v43;
    if ( v43 )
    {
      memset(v43, 0, v42);
      v40 = v7 + 20;
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 2) = v42;
      *((_DWORD *)v7 + 4) = 5;
      goto LABEL_61;
    }
LABEL_39:
    ExFreePoolWithTag(v37, 0x4B444342u);
    goto LABEL_40;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v36 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v36 )
      goto LABEL_10;
    P = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment((char *)a1 + v36, a2 - (unsigned int)v36, a1 + 12, a3, &P);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v37 = (unsigned int *)P;
    v38 = *((_DWORD *)P + 1) + 40;
    v39 = (char *)ExAllocatePoolWithTag(PagedPool, v38, 0x4B444342u);
    v7 = v39;
    if ( v39 )
    {
      memset(v39, 0, v38);
      v40 = v7 + 40;
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v38;
      *((_DWORD *)v7 + 4) = 3;
LABEL_61:
      memmove(v40, v37, v37[1]);
      ExFreePoolWithTag(v37, 0x4B444342u);
      goto LABEL_6;
    }
    goto LABEL_39;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v34 = *((_DWORD *)a1 + 7);
    if ( v34 > 0x100000 )
      goto LABEL_10;
    v35 = (char *)ExAllocatePoolWithTag(PagedPool, v34, 0x4B444342u);
    PartitionDevice = 0;
    v7 = v35;
    if ( v35 )
    {
      memmove(v35, a1 + 10, *((unsigned int *)a1 + 7));
      goto LABEL_7;
    }
    goto LABEL_40;
  }
  v15 = v14 - 2;
  if ( !v15 )
  {
    if ( a2 < 0x24 )
      goto LABEL_10;
    v33 = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    v7 = v33;
    if ( v33 )
    {
      memset(v33, 0, 0x48uLL);
      *(_DWORD *)v7 = 7;
      *((_DWORD *)v7 + 2) = 72;
      *((_OWORD *)v7 + 1) = VmbFsInterfaceTypeGuid;
      *((_OWORD *)v7 + 2) = *(_OWORD *)(a1 + 10);
LABEL_6:
      PartitionDevice = 0;
      goto LABEL_7;
    }
LABEL_40:
    PartitionDevice = -1073741670;
    goto LABEL_7;
  }
  if ( v15 != 1 )
    goto LABEL_10;
  v16 = *((unsigned int *)a1 + 6);
  if ( a2 < 0x22 || a2 <= (unsigned int)v16 )
    goto LABEL_10;
  v17 = 30LL;
  LODWORD(P) = 30;
  v45 = 0;
  if ( !(_DWORD)v16 )
  {
LABEL_32:
    v25 = -1LL;
    if ( *((_DWORD *)a1 + 5) == 1 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( a1[v26 + 16] );
      v17 = (unsigned int)(v17 + 2 * v26);
      LODWORD(P) = v17;
    }
    Size = v17;
    v27 = (char *)ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    v7 = v27;
    if ( v27 )
    {
      memset(v27, 0, Size);
      v28 = (int)P;
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v28;
      if ( *((_DWORD *)a1 + 5) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v30 = -1LL;
        do
          ++v30;
        while ( a1[v30 + 16] );
        wcscpy_s((wchar_t *)v7 + 14, v30 + 1, a1 + 16);
        do
          ++v25;
        while ( a1[v25 + 16] );
        v29 = 2 * v25 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v29 = 30;
        *((_DWORD *)v7 + 5) = *((_DWORD *)a1 + 7);
      }
      if ( Src )
      {
        v31 = &v7[v29];
        *(_DWORD *)v31 = 0;
        v32 = *((_DWORD *)Src + 2);
        *((_DWORD *)v31 + 4) = 6;
        *((_DWORD *)v31 + 2) = v45 + v32;
        memmove(&v31[v45], Src, *((unsigned int *)Src + 2));
        *((_DWORD *)v7 + 6) = v29;
      }
      goto LABEL_6;
    }
    goto LABEL_40;
  }
  v18 = (unsigned int *)((char *)a1 + v16);
  v19 = a2 - v16;
  v20 = *(_DWORD *)((char *)a1 + v16) == 3;
  P = (char *)a1 + v16;
  if ( !v20 || v19 < 0x2E )
    goto LABEL_10;
  v21 = v18[5];
  v22 = v19 - v21;
  v23 = *(unsigned int *)((char *)v18 + v21);
  if ( v23 == 2 )
  {
    if ( v22 < 0x16 )
      goto LABEL_10;
    PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath((PCWSTR)((char *)v18 + v21 + 20));
    if ( PartitionVhdFilePath )
    {
      ExFreePoolWithTag(PartitionVhdFilePath, 0x4B444342u);
LABEL_11:
      PartitionDevice = -1073741637;
      goto LABEL_7;
    }
    v18 = (unsigned int *)P;
  }
  else if ( v23 != 8 || v22 < 0x22 )
  {
    goto LABEL_10;
  }
  PartitionDevice = BiConvertNtDeviceToBootEnvironment(v18, v19, 0LL, &Src);
  if ( PartitionDevice >= 0 )
  {
    v45 = 40;
    v17 = (unsigned int)(*((_DWORD *)Src + 2) + 70);
    LODWORD(P) = *((_DWORD *)Src + 2) + 70;
    goto LABEL_32;
  }
LABEL_7:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
LABEL_9:
  *v50 = v7;
  return (unsigned int)PartitionDevice;
}
