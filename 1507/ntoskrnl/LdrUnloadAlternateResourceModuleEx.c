/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140025AE4
 * Callers:
 *     LdrUnloadAlternateResourceModule @ 0x14002567C (LdrUnloadAlternateResourceModule.c)
 *     LdrpGetFromMUIMemCache @ 0x14002A698 (LdrpGetFromMUIMemCache.c)
 * Callees:
 *     LdrpInitMuiCrits @ 0x14002A838 (LdrpInitMuiCrits.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  unsigned int v3; // edx
  int v4; // edi
  _QWORD *PoolWithTag; // rsi
  _QWORD *v6; // rbx
  void *v7; // rcx
  bool v8; // zf
  void *v9; // rcx
  __int64 v10; // rax
  PVOID v11; // rbx

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v4 = AlternateResourceModuleCount;
    PoolWithTag = AlternateResourceModules;
    while ( 1 )
    {
      if ( v4 <= 0 )
        goto LABEL_23;
      if ( PoolWithTag[9 * v4 - 8] == a1 )
        break;
LABEL_6:
      --v4;
    }
    v6 = &PoolWithTag[9 * v4 - 9];
    v7 = (void *)v6[4];
    if ( v7 && v7 != (void *)-1LL )
    {
      MmUnmapViewInSystemSpace(v7);
      v9 = (void *)v6[5];
      if ( v9 )
      {
        ZwClose(v9);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
      v3 = AlternateResourceModuleCount;
      PoolWithTag = AlternateResourceModules;
    }
    if ( v4 != v3 )
    {
      memmove(v6, v6 + 9, 72LL * (v3 - v4));
      v3 = AlternateResourceModuleCount;
      PoolWithTag = AlternateResourceModules;
    }
    v8 = v3-- == 1;
    AlternateResourceModuleCount = v3;
    if ( v8 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v10 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v3 >= (unsigned int)v10 )
        goto LABEL_13;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v10, 0x69507472u);
      if ( !PoolWithTag )
      {
        v2 = 0;
        goto LABEL_23;
      }
      v11 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
      ExFreePoolWithTag(v11, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount -= 32;
    }
    v3 = AlternateResourceModuleCount;
LABEL_13:
    v2 = 1;
    goto LABEL_6;
  }
  v2 = 1;
LABEL_23:
  KeReleaseMutex(&MuiMutex, 0);
  return v2;
}
