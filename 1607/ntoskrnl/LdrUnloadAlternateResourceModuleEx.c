/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x140130BA4
 * Callers:
 *     LdrpGetFromMUIMemCache @ 0x1400FAC9C (LdrpGetFromMUIMemCache.c)
 *     LdrUnloadAlternateResourceModule @ 0x140130B9C (LdrUnloadAlternateResourceModule.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055FE0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     LdrpInitMuiCrits @ 0x1400FAE3C (LdrpInitMuiCrits.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     memmove @ 0x140171280 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x140525E34 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1)
{
  char v2; // bl
  unsigned int v3; // edx
  int i; // edi
  int v5; // r15d
  _QWORD *v6; // rsi
  void *v7; // rcx
  void *v8; // rcx
  bool v9; // zf
  __int64 v10; // rax
  PVOID PoolWithTag; // rdi
  PVOID v12; // rbx

  v2 = 0;
  if ( !a1 )
    return 0;
  LdrpInitMuiCrits();
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v3 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    for ( i = AlternateResourceModuleCount; ; i = v5 )
    {
      if ( i <= 0 )
        goto LABEL_23;
      v5 = i - 1;
      v6 = (char *)AlternateResourceModules + 72 * i - 72;
      if ( v6[1] == a1 )
        break;
LABEL_6:
      ;
    }
    v7 = (void *)v6[4];
    if ( v7 && v7 != (void *)-1LL )
    {
      MmUnmapViewInSystemSpace(v7);
      v8 = (void *)v6[5];
      if ( v8 )
      {
        ZwClose(v8);
        v6[5] = 0LL;
      }
      v6[4] = 0LL;
      v3 = AlternateResourceModuleCount;
    }
    if ( i != v3 )
    {
      memmove(v6, v6 + 9, 72LL * (v3 - i));
      v3 = AlternateResourceModuleCount;
    }
    v9 = v3-- == 1;
    AlternateResourceModuleCount = v3;
    if ( v9 )
    {
      ExFreePoolWithTag(AlternateResourceModules, 0);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v10 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v3 >= (unsigned int)v10 )
      {
LABEL_22:
        v2 = 1;
        goto LABEL_6;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 72 * v10, 0x69507472u);
      if ( !PoolWithTag )
      {
        v2 = 0;
        goto LABEL_23;
      }
      v12 = AlternateResourceModules;
      memmove(PoolWithTag, AlternateResourceModules, 72LL * (unsigned int)(AltResMemBlockCount - 32));
      ExFreePoolWithTag(v12, 0);
      AlternateResourceModules = PoolWithTag;
      AltResMemBlockCount -= 32;
    }
    v3 = AlternateResourceModuleCount;
    goto LABEL_22;
  }
  v2 = 1;
LABEL_23:
  KeReleaseMutex(&MuiMutex, 0);
  return v2;
}
