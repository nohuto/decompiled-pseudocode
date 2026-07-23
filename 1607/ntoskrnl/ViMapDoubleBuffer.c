/*
 * XREFs of ViMapDoubleBuffer @ 0x140709EAC
 * Callers:
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x140707CF0 (VfMapTransfer.c)
 * Callees:
 *     KeFlushIoBuffers @ 0x14009CBF0 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x140708A08 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebp
  int v9; // r9d
  int v10; // r8d
  int v11; // edx
  int v13; // edi
  KIRQL v14; // r15
  PVOID v15; // r14
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  char *v21; // r9
  __int64 v22; // r12
  unsigned int v23; // r14d
  __int64 v24; // rbx
  const char *v25; // rdx
  ULONG *v26; // rbp
  bool v27; // cf
  unsigned int v28; // ecx
  KIRQL v29; // al
  bool v30; // zf
  PVOID v31; // rbx
  ULONG_PTR v32; // rcx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-68h]
  CHAR *Priority; // [rsp+28h] [rbp-60h]
  int v35; // [rsp+30h] [rbp-58h]
  void *Src; // [rsp+38h] [rbp-50h]
  char *v37; // [rsp+40h] [rbp-48h]
  char *v38; // [rsp+48h] [rbp-40h]
  unsigned __int64 v39; // [rsp+50h] [rbp-38h]
  int v40; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(&byte_1402F998C, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = (CHAR *)&byte_1402F998C;
    v9 = 0;
    *(_QWORD *)BugCheckOnFailure = 0LL;
    v10 = a1;
    v11 = 33;
LABEL_3:
    VfReportIssueWithOptions(230, v11, v10, v9, *(ULONG_PTR *)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( a3 < *(_QWORD *)(a2 + 32) + (unsigned __int64)*(unsigned int *)(a2 + 44) )
  {
    v13 = 1;
    ViHalPreprocessOptions(&dword_1402F9984, "Virtual address %p is before the first MDL %p.", 268435487LL, 1LL, a3, a2);
    Priority = (CHAR *)&dword_1402F9984;
    v9 = a3;
    *(_QWORD *)BugCheckOnFailure = a2;
LABEL_10:
    v10 = v13;
    goto LABEL_11;
  }
  if ( (unsigned int)(a3 - *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 32)) >= *(_DWORD *)(a2 + 40) )
  {
    ViHalPreprocessOptions(&dword_1402F9988, "Virtual address %p is after the first MDL %p.", 268435487LL, 2LL, a3, a2);
    Priority = (CHAR *)&dword_1402F9988;
    v9 = a3;
    *(_QWORD *)BugCheckOnFailure = a2;
    v10 = 2;
LABEL_11:
    v11 = 31;
    goto LABEL_3;
  }
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v15 = *(PVOID *)(a2 + 24);
  else
    v15 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v14);
  if ( !v15 )
    return 0LL;
  v16 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
  v17 = *(unsigned int *)(a2 + 40) - v16;
  v18 = (unsigned __int64)v15 + v16;
  v35 = 1;
  v39 = v17;
  Src = (void *)v18;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v18, v5, a5, &v40) )
    return 0LL;
  v19 = *(_QWORD *)(a1 + 72);
  v20 = (v18 & 0xFFF) + (unsigned int)(v40 << 12);
  v21 = (char *)(v20 + *(_QWORD *)(a1 + 64));
  v38 = v21;
  if ( !v19 )
    return 0LL;
  v22 = a2;
  v37 = (char *)(v20 + v19);
  v23 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v22 )
        return 0LL;
      if ( v35 )
      {
        v35 = 0;
        if ( !*(_QWORD *)v22 && v23 > v17 )
        {
          if ( (((v5 - 1) ^ (v17 + v5 - (unsigned __int64)v23)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v24 = v5;
            v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v26 = (ULONG *)&unk_1402F997C;
LABEL_27:
            v13 = 3;
            ViHalPreprocessOptions(v26, v25, 268435487LL, 3LL, a2, v24);
            Priority = (CHAR *)v26;
            v9 = a2;
            *(_QWORD *)BugCheckOnFailure = v24;
            goto LABEL_10;
          }
LABEL_32:
          LODWORD(v17) = v23;
          goto LABEL_36;
        }
        v27 = v23 < (unsigned int)v39;
      }
      else
      {
        if ( !*(_QWORD *)v22 )
        {
          v28 = *(_DWORD *)(v22 + 40);
          if ( v23 > v28 )
          {
            if ( (((v5 - 1) ^ (v5 + v28 - v23)) & 0xFFFFF000) != 0 )
            {
              v24 = v5;
              v25 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v26 = (ULONG *)&unk_1402F9980;
              goto LABEL_27;
            }
            goto LABEL_32;
          }
        }
        LODWORD(v17) = *(_DWORD *)(v22 + 40);
        v27 = v23 < (unsigned int)v17;
      }
      if ( v27 )
        LODWORD(v17) = v23;
LABEL_36:
      memmove(v21, Src, (unsigned int)v17);
      v38 += (unsigned int)v17;
      memmove(v37, Src, (unsigned int)v17);
      v37 += (unsigned int)v17;
      v22 = *(_QWORD *)v22;
      if ( v22 )
      {
        v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 80));
        v30 = (*(_BYTE *)(v22 + 10) & 5) == 0;
        LOBYTE(v40) = v29;
        if ( v30 )
        {
          v31 = MmMapLockedPagesSpecifyCache((PMDL)v22, 0, MmCached, 0LL, 0, 0x40000010u);
          Src = v31;
          v29 = v40;
        }
        else
        {
          v31 = *(PVOID *)(v22 + 24);
          Src = v31;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 80), v29);
        if ( !v31 )
          return 0LL;
      }
      v23 -= v17;
      if ( !v23 )
        break;
      v17 = v39;
      v21 = v38;
    }
  }
  v32 = *(_QWORD *)(a1 + 56);
  if ( v32 )
    KeFlushIoBuffers(v32, a5 == 0, 1, (__int64)v21);
  return v5;
}
