/*
 * XREFs of ViMapDoubleBuffer @ 0x14073EBE8
 * Callers:
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     KeFlushIoBuffers @ 0x1401179F8 (KeFlushIoBuffers.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     VfReportIssueWithOptions @ 0x14025B0C0 (VfReportIssueWithOptions.c)
 *     ViAllocateMapRegistersFromFile @ 0x14073D498 (ViAllocateMapRegistersFromFile.c)
 *     ViHalPreprocessOptions @ 0x14073E7D0 (ViHalPreprocessOptions.c)
 */

__int64 __fastcall ViMapDoubleBuffer(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5)
{
  unsigned int v5; // ebp
  int v9; // edx
  int v10; // r9d
  int v11; // r8d
  CHAR *v13; // rbp
  int v14; // edi
  volatile signed __int32 *v15; // r14
  unsigned __int8 CurrentIrql; // r13
  char *v17; // r12
  unsigned __int64 v18; // rbx
  char *v19; // rbx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  char *v22; // r9
  __int64 v23; // r13
  unsigned int v24; // r15d
  __int64 v25; // rbx
  const char *v26; // rdx
  ULONG *v27; // rbp
  unsigned int v28; // r12d
  bool v29; // cf
  unsigned int v30; // ecx
  PVOID v31; // rbx
  ULONG_PTR v32; // rcx
  ULONG BugCheckOnFailure[2]; // [rsp+20h] [rbp-78h]
  CHAR *Priority; // [rsp+28h] [rbp-70h]
  int v35; // [rsp+30h] [rbp-68h] BYREF
  void *Src; // [rsp+38h] [rbp-60h]
  void *v37; // [rsp+40h] [rbp-58h]
  char *v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+50h] [rbp-48h]
  __int64 v40; // [rsp+58h] [rbp-40h]
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  int v43; // [rsp+B8h] [rbp+20h]

  v5 = a4;
  if ( !a4 )
  {
    ViHalPreprocessOptions(&byte_14032314C, "Driver is attempting to map a 0-length transfer.", 33LL, a1, 0LL, 0LL);
    Priority = (CHAR *)&byte_14032314C;
    v9 = 33;
    *(_QWORD *)BugCheckOnFailure = 0LL;
    v10 = 0;
    v11 = a1;
LABEL_3:
    VfReportIssueWithOptions(230, v9, v11, v10, *(ULONG_PTR *)BugCheckOnFailure, Priority);
    return 0LL;
  }
  if ( !*(_BYTE *)(a1 + 25) && a4 >= 4096 - (a3 & 0xFFF) )
    v5 = 4096 - (a3 & 0xFFF);
  if ( a3 < *(_QWORD *)(a2 + 32) + (unsigned __int64)*(unsigned int *)(a2 + 44) )
  {
    v13 = (CHAR *)&dword_140323150;
    v14 = 1;
    ViHalPreprocessOptions(&dword_140323150, "Virtual address %p is before the first MDL %p.", 268435487LL, 1LL, a3, a2);
    goto LABEL_10;
  }
  if ( (unsigned int)(a3 - *(_DWORD *)(a2 + 44) - *(_DWORD *)(a2 + 32)) >= *(_DWORD *)(a2 + 40) )
  {
    v13 = (CHAR *)&dword_140323144;
    v14 = 2;
    ViHalPreprocessOptions(&dword_140323144, "Virtual address %p is after the first MDL %p.", 268435487LL, 2LL, a3, a2);
LABEL_10:
    Priority = v13;
    v10 = a3;
    *(_QWORD *)BugCheckOnFailure = a2;
LABEL_11:
    v11 = v14;
    v9 = 31;
    goto LABEL_3;
  }
  v15 = (volatile signed __int32 *)(a1 + 80);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 80));
  }
  else if ( _interlockedbittestandset64(v15, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 80));
  }
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v17 = *(char **)(a2 + 24);
  else
    v17 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)(a1 + 80), retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
  __writecr8(CurrentIrql);
  if ( !v17 )
    return 0LL;
  v18 = a3 - *(unsigned int *)(a2 + 44) - *(_QWORD *)(a2 + 32);
  v43 = 1;
  v39 = *(unsigned int *)(a2 + 40) - v18;
  v19 = &v17[v18];
  Src = v19;
  if ( !(unsigned int)ViAllocateMapRegistersFromFile(a1, v19, v5, a5, &v35) )
    return 0LL;
  v20 = *(_QWORD *)(a1 + 72);
  v21 = ((unsigned __int16)v19 & 0xFFF) + (unsigned __int64)(unsigned int)(v35 << 12);
  v22 = (char *)(v21 + *(_QWORD *)(a1 + 64));
  v38 = v22;
  if ( !v20 )
    return 0LL;
  v23 = a2;
  v37 = (void *)(v21 + v20);
  v24 = v5;
  if ( v5 )
  {
    while ( 1 )
    {
      if ( !v23 )
        return 0LL;
      if ( v43 )
      {
        v43 = 0;
        if ( !*(_QWORD *)v23 && v24 > v39 )
        {
          if ( (((v5 - 1) ^ (v39 + v5 - (unsigned __int64)v24)) & 0xFFFFFFFFFFFFF000uLL) != 0 )
          {
            v25 = v5;
            v26 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x.";
            v27 = (ULONG *)&unk_140323148;
LABEL_34:
            v14 = 3;
            ViHalPreprocessOptions(v27, v26, 268435487LL, 3LL, a2, v25);
            Priority = (CHAR *)v27;
            v10 = a2;
            *(_QWORD *)BugCheckOnFailure = v25;
            goto LABEL_11;
          }
LABEL_39:
          v28 = v24;
          goto LABEL_43;
        }
        v28 = v39;
        v29 = v24 < (unsigned int)v39;
      }
      else
      {
        if ( !*(_QWORD *)v23 )
        {
          v30 = *(_DWORD *)(v23 + 40);
          if ( v24 > v30 )
          {
            if ( (((v5 - 1) ^ (v5 + v30 - v24)) & 0xFFFFF000) != 0 )
            {
              v25 = v5;
              v26 = "Extra transfer length crosses a page boundary: Mdl %p, Length %x";
              v27 = (ULONG *)&unk_140323140;
              goto LABEL_34;
            }
            goto LABEL_39;
          }
        }
        v28 = *(_DWORD *)(v23 + 40);
        v29 = v24 < v28;
      }
      if ( v29 )
        v28 = v24;
LABEL_43:
      memmove(v22, Src, v28);
      v38 += v28;
      memmove(v37, Src, v28);
      v37 = (char *)v37 + v28;
      v23 = *(_QWORD *)v23;
      if ( v23 )
      {
        v40 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(v15);
        }
        else if ( _interlockedbittestandset64(v15, 0LL) )
        {
          KxWaitForSpinLockAndAcquire(v15);
        }
        v31 = (*(_BYTE *)(v23 + 10) & 5) != 0
            ? *(PVOID *)(v23 + 24)
            : MmMapLockedPagesSpecifyCache((PMDL)v23, 0, MmCached, 0LL, 0, 0x40000010u);
        Src = v31;
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented((volatile signed __int64 *)v15, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
        __writecr8((unsigned __int8)v40);
        if ( !v31 )
          return 0LL;
      }
      v24 -= v28;
      if ( !v24 )
        break;
      v22 = v38;
    }
  }
  v32 = *(_QWORD *)(a1 + 56);
  if ( v32 )
    KeFlushIoBuffers(v32, a5 == 0, 1, (__int64)v22);
  return v5;
}
