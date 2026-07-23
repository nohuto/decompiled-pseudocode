/*
 * XREFs of CmpLockHashEntryExclusive @ 0x140436960
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D530 (CmpWalkOneLevel.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusive(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  unsigned __int64 *v3; // rdi
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  char result; // al

  v3 = (unsigned __int64 *)(*(_QWORD *)(BugCheckParameter2 + 2800)
                          + 24LL
                          * (((101027 * (a2 ^ (a2 >> 9))) ^ ((101027 * (a2 ^ (a2 >> 9))) >> 9)) & (*(_DWORD *)(BugCheckParameter2 + 2808)
                                                                                                 - 1)));
  v4 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v4, (ULONG_PTR)v3);
  if ( v5 )
    v5[26] |= 1u;
  v3[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(BugCheckParameter2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, a2);
  return result;
}
