/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x140435CE0
 * Callers:
 *     CmpCloneToUnbackedKcb @ 0x1401B4730 (CmpCloneToUnbackedKcb.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 */

unsigned __int64 __fastcall CmpDereferenceNameControlBlockWithLock(int *P)
{
  char *v1; // r14
  unsigned int v3; // ebp
  unsigned __int64 *v4; // rsi
  _BYTE *v5; // rax
  _BYTE *v6; // rbx
  int v7; // eax
  __int64 *v8; // rdx
  __int64 v9; // rax
  signed __int64 *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rcx
  signed __int64 v13; // rtt

  v1 = (char *)(P + 2);
  v3 = 101027 * (P[2] ^ ((unsigned int)P[2] >> 9));
  v4 = (unsigned __int64 *)((char *)CmpNameCacheTable
                          + 16
                          * (((unsigned __int16)(-30045 * (*((_WORD *)P + 4) ^ ((unsigned int)P[2] >> 9))) ^ (unsigned __int16)(v3 >> 9)) & 0x7FF));
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v4, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v5, (ULONG_PTR)v4);
  if ( v6 )
    v6[26] |= 1u;
  v7 = *P & 1 | (2 * ((unsigned int)*P >> 1) - 2);
  *P = v7;
  if ( (v7 & 0xFFFFFFFE) == 0 )
  {
    v8 = (__int64 *)((char *)CmpNameCacheTable
                   + 16 * (((unsigned __int16)v3 ^ (unsigned __int16)((unsigned __int64)v3 >> 9)) & 0x7FF)
                   + 8);
    if ( v8 )
    {
      do
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        if ( (char *)v9 == v1 )
        {
          *v8 = *(_QWORD *)(v9 + 8);
          break;
        }
        v8 = (__int64 *)(v9 + 8);
      }
      while ( v9 != -8 );
    }
    CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
  }
  v10 = (signed __int64 *)((char *)CmpNameCacheTable
                         + 16 * (((unsigned __int16)v3 ^ (unsigned __int16)((unsigned __int64)v3 >> 9)) & 0x7FF));
  _m_prefetchw(v10);
  v11 = *v10;
  if ( (*v10 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v12 = v11 - 16;
  else
    v12 = 0LL;
  if ( (v11 & 2) != 0 || (v13 = *v10, v13 != _InterlockedCompareExchange64(v10, v12, v11)) )
    ExfReleasePushLock(v10);
  return KeAbPostRelease((ULONG_PTR)v10);
}
