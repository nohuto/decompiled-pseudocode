/*
 * XREFs of CmpLockNameHashEntryExclusive @ 0x1404CC730
 * Callers:
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 __fastcall CmpLockNameHashEntryExclusive(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // rbx

  v4 = (unsigned __int64 *)((char *)CmpNameCacheTable
                          + 16
                          * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((101027
                                                                                                * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF));
  result = KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0LL, a4);
  v7 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v4, result, (ULONG_PTR)v4, v6);
  if ( v7 )
  {
    result = *(_QWORD *)(v7 + 32);
    *(_BYTE *)(v7 + 26) |= 1u;
  }
  return result;
}
