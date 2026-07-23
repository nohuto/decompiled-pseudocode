/*
 * XREFs of PopSystemIrpCompletion @ 0x1403D12D8
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseSemaphore @ 0x140052530 (KeReleaseSemaphore.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     IoFindDeviceThatFailedIrp @ 0x1400B25F4 (IoFindDeviceThatFailedIrp.c)
 *     PopFxIncrementDeviceSleepCount @ 0x1401237FC (PopFxIncrementDeviceSleepCount.c)
 *     PopFreeIrp @ 0x14012BC54 (PopFreeIrp.c)
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PopPrepChildWake @ 0x1403D15BC (PopPrepChildWake.c)
 *     PopReadyParentSleep @ 0x1403D1614 (PopReadyParentSleep.c)
 *     PopReadyChildWake @ 0x1403D1688 (PopReadyChildWake.c)
 *     PopDiagTraceDriverVeto @ 0x1403DF510 (PopDiagTraceDriverVeto.c)
 */

__int64 __fastcall PopSystemIrpCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r15d
  __int64 *v6; // rbx
  __int64 DeviceThatFailedIrp; // r13
  __int64 v8; // rdx
  KSPIN_LOCK *v9; // rcx
  LONG v10; // ebp
  PVOID v11; // rdi
  __int64 *v12; // rsi
  char *v13; // r14
  unsigned __int8 v14; // al
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 *v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rax
  __int64 **v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // r11
  __int64 *v23; // r10
  __int64 *j; // r9
  __int64 v26; // rax
  __int64 **v27; // rcx
  __int64 *i; // rsi
  __int64 **v29; // r11
  __int64 *v30; // r9
  int v31; // eax
  char v32; // [rsp+30h] [rbp-88h]
  __int64 v33; // [rsp+38h] [rbp-80h] BYREF
  int v34; // [rsp+40h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  __int64 *v36; // [rsp+60h] [rbp-58h] BYREF
  int v37; // [rsp+68h] [rbp-50h]
  int v38; // [rsp+6Ch] [rbp-4Ch]

  if ( (xmmword_1403AA2D0 & 0x8000) != 0 )
  {
    v31 = *(_DWORD *)(a2 + 48);
    v38 = 0;
    v34 = v31;
    v33 = a2;
    v36 = &v33;
    v37 = 16;
    EtwTraceKernelEvent((int)&v36, 1, 0x80008000, 4647, 4200450);
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
  v9 = (KSPIN_LOCK *)qword_140303330;
  v10 = 0;
  v11 = qword_140303330;
  v12 = (__int64 *)*(v6 - 17);
  if ( *(v6 - 16) != IopRootDeviceNode )
    v8 = *(v6 - 16);
  v32 = 0;
  v13 = (char *)qword_140303330 + 48;
  v14 = *(_BYTE *)qword_140303330 - 2;
  v33 = v8;
  v36 = v12;
  if ( v14 <= 1u && *((int *)qword_140303330 + 1) > 1 )
  {
    PopFxIncrementDeviceSleepCount(*(v6 - 14));
    ObfDereferenceObject((PVOID)*(v6 - 14));
    v9 = (KSPIN_LOCK *)qword_140303330;
  }
  v15 = 9LL * *((unsigned __int8 *)v6 + 56);
  KeAcquireInStackQueuedSpinLock(v9 + 1, &LockHandle);
  v17 = (__int64 *)*v6;
  v18 = (__int64 **)v6[1];
  if ( *(__int64 **)(*v6 + 8) != v6 || *v18 != v6 )
    __fastfail(3u);
  *v18 = v17;
  v17[1] = (__int64)v18;
  if ( *((_BYTE *)v11 + 456) )
  {
    v26 = (__int64)&v13[8 * v15 + 24];
    v27 = *(__int64 ***)(v26 + 8);
    if ( *v27 != (__int64 *)v26 )
      __fastfail(3u);
    *v6 = v26;
    v6[1] = (__int64)v27;
    *v27 = v6;
    *(_QWORD *)(v26 + 8) = v6;
    ++*(_DWORD *)&v13[8 * v15 + 20];
    while ( v12 )
    {
      LOBYTE(v16) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(v12 + 18, v13, v16) )
        ++v10;
      v12 = (__int64 *)*v12;
    }
    for ( i = (__int64 *)v6[2]; i != v6 + 2; i = (__int64 *)*i )
    {
      LOBYTE(v16) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyChildWake(*(i - 1), v13, v16) )
        ++v10;
    }
  }
  else
  {
    v19 = (__int64)&v13[8 * v15 + 56];
    v20 = *(__int64 ***)(v19 + 8);
    if ( *v20 != (__int64 *)v19 )
      __fastfail(3u);
    v6[1] = (__int64)v20;
    *v6 = v19;
    *v20 = v6;
    v21 = v33;
    *(_QWORD *)(v19 + 8) = v6;
    --*(_DWORD *)&v13[8 * v15 + 20];
    if ( v21 )
    {
      LOBYTE(v16) = *((_BYTE *)v6 + 56);
      if ( (unsigned __int8)PopReadyParentSleep(v21 + 144, v13, v16) )
        v10 = 1;
    }
    v22 = (__int64 *)v6[4];
    if ( v22 != v6 + 4 )
    {
      do
      {
        LOBYTE(v16) = *((_BYTE *)v6 + 56);
        if ( (unsigned __int8)PopReadyParentSleep(v22[5], v13, v16) )
          ++v10;
        v22 = *v29;
      }
      while ( v22 != v6 + 4 );
      v12 = v36;
    }
    if ( v5 < 0 && DeviceThatFailedIrp && *(_BYTE *)v11 == 3 )
      PopDiagTraceDriverVeto(DeviceThatFailedIrp, v6);
    while ( v12 )
    {
      PopPrepChildWake(v12 + 18, v13);
      v12 = (__int64 *)*v12;
    }
    v23 = v6 + 2;
    for ( j = (__int64 *)v6[2]; j != v23; j = (__int64 *)*v30 )
      PopPrepChildWake(*(j - 1), v13);
    if ( v5 < 0 && !*((_BYTE *)v11 + 458) && (v5 != -1073741637 || !*((_BYTE *)v11 + 459)) && *((int *)v11 + 110) >= 0 )
    {
      *((_DWORD *)v11 + 110) = v5;
      *((_QWORD *)v11 + 56) = v6[8];
      v32 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v32 )
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
