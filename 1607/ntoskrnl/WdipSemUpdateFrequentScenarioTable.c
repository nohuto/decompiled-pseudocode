/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x14069BCC4
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x14069BB10 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemFastAllocate @ 0x1404C70F0 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  unsigned int v4; // esi
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  PSLIST_ENTRY v8; // rax
  ULONG_PTR v9; // rtt
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140300328, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140300328, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140300328, v5, (ULONG_PTR)&qword_140300328);
  if ( v7 )
    v7[26] |= 1u;
  if ( a1 )
  {
    if ( (unsigned int)dword_140300320 < 0x80 )
    {
      v8 = WdipSemFastAllocate(5, 0x18u);
      if ( v8 )
      {
        *v8 = *a1;
        v8[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_140300320++] = v8;
      }
      else
      {
        v4 = -1073741670;
      }
    }
    else
    {
      v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  _m_prefetchw(&qword_140300328);
  if ( (qword_140300328 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_140300328 - 16;
  if ( (qword_140300328 & 2) != 0
    || (v9 = qword_140300328,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140300328, v2, qword_140300328)) )
  {
    ExfReleasePushLock(&qword_140300328);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140300328);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v4;
}
