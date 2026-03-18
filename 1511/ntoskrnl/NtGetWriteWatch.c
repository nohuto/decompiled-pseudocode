/*
 * XREFs of NtGetWriteWatch @ 0x1400B66D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiLockPageAndSetDirty @ 0x1400B820C (MiLockPageAndSetDirty.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
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
  _KPROCESS *Process; // rsi
  KPROCESSOR_MODE PreviousMode; // di
  _QWORD *v14; // rcx
  unsigned __int64 v15; // rdx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rax
  _BYTE *PoolWithQuotaTag; // rcx
  __int64 *v19; // r12
  int v20; // ebx
  _KPROCESS *v21; // rax
  int v22; // edi
  unsigned __int64 v23; // r15
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned int *v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // r14
  KIRQL v29; // al
  _KPROCESS *NextPageTable; // rdx
  unsigned __int64 v31; // r13
  char v32; // di
  bool v33; // cc
  __int64 v34; // rdi
  bool v35; // zf
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rdi
  __int64 v38; // r8
  _BYTE *v39; // rbx
  KIRQL v40; // [rsp+40h] [rbp-9C8h]
  char v41; // [rsp+44h] [rbp-9C4h]
  _BYTE *Src; // [rsp+48h] [rbp-9C0h]
  int v43; // [rsp+50h] [rbp-9B8h] BYREF
  unsigned __int64 v44; // [rsp+58h] [rbp-9B0h]
  unsigned __int64 v45; // [rsp+60h] [rbp-9A8h]
  PVOID v46; // [rsp+68h] [rbp-9A0h]
  unsigned __int64 v47; // [rsp+70h] [rbp-998h]
  __int64 VadEvent; // [rsp+78h] [rbp-990h]
  PVOID Object; // [rsp+80h] [rbp-988h] BYREF
  PVOID P; // [rsp+88h] [rbp-980h]
  HANDLE v51; // [rsp+90h] [rbp-978h]
  PULONG_PTR v52; // [rsp+98h] [rbp-970h]
  __int64 v53; // [rsp+A0h] [rbp-968h] BYREF
  PULONG v54; // [rsp+A8h] [rbp-960h]
  int v55; // [rsp+B0h] [rbp-958h] BYREF
  void *v56; // [rsp+B8h] [rbp-950h]
  __int64 v57; // [rsp+C0h] [rbp-948h]
  int v58; // [rsp+D0h] [rbp-938h] BYREF
  __int16 v59; // [rsp+D4h] [rbp-934h]
  __int64 v60; // [rsp+D8h] [rbp-930h]
  __int64 v61; // [rsp+E0h] [rbp-928h]
  __int64 v62; // [rsp+E8h] [rbp-920h]
  $D4FCF91253F76F57393CBFE908971F67 v63; // [rsp+190h] [rbp-878h] BYREF
  _BYTE v64[2048]; // [rsp+1C0h] [rbp-848h] BYREF

  v41 = Flags;
  v51 = ProcessHandle;
  v56 = UserAddressArray;
  v52 = EntriesInUserAddressArray;
  v54 = Granularity;
  v60 = 20LL;
  v58 = 1;
  v59 = 0;
  v61 = 0LL;
  v62 = 0LL;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return -1073741584;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( BaseAddress > (char *)MmHighestUserAddress - 0x10000 )
      return -1073741583;
    if ( (_BYTE *)MmHighestUserAddress - (_BYTE *)BaseAddress - 0xFFFF < RegionSize )
      return -1073741582;
    v14 = EntriesInUserAddressArray;
    if ( (unsigned __int64)EntriesInUserAddressArray >= MmUserProbeAddress )
      v14 = (_QWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = *EntriesInUserAddressArray;
    v44 = v15;
    if ( !v15 )
      return -1073741581;
    if ( v15 > 0x1FFFFFFFFFFFFFFFLL )
      return -1073741581;
    ProbeForWrite(UserAddressArray, 8 * v15, 8u);
    v16 = Granularity;
    if ( (unsigned __int64)Granularity >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v17 = v44;
  }
  else
  {
    v17 = *EntriesInUserAddressArray;
    v44 = *EntriesInUserAddressArray;
  }
  v45 = v17;
  PoolWithQuotaTag = v64;
  Src = v64;
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
    v43 = v22;
    if ( v22 < 0 )
      goto LABEL_76;
    v21 = (_KPROCESS *)Object;
  }
  v46 = v21;
  v23 = 0LL;
  v24 = (unsigned __int64)BaseAddress + RegionSize - 1;
  if ( (unsigned __int64)BaseAddress > v24 )
  {
    v22 = -1073741582;
    goto LABEL_66;
  }
  if ( Process != v21 )
  {
    KiStackAttachProcess(v21, 0LL, (__int64)&v63);
    v20 = 1;
  }
  v25 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v47 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = MiObtainReferencedVad((__int64)BaseAddress, &v43);
  if ( !v26 )
  {
    v22 = v43;
    if ( v43 != -1073741664 )
      goto LABEL_66;
    goto LABEL_65;
  }
  P = v26;
  if ( (v26[12] & 7) == 4
    && v24 <= (((v26[7] | ((unsigned __int64)*((unsigned __int8 *)v26 + 33) << 32)) << 12) | 0xFFF) )
  {
    VadEvent = MiLocateVadEvent(v26, 4LL);
    v28 = ((unsigned __int64)BaseAddress >> 12)
        - (*(unsigned int *)(v27 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v27 + 32) << 32));
    v57 = (__int64)v46 + 1280;
    v29 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v46 + 320);
    v40 = v29;
    v31 = v47;
    if ( v25 > v47 )
      goto LABEL_64;
    v32 = v41;
    while ( 1 )
    {
      NextPageTable = (_KPROCESS *)MiGetNextPageTable(v25, v31, 0LL, v29, 5, &v55);
      if ( !NextPageTable )
        NextPageTable = (_KPROCESS *)(v31 + 8);
      for ( ; (_KPROCESS *)v25 != NextPageTable; v25 += 8LL )
      {
        if ( _bittest64(*(const signed __int64 **)(VadEvent + 24), v28) == 1 )
        {
          if ( (v32 & 1) != 0 )
            _bittestandreset64(*(signed __int64 **)(VadEvent + 24), v28);
          *v19++ = (__int64)(v25 << 25) >> 16;
          if ( ++v23 == v45 )
            goto LABEL_64;
        }
        ++v28;
      }
      v33 = v25 <= v31;
      if ( v25 > v31 )
        goto LABEL_63;
      do
      {
        v34 = MI_READ_PTE_LOCK_FREE(v25);
        v53 = v34;
        v20 &= 0xFFFFFFF9;
        if ( _bittest64(*(const signed __int64 **)(VadEvent + 24), v28) == 1 )
        {
          v20 |= 4u;
          if ( (v41 & 1) == 0 )
            goto LABEL_54;
          _bittestandreset64(*(signed __int64 **)(VadEvent + 24), v28);
          if ( (v34 & 1) == 0 )
            goto LABEL_54;
          v35 = (v34 & 0x42) == 0;
        }
        else
        {
          if ( (v34 & 1) == 0 || (v34 & 0x42) == 0 )
            goto LABEL_54;
          v20 |= 4u;
          v35 = (v41 & 1) == 0;
        }
        if ( !v35 )
          v20 |= 2u;
LABEL_54:
        if ( (v20 & 2) != 0 )
        {
          v36 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v53) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v37 = v34 & 0xFFFFFFFFFFFFFFBDuLL;
          *(_QWORD *)v25 = v37;
          if ( (unsigned int)MiPteInShadowRange(v25) )
            MiWritePteShadow(v25, v37);
          MiInsertTbFlushEntry((__int64)&v58, (__int64)(v25 << 25) >> 16, 1LL, 0);
          MiLockPageAndSetDirty(v36, 1LL);
          v31 = v47;
        }
        if ( (v20 & 4) != 0 )
        {
          *v19++ = (__int64)(v25 << 25) >> 16;
          if ( ++v23 == v45 )
            goto LABEL_64;
        }
        ++v28;
        v25 += 8LL;
      }
      while ( (v25 & 0xFFF) != 0 && v25 <= v31 );
      v32 = v41;
      v33 = v25 <= v31;
LABEL_63:
      v29 = v40;
      if ( !v33 )
      {
LABEL_64:
        MiFlushTbList((__int64)&v58, NextPageTable);
        MiUnlockWorkingSetExclusive(v57, v40, v38);
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
    KiUnstackDetachProcess(&v63, 0LL);
  if ( v51 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v46, 0x77576D4Du);
  if ( !v22 )
  {
    v39 = Src;
    if ( v56 )
    {
      memmove(v56, Src, 8 * v23);
      *v52 = v23;
    }
    *v54 = 4096;
    goto LABEL_77;
  }
LABEL_76:
  v39 = Src;
LABEL_77:
  if ( v39 != v64 )
    ExFreePoolWithTag(v39, 0);
  return v22;
}
