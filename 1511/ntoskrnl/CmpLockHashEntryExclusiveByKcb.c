/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1403FB6B0
 * Callers:
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x140041E80 (CmpReferenceHive.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  unsigned int v1; // r8d
  ULONG_PTR v3; // rdi
  unsigned int v4; // edx
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  char result; // al

  v1 = *(_DWORD *)(BugCheckParameter4 + 16);
  v3 = *(_QWORD *)(BugCheckParameter4 + 32);
  v4 = 101027 * (v1 ^ (v1 >> 9));
  v5 = (unsigned __int64 *)(*(_QWORD *)(v3 + 2800) + 24LL * ((v4 ^ (v4 >> 9)) & (*(_DWORD *)(v3 + 2808) - 1)));
  v6 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  v5[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v3);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v3, 8uLL, BugCheckParameter4);
  return result;
}
