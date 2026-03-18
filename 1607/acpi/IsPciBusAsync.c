/*
 * XREFs of IsPciBusAsync @ 0x1C000DC28
 * Callers:
 *     IsPciDeviceWorker @ 0x1C000BCF0 (IsPciDeviceWorker.c)
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0012BA0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     IsNsobjPciBus @ 0x1C0086F70 (IsNsobjPciBus.c)
 * Callees:
 *     IsPciBusAsyncWorker @ 0x1C000DD00 (IsPciBusAsyncWorker.c)
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall IsPciBusAsync(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *PoolWithTag; // rdi
  __int64 v11; // rcx
  KIRQL v13; // al
  __int64 v14; // rcx
  _BYTE *v15; // rdx

  *a4 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    goto LABEL_8;
  v9 = *(_QWORD *)(v8 + 8);
  if ( (v9 & 0x2000000) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  if ( (v9 & 0x100000000LL) != 0 )
  {
LABEL_8:
    *a4 = 0;
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x46706341u);
  if ( PoolWithTag )
    goto LABEL_5;
  v13 = KeAcquireSpinLockRaiseToDpc(&gPreAllocPciPoolSpinLock);
  v14 = 0LL;
  v15 = &unk_1C0073B08;
  while ( *v15 )
  {
    v14 = (unsigned int)(v14 + 1);
    v15 += 144;
    if ( (unsigned int)v14 >= 4 )
      goto LABEL_14;
  }
  *((_BYTE *)&gPreAllocPciPool + 144 * v14 + 136) = 1;
  PoolWithTag = (_QWORD *)((char *)&gPreAllocPciPool + 144 * v14);
LABEL_14:
  KeReleaseSpinLock(&gPreAllocPciPoolSpinLock, v13);
  if ( !PoolWithTag )
    return 3221225626LL;
LABEL_5:
  memset(PoolWithTag, 0, 0x88uLL);
  *PoolWithTag = a1;
  AMLIReferenceHandleEx(a1);
  *((_DWORD *)PoolWithTag + 10) = -1;
  PoolWithTag[6] = a2;
  PoolWithTag[7] = a3;
  PoolWithTag[8] = a4;
  return IsPciBusAsyncWorker(v11, 0LL, 0LL, PoolWithTag);
}
