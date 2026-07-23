/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x140436860
 * Callers:
 *     CmDeleteLayeredKey @ 0x1401B5C94 (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x140436C80 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x14002CDA0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
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
