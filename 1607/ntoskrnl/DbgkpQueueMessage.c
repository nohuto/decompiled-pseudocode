/*
 * XREFs of DbgkpQueueMessage @ 0x140619050
 * Callers:
 *     DbgkSendSystemDllMessages @ 0x140617F4C (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140618800 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x14061A3C0 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpQueueMessage(PVOID Object, PVOID a2, __int64 a3, int a4, PRKEVENT a5)
{
  __int64 v6; // r12
  char *PoolWithQuotaTag; // rax
  char *v12; // r14
  int v14; // ecx
  _OWORD *v15; // rdi
  _OWORD *v16; // rax
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int128 v19; // xmm1
  int v20; // ebx
  struct _FAST_MUTEX *v21; // r12
  struct _LIST_ENTRY *Blink; // rcx
  __int128 v23; // xmm1
  int v24; // [rsp+30h] [rbp-1C8h]
  char v25; // [rsp+40h] [rbp-1B8h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-1A8h] BYREF
  int v27; // [rsp+8Ch] [rbp-16Ch]

  v6 = 2LL;
  v24 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x168uLL, 0x45676244u);
    v12 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithQuotaTag + 19) = a4 | 4;
    ObfReferenceObjectWithTag(Object, 0x4F676244u);
    ObfReferenceObjectWithTag(a2, 0x4F676244u);
    *((_QWORD *)v12 + 10) = KeGetCurrentThread();
  }
  else
  {
    v27 = a4;
    v12 = &v25;
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v14 = *(_DWORD *)(a3 + 40);
    a5 = (PRKEVENT)*((_QWORD *)Object + 132);
    if ( (unsigned int)(v14 - 1) <= 1 && (*((_BYTE *)a2 + 1728) & 0x40) != 0 )
      a5 = 0LL;
    if ( v14 == 5 && ((unsigned __int8)a4 & *((_BYTE *)a2 + 1728) & 0x40) != 0 )
      a5 = 0LL;
    if ( (unsigned int)(v14 - 3) <= 1 && *((char *)a2 + 1728) < 0 )
      a5 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v15 = v12 + 88;
  *((_QWORD *)v12 + 7) = Object;
  v16 = v12 + 88;
  *((_QWORD *)v12 + 8) = a2;
  v17 = (_OWORD *)a3;
  v18 = 2LL;
  do
  {
    *v16 = *v17;
    v16[1] = v17[1];
    v16[2] = v17[2];
    v16[3] = v17[3];
    v16[4] = v17[4];
    v16[5] = v17[5];
    v16[6] = v17[6];
    v16 += 8;
    v19 = v17[7];
    v17 += 8;
    *(v16 - 1) = v19;
    --v18;
  }
  while ( v18 );
  *v16 = *v17;
  *(_OWORD *)(v12 + 40) = *((_OWORD *)a2 + 99);
  if ( a5 )
  {
    v21 = (struct _FAST_MUTEX *)&a5[1];
    ExAcquireFastMutex((PFAST_MUTEX)&a5[1]);
    if ( (a5[4].Header.LockNV & 1) != 0 )
    {
      v20 = -1073740972;
    }
    else
    {
      Blink = a5[3].Header.WaitListHead.Blink;
      if ( Blink->Flink != &a5[3].Header.WaitListHead )
        __fastfail(3u);
      *(_QWORD *)v12 = (char *)a5 + 80;
      *((_QWORD *)v12 + 1) = Blink;
      Blink->Flink = (struct _LIST_ENTRY *)v12;
      a5[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
      if ( !v24 )
        KeSetEvent(a5, 0, 0);
      v20 = 0;
    }
    KeReleaseGuardedMutex(v21);
    v6 = 2LL;
  }
  else
  {
    v20 = -1073740973;
  }
  if ( v24 )
  {
    if ( v20 < 0 )
    {
      ObfDereferenceObjectWithTag(Object, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( v20 >= 0 )
    {
      KeWaitForSingleObject(v12 + 16, Executive, 0, 0, 0LL);
      v20 = *((_DWORD *)v12 + 18);
      do
      {
        *(_OWORD *)a3 = *v15;
        *(_OWORD *)(a3 + 16) = v15[1];
        *(_OWORD *)(a3 + 32) = v15[2];
        *(_OWORD *)(a3 + 48) = v15[3];
        *(_OWORD *)(a3 + 64) = v15[4];
        *(_OWORD *)(a3 + 80) = v15[5];
        *(_OWORD *)(a3 + 96) = v15[6];
        a3 += 128LL;
        v23 = v15[7];
        v15 += 8;
        *(_OWORD *)(a3 - 16) = v23;
        --v6;
      }
      while ( v6 );
      *(_OWORD *)a3 = *v15;
    }
  }
  return (unsigned int)v20;
}
