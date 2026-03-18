/*
 * XREFs of ObpCreateTypeArray @ 0x1406AC9A4
 * Callers:
 *     ObEnumerateObjectsByType @ 0x1406AC240 (ObEnumerateObjectsByType.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall ObpCreateTypeArray(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _DWORD *v12; // r14
  int v13; // esi
  _DWORD *PoolWithTag; // rax
  int v15; // ebp
  _QWORD *v16; // rsi
  signed __int64 v17; // rax
  signed __int64 v18; // rcx
  unsigned __int64 v19; // rtt
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(a1 + 23);
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 23), 0LL, 0LL, a4);
  v10 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = *a1;
  v12 = 0LL;
  v13 = 0;
  if ( *a1 != a1 )
  {
    do
    {
      v11 = (_QWORD *)*v11;
      ++v13;
    }
    while ( v11 != a1 );
    if ( v13 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(v13 - 1) + 16, 0x7241624Fu);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = v13;
        v15 = 0;
        v16 = *a1;
        while ( v16 != a1 )
        {
          *(_QWORD *)&v12[2 * v15 + 2] = v16;
          if ( !ObReferenceObjectSafe((__int64)(v16 + 10)) )
            *(_QWORD *)&v12[2 * v15 + 2] = 0LL;
          v16 = (_QWORD *)*v16;
          ++v15;
        }
      }
    }
  }
  _m_prefetchw(v6);
  v17 = *v6;
  v18 = *v6 - 16;
  if ( (*v6 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v18 = 0LL;
  if ( (v17 & 2) != 0 || (v19 = *v6, v19 != _InterlockedCompareExchange64((volatile signed __int64 *)v6, v18, v17)) )
    ExfReleasePushLock(v6, v8);
  KeAbPostRelease((ULONG_PTR)v6);
  v20 = KeGetCurrentThread();
  v21 = v20->SpecialApcDisable + 1;
  v20->SpecialApcDisable = v21;
  if ( !v21 && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery();
  return v12;
}
