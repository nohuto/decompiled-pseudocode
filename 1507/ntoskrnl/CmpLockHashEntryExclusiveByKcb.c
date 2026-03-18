/*
 * XREFs of CmpLockHashEntryExclusiveByKcb @ 0x1404C8A40
 * Callers:
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404C8650 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpLockHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r8d
  ULONG_PTR v6; // rdi
  unsigned int v7; // edx
  unsigned __int64 *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  char result; // al

  v4 = *(_DWORD *)(BugCheckParameter4 + 16);
  v6 = *(_QWORD *)(BugCheckParameter4 + 32);
  v7 = 101027 * (v4 ^ (v4 >> 9));
  v8 = (unsigned __int64 *)(*(_QWORD *)(v6 + 2800) + 24LL * ((v7 ^ (v7 >> 9)) & (*(_DWORD *)(v6 + 2808) - 1)));
  v9 = KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v8[1] = (unsigned __int64)KeGetCurrentThread();
  result = CmpReferenceHive(v6);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v6, 8uLL, BugCheckParameter4);
  return result;
}
