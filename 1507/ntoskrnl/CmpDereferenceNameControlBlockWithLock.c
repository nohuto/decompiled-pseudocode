/*
 * XREFs of CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpLockNameHashEntryExclusive @ 0x1404CC730 (CmpLockNameHashEntryExclusive.c)
 */

__int64 __fastcall CmpDereferenceNameControlBlockWithLock(char *P)
{
  unsigned int v1; // ebx
  char *v2; // rsi
  int v4; // eax
  __int64 *v5; // rcx
  __int64 v6; // rax

  v1 = *((_DWORD *)P + 2);
  v2 = P + 8;
  CmpLockNameHashEntryExclusive(v1);
  v4 = *(_DWORD *)P & 1 | (2 * (*(_DWORD *)P >> 1) - 2);
  *(_DWORD *)P = v4;
  if ( (v4 & 0xFFFFFFFE) == 0 )
  {
    v5 = (__int64 *)((char *)CmpNameCacheTable
                   + 16
                   * (((unsigned __int16)(-30045 * (v1 ^ (v1 >> 9))) ^ (unsigned __int16)((unsigned __int64)(101027 * (v1 ^ (v1 >> 9))) >> 9)) & 0x7FF)
                   + 8);
    if ( v5 )
    {
      do
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        if ( (char *)v6 == v2 )
        {
          *v5 = *(_QWORD *)(v6 + 8);
          break;
        }
        v5 = (__int64 *)(v6 + 8);
      }
      while ( v6 != -8 );
    }
    ExFreePoolWithTag(P, 0x624E4D43u);
  }
  return CmpUnlockNameHashEntry(v1);
}
