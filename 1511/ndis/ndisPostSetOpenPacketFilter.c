/*
 * XREFs of ndisPostSetOpenPacketFilter @ 0x1C0019C20
 * Callers:
 *     ndisOidPostPacketFilter @ 0x1C0019A80 (ndisOidPostPacketFilter.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C00046F0 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0004750 (NdisAcquireRWLockWrite.c)
 *     ndisUpdateLoopbackOpens @ 0x1C0019FF8 (ndisUpdateLoopbackOpens.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AAF0 (ndisUpdateCheckForLoopbackFlag.c)
 */

void __fastcall ndisPostSetOpenPacketFilter(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r14d
  __int64 *v7; // r12
  __int64 v8; // r15
  unsigned int v9; // ebp
  __int64 i; // rax
  __int64 j; // rax
  __int64 k; // rax
  __int64 v13; // rax
  _DWORD *v14; // rbx
  KIRQL v15; // dl
  KIRQL v16; // al
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  KIRQL v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+18h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  if ( a3 && a3 != -1073676268 && a3 != -1073676266 )
  {
    if ( (*(_DWORD *)(a1 + 436) | *(_DWORD *)(a1 + 432)) == *(_DWORD *)(a1 + 436) )
    {
      v4 = 0;
    }
    else
    {
      v21 = *(_DWORD *)(v3 + 464);
      if ( v21 )
      {
        if ( v21 == 16 && (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
          *(_DWORD *)(a1 + 432) = *(_DWORD *)(a1 + 436);
      }
      else
      {
        v22 = *(_QWORD *)(v3 + 400);
        if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 )
        {
          *(_DWORD *)(a1 + 432) = *(_DWORD *)(a1 + 436);
          *(_DWORD *)(v22 + 304) = *(_DWORD *)(v22 + 308);
        }
      }
    }
  }
  if ( !*(_DWORD *)(v3 + 464) )
  {
    v7 = *(__int64 **)(v3 + 400);
    v8 = 0LL;
    v9 = 0;
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)v7[36], &LockState, 0);
    for ( i = *v7; i && v9 <= 1; i = *(_QWORD *)(i + 424) )
    {
      if ( *(_DWORD *)(i + 432) )
      {
        ++v9;
        v8 = i;
      }
    }
    for ( j = v7[1]; j && v9 <= 1; j = *(_QWORD *)(j + 424) )
    {
      if ( *(_DWORD *)(j + 432) )
      {
        ++v9;
        v8 = j;
      }
    }
    for ( k = v7[2]; k && v9 <= 1; k = *(_QWORD *)(k + 424) )
    {
      if ( *(_DWORD *)(k + 432) )
      {
        ++v9;
        v8 = k;
      }
    }
    v13 = 0LL;
    if ( v9 == 1 )
      v13 = v8;
    v7[41] = v13;
    if ( *(_DWORD *)(a2 + 160) )
    {
      *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
      *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
      *(_QWORD *)(a2 + 152) = 0LL;
      *(_DWORD *)(a2 + 160) = 0;
    }
    if ( v4 )
      goto LABEL_21;
    v14 = *(_DWORD **)(a2 + 40);
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v14 & 0xA0) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
        goto LABEL_20;
      *(_DWORD *)(a1 + 224) |= 4u;
      ++*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        ++*(_DWORD *)(v3 + 2252);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) == 0 )
      {
LABEL_20:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v15);
LABEL_21:
        ndisUpdateCheckForLoopbackFlag(v3);
        NdisReleaseRWLock((PNDIS_RW_LOCK_EX)v7[36], &LockState);
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v3 + 520) = CurrentThread;
        LOBYTE(v18) = v16;
        *(_DWORD *)(v3 + 1856) = 2301494;
        ndisUpdateLoopbackOpens(v3, CurrentThread, v19, v18);
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v20);
        return;
      }
      *(_DWORD *)(a1 + 224) &= ~4u;
      --*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        --*(_DWORD *)(v3 + 2252);
    }
    ndisUpdateCheckForLoopbackFlag(v3);
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a2 + 160) )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
    *(_DWORD *)(a2 + 48) = *(_DWORD *)(a2 + 160);
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
}
