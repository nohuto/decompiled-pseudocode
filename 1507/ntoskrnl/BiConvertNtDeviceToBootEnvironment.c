/*
 * XREFs of BiConvertNtDeviceToBootEnvironment @ 0x14057093C
 * Callers:
 *     BiConvertElementToRegistryData @ 0x140570370 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14070E088 (BiConvertNtFilePathToBootEnvironment.c)
 * Callees:
 *     wcscpy_s @ 0x140177D84 (wcscpy_s.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePath @ 0x140570DE8 (BiGetPartitionVhdFilePath.c)
 *     BiIsVolumePartitionInformationRetained @ 0x140571158 (BiIsVolumePartitionInformationRetained.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14070E088 (BiConvertNtFilePathToBootEnvironment.c)
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
  __int64 v15; // rcx
  size_t v16; // rax
  unsigned int *v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  unsigned int v20; // edx
  const WCHAR *v21; // rcx
  void *PartitionVhdFilePath; // rax
  __int64 v23; // rbx
  __int64 v24; // rcx
  char *v25; // rax
  int v26; // eax
  unsigned int v27; // ebx
  __int64 v28; // rdx
  char *v29; // r9
  int v30; // eax
  void *v31; // rcx
  unsigned int v32; // eax
  char *v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rbx
  unsigned int v36; // esi
  char *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // esi
  char *v40; // rax
  char *PoolWithTag; // rax
  unsigned int v42; // [rsp+30h] [rbp-20h]
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  size_t Size; // [rsp+40h] [rbp-10h]
  PVOID Src; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v46; // [rsp+80h] [rbp+30h]
  _QWORD *v47; // [rsp+88h] [rbp+38h]

  v47 = a4;
  v46 = a3;
  v5 = *(_DWORD *)a1;
  P = 0LL;
  v7 = 0LL;
  v8 = v5 - 1;
  if ( !v8 )
  {
    if ( a2 < 0x14 )
      goto LABEL_10;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x4B444342u);
    PartitionDevice = 0;
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      *(_DWORD *)v7 = 5;
      *((_DWORD *)v7 + 2) = 72;
      goto LABEL_7;
    }
LABEL_39:
    PartitionDevice = -1073741670;
    goto LABEL_7;
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
    v38 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v38 )
      goto LABEL_10;
    Src = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment((char *)a1 + v38, a2 - (unsigned int)v38, a1 + 12, a3, &Src);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v35 = (unsigned int *)Src;
    v39 = *((_DWORD *)Src + 1) + 20;
    v40 = (char *)ExAllocatePoolWithTag(PagedPool, v39, 0x4B444342u);
    v7 = v40;
    if ( v40 )
    {
      memset(v40, 0, v39);
      v31 = v7 + 20;
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 2) = v39;
      *((_DWORD *)v7 + 4) = 5;
LABEL_48:
      memmove(v31, v35, v35[1]);
      ExFreePoolWithTag(v35, 0);
LABEL_6:
      PartitionDevice = 0;
      goto LABEL_7;
    }
LABEL_38:
    ExFreePoolWithTag(v35, 0);
    goto LABEL_39;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a2 < 0x2E )
      goto LABEL_10;
    v34 = *((unsigned int *)a1 + 5);
    if ( !(_DWORD)v34 )
      goto LABEL_10;
    Src = 0LL;
    PartitionDevice = BiConvertNtFilePathToBootEnvironment((char *)a1 + v34, a2 - (unsigned int)v34, a1 + 12, 0LL, &Src);
    if ( PartitionDevice < 0 )
      goto LABEL_7;
    v35 = (unsigned int *)Src;
    v36 = *((_DWORD *)Src + 1) + 40;
    v37 = (char *)ExAllocatePoolWithTag(PagedPool, v36, 0x4B444342u);
    v7 = v37;
    if ( v37 )
    {
      memset(v37, 0, v36);
      v31 = v7 + 40;
      *(_DWORD *)v7 = 0;
      *((_DWORD *)v7 + 1) = 1;
      *((_DWORD *)v7 + 2) = v36;
      *((_DWORD *)v7 + 4) = 3;
      goto LABEL_48;
    }
    goto LABEL_38;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    if ( a2 < 0x20 )
      goto LABEL_10;
    v32 = *((_DWORD *)a1 + 7);
    if ( v32 > 0x100000 )
      goto LABEL_10;
    v33 = (char *)ExAllocatePoolWithTag(PagedPool, v32, 0x4B444342u);
    PartitionDevice = 0;
    v7 = v33;
    if ( v33 )
    {
      memmove(v33, a1 + 10, *((unsigned int *)a1 + 7));
      goto LABEL_7;
    }
    goto LABEL_39;
  }
  if ( v14 != 3 )
    goto LABEL_10;
  v15 = *((unsigned int *)a1 + 6);
  if ( a2 < 0x22 || a2 <= (unsigned int)v15 )
    goto LABEL_10;
  v16 = 30LL;
  LODWORD(Src) = 30;
  v42 = 0;
  if ( !(_DWORD)v15 )
  {
LABEL_31:
    v23 = -1LL;
    if ( *((_DWORD *)a1 + 5) == 1 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a1[v24 + 16] );
      v16 = (unsigned int)(v16 + 2 * v24);
      LODWORD(Src) = v16;
    }
    Size = v16;
    v25 = (char *)ExAllocatePoolWithTag(PagedPool, v16, 0x4B444342u);
    v7 = v25;
    if ( v25 )
    {
      memset(v25, 0, Size);
      v26 = (int)Src;
      *(_DWORD *)v7 = 8;
      *((_DWORD *)v7 + 2) = v26;
      if ( *((_DWORD *)a1 + 5) )
      {
        *((_DWORD *)v7 + 4) = 1;
        v28 = -1LL;
        do
          ++v28;
        while ( a1[v28 + 16] );
        wcscpy_s((wchar_t *)v7 + 14, v28 + 1, a1 + 16);
        do
          ++v23;
        while ( a1[v23 + 16] );
        v27 = 2 * v23 + 30;
      }
      else
      {
        *((_DWORD *)v7 + 4) = 0;
        v27 = 30;
        *((_DWORD *)v7 + 5) = *((_DWORD *)a1 + 7);
      }
      if ( P )
      {
        v29 = &v7[v27];
        *(_DWORD *)v29 = 0;
        v30 = *((_DWORD *)P + 2);
        *((_DWORD *)v29 + 4) = 6;
        *((_DWORD *)v29 + 2) = v42 + v30;
        memmove(&v29[v42], P, *((unsigned int *)P + 2));
        *((_DWORD *)v7 + 6) = v27;
      }
      goto LABEL_6;
    }
    goto LABEL_39;
  }
  v17 = (unsigned int *)((char *)a1 + v15);
  v18 = a2 - v15;
  Src = (char *)a1 + v15;
  if ( *(_DWORD *)((char *)a1 + v15) != 3 || v18 < 0x2E )
    goto LABEL_10;
  v19 = v17[5];
  v20 = v18 - v19;
  v21 = (const WCHAR *)((char *)v17 + v19);
  if ( *(_DWORD *)v21 == 2 )
  {
    if ( v20 < 0x16 )
      goto LABEL_10;
    PartitionVhdFilePath = (void *)BiGetPartitionVhdFilePath(v21 + 10);
    if ( PartitionVhdFilePath )
    {
      ExFreePoolWithTag(PartitionVhdFilePath, 0);
LABEL_11:
      PartitionDevice = -1073741637;
      goto LABEL_7;
    }
    v17 = (unsigned int *)Src;
  }
  else if ( *(_DWORD *)v21 != 8 || v20 < 0x22 )
  {
    goto LABEL_10;
  }
  PartitionDevice = BiConvertNtDeviceToBootEnvironment(v17, v18, 0LL, &P);
  if ( PartitionDevice >= 0 )
  {
    v42 = 40;
    v16 = (unsigned int)(*((_DWORD *)P + 2) + 70);
    LODWORD(Src) = *((_DWORD *)P + 2) + 70;
    goto LABEL_31;
  }
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_9:
  *v47 = v7;
  return (unsigned int)PartitionDevice;
}
