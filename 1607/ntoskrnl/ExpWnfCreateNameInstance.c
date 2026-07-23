/*
 * XREFs of ExpWnfCreateNameInstance @ 0x140461464
 * Callers:
 *     NtCreateWnfStateName @ 0x1403F5A04 (NtCreateWnfStateName.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x14046185C (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x1404D19FC (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1404D274C (ExpWnfGetPermanentDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  unsigned int v6; // eax
  __int64 v8; // rdi
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  __int64 *v11; // r12
  volatile signed __int64 *v12; // rbp
  _BYTE *v13; // rax
  _BYTE *v14; // rbx
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v16; // r15
  _QWORD *v17; // rdx
  bool v18; // r8
  _QWORD *v19; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r15
  _BYTE *v21; // rax
  _BYTE *v22; // r14
  struct _SINGLE_LIST_ENTRY **p_Next; // r8
  struct _EX_RUNDOWN_REF *v24; // rdx
  unsigned int v26; // ebx
  void *Ptr; // rcx

  v6 = 168;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = 184;
  v8 = (a2 >> 4) & 3;
  if ( (_DWORD)v8 != 3 || PsInitialSystemProcess == a4 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v6, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6, 0x20666E57u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v10->Count) = 11012355;
  v10[6].Count = a1;
  v10[1].Count = 0LL;
  v10[5].Count = a2;
  LODWORD(v10[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v10[8].Count = (unsigned __int64)&v10[21];
    *(_OWORD *)&v10[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v11 = (__int64 *)&v10[9];
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16), &v10[9].Count, 1u) < 0 )
  {
    ExFreePoolWithTag(v10, 0x20666E57u);
    return 3221225626LL;
  }
  v10[16].Count = (unsigned __int64)&v10[15];
  v10[15].Count = (unsigned __int64)&v10[15];
  v10[14].Count = 0LL;
  v10[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 )
  {
    if ( (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v8, 1LL, &v10[13]) < 0 )
    {
      v26 = -1073741670;
    }
    else
    {
      v26 = ExpWnfPopulateStateData(v10);
      if ( !v26 )
        goto LABEL_11;
    }
    ObDereferenceSecurityDescriptor(*v11, 1u);
    ExFreePoolWithTag(v10, 0x20666E57u);
    return v26;
  }
LABEL_11:
  v12 = (volatile signed __int64 *)(a1 + 48);
  v13 = (_BYTE *)KeAbPreAcquire(a1 + 48, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v13, a1 + 48);
  if ( v14 )
    v14[26] |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v16 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v11, 1u);
    Ptr = v10[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v10, 0x20666E57u);
    *a5 = v16;
    return 0LL;
  }
  ExAcquireRundownProtection(v10 + 1);
  v17 = *(_QWORD **)(a1 + 56);
  v18 = 0;
  if ( !v17 )
    goto LABEL_23;
  while ( v10[5].Count < v17[3] )
  {
    v19 = (_QWORD *)*v17;
    if ( !*v17 )
    {
      v18 = 0;
      goto LABEL_23;
    }
LABEL_19:
    v17 = v19;
  }
  v19 = (_QWORD *)v17[1];
  if ( v19 )
    goto LABEL_19;
  v18 = 1;
LABEL_23:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v17, v18, (unsigned __int64)&v10[2]);
  if ( (_DWORD)v8 == 3 )
  {
    v10[19].Count = (unsigned __int64)a4;
    Next = a4[2].SwapListEntry.Next;
    v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&Next[7], 0LL, 0);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Next[7], 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Next[7], v21, (ULONG_PTR)&Next[7]);
    if ( v22 )
      v22[26] |= 1u;
    p_Next = &Next[9].Next->Next;
    v24 = v10 + 17;
    if ( *p_Next != &Next[8] )
      __fastfail(3u);
    v24->Count = (unsigned __int64)&Next[8];
    v10[18].Count = (unsigned __int64)p_Next;
    *p_Next = (struct _SINGLE_LIST_ENTRY *)v24;
    Next[9].Next = (struct _SINGLE_LIST_ENTRY *)v24;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Next[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Next[7]);
    KeAbPostRelease((ULONG_PTR)&Next[7]);
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v10;
  return 0LL;
}
