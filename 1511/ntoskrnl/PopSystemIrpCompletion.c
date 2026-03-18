/*
 * XREFs of PopSystemIrpCompletion @ 0x14039D018
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400F2748 (IoFindDeviceThatFailedIrp.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401146A0 (PopFxIncrementDeviceSleepCount.c)
 *     PopFreeIrp @ 0x140120D98 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x140120E94 (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PopPrepChildWake @ 0x14039D318 (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x14039D370 (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x14039D3E4 (PopReadyChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x1403B2824 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r12d
  __int64 *v6; // rbx
  __int64 DeviceThatFailedIrp; // r13
  __int64 v8; // rdx
  KSPIN_LOCK *v9; // rcx
  LONG v10; // ebp
  PVOID v11; // rdi
  _QWORD *v12; // rsi
  char *v13; // r14
  __int64 v14; // r15
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 v18; // rax
  __int64 **v19; // rcx
  __int64 *j; // r11
  __int64 *v21; // r10
  __int64 *k; // r9
  __int64 v24; // rax
  __int64 **v25; // rcx
  __int64 *i; // rsi
  __int64 **v27; // r11
  __int64 *v28; // r9
  int v29; // eax
  char v30; // [rsp+30h] [rbp-98h]
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 v32; // [rsp+48h] [rbp-80h] BYREF
  int v33; // [rsp+50h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-70h] BYREF
  __int64 *v35; // [rsp+70h] [rbp-58h] BYREF
  int v36; // [rsp+78h] [rbp-50h]
  int v37; // [rsp+7Ch] [rbp-4Ch]

  if ( (xmmword_140382290 & 0x8000) != 0 )
  {
    v29 = *(_DWORD *)(a2 + 48);
    v37 = 0;
    v33 = v29;
    v32 = a2;
    v35 = &v32;
    v36 = 16;
    EtwTraceKernelEvent((int)&v35, 1, 0x80008000, 0x1227u, 4200450);
  }
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(__int64 **)(a3 + 216);
  if ( v5 < 0 )
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
  else
    DeviceThatFailedIrp = 0LL;
  PopDequeueQuerySetIrp(a2);
  PopFreeIrp(a2);
  v8 = 0LL;
  v9 = (KSPIN_LOCK *)qword_1402DDC10;
  v10 = 0;
  v11 = qword_1402DDC10;
  v12 = (_QWORD *)*(v6 - 17);
  if ( *(v6 - 16) != IopRootDeviceNode )
    v8 = *(v6 - 16);
  v30 = 0;
  v13 = (char *)qword_1402DDC10 + 48;
  v31 = v8;
  if ( (unsigned __int8)(*(_BYTE *)qword_1402DDC10 - 2) <= 1u && *((int *)qword_1402DDC10 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v6 - 14));
    ObfDereferenceObject((PVOID)*(v6 - 14));
    v9 = (KSPIN_LOCK *)qword_1402DDC10;
  }
  v14 = 9LL * *((unsigned __int8 *)v6 + 56);
  KeAcquireInStackQueuedSpinLock(v9 + 1, &LockHandle);
  v16 = *v6;
  PopDevStateLockThread = (__int64)KeGetCurrentThread();
  v17 = (__int64 **)v6[1];
  if ( *(__int64 **)(v16 + 8) != v6 || *v17 != v6 )
    __fastfail(3u);
  *v17 = (__int64 *)v16;
  *(_QWORD *)(v16 + 8) = v17;
  if ( *((_BYTE *)v11 + 456) )
  {
    v24 = (__int64)&v13[8 * v14 + 24];
    v25 = *(__int64 ***)(v24 + 8);
    *v6 = v24;
    v6[1] = (__int64)v25;
    if ( *v25 != (__int64 *)v24 )
      __fastfail(3u);
    *v25 = v6;
    *(_QWORD *)(v24 + 8) = v6;
    ++*(_DWORD *)&v13[8 * v14 + 20];
    while ( v12 )
    {
      LOBYTE(v15) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(v12 + 18, v13, v15) )
        ++v10;
      v12 = (_QWORD *)*v12;
    }
    for ( i = (__int64 *)v6[2]; i != v6 + 2; i = (__int64 *)*i )
    {
      LOBYTE(v15) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(*(i - 1), v13, v15) )
        ++v10;
    }
  }
  else
  {
    v18 = (__int64)&v13[8 * v14 + 56];
    v19 = *(__int64 ***)(v18 + 8);
    *v6 = v18;
    v6[1] = (__int64)v19;
    if ( *v19 != (__int64 *)v18 )
      __fastfail(3u);
    *v19 = v6;
    *(_QWORD *)(v18 + 8) = v6;
    --*(_DWORD *)&v13[8 * v14 + 20];
    if ( v31 )
    {
      LOBYTE(v15) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(v31 + 144, v13, v15) )
        v10 = 1;
    }
    for ( j = (__int64 *)v6[4]; j != v6 + 4; j = *v27 )
    {
      LOBYTE(v15) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(j[5], v13, v15) )
        ++v10;
    }
    if ( v5 < 0 && DeviceThatFailedIrp && *(_BYTE *)v11 == 3 )
      PopDiagTraceDriverVeto(DeviceThatFailedIrp, v6);
    while ( v12 )
    {
      PopPrepChildWake(v12 + 18, v13);
      v12 = (_QWORD *)*v12;
    }
    v21 = v6 + 2;
    for ( k = (__int64 *)v6[2]; k != v21; k = (__int64 *)*v28 )
      PopPrepChildWake(*(k - 1), v13);
    if ( v5 < 0 && !*((_BYTE *)v11 + 458) && (v5 != -1073741637 || !*((_BYTE *)v11 + 459)) && *((int *)v11 + 110) >= 0 )
    {
      *((_DWORD *)v11 + 110) = v5;
      *((_QWORD *)v11 + 56) = v6[8];
      v30 = 1;
    }
  }
  PopDevStateLockThread = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v30 )
  {
    KeSetEvent(*((PRKEVENT *)v11 + 3), 0, 0);
  }
  else if ( v10 > 0 )
  {
    KeReleaseSemaphore(*((PRKSEMAPHORE *)v11 + 4), 0, v10, 0);
  }
  KeReleaseSemaphore(*((PRKSEMAPHORE *)v11 + 5), 0, 1, 0);
  return 3221225494LL;
}
