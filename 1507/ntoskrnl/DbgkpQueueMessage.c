/*
 * XREFs of DbgkpQueueMessage @ 0x140667B2C
 * Callers:
 *     DbgkSendSystemDllMessages @ 0x1406667F0 (DbgkSendSystemDllMessages.c)
 *     DbgkpPostFakeThreadMessages @ 0x140667284 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkpSendApiMessage @ 0x140669324 (DbgkpSendApiMessage.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ObfReferenceObjectWithTag @ 0x14004E670 (ObfReferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkpQueueMessage(_QWORD *Object, char *a2, __int64 a3, __int64 a4, PRKEVENT a5)
{
  int v6; // esi
  _QWORD *v9; // r13
  char *PoolWithQuotaTag; // rax
  char *v11; // r14
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // r15
  int v17; // ecx
  _OWORD *v18; // rsi
  __int128 *v19; // rax
  __int128 *v20; // rcx
  __int64 v21; // rdx
  __int128 v22; // xmm0
  int v23; // edi
  PRKEVENT v24; // r15
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int8 v27; // cl
  struct _LIST_ENTRY *Blink; // rcx
  UCHAR Type; // r13
  signed __int32 v30; // eax
  unsigned __int8 v31; // r15
  signed __int32 v32; // eax
  __int64 v33; // rax
  __int128 v34; // xmm1
  int v35; // [rsp+30h] [rbp-1D8h]
  unsigned __int8 v36; // [rsp+38h] [rbp-1D0h]
  char v38; // [rsp+50h] [rbp-1B8h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-1A8h] BYREF
  int v40; // [rsp+9Ch] [rbp-16Ch]

  v35 = a4 & 2;
  v6 = a4;
  v9 = Object;
  if ( (a4 & 2) != 0 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x168uLL, 0x45676244u);
    v11 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithQuotaTag + 19) = v6 | 4;
    ObfReferenceObjectWithTag(v9, 0x4F676244u);
    ObfReferenceObjectWithTag(a2, 0x4F676244u);
    *((_QWORD *)v11 + 10) = KeGetCurrentThread();
  }
  else
  {
    v40 = a4;
    v11 = &v38;
    v14 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, a4);
    v15 = v14;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v14);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    qword_14034D468 = (__int64)KeGetCurrentThread();
    dword_14034D490 = CurrentIrql;
    v17 = *(_DWORD *)(a3 + 40);
    a5 = (PRKEVENT)v9[132];
    if ( (unsigned int)(v17 - 1) <= 1 && (a2[1724] & 0x40) != 0 )
      a5 = 0LL;
    if ( v17 == 5 && ((unsigned __int8)v6 & (unsigned __int8)a2[1724] & 0x40) != 0 )
      a5 = 0LL;
    if ( (unsigned int)(v17 - 3) <= 1 && a2[1724] < 0 )
      a5 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v18 = v11 + 88;
  *((_QWORD *)v11 + 7) = v9;
  v19 = (__int128 *)(v11 + 88);
  *((_QWORD *)v11 + 8) = a2;
  v20 = (__int128 *)a3;
  v21 = 2LL;
  do
  {
    v22 = *v20;
    v20 += 8;
    *v19 = v22;
    v19 += 8;
    *(v19 - 7) = *(v20 - 7);
    *(v19 - 6) = *(v20 - 6);
    *(v19 - 5) = *(v20 - 5);
    *(v19 - 4) = *(v20 - 4);
    *(v19 - 3) = *(v20 - 3);
    *(v19 - 2) = *(v20 - 2);
    *(v19 - 1) = *(v20 - 1);
    --v21;
  }
  while ( v21 );
  *v19 = *v20;
  *(_OWORD *)(v11 + 40) = *(_OWORD *)(a2 + 1576);
  if ( a5 )
  {
    v24 = a5 + 1;
    v25 = KeAbPreAcquire((ULONG_PTR)&a5[1], 0LL, 0LL, v13);
    v26 = v25;
    v27 = KeGetCurrentIrql();
    v36 = v27;
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset(&a5[1].Header.Lock, 0) )
    {
      ExpAcquireFastMutexContended((ULONG_PTR)&a5[1], v25);
      v27 = v36;
    }
    if ( v26 )
      *(_BYTE *)(v26 + 26) |= 1u;
    a5[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    a5[3].Header.LockNV = v27;
    if ( (a5[4].Header.LockNV & 1) != 0 )
    {
      v23 = -1073740972;
    }
    else
    {
      Blink = a5[3].Header.WaitListHead.Blink;
      *(_QWORD *)v11 = (char *)a5 + 80;
      *((_QWORD *)v11 + 1) = Blink;
      if ( Blink->Flink != &a5[3].Header.WaitListHead )
        __fastfail(3u);
      Blink->Flink = (struct _LIST_ENTRY *)v11;
      a5[3].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v11;
      if ( !v35 )
        KeSetEvent(a5, 0, 0);
      v23 = 0;
    }
    Type = v24[2].Header.Type;
    v24->Header.WaitListHead.Flink = 0LL;
    v30 = _InterlockedCompareExchange(&v24->Header.Lock, 1, 0);
    if ( v30 )
      ExpReleaseFastMutexContended(&v24->Header.Lock, v30);
    __writecr8(Type);
    KeAbPostRelease((ULONG_PTR)v24);
    v9 = Object;
  }
  else
  {
    v23 = -1073740973;
  }
  if ( v35 )
  {
    if ( v23 < 0 )
    {
      ObfDereferenceObjectWithTag(v9, 0x4F676244u);
      ObfDereferenceObjectWithTag(a2, 0x4F676244u);
      ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v31 = dword_14034D490;
    qword_14034D468 = 0LL;
    v32 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
    if ( v32 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v32);
    __writecr8(v31);
    KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
    if ( v23 >= 0 )
    {
      KeWaitForSingleObject(v11 + 16, Executive, 0, 0, 0LL);
      v23 = *((_DWORD *)v11 + 18);
      v33 = 2LL;
      do
      {
        *(_OWORD *)a3 = *v18;
        *(_OWORD *)(a3 + 16) = v18[1];
        *(_OWORD *)(a3 + 32) = v18[2];
        *(_OWORD *)(a3 + 48) = v18[3];
        *(_OWORD *)(a3 + 64) = v18[4];
        *(_OWORD *)(a3 + 80) = v18[5];
        *(_OWORD *)(a3 + 96) = v18[6];
        a3 += 128LL;
        v34 = v18[7];
        v18 += 8;
        *(_OWORD *)(a3 - 16) = v34;
        --v33;
      }
      while ( v33 );
      *(_OWORD *)a3 = *v18;
    }
  }
  return (unsigned int)v23;
}
