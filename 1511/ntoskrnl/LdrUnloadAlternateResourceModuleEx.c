/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x1400DD174
 * Callers:
 *     LdrUnloadAlternateResourceModule @ 0x1400DD16C (LdrUnloadAlternateResourceModule.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DDE90 (LdrpGetFromMUIMemCache.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     LdrpInitMuiCrits @ 0x1400DE030 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x1403C7C24 (MmUnmapViewInSystemSpace.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  unsigned int v4; // edx
  int v5; // edi
  PVOID *PoolWithTag; // rsi
  PVOID *v7; // rbx
  PVOID v8; // rcx
  bool v9; // zf
  PVOID v10; // rcx
  __int64 v11; // rax
  PVOID v12; // rbx

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits(DllHandle, Flags);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v5 = AlternateResourceModuleCount;
    PoolWithTag = (PVOID *)AlternateResourceModules;
    while ( 1 )
    {
      if ( v5 <= 0 )
        goto LABEL_23;
      if ( PoolWithTag[9 * v5 - 8] == DllHandle )
        break;
LABEL_6:
      --v5;
    }
    v7 = &PoolWithTag[9 * v5 - 9];
    v8 = v7[4];
    if ( v8 && v8 != (PVOID)-1LL )
    {
      MmUnmapViewInSystemSpace(v8);
      v10 = v7[5];
      if ( v10 )
      {
        ZwClose(v10);
        v7[5] = 0LL;
      }
      v7[4] = 0LL;
      v4 = AlternateResourceModuleCount;
      PoolWithTag = (PVOID *)AlternateResourceModules;
    }
    if ( v5 != v4 )
    {
      memmove(v7, v7 + 9, 72LL * (v4 - v5));
      v4 = AlternateResourceModuleCount;
      PoolWithTag = (PVOID *)AlternateResourceModules;
    }
    v9 = v4-- == 1;
    AlternateResourceModuleCount = v4;
    if ( v9 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v11 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v4 >= (unsigned int)v11 )
        goto LABEL_13;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 72 * v11, 0x69507472u);
      if ( !PoolWithTag )
      {
        v3 = 0;
        goto LABEL_23;
      }
      v12 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
      ExFreePoolWithTag(v12, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount -= 32;
    }
    v4 = AlternateResourceModuleCount;
LABEL_13:
    v3 = 1;
    goto LABEL_6;
  }
  v3 = 1;
LABEL_23:
  KeReleaseMutex(&MuiMutex, 0);
  return v3;
}
