/*
 * XREFs of MiAllocateFileExtents @ 0x14062C488
 * Callers:
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 * Callees:
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     MiEndingOffset @ 0x14007C880 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     FsRtlGetFileExtents @ 0x1401AC304 (FsRtlGetFileExtents.c)
 *     MiBuildFileOnlyProtos @ 0x1401E325C (MiBuildFileOnlyProtos.c)
 *     MiConvertRunsToPages @ 0x1401E341C (MiConvertRunsToPages.c)
 *     MiEliminateStaleExtents @ 0x1401E3504 (MiEliminateStaleExtents.c)
 *     MiProceedToCreateSubsectionProtos @ 0x1401E39B0 (MiProceedToCreateSubsectionProtos.c)
 *     MiSetSubsectionBase @ 0x1401E3AF0 (MiSetSubsectionBase.c)
 *     MiSubsectionProtosCreated @ 0x1401E3B64 (MiSubsectionProtosCreated.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiNewPfnsSuitable @ 0x140622CA4 (MiNewPfnsSuitable.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     MiAddFileOnlyPfns @ 0x14062C408 (MiAddFileOnlyPfns.c)
 */

__int64 __fastcall MiAllocateFileExtents(__int64 BugCheckParameter2, unsigned int a2, ULONG_PTR a3, int a4, char a5)
{
  _DWORD *v5; // r15
  unsigned __int64 v6; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  int v10; // r13d
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  ULONG_PTR v16; // rbp
  int FileExtents; // ebx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rbp
  ULONG_PTR v24; // rsi
  PVOID P; // [rsp+30h] [rbp-48h] BYREF
  _DWORD *v26; // [rsp+38h] [rbp-40h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp+18h]
  int v29; // [rsp+98h] [rbp+20h]

  BugCheckParameter1 = a3;
  v5 = *(_DWORD **)BugCheckParameter2;
  v6 = 0LL;
  v8 = (unsigned int)(a4 << 12);
  v26 = v5;
  if ( (v5[14] & 0x20) != 0 )
  {
    v9 = *(_QWORD *)(BugCheckParameter2 + 8);
    v10 = 1;
    v29 = 1;
    v11 = MiStartingOffset((__int64 *)BugCheckParameter2, v9, 0);
    v6 = MiEndingOffset(BugCheckParameter2);
    if ( v11 == v6 && !v11 )
      return 0LL;
    if ( v11 + v8 > v6 )
      v8 = ((unsigned int)(v6 - v11) + 511LL) & 0xFFFFFFFFFFFFFE00uLL;
  }
  else
  {
    v13 = *(unsigned int *)(BugCheckParameter2 + 36);
    v10 = 2;
    v14 = *(_WORD *)(BugCheckParameter2 + 32) & 0xFFC0;
    v29 = 2;
    v11 = (a2 + (v13 | (v14 << 26))) << 12;
  }
  P = 0LL;
  v16 = MI_REFERENCE_CONTROL_AREA_FILE((__int64)v5);
  if ( v10 == 1 )
  {
    if ( v11 + v8 > v6 )
      v8 = ((unsigned int)(v6 - v11) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v11 = (__int64)(*(_QWORD *)(BugCheckParameter2 + 8) - *(_QWORD *)(*(_QWORD *)v5 + 64LL)) >> 3 << 12;
  }
  FileExtents = FsRtlGetFileExtents(v16, v15, v11, v8, (__int64)&P);
  MI_DEREFERENCE_CONTROL_AREA_FILE((__int64)v5, v16);
  if ( FileExtents < 0 )
    return (unsigned int)FileExtents;
  v18 = MiConvertRunsToPages((unsigned int *)P, &v27);
  if ( !v18 )
  {
    ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
  ExFreePoolWithTag(P, 0);
  v19 = v27;
  if ( !(unsigned int)MiNewPfnsSuitable((__int64)v18, v27) )
  {
    FileExtents = -1073740761;
    goto LABEL_47;
  }
  if ( v10 != 1 )
  {
    FileExtents = MiProceedToCreateSubsectionProtos((_QWORD *)BugCheckParameter2, a5);
    if ( FileExtents < 0 )
      goto LABEL_47;
    if ( (a5 & 1) == 0 )
      MiEliminateStaleExtents(BugCheckParameter1, (__int64)v18, v19);
  }
  v20 = 0LL;
  FileExtents = 0;
  v21 = 0LL;
  v27 = 0LL;
  v22 = -1LL;
  v23 = 0LL;
  do
  {
    if ( (unsigned int)v23 == v19 )
    {
      if ( !v21 )
        break;
    }
    else
    {
      if ( !v21 )
      {
        v22 = v18[v23];
        v21 = 1LL;
        goto LABEL_38;
      }
      v20 = v27;
      if ( v18[v23 - 1] + 1LL == v18[v23] )
      {
        ++v21;
        goto LABEL_39;
      }
    }
    if ( v22 >= 0 )
    {
      if ( FileExtents >= 0 )
      {
        FileExtents = MiAddFileOnlyPfns(v22, v21);
        if ( FileExtents >= 0 )
          goto LABEL_36;
        v20 = (unsigned __int64)&v18[v23];
        v21 = 0LL;
        v27 = v20;
        LODWORD(v23) = -1;
        goto LABEL_39;
      }
      if ( (unsigned __int64)&v18[v23] < v20 )
        MiRemovePhysicalMemory(v22, v21, 18);
LABEL_36:
      if ( (unsigned int)v23 == v19 )
        break;
      v21 = 0LL;
      LODWORD(v23) = v23 - 1;
LABEL_38:
      v20 = v27;
      goto LABEL_39;
    }
    if ( FileExtents >= 0 || (unsigned __int64)&v18[v23] >= v20 )
      goto LABEL_36;
    if ( (unsigned int)v23 == v19 )
      break;
    v21 = 0LL;
    LODWORD(v23) = v23 - 1;
LABEL_39:
    v23 = (unsigned int)(v23 + 1);
  }
  while ( (unsigned int)v23 <= v19 );
  if ( FileExtents >= 0 )
  {
    if ( (v26[14] & 0x20) != 0 )
      *(_WORD *)(BugCheckParameter2 + 34) |= 4u;
    v24 = BugCheckParameter1;
    MiBuildFileOnlyProtos((__int64)v18, v19, BugCheckParameter2, BugCheckParameter1);
    if ( (a5 & 1) != 0 )
      MiSetSubsectionBase(BugCheckParameter2, v24);
  }
  if ( v29 == 2 )
    MiSubsectionProtosCreated((__int64 *)BugCheckParameter2);
LABEL_47:
  ExFreePoolWithTag(v18, 0);
  return (unsigned int)FileExtents;
}
