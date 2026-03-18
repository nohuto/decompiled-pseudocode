/*
 * XREFs of BiCreateFileDeviceElement @ 0x14068E664
 * Callers:
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 * Callees:
 *     _wcsnicmp @ 0x140144480 (_wcsnicmp.c)
 *     wcschr @ 0x140145B68 (wcschr.c)
 *     wcscpy_s @ 0x140149D04 (wcscpy_s.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreateFileDeviceElement(const wchar_t *Src, _QWORD *a2, unsigned int *a3)
{
  __int64 v3; // rsi
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rbx
  wchar_t *v8; // rax
  const wchar_t *v9; // r15
  __int64 v10; // rbx
  char *PoolWithTag; // rbp
  size_t v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // r12d
  unsigned int v17; // r13d
  char *v18; // rax
  char *v19; // rbx
  __int64 v20; // rdx

  v3 = -1LL;
  v5 = -1LL;
  v6 = 0;
  do
    ++v5;
  while ( aDeviceHarddisk_8[v5] );
  v7 = (unsigned int)v5;
  if ( wcsnicmp(Src, L"\\Device\\HarddiskVolume", (unsigned int)v5) )
    return (unsigned int)-1073741811;
  v8 = wcschr(&Src[v7], 0x5Cu);
  if ( (v9 = v8) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = v8 - Src;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v10 + 1), 0x4B444342u);
    if ( PoolWithTag )
    {
      v12 = 2LL * (unsigned int)v10;
      memmove(PoolWithTag, Src, v12);
      v13 = -1LL;
      *(_WORD *)&PoolWithTag[v12] = 0;
      do
        ++v13;
      while ( *(_WORD *)&PoolWithTag[2 * v13] );
      v14 = 2 * v13 + 22;
      v15 = -1LL;
      do
        ++v15;
      while ( v9[v15] );
      v16 = 2 * v15 + 46;
      v17 = v16 + v14;
      v18 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v16 + v14), 0x4B444342u);
      v19 = v18;
      if ( v18 )
      {
        memset(v18, 0, v17);
        v20 = -1LL;
        *((_DWORD *)v19 + 5) = v16;
        *(_DWORD *)v19 = 3;
        do
          ++v20;
        while ( v9[v20] );
        wcscpy_s((wchar_t *)v19 + 12, v20 + 1, v9);
        *(_DWORD *)&v19[v16] = 2;
        do
          ++v3;
        while ( *(_WORD *)&PoolWithTag[2 * v3] );
        wcscpy_s((wchar_t *)&v19[v16 + 20], v3 + 1, (const wchar_t *)PoolWithTag);
        *a2 = v19;
        *a3 = v17;
      }
      else
      {
        v6 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0);
      if ( v6 < 0 && v19 )
        ExFreePoolWithTag(v19, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
