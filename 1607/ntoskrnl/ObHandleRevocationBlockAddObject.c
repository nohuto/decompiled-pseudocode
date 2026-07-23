/*
 * XREFs of ObHandleRevocationBlockAddObject @ 0x140665B7C
 * Callers:
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x1400313E0 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 */

__int64 __fastcall ObHandleRevocationBlockAddObject(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rdi
  BOOLEAN v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v7; // rbx
  _BYTE *v8; // rax
  _BYTE *v9; // r14
  struct _EX_RUNDOWN_REF **Count; // rax
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt

  v3 = 0;
  v4 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(a2 - 48);
  if ( v4 )
  {
    v5 = ExAcquireRundownProtection(a1 + 3);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (signed __int64 *)&a1[2];
    v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a1[2], 0LL, 0);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a1[2], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a1[2].Count, v8, (ULONG_PTR)&a1[2]);
    if ( v9 )
      v9[26] |= 1u;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), (signed __int64)a1, 0LL) )
    {
      v3 = -1073741823;
    }
    else
    {
      Count = (struct _EX_RUNDOWN_REF **)a1[1].Count;
      if ( *Count != a1 )
        __fastfail(3u);
      *(_QWORD *)v4 = a1;
      *(_QWORD *)(v4 + 8) = Count;
      *Count = (struct _EX_RUNDOWN_REF *)v4;
      a1[1].Count = v4;
    }
    _m_prefetchw(v7);
    v11 = *v7;
    if ( (*v7 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    else
      v12 = v11 - 16;
    if ( (v11 & 2) != 0 || (v13 = *v7, v13 != _InterlockedCompareExchange64(v7, v12, v11)) )
      ExfReleasePushLock(&a1[2].Count);
    KeAbPostRelease((ULONG_PTR)&a1[2]);
    KeLeaveCriticalRegion();
    if ( v3 < 0 && v5 )
      ExReleaseRundownProtection(a1 + 3);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v3;
}
