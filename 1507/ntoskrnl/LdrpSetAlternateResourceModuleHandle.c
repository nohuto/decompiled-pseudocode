/*
 * XREFs of LdrpSetAlternateResourceModuleHandle @ 0x14016D60C
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14002A0FC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x14002A564 (LdrpGetRcConfig.c)
 *     LdrResGetRCConfig @ 0x1405807EC (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     LdrpInitMuiCrits @ 0x14002A838 (LdrpInitMuiCrits.c)
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmUnmapViewInSystemSpace @ 0x14051BEC8 (MmUnmapViewInSystemSpace.c)
 */

char __fastcall LdrpSetAlternateResourceModuleHandle(
        __int64 a1,
        PVOID *a2,
        HANDLE *a3,
        __int64 a4,
        int a5,
        __int16 a6,
        int a7,
        int a8,
        __int64 a9)
{
  HANDLE v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  unsigned int i; // r8d
  _DWORD *v16; // rdx
  __int16 v17; // ax
  __int64 v18; // rbx
  PIMAGE_NT_HEADERS v19; // rax
  unsigned int CheckSum; // r9d
  int v21; // r8d
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  PVOID PoolWithTag; // rax
  void *v25; // rbx
  _QWORD *v26; // rcx
  PVOID v27; // r9
  __int64 v28; // rbx
  PVOID v29; // rax
  void *v31; // [rsp+70h] [rbp+8h]

  v12 = 0LL;
  if ( !a1 || (a7 & 0xFFFFFFC8) != 0 || (a7 & 3) == 3 || (a7 & 1) != 0 && !a2 || (a7 & 4) != 0 )
    return 0;
  LdrpInitMuiCrits(a1, (__int64)a2, (__int64)a3);
  KeWaitForSingleObject(&MuiMutex, Executive, 0, 0, 0LL);
  v13 = 0;
  v14 = AlternateResourceModuleCount;
  while ( v13 < AlternateResourceModuleCount )
  {
    v18 = 9LL * v13;
    if ( *((_QWORD *)AlternateResourceModules + 9 * v13 + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && *((_QWORD *)AlternateResourceModules + 9 * v13 + 2) )
        goto LABEL_54;
      if ( (a7 & 1) != 0
        && *((_QWORD *)AlternateResourceModules + 9 * v13 + 4)
        && a6
        && *((_WORD *)AlternateResourceModules + 36 * v13) == a6 )
      {
        if ( *a2 != (PVOID)-1LL )
        {
          MmUnmapViewInSystemSpace(*a2);
          if ( a3 )
            ZwClose(*a3);
        }
        v26 = AlternateResourceModules;
        *a2 = (PVOID)*((_QWORD *)AlternateResourceModules + v18 + 4);
        if ( a3 )
          *a3 = (HANDLE)v26[v18 + 5];
        goto LABEL_54;
      }
    }
    ++v13;
  }
  if ( (a7 & 0x10) != 0 )
    goto LABEL_54;
  if ( !AlternateResourceModules )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x900uLL, 0x69507472u);
    v25 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, 0x900uLL);
    AlternateResourceModules = v25;
    AltResMemBlockCount = 32;
LABEL_33:
    v14 = AlternateResourceModuleCount;
    goto LABEL_11;
  }
  if ( AlternateResourceModuleCount >= (unsigned int)AltResMemBlockCount )
  {
    v27 = ExAllocatePoolWithTag(PagedPool, 72LL * (unsigned int)(AltResMemBlockCount + 32), 0x69507472u);
    v31 = v27;
    if ( !v27 )
      goto LABEL_54;
    v28 = (unsigned int)AltResMemBlockCount;
    memset(v27, 0, 72LL * (unsigned int)(AltResMemBlockCount + 32));
    memmove(v31, AlternateResourceModules, 72 * v28);
    ExFreePoolWithTag(AlternateResourceModules, 0);
    AlternateResourceModules = v31;
    AltResMemBlockCount += 32;
    goto LABEL_33;
  }
LABEL_11:
  for ( i = 0; i < v14; ++i )
  {
    v16 = AlternateResourceModules;
    if ( *((_QWORD *)AlternateResourceModules + 9 * i + 1) == a1 )
    {
      if ( (a7 & 2) != 0 && !*((_QWORD *)AlternateResourceModules + 9 * i + 2) )
      {
        *((_QWORD *)AlternateResourceModules + 9 * i + 2) = a4;
        v16[18 * i + 16] = a8;
        goto LABEL_54;
      }
      if ( (a7 & 1) != 0 && !*((_QWORD *)AlternateResourceModules + 9 * i + 4) )
      {
        v17 = *((_WORD *)AlternateResourceModules + 36 * i);
        if ( v17 == a6 || !v17 )
        {
          *((_QWORD *)AlternateResourceModules + 9 * i + 4) = *a2;
          if ( a3 )
            v12 = *a3;
          *(_QWORD *)&v16[18 * i + 10] = v12;
          LOWORD(v16[18 * i]) = a6;
          v16[18 * i + 16] = a8;
          *(_QWORD *)&v16[18 * i + 12] = a9;
          goto LABEL_54;
        }
      }
    }
  }
  v19 = RtlImageNtHeader((PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( v19 )
  {
    CheckSum = v19->OptionalHeader.CheckSum;
    v21 = AlternateResourceModuleCount;
    v22 = 9LL * (unsigned int)AlternateResourceModuleCount;
    v23 = AlternateResourceModules;
    *((_QWORD *)AlternateResourceModules + v22 + 1) = a1;
    v23[v22 + 2] = a4;
    if ( (a7 & 1) != 0 )
    {
      if ( a2 )
        v29 = *a2;
      else
        v29 = 0LL;
      v23[v22 + 4] = v29;
      if ( a3 )
        v12 = *a3;
      v23[v22 + 5] = v12;
      v23[v22 + 6] = a9;
    }
    else
    {
      v23[v22 + 4] = 0LL;
      v23[v22 + 5] = 0LL;
      v23[v22 + 6] = 0LL;
    }
    LOWORD(v23[v22]) = a6;
    LODWORD(v23[v22 + 3]) = CheckSum;
    LODWORD(v23[v22 + 8]) = a8;
    AlternateResourceModuleCount = v21 + 1;
  }
LABEL_54:
  KeReleaseMutex(&MuiMutex, 0);
  return 1;
}
