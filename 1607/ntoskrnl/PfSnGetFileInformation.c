/*
 * XREFs of PfSnGetFileInformation @ 0x1400371B0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x1400ED3E0 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     RtlRbInsertNodeEx @ 0x1400EAD30 (RtlRbInsertNodeEx.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnGetFileInformation(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  _RTL_BALANCED_NODE *v3; // rbx
  BOOLEAN v4; // r15
  int v7; // r12d
  _RTL_BALANCED_NODE **v8; // rax
  unsigned __int64 i; // rcx
  KIRQL v10; // al
  _QWORD *v11; // r14
  KIRQL v12; // r13
  unsigned __int64 v13; // rcx
  char *PoolWithTag; // rax
  char *v16; // r14
  KIRQL v17; // al
  _QWORD *v18; // rcx
  KIRQL v19; // r13
  unsigned __int64 v20; // rdx
  BOOLEAN v21; // r8
  _RTL_BALANCED_NODE *v22; // rdx
  _RTL_BALANCED_NODE *v23; // rax

  v2 = 0;
  v3 = (_RTL_BALANCED_NODE *)a2[3];
  v4 = 0;
  v7 = 0;
  if ( (*(_DWORD *)(a2[1] + 52LL) & 0x10) != 0 )
    return 3221225659LL;
  v8 = (_RTL_BALANCED_NODE **)(a1 + 488);
  for ( i = a1 + 520; (unsigned __int64)v8 < i; ++v8 )
  {
    if ( *v8 == v3 )
      return 0LL;
  }
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 576));
  v11 = *(_QWORD **)(a1 + 520);
  v12 = v10;
  while ( v11 )
  {
    v13 = v11[3];
    if ( v13 > (unsigned __int64)v3 )
    {
      v11 = (_QWORD *)*v11;
    }
    else
    {
      if ( v13 >= (unsigned __int64)v3 )
        break;
      v11 = (_QWORD *)v11[1];
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 576));
  __writecr8(v12);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
    return 0LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6E506343u);
  v16 = PoolWithTag;
  if ( !PoolWithTag )
  {
    if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
    return 3221225626LL;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  ObfReferenceObjectWithTag(a2, 0x746C6644u);
  *((_QWORD *)v16 + 5) = a2;
  *((_QWORD *)v16 + 3) = v3;
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576));
  v18 = *(_QWORD **)(a1 + 520);
  v19 = v17;
  while ( v18 )
  {
    v20 = v18[3];
    if ( v20 > (unsigned __int64)v3 )
    {
      v18 = (_QWORD *)*v18;
    }
    else
    {
      if ( v20 >= (unsigned __int64)v3 )
        goto LABEL_36;
      v18 = (_QWORD *)v18[1];
    }
  }
  if ( !*(_QWORD *)(a1 + 568) )
  {
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
    if ( !v4 )
    {
      v2 = -1073741431;
LABEL_36:
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v19);
      ObfDereferenceObjectWithTag(*((PVOID *)v16 + 5), 0x746C6644u);
      ExFreePoolWithTag(v16, 0);
      return v2;
    }
    *(_QWORD *)(a1 + 568) = a1;
    *(_QWORD *)(a1 + 560) = PfSnNameQueryWorker;
    v7 = 1;
    *(_QWORD *)(a1 + 544) = 0LL;
  }
  *((_QWORD *)v16 + 4) = *(_QWORD *)(a1 + 536);
  v21 = 0;
  *(_QWORD *)(a1 + 536) = v16 + 32;
  v22 = *(_RTL_BALANCED_NODE **)(a1 + 520);
  if ( !v22 )
    goto LABEL_32;
  while ( v22[1].Children[0] > v3 )
  {
    v23 = v22->Children[0];
    if ( !v22->Children[0] )
    {
      v21 = 0;
      goto LABEL_32;
    }
LABEL_27:
    v22 = v23;
  }
  v23 = v22->Children[1];
  if ( v23 )
    goto LABEL_27;
  v21 = 1;
LABEL_32:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), v22, v21, (PRTL_BALANCED_NODE)v16);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v19);
  if ( v7 )
  {
    v4 = 0;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
  }
  *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
  if ( v4 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
