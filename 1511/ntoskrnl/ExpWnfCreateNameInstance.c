/*
 * XREFs of ExpWnfCreateNameInstance @ 0x1403E5290
 * Callers:
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfFindStateName @ 0x1403E566C (ExpWnfFindStateName.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     ExpWnfPopulateStateData @ 0x140546B98 (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x140547F74 (ExpWnfGetPermanentDataStoreHandle.c)
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
  struct _EX_RUNDOWN_REF *v11; // r12
  volatile signed __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v16; // r15
  _QWORD *v17; // rdx
  bool v18; // r8
  _QWORD *v19; // rax
  struct _LIST_ENTRY *Flink; // r15
  __int64 v21; // rax
  __int64 v22; // r14
  struct _LIST_ENTRY **p_Flink; // r8
  struct _EX_RUNDOWN_REF *v24; // rdx
  unsigned int v26; // ebx
  void *Ptr; // rcx

  v6 = 168;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = 184;
  v8 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v8 != 3 )
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
  v11 = v10 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
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
    ObDereferenceSecurityDescriptor(v11->Count, 1LL);
    ExFreePoolWithTag(v10, 0x20666E57u);
    return v26;
  }
LABEL_11:
  v12 = (volatile signed __int64 *)(a1 + 48);
  v13 = KeAbPreAcquire(a1 + 48, 0LL, 0LL);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v13, a1 + 48);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v16 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v11->Count, 1LL);
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
    Flink = a4[2].ReadyListHead.Flink;
    v21 = KeAbPreAcquire((ULONG_PTR)&Flink[3].Blink, 0LL, 0LL);
    v22 = v21;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&Flink[3].Blink, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Flink[3].Blink, v21, (ULONG_PTR)&Flink[3].Blink);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    p_Flink = &Flink[4].Blink->Flink;
    v24 = v10 + 17;
    v10[17].Count = (unsigned __int64)&Flink[4];
    v10[18].Count = (unsigned __int64)p_Flink;
    if ( *p_Flink != &Flink[4] )
      __fastfail(3u);
    *p_Flink = (struct _LIST_ENTRY *)v24;
    Flink[4].Blink = (struct _LIST_ENTRY *)v24;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Flink[3].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&Flink[3].Blink);
    KeAbPostRelease((ULONG_PTR)&Flink[3].Blink);
  }
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  *a5 = v10;
  return 0LL;
}
