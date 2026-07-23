/*
 * XREFs of NtGetWriteWatch @ 0x140014A70
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiLockPageAndSetDirty @ 0x1400150F8 (MiLockPageAndSetDirty.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x1404A792C (ExSystemExceptionFilter.c)
 */

NTSTATUS __stdcall NtGetWriteWatch(
        HANDLE ProcessHandle,
        ULONG Flags,
        PVOID BaseAddress,
        SIZE_T RegionSize,
        PVOID *UserAddressArray,
        PULONG_PTR EntriesInUserAddressArray,
        PULONG Granularity)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // r14
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  __int64 *v19; // r12
  int v20; // ebx
  _KPROCESS *v21; // rdi
  int v22; // edi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r14
  __int64 SharedVm; // rsi
  KIRQL v30; // al
  unsigned __int64 v31; // rsi
  char v32; // r13
  __int64 NextPageTable; // rdx
  __int64 i; // r10
  bool v35; // cc
  __int64 v36; // rax
  __int64 v37; // r10
  bool v38; // zf
  unsigned __int64 v39; // rsi
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r9
  _BYTE *v44; // rbx
  KIRQL v45; // [rsp+40h] [rbp-9C8h]
  _BYTE *Src; // [rsp+48h] [rbp-9C0h]
  int v47; // [rsp+50h] [rbp-9B8h] BYREF
  ULONG v48; // [rsp+54h] [rbp-9B4h]
  unsigned __int64 v49; // [rsp+58h] [rbp-9B0h]
  __int64 VadEvent; // [rsp+60h] [rbp-9A8h]
  unsigned __int64 v51; // [rsp+68h] [rbp-9A0h]
  PVOID Object; // [rsp+70h] [rbp-998h] BYREF
  unsigned __int64 v53; // [rsp+78h] [rbp-990h]
  unsigned __int16 *v54; // [rsp+80h] [rbp-988h]
  PVOID P; // [rsp+88h] [rbp-980h]
  PVOID v56; // [rsp+90h] [rbp-978h]
  char v57[8]; // [rsp+98h] [rbp-970h] BYREF
  __int64 v58; // [rsp+A0h] [rbp-968h] BYREF
  HANDLE v59; // [rsp+A8h] [rbp-960h]
  void *v60; // [rsp+B0h] [rbp-958h]
  PULONG_PTR v61; // [rsp+B8h] [rbp-950h]
  PULONG v62; // [rsp+C0h] [rbp-948h]
  int v63; // [rsp+D0h] [rbp-938h] BYREF
  __int16 v64; // [rsp+D4h] [rbp-934h]
  __int64 v65; // [rsp+D8h] [rbp-930h]
  __int64 v66; // [rsp+E0h] [rbp-928h]
  __int64 v67; // [rsp+E8h] [rbp-920h]
  char v68[48]; // [rsp+190h] [rbp-878h] BYREF
  _BYTE v69[2048]; // [rsp+1C0h] [rbp-848h] BYREF

  v48 = Flags;
  v59 = ProcessHandle;
  v60 = UserAddressArray;
  v61 = EntriesInUserAddressArray;
  v62 = Granularity;
  v65 = 20LL;
  v63 = 1;
  v64 = 0;
  v66 = 0LL;
  v67 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
      return -1073741583;
    if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
      return -1073741582;
    v14 = (__int64)EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v14 = *(_QWORD *)v14;
    v15 = *EntriesInUserAddressArray;
    v49 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = (__int64)Granularity;
    if ( (unsigned __int64)Granularity >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v17 = v49;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v49 = *EntriesInUserAddressArray;
  }
  v51 = v17;
  PoolWithQuotaTag = v69;
  Src = v69;
  if ( v17 > 0x100 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 8 * v17, 0x63476D4Du);
    Src = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return -1073741670;
  }
  v19 = (__int64 *)PoolWithQuotaTag;
  P = 0LL;
  v20 = 0;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v21 = Process;
    v56 = Process;
    Object = Process;
  }
  else
  {
    v22 = ObReferenceObjectByHandleWithTag(
            ProcessHandle,
            8u,
            (POBJECT_TYPE)PsProcessType,
            PreviousMode,
            0x77576D4Du,
            &Object,
            0LL);
    v47 = v22;
    if ( v22 < 0 )
      goto LABEL_76;
    v21 = (_KPROCESS *)Object;
    v56 = Object;
  }
  v23 = 0LL;
  v24 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v24 )
  {
    v22 = -1073741582;
    goto LABEL_66;
  }
  if ( Process != v21 )
  {
    KiStackAttachProcess((ULONG_PTR)v21);
    v20 = 1;
  }
  v54 = &v21[1].IdealNode[12];
  v25 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v53 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = MiObtainReferencedVad(BaseAddress, &v47);
  if ( !v26 )
  {
    v22 = v47;
    if ( v47 != -1073741664 )
      goto LABEL_66;
    goto LABEL_65;
  }
  P = (PVOID)v26;
  if ( (*(_DWORD *)(v26 + 48) & 7) == 4
    && v24 <= (((*(unsigned int *)(v26 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v26 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadEvent = MiLocateVadEvent(v26, 4LL);
    v28 = ((unsigned __int64)BaseAddress >> 12)
        - (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32));
    SharedVm = MiGetSharedVm(v54);
    v30 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    v45 = v30;
    *(_DWORD *)(SharedVm + 4) = 0;
    v31 = v53;
    if ( v25 > v53 )
      goto LABEL_64;
    v32 = v48;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v25, v31, 0, v30, 5, (__int64)v57);
      if ( !NextPageTable )
        NextPageTable = v31 + 8;
      for ( i = VadEvent; v25 != NextPageTable; v25 += 8LL )
      {
        if ( _bittest64(*(const signed __int64 **)(i + 24), v28) == 1 )
        {
          if ( (v32 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(i + 24), v28);
          *v19++ = (__int64)(v25 << 25) >> 16;
          if ( ++v23 == v51 )
            goto LABEL_64;
        }
        ++v28;
      }
      v35 = v25 <= v31;
      if ( v25 > v31 )
        goto LABEL_63;
      do
      {
        v36 = MI_READ_PTE_LOCK_FREE(v25);
        v58 = v36;
        v20 &= 0xFFFFFFF9;
        if ( _bittest64(*(const signed __int64 **)(v37 + 24), v28) == 1 )
        {
          v20 |= 4u;
          if ( (v32 & 1) == 0 )
            goto LABEL_54;
          _bittestandreset64(*(signed __int64 **)(v37 + 24), v28);
          if ( (v36 & 1) == 0 )
            goto LABEL_54;
          v38 = (v36 & 0x42) == 0;
        }
        else
        {
          if ( (v36 & 1) == 0 || (v36 & 0x42) == 0 )
            goto LABEL_54;
          v20 |= 4u;
          v38 = (v32 & 1) == 0;
        }
        if ( !v38 )
          v20 |= 2u;
LABEL_54:
        if ( (v20 & 2) != 0 )
        {
          v39 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v58) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          *(_QWORD *)v25 = v40 & 0xFFFFFFFFFFFFFFBDuLL;
          if ( (unsigned int)MiPteInShadowRange(v25, v41) )
            MiWritePteShadow(v42, v43);
          MiInsertTbFlushEntry(&v63, (__int64)(v25 << 25) >> 16, 1LL);
          MiLockPageAndSetDirty(v39, 1LL);
          v31 = v53;
        }
        if ( (v20 & 4) != 0 )
        {
          *v19++ = (__int64)(v25 << 25) >> 16;
          if ( ++v23 == v51 )
            goto LABEL_64;
        }
        ++v28;
        v25 += 8LL;
      }
      while ( (v25 & 0xFFF) != 0 && v25 <= v31 );
      v35 = v25 <= v31;
LABEL_63:
      v30 = v45;
      if ( !v35 )
      {
LABEL_64:
        MiFlushTbList(&v63);
        MiUnlockWorkingSetExclusive(v54, v45);
        v22 = 0;
        goto LABEL_66;
      }
    }
  }
LABEL_65:
  v22 = -1073741585;
LABEL_66:
  if ( P )
    MiUnlockAndDereferenceVad(P);
  if ( (v20 & 1) != 0 )
    KiUnstackDetachProcess(v68, 0LL);
  if ( v59 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v56, 0x77576D4Du);
  if ( !v22 )
  {
    v44 = Src;
    if ( v60 )
    {
      memmove(v60, Src, 8 * v23);
      *v61 = v23;
    }
    *v62 = 4096;
    goto LABEL_77;
  }
LABEL_76:
  v44 = Src;
LABEL_77:
  if ( v44 != v69 )
    ExFreePoolWithTag(v44, 0);
  return v22;
}
