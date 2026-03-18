/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x140437990
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5DB0 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x140437DB0 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002D220 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r8d
  ULONG_PTR v3; // rdi
  unsigned __int64 *v4; // rsi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 8);
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  v4 = (unsigned __int64 *)(*(_QWORD *)(v3 + 2800)
                          + 24LL
                          * (((101027 * (v1 ^ (v1 >> 9))) ^ ((101027 * (v1 ^ (v1 >> 9))) >> 9)) & (*(_DWORD *)(v3 + 2808)
                                                                                                 - 1)));
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  if ( v6 )
    v6[26] |= 1u;
  v4[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
