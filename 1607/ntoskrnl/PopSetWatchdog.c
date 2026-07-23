/*
 * XREFs of PopSetWatchdog @ 0x14020B2F8
 * Callers:
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 * Callees:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B5AC (PopUpdateWatchdogNoWorkersEvent.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopSetWatchdog(__int64 a1, unsigned int *a2, char a3)
{
  __int64 v5; // rbx
  PVOID result; // rax
  KIRQL v7; // si
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax

  v5 = a1;
  if ( a1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  }
  else
  {
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x128uLL, 0x656E6F4Eu);
    v5 = (__int64)result;
    if ( !result )
      return result;
    memset(result, 0, 0x128uLL);
    *(_DWORD *)(v5 + 16) = 1146572624;
    *(_WORD *)(v5 + 24) = 0;
    *(_BYTE *)(v5 + 26) = 6;
    *(_DWORD *)(v5 + 28) = 1;
    *(_QWORD *)(v5 + 40) = v5 + 32;
    *(_QWORD *)(v5 + 32) = v5 + 32;
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_BYTE *)(v5 + 48) = 8;
    *(_QWORD *)(v5 + 64) = v5 + 56;
    *(_QWORD *)(v5 + 56) = v5 + 56;
    *(_QWORD *)(v5 + 72) = 0LL;
    *(_QWORD *)(v5 + 104) = 0LL;
    *(_QWORD *)(v5 + 136) = PopWatchdogDpc;
    *(_DWORD *)(v5 + 112) = 275;
    *(_QWORD *)(v5 + 144) = v5;
    *(_QWORD *)(v5 + 168) = 0LL;
    *(_QWORD *)(v5 + 128) = 0LL;
    *(_QWORD *)(v5 + 192) = PopWatchdogWorker;
    *(_QWORD *)(v5 + 200) = v5;
    *(_QWORD *)(v5 + 176) = 0LL;
    v7 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    v8 = PopWatchdogList;
    if ( *(__int64 **)(PopWatchdogList + 8) != &PopWatchdogList )
      __fastfail(3u);
    *(_QWORD *)v5 = PopWatchdogList;
    *(_QWORD *)(v5 + 8) = &PopWatchdogList;
    *(_QWORD *)(v8 + 8) = v5;
    PopWatchdogList = v5;
  }
  if ( *(_DWORD *)(v5 + 16) != 1146572624 )
    __fastfail(5u);
  v9 = *a2;
  if ( !(_DWORD)v9 || a3 )
  {
    *(_BYTE *)(v5 + 216) = 0;
    if ( KeCancelTimer((PKTIMER)(v5 + 48)) )
    {
      *(_BYTE *)(v5 + 20) = 0;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
    if ( !*(_DWORD *)(v5 + 28) )
    {
      KeReleaseSpinLock(&PopWatchdogLock, v7);
      KeWaitForSingleObject((PVOID)(v5 + 24), Executive, 0, 0, 0LL);
      v7 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    }
    if ( a3 )
    {
      v12 = *(_QWORD *)v5;
      v13 = *(_QWORD **)(v5 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 || *v13 != v5 )
        __fastfail(3u);
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      *(_DWORD *)(v5 + 16) = 1330532174;
      ExFreePoolWithTag((PVOID)v5, 0);
      v5 = 0LL;
    }
  }
  else
  {
    v10 = 10000 * v9;
    *(_OWORD *)(v5 + 224) = *(_OWORD *)a2;
    *(_OWORD *)(v5 + 240) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v5 + 256) = *((_OWORD *)a2 + 2);
    *(_QWORD *)(v5 + 272) = *((_QWORD *)a2 + 6);
    v11 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v5 + 280) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v5 + 208) = v10 + v11;
    *(_QWORD *)(v5 + 288) = KeGetCurrentThread();
    *(_BYTE *)(v5 + 216) = 1;
    if ( !(unsigned __int8)KiSetTimerEx(v5 + 48, -v10, 0, 0, v5 + 112) )
    {
      *(_BYTE *)(v5 + 20) = 1;
      PopUpdateWatchdogNoWorkersEvent(v5);
    }
  }
  KeReleaseSpinLock(&PopWatchdogLock, v7);
  return (PVOID)v5;
}
