/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140131114
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x14013110C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x1400F8BC8 (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 */

BOOLEAN __cdecl LdrUnloadAlternateResourceModuleEx(PVOID DllHandle, ULONG Flags)
{
  BOOLEAN v3; // bl
  unsigned int v4; // edx
  int i; // edi
  int v6; // r15d
  PVOID *v7; // rsi
  PVOID v8; // rcx
  PVOID v9; // rcx
  bool v10; // zf
  __int64 v11; // rax
  PVOID PoolWithTag; // rdi
  PVOID v13; // rbx

  v3 = 0;
  if ( !DllHandle )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v4 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    for ( i = AlternateResourceModuleCount; ; i = v6 )
    {
      if ( i <= 0 )
        goto LABEL_23;
      v6 = i - 1;
      v7 = (PVOID *)((char *)AlternateResourceModules + 72 * i - 72);
      if ( v7[1] == DllHandle )
        break;
LABEL_6:
      ;
    }
    v8 = v7[4];
    if ( v8 && v8 != (PVOID)-1LL )
    {
      MmUnmapViewInSystemSpace(v8);
      v9 = v7[5];
      if ( v9 )
      {
        ZwClose(v9);
        v7[5] = 0LL;
      }
      v7[4] = 0LL;
      v4 = AlternateResourceModuleCount;
    }
    if ( i != v4 )
    {
      memmove(v7, v7 + 9, 72LL * (v4 - i));
      v4 = AlternateResourceModuleCount;
    }
    v10 = v4-- == 1;
    AlternateResourceModuleCount = v4;
    if ( v10 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v11 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v4 >= (unsigned int)v11 )
      {
LABEL_22:
        v3 = 1;
        goto LABEL_6;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v11, 0x69507472u);
      if ( !PoolWithTag )
      {
        v3 = 0;
        goto LABEL_23;
      }
      v13 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
      ExFreePoolWithTag(v13, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount -= 32;
    }
    v4 = AlternateResourceModuleCount;
    goto LABEL_22;
  }
  v3 = 1;
LABEL_23:
  KeReleaseMutex(&MuiMutex, 0);
  return v3;
}
