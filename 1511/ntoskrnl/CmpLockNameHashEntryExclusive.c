/*
 * XREFs of CmpLockNameHashEntryExclusive @ 0x1403FB2A0
 * Callers:
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

__int64 __fastcall CmpLockNameHashEntryExclusive(unsigned int a1)
{
  unsigned __int64 *v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  v1 = (unsigned __int64 *)((char *)CmpNameCacheTable
                          + 16
                          * (((unsigned __int16)(-30045 * (a1 ^ (a1 >> 9))) ^ (unsigned __int16)((101027
                                                                                                * (a1 ^ (a1 >> 9))) >> 9)) & 0x7FF));
  result = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0LL);
  v3 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v1, result, (ULONG_PTR)v1);
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 32);
    *(_BYTE *)(v3 + 26) |= 1u;
  }
  return result;
}
