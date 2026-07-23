/*
 * XREFs of ExInitializePoolDescriptor @ 0x140536744
 * Callers:
 *     MiInitializeSessionPool @ 0x140536328 (MiInitializeSessionPool.c)
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 * Callees:
 *     KeInitializeGuardedMutex @ 0x14007D180 (KeInitializeGuardedMutex.c)
 */

void __fastcall ExInitializePoolDescriptor(__int64 a1, int a2, int a3)
{
  _QWORD *v3; // rax
  __int64 v5; // rax
  __int64 v7; // rcx

  *(_DWORD *)a1 = a2;
  v3 = (_QWORD *)(a1 + 320);
  *(_DWORD *)(a1 + 196) = a2;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 192) = a3;
  while ( (unsigned __int64)v3 < a1 + 4416 )
  {
    v3[1] = v3;
    *v3 = v3;
    v3 += 2;
  }
  if ( (a2 & 1) != 0 )
    KeInitializeGuardedMutex((PKGUARDED_MUTEX)(a1 + 8));
  else
    *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2 == 33 && !ExpSessionPoolLookaside )
  {
    ExpSessionPoolLookaside = qword_140326958 + 192;
    ExpSessionPoolTrackTable = qword_140326958 + 0x2000;
    v5 = 204LL;
    if ( _BitScanReverse64((unsigned __int64 *)&v7, 0xCCuLL) )
      v5 = 1LL << v7;
    ExpSessionPoolTrackTableSize = v5;
    ExpSessionPoolTrackTableMask = v5 - 1;
    ExpSessionPoolSmallLists = 21;
  }
}
