/*
 * XREFs of XRemoveBindingFromLists @ 0x1C00109F8
 * Callers:
 *     nullDeleteFilterOpenAdapter @ 0x1C000FBE4 (nullDeleteFilterOpenAdapter.c)
 *     EthDeleteFilterOpenAdapter @ 0x1C005D2E8 (EthDeleteFilterOpenAdapter.c)
 *     ndisMOpenAdapter @ 0x1C00E8200 (ndisMOpenAdapter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0008FC0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0009030 (NdisAcquireRWLockWrite.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0018E48 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall XRemoveBindingFromLists(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // r10d
  unsigned int v9; // r8d
  unsigned int v10; // r9d
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 *v14; // r11
  __int128 v15; // xmm0
  __int64 v16; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  NdisAcquireRWLockWrite(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState, 0);
  if ( *(_QWORD *)(a1 + 328) == a2 )
  {
    v12 = *(_QWORD *)(a1 + 296);
    *(_QWORD *)(a1 + 328) = 0LL;
    ndisUpdateCheckForLoopbackFlag(v12);
  }
  v4 = (__int64 *)a1;
  if ( *(_QWORD *)a1 )
  {
    while ( 1 )
    {
      v13 = *v4;
      if ( *v4 == a2 )
        break;
      v4 = (__int64 *)(v13 + 424);
      if ( !*(_QWORD *)(v13 + 424) )
        goto LABEL_4;
    }
    *v4 = *(_QWORD *)(a2 + 424);
  }
LABEL_4:
  for ( i = (_QWORD *)(a1 + 8); *i; i = (_QWORD *)(*i + 424LL) )
  {
    if ( *i == a2 )
    {
      *i = *(_QWORD *)(a2 + 424);
      --*(_DWORD *)(a1 + 320);
      break;
    }
  }
  for ( j = (_QWORD *)(a1 + 16); *j; j = (_QWORD *)(*j + 424LL) )
  {
    if ( *j == a2 )
    {
      *j = *(_QWORD *)(a2 + 424);
      break;
    }
  }
  *(_QWORD *)(a2 + 424) = 0LL;
  v7 = 0;
  --*(_DWORD *)(a1 + 316);
  if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      while ( *(_QWORD *)(a1 + 16 * (v7 + 1LL) + 24) == a2 )
      {
        v8 = *(_DWORD *)(a1 + 24);
        v9 = v7 + 1;
        v10 = v7;
        if ( v7 + 1 < v8 )
        {
          v14 = (__int128 *)(16LL * v9 + a1 + 32);
          do
          {
            v15 = *v14++;
            v16 = 2LL * v10;
            v10 = v9++;
            *(_OWORD *)(a1 + 8 * v16 + 32) = v15;
          }
          while ( v9 < v8 );
        }
        v11 = 2LL * v10;
        *(_WORD *)(a1 + 8 * v11 + 32) = 0;
        *(_QWORD *)(a1 + 8 * v11 + 40) = 0LL;
        --*(_DWORD *)(a1 + 24);
      }
      ++v7;
    }
    while ( v7 < *(_DWORD *)(a1 + 24) );
  }
  NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(a1 + 288), &LockState);
}
