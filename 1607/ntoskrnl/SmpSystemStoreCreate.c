/*
 * XREFs of SmpSystemStoreCreate @ 0x14057BA6C
 * Callers:
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     SmProcessConfigRequest @ 0x14057B968 (SmProcessConfigRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1403E4C3C (SmpDirtyStoreCreate.c)
 */

__int64 SmpSystemStoreCreate()
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v1; // rax
  signed __int8 v2; // cf
  _BYTE *v3; // rdi
  int v4; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403BF180, 0LL, 0);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403BF180, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_1403BF180, v1, (ULONG_PTR)&qword_1403BF180);
  if ( v3 )
    v3[26] |= 1u;
  if ( dword_1403BF178 == -1 )
  {
    v4 = SmpDirtyStoreCreate(
           (__int64)&SmGlobals,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL) >> 8) >> 1,
           0,
           &v6);
    if ( v4 >= 0 )
      dword_1403BF178 = v6;
  }
  else
  {
    v4 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403BF180, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403BF180);
  KeAbPostRelease((ULONG_PTR)&qword_1403BF180);
  KeLeaveCriticalRegion();
  return (unsigned int)v4;
}
