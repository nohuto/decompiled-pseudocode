/*
 * XREFs of MmLinkJobProcess @ 0x14041BBF8
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 */

void __fastcall MmLinkJobProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  unsigned __int64 *v6; // r15
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  _QWORD *v10; // rsi
  _QWORD *i; // r14
  __int64 v12; // r12
  _QWORD *PoolWithTag; // rax
  __int64 ***v14; // rax
  __int64 ***v15; // rcx
  _QWORD *j; // r14
  __int64 v17; // rcx
  _QWORD *v18; // r8
  int inserted; // r15d
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // r13
  __int64 v23; // r14
  __int16 v25; // ax
  __int64 *v26; // rax
  __int64 *v27; // rcx
  __int64 k; // rsi
  __int64 *v29; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v30; // [rsp+28h] [rbp-8h]
  int v32; // [rsp+78h] [rbp+48h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp+50h]

  v30 = &v29;
  v29 = (__int64 *)&v29;
  v5 = 0;
  v32 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a2 + 1912);
  v7 = KeAbPreAcquire(a2 + 1912, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( (*(_DWORD *)(a2 + 1716) & 0x40) == 0 )
  {
    v10 = (_QWORD *)(a2 + 1920);
    for ( i = *(_QWORD **)(a2 + 1920); i != v10; i = (_QWORD *)*i )
    {
      v12 = i[2];
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x6E53694Du);
      if ( !PoolWithTag )
      {
        v5 = -1073741670;
        v32 = -1073741670;
        break;
      }
      PoolWithTag[7] = v12;
      PoolWithTag[4] = *(i - 1);
      v14 = (__int64 ***)(PoolWithTag + 5);
      v15 = (__int64 ***)v30;
      *v14 = &v29;
      v14[1] = (__int64 **)v15;
      if ( *v15 != &v29 )
        __fastfail(3u);
      *v15 = (__int64 **)v14;
      v30 = (__int64 **)v14;
    }
    for ( j = (_QWORD *)*v10; (_QWORD *)*v10 != v10; j = (_QWORD *)*v10 )
      MiRemoveSharedCommitNode(j[2], a2, 1LL);
    if ( v5 < 0 )
    {
      while ( 1 )
      {
        v26 = v29;
        if ( v29 == (__int64 *)&v29 )
          break;
        v27 = (__int64 *)*v29;
        if ( (__int64 **)v29[1] != &v29 || (__int64 *)v27[1] != v29 )
          __fastfail(3u);
        v29 = (__int64 *)*v29;
        v27[1] = (__int64)&v29;
        ExFreePoolWithTag(v26 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 1716) & 0x20) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 1716), 0x20u);
    }
  }
  v17 = a2 + 1128;
  v18 = *(_QWORD **)(a1 + 48);
  *(_QWORD *)(a2 + 1128) = a1 + 40;
  *(_QWORD *)(a2 + 1136) = v18;
  if ( *v18 != a1 + 40 )
    __fastfail(3u);
  inserted = v32;
  *v18 = v17;
  v20 = v29;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a2 + 944) = a1;
  while ( v20 != (__int64 *)&v29 )
  {
    v21 = (__int64 *)*v20;
    if ( (__int64 **)v20[1] != &v29 || (__int64 *)v21[1] != v20 )
      __fastfail(3u);
    v29 = (__int64 *)*v20;
    v21[1] = (__int64)&v29;
    v22 = v20;
    if ( inserted >= 0 )
    {
      v23 = v20[2];
      if ( *(v20 - 1) )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v23, a2, 1LL);
          if ( inserted < 0 )
            break;
        }
        while ( (*(v22 - 1))-- != 1 );
      }
    }
    ExFreePoolWithTag(v22 - 5, 0);
    v20 = v29;
  }
  if ( inserted < 0 )
  {
    for ( k = a2 + 1920; *(_QWORD *)k != k; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)k + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1716), 0xFFFFFFDF);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1716), 0x40u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1912), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1912));
  KeAbPostRelease(a2 + 1912);
  v25 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v25;
  if ( !v25 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
}
