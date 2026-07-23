/*
 * XREFs of BiCreateFileDeviceElement @ 0x1406D2F88
 * Callers:
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 *     wcschr @ 0x14014F504 (wcschr.c)
 *     wcscpy_s @ 0x140153654 (wcscpy_s.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateFileDeviceElement(const wchar_t *Src, _QWORD *a2, unsigned int *a3)
{
  int v4; // edi
  wchar_t *v5; // rax
  const wchar_t *v6; // r14
  __int64 v7; // rbx
  char *PoolWithTag; // rbp
  size_t v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r15d
  unsigned int v15; // r13d
  char *v16; // rax
  char *v17; // rbx
  __int64 v18; // rdx

  v4 = 0;
  if ( wcsnicmp(Src, L"\\Device\\HarddiskVolume", 0x16uLL) )
    return (unsigned int)-1073741811;
  v5 = wcschr(Src + 22, 0x5Cu);
  if ( (v6 = v5) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = v5 - Src;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 2LL * (unsigned int)(v7 + 1), 0x4B444342u);
    if ( PoolWithTag )
    {
      v9 = 2LL * (unsigned int)v7;
      memmove(PoolWithTag, Src, v9);
      v10 = -1LL;
      *(_WORD *)&PoolWithTag[v9] = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)&PoolWithTag[2 * v11] );
      v12 = 2 * v11 + 22;
      v13 = -1LL;
      do
        ++v13;
      while ( v6[v13] );
      v14 = 2 * v13 + 46;
      v15 = v14 + v12;
      v16 = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(v14 + v12), 0x4B444342u);
      v17 = v16;
      if ( v16 )
      {
        memset(v16, 0, v15);
        v18 = -1LL;
        *((_DWORD *)v17 + 5) = v14;
        *(_DWORD *)v17 = 3;
        do
          ++v18;
        while ( v6[v18] );
        wcscpy_s((wchar_t *)v17 + 12, v18 + 1, v6);
        *(_DWORD *)&v17[v14] = 2;
        do
          ++v10;
        while ( *(_WORD *)&PoolWithTag[2 * v10] );
        wcscpy_s((wchar_t *)&v17[v14 + 20], v10 + 1, (const wchar_t *)PoolWithTag);
        *a2 = v17;
        *a3 = v15;
      }
      else
      {
        v4 = -1073741670;
      }
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
      if ( v4 < 0 && v17 )
        ExFreePoolWithTag(v17, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
