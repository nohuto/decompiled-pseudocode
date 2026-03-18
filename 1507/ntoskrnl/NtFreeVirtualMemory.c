/*
 * XREFs of NtFreeVirtualMemory @ 0x1404B9FC0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1406CB210 (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     PspReturnQuota @ 0x140045E50 (PspReturnQuota.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     MiReturnProcessCommitment @ 0x14008D1B8 (MiReturnProcessCommitment.c)
 *     MiFillCommitReturnInfo @ 0x14008D1C8 (MiFillCommitReturnInfo.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     MiFreeVadRange @ 0x1400F1340 (MiFreeVadRange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14041AEA0 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCheckSecuredVad @ 0x1404749C8 (MiCheckSecuredVad.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PerfInfoLogVirtualFree @ 0x1406E5850 (PerfInfoLogVirtualFree.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _KPROCESS *Process; // rdi
  KPROCESSOR_MODE PreviousMode; // r10
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  char *v10; // r14
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r12
  char v13; // bl
  char **v14; // r13
  void *v15; // rax
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // r8
  __int16 v20; // r11
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  int v23; // r10d
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r8
  unsigned __int64 v27; // r8
  __int64 v28; // rsi
  char *v29; // rcx
  __int16 *ProcessPartition; // rax
  __int64 v31; // rdx
  __int64 v32; // r15
  NTSTATUS result; // eax
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // rdx
  NTSTATUS v36; // [rsp+40h] [rbp-108h] BYREF
  char v37; // [rsp+44h] [rbp-104h] BYREF
  ULONG v38; // [rsp+48h] [rbp-100h]
  PVOID Object; // [rsp+50h] [rbp-F8h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v41; // [rsp+60h] [rbp-E8h]
  HANDLE v42; // [rsp+68h] [rbp-E0h]
  PSIZE_T v43; // [rsp+70h] [rbp-D8h]
  PVOID P; // [rsp+78h] [rbp-D0h]
  PVOID *v45; // [rsp+80h] [rbp-C8h]
  __int64 v46[2]; // [rsp+88h] [rbp-C0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-B0h]
  _QWORD v48[3]; // [rsp+A8h] [rbp-A0h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-88h]
  unsigned __int64 v50; // [rsp+C8h] [rbp-80h]
  ULONG_PTR v51; // [rsp+D0h] [rbp-78h]
  _BYTE v52[32]; // [rsp+D8h] [rbp-70h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-50h]

  v38 = FreeType;
  v43 = RegionSize;
  v45 = BaseAddress;
  v42 = ProcessHandle;
  P = 0LL;
  memset(v48, 0, sizeof(v48));
  v49 = 0LL;
  if ( (FreeType & 0xFFFF3FFF) != 0 || (FreeType & 0xC000) == 0 || (FreeType & 0xC000) == 49152 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = BaseAddress;
    if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
      v7 = (_QWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = RegionSize;
    if ( (unsigned __int64)RegionSize >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
  }
  v50 = (unsigned __int64)*BaseAddress;
  v9 = v50;
  v10 = (char *)*RegionSize;
  v51 = *RegionSize;
  if ( v50 > (unsigned __int64)MmHighestUserAddress )
    return -1073741584;
  if ( (char *)MmHighestUserAddress - v50 < v10 )
    return -1073741583;
  v11 = (unsigned __int64)&v10[v50 - 1] | 0xFFF;
  v12 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v40 = (v50 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v41 = v11 >> 12;
  v13 = 0;
  v53 = 0LL;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v14 = (char **)Process;
    Object = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL);
    v36 = result;
    if ( result < 0 )
      return result;
    v14 = (char **)Object;
    if ( Process != Object )
    {
      v13 = 1;
      KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v52);
    }
  }
  v37 = 0;
  v15 = (void *)MiObtainReferencedVad(v9 & 0xFFFFFFFFFFFFF000uLL, &v36);
  v16 = (ULONG_PTR)v15;
  if ( v15 )
  {
    P = v15;
    while ( 1 )
    {
      v17 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
      v18 = *(unsigned int *)(v16 + 28);
      v19 = v18 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
      v20 = v38;
      v21 = v40;
      if ( v10 )
      {
        v22 = v41;
      }
      else
      {
        v22 = v18 | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
        v41 = v22;
        v11 = (v19 << 12) | 0xFFF;
        if ( (v38 & 0x8000) != 0 )
        {
          if ( v40 != v17 )
            goto LABEL_70;
          v12 = v17 << 12;
        }
      }
      if ( v40 < v17 || v40 > v19 || v22 < v17 || v22 > v19 )
      {
        result = -1073741798;
        goto LABEL_74;
      }
      v23 = *(_DWORD *)(v16 + 48);
      if ( (v23 & 0x8000) == 0 || (v23 & 7) == 1 )
      {
        result = -1073741797;
        goto LABEL_74;
      }
      if ( (v23 & 0x4000) != 0 )
      {
        if ( (v38 & 0x8000) != 0 )
        {
          v34 = v19 - v17;
          v35 = v17 << 12;
        }
        else
        {
          v34 = v22 - v40;
          v35 = v9;
        }
        result = MiCheckSecuredVad(v16, v35, (v34 + 1) << 12, 0x55u);
        v36 = result;
        if ( result < 0 )
          goto LABEL_75;
        v21 = v40;
        v22 = v41;
        v20 = v38;
      }
      if ( (v20 & 0x8000) == 0 )
        break;
      result = MiFreeVadRange((PVOID)v16, (int)&v37, v21, v22, (__int64)v14);
      v36 = result;
      if ( result >= 0 )
      {
        if ( (v13 & 1) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
        if ( v42 != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
        *v43 = v11 - v12 + 1;
        *v45 = (PVOID)v12;
        return 0;
      }
      if ( result != -1073741267 )
        goto LABEL_75;
    }
    v24 = *(_DWORD *)(v16 + 48) & 7;
    if ( v24 == 3 )
    {
      result = -1073741664;
    }
    else if ( v24 == 5 )
    {
      result = -1073741664;
    }
    else
    {
      if ( v10 )
      {
LABEL_28:
        MiDecommitPages(v12, ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (__int64)v14, v16, 1, v48);
        v25 = ((__int64)(((v11 >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3) - v49 + 1;
        v26 = *(unsigned int *)(v16 + 52);
        LODWORD(v26) = v26 & 0x7FFFFFFF;
        v27 = (((unsigned __int64)*(unsigned __int8 *)(v16 + 34) << 31) | v26) - v25;
        *(_DWORD *)(v16 + 52) ^= (v27 ^ *(_DWORD *)(v16 + 52)) & 0x7FFFFFFF;
        *(_BYTE *)(v16 + 34) = v27 >> 31;
        MiFillCommitReturnInfo(v25, (__int64)v48, v46);
        v28 = v46[0];
        if ( v46[0] )
        {
          MiReturnProcessCommitment((__int64)v14, v46[0]);
          if ( ((_DWORD)v14[96] & 0x10) != 0 )
          {
            PspChangeJobMemoryUsageByProcess(16, -v28, (__int64)KeGetCurrentThread()->ApcState.Process, 0LL);
            v14 = (char **)Object;
            v28 = v46[0];
          }
        }
        MiUnlockAndDereferenceVad((char *)v16);
        if ( v28 && v14 != (char **)PsInitialSystemProcess )
        {
          v29 = v14[130];
          v14 = (char **)Object;
          PspReturnQuota(v29, (ULONG_PTR)Object, 2u, v46[0]);
        }
        if ( v46[1] )
        {
          ProcessPartition = MiGetProcessPartition((__int64)v14);
          MiReturnCommit((__int64)ProcessPartition, v31);
        }
        v32 = v11 - v12 + 1;
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v12, v32, v14);
        if ( (v13 & 1) != 0 )
          KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
        if ( v42 != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
        *v43 = v32;
        *v45 = (PVOID)v12;
        return 0;
      }
      if ( v9 >> 12 == (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
      {
        v11 = ((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF;
        goto LABEL_28;
      }
LABEL_70:
      result = -1073741665;
    }
  }
  else
  {
    result = v36;
  }
LABEL_74:
  v36 = result;
LABEL_75:
  if ( P )
  {
    MiUnlockAndDereferenceVad((char *)P);
    result = v36;
  }
  if ( v37 == 1 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)v14);
    result = v36;
  }
  if ( (v13 & 1) != 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v52, 0);
    result = v36;
  }
  if ( v42 != (HANDLE)-1LL )
  {
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
    return v36;
  }
  return result;
}
