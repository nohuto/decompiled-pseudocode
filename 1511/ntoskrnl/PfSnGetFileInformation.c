/*
 * XREFs of PfSnGetFileInformation @ 0x140079990
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     PfSnLogPageFaultCommon @ 0x140079800 (PfSnLogPageFaultCommon.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x140034FA0 (RtlRbInsertNodeEx.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
        goto LABEL_37;
      v18 = (_QWORD *)v18[1];
    }
  }
  if ( !*(_QWORD *)(a1 + 568) )
  {
    v4 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 360));
    if ( !v4 )
    {
      v2 = -1073741431;
LABEL_37:
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v19);
      ObfDereferenceObject(*((PVOID *)v16 + 5));
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
    goto LABEL_33;
  while ( v22[1].Children[0] > v3 )
  {
    v23 = v22->Children[0];
    if ( !v22->Children[0] )
    {
      v21 = 0;
      goto LABEL_33;
    }
LABEL_28:
    v22 = v23;
  }
  v23 = v22->Children[1];
  if ( v23 )
    goto LABEL_28;
  v21 = 1;
LABEL_33:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 520), v22, v21, (PRTL_BALANCED_NODE)v16);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 576), v19);
  if ( v7 )
  {
    v4 = 0;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 544), DelayedWorkQueue);
  }
  *(_QWORD *)(a1 + 8LL * (++*(_BYTE *)(a1 + 580) & 3) + 488) = v3;
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 360));
  return 0LL;
}
