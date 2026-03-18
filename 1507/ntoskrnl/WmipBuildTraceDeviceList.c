/*
 * XREFs of WmipBuildTraceDeviceList @ 0x14011A6D4
 * Callers:
 *     WmiTraceRundownNotify @ 0x1405332B4 (WmiTraceRundownNotify.c)
 *     WmiSetNetworkNotify @ 0x1406E146C (WmiSetNetworkNotify.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WmipFreeTraceDeviceList @ 0x140533358 (WmipFreeTraceDeviceList.c)
 */

__int64 __fastcall WmipBuildTraceDeviceList(int a1, _QWORD *a2, unsigned int *a3)
{
  PVOID v3; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int v8; // esi
  PVOID PoolWithTag; // rax
  _UNKNOWN **v10; // rdx
  _DWORD *v11; // r8
  unsigned int v12; // ebx
  int v13; // r9d
  unsigned int v14; // ebx
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&WmipRegistrationSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&WmipRegistrationSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&WmipRegistrationSpinLock);
  }
  v8 = WmipInUseRegEntryCount;
  if ( !WmipInUseRegEntryCount )
  {
    v14 = -1073741632;
LABEL_21:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
    else
      _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
    __writecr8(CurrentIrql);
    KeReleaseMutex(&WmipSMMutex, 0);
    goto LABEL_27;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)WmipInUseRegEntryCount, 0x70696D57u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v14 = -1073741670;
    goto LABEL_21;
  }
  v10 = (_UNKNOWN **)WmipInUseRegEntryHead;
  v11 = PoolWithTag;
  v12 = 0;
  while ( v10 != &WmipInUseRegEntryHead )
  {
    v13 = (*((int *)v10 + 12) >> 4) & 0xF00000;
    if ( (((v13 & a1) != 0) & _bittest((const signed __int32 *)v10 + 12, 0x1Eu)) != 0 && v10[2] && v12 < v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 12);
      *(_QWORD *)v11 = v10;
      v11[2] = v13;
      v11 += 4;
      ++v12;
    }
    v10 = (_UNKNOWN **)*v10;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&WmipRegistrationSpinLock, retaddr);
  else
    _InterlockedAnd64(&WmipRegistrationSpinLock, 0LL);
  __writecr8(CurrentIrql);
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( v12 )
  {
    *a3 = v12;
    v14 = 0;
    *a2 = v3;
    return v14;
  }
  v14 = -1073741632;
LABEL_27:
  if ( v3 )
    WmipFreeTraceDeviceList(v3, 0LL);
  return v14;
}
