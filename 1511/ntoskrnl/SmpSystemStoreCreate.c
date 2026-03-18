/*
 * XREFs of SmpSystemStoreCreate @ 0x14054DEE0
 * Callers:
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x14054DDE0 (SmProcessConfigRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     SmpDirtyStoreCreate @ 0x1404D1658 (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rdi
  unsigned __int64 NumberOfPhysicalPages; // rax
  int v5; // edi
  int v7; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((ULONG_PTR)&qword_140304FF0, 0LL, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140304FF0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140304FF0, v1, (ULONG_PTR)&qword_140304FF0);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  if ( dword_140304FE8 == -1 )
  {
    NumberOfPhysicalPages = MmGetNumberOfPhysicalPages(0);
    v5 = SmpDirtyStoreCreate((__int64)&SmGlobals, (unsigned int)(NumberOfPhysicalPages >> 8) >> 1, 0, &v7);
    if ( v5 >= 0 )
      dword_140304FE8 = v7;
  }
  else
  {
    v5 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140304FF0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140304FF0);
  KeAbPostRelease((ULONG_PTR)&qword_140304FF0);
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
