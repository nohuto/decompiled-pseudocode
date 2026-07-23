/*
 * XREFs of SmpFpReleaseResource @ 0x1402212C8
 * Callers:
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall SmpFpReleaseResource(PEX_SPIN_LOCK SpinLock, int a2, __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  __int64 *v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // ebx

  v4 = a2;
  v6 = ExAcquireSpinLockExclusive(SpinLock);
  v7 = *(__int64 **)&SpinLock[2 * v4 + 8];
  v8 = v4;
  v9 = 0;
  while ( v7 )
  {
    if ( (v7[1] & 0xFFFFFFFFFFFFFFF8uLL) == a3 )
    {
      *((_DWORD *)v7 + 2) &= ~1u;
      v9 = 1;
      --*((_BYTE *)SpinLock + v8 + 80);
      --*((_BYTE *)SpinLock + 86);
      break;
    }
    v7 = (__int64 *)*v7;
  }
  ExReleaseSpinLockExclusive(SpinLock, v6);
  return v9;
}
