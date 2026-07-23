/*
 * XREFs of IopBuildFullDriverPath @ 0x140515EA8
 * Callers:
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 */

__int64 __fastcall IopBuildFullDriverPath(unsigned __int16 *a1, void *a2, unsigned __int16 *a3)
{
  const WCHAR *v3; // r13
  unsigned int v6; // edi
  unsigned int v7; // r12d
  unsigned int v8; // esi
  const void *v9; // r14
  const wchar_t *v10; // r15
  unsigned __int16 v11; // ax
  PVOID PoolWithTagPriority; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx

  v3 = 0LL;
  *(_DWORD *)a3 = 0;
  *((_QWORD *)a3 + 1) = 0LL;
  v6 = 0;
  v7 = 0;
  if ( (int)IopGetRegistryValue(a2) >= 0 && MEMORY[0xC] )
  {
    v8 = MEMORY[0xC] - 2;
    v9 = (const void *)MEMORY[8];
    if ( *(_WORD *)MEMORY[8] == 92 )
    {
      v10 = 0LL;
    }
    else
    {
      v10 = L"\\SystemRoot\\";
      v6 = 24;
    }
  }
  else
  {
    v8 = *a1;
    v10 = L"\\SystemRoot\\System32\\Drivers\\";
    v9 = (const void *)*((_QWORD *)a1 + 1);
    v3 = L".SYS";
    v6 = 58;
    v7 = 8;
  }
  v11 = v6 + v8 + v7 + 2;
  a3[1] = v11;
  if ( v11 < (unsigned __int64)(v7 + v6 + v8) + 2 )
  {
    return (unsigned int)-2147483643;
  }
  else
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = ExAllocatePoolWithTagPriority(
                              PagedPool,
                              v11,
                              0x20206F49u,
                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = ExAllocatePoolWithTag(PagedPool, v11, 0x20206F49u);
    *((_QWORD *)a3 + 1) = PoolWithTagPriority;
    if ( PoolWithTagPriority )
    {
      *a3 = a3[1] - 2;
      if ( v10 )
        memmove(PoolWithTagPriority, v10, v6);
      if ( v8 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v6), v9, v8);
      if ( v7 )
        memmove((void *)(*((_QWORD *)a3 + 1) + v8 + (unsigned __int64)v6), v3, v7);
      v13 = *a3;
      v14 = *((_QWORD *)a3 + 1);
      v15 = 0;
      *(_WORD *)(v14 + 2 * (v13 >> 1)) = 0;
    }
    else
    {
      a3[1] = 0;
      return (unsigned int)-1073741670;
    }
  }
  return v15;
}
