/*
 * XREFs of RaidAdapterCheckWaitTimeout @ 0x1C00268C8
 * Callers:
 *     RaidQueueWaitCheckDpcRoutine @ 0x1C002A280 (RaidQueueWaitCheckDpcRoutine.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     RaidAllocatePool @ 0x1C000245C (RaidAllocatePool.c)
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidDeleteDeviceQueueEntry @ 0x1C000C324 (RaidDeleteDeviceQueueEntry.c)
 *     RaidReleaseUnitListLock @ 0x1C002A2D0 (RaidReleaseUnitListLock.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C002BD58 (RaidLunQueueCheckWaitTimeout.c)
 *     GatewayCheckWaitTimeout @ 0x1C0039510 (GatewayCheckWaitTimeout.c)
 */

_QWORD *__fastcall RaidAdapterCheckWaitTimeout(__int64 a1)
{
  __int64 v2; // r12
  unsigned int v3; // r13d
  __int64 v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // r14
  bool v10; // si
  __int64 v11; // rbx
  __int64 v12; // rax
  char v13; // al
  unsigned int v14; // r8d
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rsi
  _QWORD **v18; // r15
  _QWORD *i; // rdi
  struct _KEVENT *v20; // rbx
  unsigned int v21; // edi
  struct _KEVENT **v22; // rbx
  unsigned int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  IRP *v26; // r14
  __int64 v27; // rcx
  bool v28; // si
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  _SECURITY_QUALITY_OF_SERVICE *v30; // rax
  char v31; // al
  unsigned int v32; // r8d
  char v33; // al
  _QWORD v34[2]; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+90h] [rbp+40h]
  struct _KEVENT **Pool; // [rsp+98h] [rbp+48h]

  v34[1] = v34;
  v36 = DpcCompletionLimit;
  v34[0] = v34;
  v2 = 0LL;
  v3 = GatewayCheckWaitTimeout((PKSPIN_LOCK)(a1 + 768));
  while ( 1 )
  {
    v4 = v34[0];
    result = v34;
    if ( (_QWORD *)v34[0] == v34 )
      break;
    v6 = *(_QWORD *)v34[0];
    if ( *(_QWORD **)(v34[0] + 8LL) != v34 || *(_QWORD *)(v6 + 8) != v34[0] )
      __fastfail(3u);
    v34[0] = *(_QWORD *)v34[0];
    v7 = (_QWORD *)(v4 - 24);
    *(_QWORD *)(v6 + 8) = v34;
    v8 = *(_QWORD *)(v4 - 24 + 48);
    v9 = *(_QWORD *)(v4 - 24 + 40);
    v10 = (*(_BYTE *)(v8 + 154) & 2) != 0;
    RaidDeleteDeviceQueueEntry(v8 + 400, *(_BYTE *)(v9 + 142) & 1);
    _InterlockedIncrement64((volatile signed __int64 *)(v8 + 1808));
    RaUnitReleaseRemoveLock((struct _KEVENT *)v8);
    v11 = *(_QWORD *)(*(_QWORD *)(v9 + 184) + 8LL);
    v12 = v7[2];
    if ( *(_BYTE *)(v11 + 2) == 40 )
    {
      *(_QWORD *)(v11 + 96) = v12;
    }
    else
    {
      *(_QWORD *)(v11 + 56) = 0LL;
      *(_QWORD *)(v11 + 40) = 0LL;
      *(_QWORD *)(v11 + 48) = v12;
    }
    ExFreePoolWithTag(v7, 0x54436152u);
    v13 = *(_BYTE *)(v11 + 3);
    if ( v10 )
    {
      v14 = -1073740534;
      v15 = v13 & 0x80 | 0x38;
    }
    else
    {
      v14 = 258;
      v15 = v13 & 0x80 | 9;
    }
    *(_BYTE *)(v11 + 3) = v15;
    RaidCompleteRequestEx((PIRP)v9, 0, v14);
  }
  if ( v36 != v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 112), &LockHandle);
    v17 = *(unsigned int *)(a1 + 136);
    if ( (_DWORD)v17
      && (Pool = (struct _KEVENT **)RaidAllocatePool(NonPagedPoolNx, 8 * v17, 0x4C556152u, *(_QWORD *)(a1 + 8))) != 0LL )
    {
      v18 = (_QWORD **)(a1 + 120);
      for ( i = *v18; i != v18; i = (_QWORD *)*i )
      {
        v20 = (struct _KEVENT *)(i - 6);
        if ( *((_BYTE *)i + 2504)
          && (LODWORD(v20[107].Header.WaitListHead.Flink) != -1 || (BYTE2(v20[6].Header.WaitListHead.Flink) & 2) != 0)
          && (int)RaUnitAcquireRemoveLock((__int64)(i - 6)) >= 0 )
        {
          Pool[v2] = v20;
          v2 = (unsigned int)(v2 + 1);
        }
      }
      RaidReleaseUnitListLock(v16, &LockHandle);
      if ( (unsigned int)v2 < (unsigned int)v17 )
        Pool[v2] = 0LL;
      v21 = 0;
      v22 = Pool;
      do
      {
        if ( !*v22 )
          break;
        if ( v36 > v3 )
        {
          v23 = RaidLunQueueCheckWaitTimeout(&(*v22)[16].Header.WaitListHead.Blink, v36 - v3, v34);
          v3 += v23;
          if ( v23 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)&(*v22)[75].Header.WaitListHead.Blink, v23);
        }
        RaUnitReleaseRemoveLock(*v22);
        ++v21;
        ++v22;
      }
      while ( v21 < (unsigned int)v17 );
      ExFreePoolWithTag(Pool, 0x4C556152u);
      while ( 1 )
      {
        result = (_QWORD *)v34[0];
        if ( (_QWORD *)v34[0] == v34 )
          break;
        v24 = *(_QWORD *)v34[0];
        if ( *(_QWORD **)(v34[0] + 8LL) != v34 || *(_QWORD *)(v24 + 8) != v34[0] )
          __fastfail(3u);
        v34[0] = *(_QWORD *)v34[0];
        v25 = result - 3;
        *(_QWORD *)(v24 + 8) = v34;
        v26 = (IRP *)result[2];
        v27 = result[3];
        v28 = (*(_BYTE *)(v27 + 154) & 2) != 0;
        SecurityContext = v26->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
        RaUnitReleaseRemoveLock((struct _KEVENT *)v27);
        v30 = (_SECURITY_QUALITY_OF_SERVICE *)v25[2];
        if ( BYTE2(SecurityContext->SecurityQos) == 40 )
        {
          SecurityContext[4].SecurityQos = v30;
        }
        else
        {
          SecurityContext[2].AccessState = 0LL;
          *(_QWORD *)&SecurityContext[1].DesiredAccess = 0LL;
          SecurityContext[2].SecurityQos = v30;
        }
        ExFreePoolWithTag(v25, 0x54436152u);
        v31 = BYTE3(SecurityContext->SecurityQos);
        if ( v28 )
        {
          v32 = -1073740534;
          v33 = v31 & 0x80 | 0x38;
        }
        else
        {
          v32 = 258;
          v33 = v31 & 0x80 | 9;
        }
        BYTE3(SecurityContext->SecurityQos) = v33;
        RaidCompleteRequestEx(v26, 0, v32);
      }
    }
    else
    {
      return (_QWORD *)RaidReleaseUnitListLock(v16, &LockHandle);
    }
  }
  return result;
}
