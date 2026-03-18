/*
 * XREFs of ObpLockDirectoryExclusive @ 0x1400D1570
 * Callers:
 *     ObpDeleteNameCheck @ 0x140406620 (ObpDeleteNameCheck.c)
 *     ObCloseHandleTableEntry @ 0x14044E380 (ObCloseHandleTableEntry.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     ObInitSystem @ 0x1407A0370 (ObInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ObpIncrPointerCount @ 0x1400D16D0 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObpLockDirectoryExclusive(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  bool v7; // zf
  __int64 result; // rax

  *(_DWORD *)(a1 + 32) = -1431694796;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire(a2 + 296, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 296), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 296), v5, a2 + 296);
  if ( v6 )
    v6[26] |= 1u;
  v7 = ObpTraceFlags == 0;
  *(_DWORD *)(a1 + 32) = -859041228;
  if ( !v7 )
    ObpPushStackInfo(a2 - 48);
  result = ObpIncrPointerCount(a2 - 48);
  *(_QWORD *)a1 = a2;
  *(_WORD *)(a1 + 30) = 257;
  return result;
}
