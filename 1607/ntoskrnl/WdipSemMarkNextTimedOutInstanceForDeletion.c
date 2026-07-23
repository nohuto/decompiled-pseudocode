/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x1404FF750
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1404FF634 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  __int64 *v4; // rbp
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  __int64 *v8; // rdx
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v14; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FDEF8, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FDEF8, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FDEF8, v5, (ULONG_PTR)&qword_1402FDEF8);
  if ( v7 )
    v7[26] |= 1u;
  if ( a1 )
  {
    v8 = *a1;
    while ( v8 != &WdipSemEnabledInstanceTable )
    {
      v14 = v8;
      v8 = (__int64 *)*v8;
      if ( ++*((_DWORD *)v14 + 10) >= 0xAu && *(_BYTE *)(v14[4] + 1176) && !*((_DWORD *)v14 + 11) )
      {
        *((_DWORD *)v14 + 11) = 1;
        v4 = v14;
        break;
      }
    }
  }
  _m_prefetchw(&qword_1402FDEF8);
  if ( (qword_1402FDEF8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402FDEF8 - 16;
  if ( (qword_1402FDEF8 & 2) != 0
    || (v9 = qword_1402FDEF8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FDEF8, v2, qword_1402FDEF8)) )
  {
    ExfReleasePushLock(&qword_1402FDEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FDEF8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v4;
}
