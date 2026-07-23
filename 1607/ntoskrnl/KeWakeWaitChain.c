/*
 * XREFs of KeWakeWaitChain @ 0x1400A4264
 * Callers:
 *     ExConvertExclusiveToSharedLite @ 0x1400A4198 (ExConvertExclusiveToSharedLite.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1406178F4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiRemoveBoostThread @ 0x1400CD250 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiInsertQueueInternal @ 0x1400F7BC4 (KiInsertQueueInternal.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(_QWORD **a1, unsigned int a2, char a3)
{
  _QWORD *v3; // r13
  unsigned int v4; // edi
  unsigned int v6; // esi
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  char v15; // al
  bool v16; // zf
  __int64 v18; // rdi
  _QWORD *v19; // r12
  struct _KPRCB *v20; // rax
  _KTHREAD *CurrentThread; // r14
  __int64 v22; // r8
  __int64 v23; // r14
  int v24; // edx
  __int64 *v25; // rcx
  _QWORD *v26; // rbx
  __int64 v27; // rax
  char v28; // dl
  __int64 v29; // rdx
  __int64 v30; // r8
  char v31; // al
  struct _KPRCB *v32; // [rsp+30h] [rbp-58h]
  __int64 v33; // [rsp+38h] [rbp-50h]
  _QWORD *v34; // [rsp+40h] [rbp-48h]
  unsigned __int8 CurrentIrql; // [rsp+48h] [rbp-40h]
  int v38; // [rsp+A8h] [rbp+20h]

  v3 = *a1;
  v4 = 0;
  v38 = 0;
  v6 = 1;
  if ( !*a1 )
    return v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v33 = (__int64)CurrentPrcb;
  while ( 2 )
  {
    v8 = v3;
    v3 = (_QWORD *)*v3;
    v9 = v8 + 1;
    KiAcquireKobjectLockSafe(v8 + 1);
    v10 = v8 + 2;
    *((_DWORD *)v8 + 3) = 1;
    v11 = (_QWORD *)v8[2];
    while ( v11 != v10 )
    {
      v12 = (__int64)v11;
      v34 = (_QWORD *)*v11;
      v13 = (_QWORD *)*v11;
      v14 = (_QWORD *)v11[1];
      if ( v13[1] != v12 || *v14 != v12 )
        __fastfail(3u);
      *v14 = v13;
      v13[1] = v14;
      v15 = *(_BYTE *)(v12 + 16);
      if ( v15 != 1 )
      {
        if ( v15 != 2 )
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v12, 256LL, 0LL);
          goto LABEL_41;
        }
        *(_BYTE *)(v12 + 17) = 5;
        v18 = *(_QWORD *)(v12 + 24);
        *(_QWORD *)v12 = 0LL;
        v19 = (_QWORD *)(v18 + 8);
        __writecr8(2uLL);
        v20 = KeGetCurrentPrcb();
        v32 = v20;
        CurrentThread = v20->CurrentThread;
        if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        {
          LOBYTE(v22) = KeIsThreadRunning(v20->CurrentThread);
          EtwTraceEnqueueWork(CurrentThread, v12, v22);
        }
        KiAcquireKobjectLockSafe(v18);
        if ( (_QWORD *)*v19 == v19
          || *(_DWORD *)(v18 + 40) >= *(_DWORD *)(v18 + 44)
          || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v18 && CurrentThread->WaitReason == 15 )
        {
          v23 = (__int64)v32;
        }
        else
        {
          v23 = (__int64)v32;
          if ( (unsigned __int8)KiWakeQueueWaiter(v32, v18, v12) )
          {
LABEL_38:
            _InterlockedAnd((volatile signed __int32 *)v18, 0xFFFFFF7F);
            v16 = (*((_DWORD *)v9 + 1))-- == 1;
            if ( v16 )
              break;
            CurrentPrcb = (struct _KPRCB *)v33;
            goto LABEL_41;
          }
        }
        v24 = *(_DWORD *)(v18 + 4);
        *(_DWORD *)(v18 + 4) = v24 + 1;
        v25 = *(__int64 **)(v18 + 32);
        if ( *v25 != v18 + 24 )
          __fastfail(3u);
        *(_QWORD *)v12 = v18 + 24;
        *(_QWORD *)(v12 + 8) = v25;
        *v25 = v12;
        *(_QWORD *)(v18 + 32) = v12;
        if ( !v24 && (_QWORD *)*v19 != v19 )
        {
          v26 = *(_QWORD **)(v18 + 16);
          do
          {
            v27 = (__int64)v26;
            v26 = (_QWORD *)v26[1];
            v28 = *(_BYTE *)(v27 + 16);
            if ( v28 == 2 )
            {
              v29 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v26 != v27 )
                __fastfail(3u);
              *v26 = v29;
              *(_QWORD *)(v29 + 8) = v26;
              *(_BYTE *)(v27 + 17) = 5;
              KiInsertQueueInternal(*(_QWORD *)(v27 + 24), v27);
            }
            else
            {
              if ( v28 != 1 )
                goto LABEL_38;
              v30 = *(_QWORD *)v27;
              if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 || *v26 != v27 )
                __fastfail(3u);
              *v26 = v30;
              *(_QWORD *)(v30 + 8) = v26;
              KiTryUnwaitThread(v23, v27, *(unsigned __int16 *)(v27 + 18), 0LL);
            }
          }
          while ( v26 != v19 );
        }
        goto LABEL_38;
      }
      if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v12, *(unsigned __int16 *)(v12 + 18), 0LL) )
      {
        v16 = (*((_DWORD *)v9 + 1))-- == 1;
        if ( v16 )
          break;
      }
LABEL_41:
      v11 = v34;
      v10 = v9 + 1;
    }
    _InterlockedAnd((volatile signed __int32 *)v9, 0xFFFFFF7F);
    v4 = ++v38;
    if ( v3 )
    {
      CurrentPrcb = (struct _KPRCB *)v33;
      continue;
    }
    break;
  }
  if ( (a3 & 1) != 0 )
  {
    v31 = KiRemoveBoostThread(v33, *(_QWORD *)(v33 + 8));
    if ( a2 )
    {
      v6 = 2;
      if ( v31 > (char)a2 )
        a2 = v31;
    }
  }
  KiExitDispatcher(v33, 0LL, v6, a2, CurrentIrql);
  *a1 = 0LL;
  return v4;
}
