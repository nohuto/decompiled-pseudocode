/*
 * XREFs of RaGetProtocolCommandEffects @ 0x1C0020D90
 * Callers:
 *     RaAdapterProtocolCommandIoctl @ 0x1C0020BA8 (RaAdapterProtocolCommandIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C003120C (RaUnitProtocolCommandIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0003BAC (RaidAllocatePool.c)
 *     memset @ 0x1C0013300 (memset.c)
 *     RaidAdapterSendSrbIoControlSynchronously @ 0x1C0022AA0 (RaidAdapterSendSrbIoControlSynchronously.c)
 */

__int64 __fastcall RaGetProtocolCommandEffects(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4)
{
  __int64 v4; // rsi
  int v5; // ebx
  _DWORD *v6; // r14
  char *v7; // rdi
  int v9; // r15d
  __int64 v10; // rbp
  bool v11; // zf
  char *Pool; // rax
  int v13; // eax
  _OWORD *v14; // rax
  char *v15; // rbp
  _OWORD *PoolWithTag; // rax
  void *v17; // r8
  __int64 v18; // r15
  char *v19; // rcx
  __int64 v20; // r9
  __int128 v21; // xmm1
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int64 v24; // r15
  __int128 v25; // xmm1
  __int64 v26; // rdx
  int v27; // eax
  unsigned int *v28; // rax
  unsigned int v29; // ecx
  int v30; // eax
  _BYTE *v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v4 = *(_QWORD *)(a1 + 64);
  v5 = 0;
  v6 = *(_DWORD **)(a2 + 24);
  v7 = 0LL;
  v9 = a2;
  if ( *(_DWORD *)v4 == 1 )
  {
    v10 = *(_QWORD *)(a1 + 64);
    v4 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v6[2] == 3;
  *a3 = 0;
  *a4 = 0;
  if ( !v11 )
    return (unsigned int)-1056964602;
  if ( (*(_BYTE *)(v4 + 109) & 0x10) == 0 )
    goto LABEL_25;
  Pool = (char *)RaidAllocatePool(NonPagedPoolNx, 0x1050uLL, 0x72536152u, a1);
  v7 = Pool;
  if ( !Pool )
  {
    v6[4] = 7;
    return (unsigned int)-1073741670;
  }
  memset(Pool, 0, 0x1050uLL);
  *(_DWORD *)v7 = 28;
  *(_QWORD *)(v7 + 4) = 0x4C4F434F544F5250LL;
  *((_DWORD *)v7 + 4) = 2954240;
  if ( v10 )
    v13 = *(_DWORD *)(v10 + 976);
  else
    v13 = *(_DWORD *)(v4 + 4204);
  *((_DWORD *)v7 + 3) = v13;
  *((_DWORD *)v7 + 6) = 4148;
  *((_DWORD *)v7 + 12) = 0;
  *((_DWORD *)v7 + 7) = 48;
  *((_DWORD *)v7 + 8) = 48;
  *((_DWORD *)v7 + 9) = 3;
  *((_DWORD *)v7 + 10) = 2;
  *((_DWORD *)v7 + 11) = 5;
  *((_DWORD *)v7 + 13) = 44;
  *((_DWORD *)v7 + 14) = 4096;
  v5 = RaidAdapterSendSrbIoControlSynchronously(v4, v9, (_DWORD)v7, 4176, 0LL, 0, 64);
  if ( v5 < 0 )
  {
LABEL_24:
    *(_BYTE *)(v4 + 109) &= ~0x10u;
    a4 = v32;
LABEL_25:
    v26 = *(_QWORD *)(v4 + 5448);
    if ( v26
      && ((v27 = v6[20], v6[14] != 1)
        ? (v28 = (unsigned int *)(v26 + 4 * ((unsigned __int8)v27 + 256LL)))
        : (v28 = (unsigned int *)(v26 + 4LL * (unsigned __int8)v27)),
          v29 = *v28,
          (*v28 & 1) != 0) )
    {
      if ( (v29 & 0x18) != 0 || (v30 = HIWORD(v29) & 7, v30 == 2) )
      {
        *a3 = 1;
      }
      else if ( (v29 & 4) != 0 || v30 == 1 )
      {
        *a4 = 1;
      }
    }
    else
    {
      v6[4] = 3;
      v5 = -1073741808;
    }
    goto LABEL_37;
  }
  v14 = *(_OWORD **)(v4 + 5448);
  v15 = &v7[*((unsigned int *)v7 + 13) + 36];
  if ( v14 )
  {
    v24 = 32LL;
    do
    {
      *v14 = *(_OWORD *)v15;
      v14[1] = *((_OWORD *)v15 + 1);
      v14[2] = *((_OWORD *)v15 + 2);
      v14[3] = *((_OWORD *)v15 + 3);
      v14[4] = *((_OWORD *)v15 + 4);
      v14[5] = *((_OWORD *)v15 + 5);
      v14[6] = *((_OWORD *)v15 + 6);
      v14 += 8;
      v25 = *((_OWORD *)v15 + 7);
      v15 += 128;
      *(v14 - 1) = v25;
      --v24;
    }
    while ( v24 );
    goto LABEL_24;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x45436152u);
  v17 = PoolWithTag;
  if ( PoolWithTag )
  {
    v18 = 32LL;
    v19 = v15;
    v20 = 32LL;
    do
    {
      *PoolWithTag = *(_OWORD *)v19;
      PoolWithTag[1] = *((_OWORD *)v19 + 1);
      PoolWithTag[2] = *((_OWORD *)v19 + 2);
      PoolWithTag[3] = *((_OWORD *)v19 + 3);
      PoolWithTag[4] = *((_OWORD *)v19 + 4);
      PoolWithTag[5] = *((_OWORD *)v19 + 5);
      PoolWithTag[6] = *((_OWORD *)v19 + 6);
      PoolWithTag += 8;
      v21 = *((_OWORD *)v19 + 7);
      v19 += 128;
      *(PoolWithTag - 1) = v21;
      --v20;
    }
    while ( v20 );
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 5448), (signed __int64)v17, 0LL) )
    {
      ExFreePoolWithTag(v17, 0x45436152u);
      v22 = *(_OWORD **)(v4 + 5448);
      do
      {
        *v22 = *(_OWORD *)v15;
        v22[1] = *((_OWORD *)v15 + 1);
        v22[2] = *((_OWORD *)v15 + 2);
        v22[3] = *((_OWORD *)v15 + 3);
        v22[4] = *((_OWORD *)v15 + 4);
        v22[5] = *((_OWORD *)v15 + 5);
        v22[6] = *((_OWORD *)v15 + 6);
        v22 += 8;
        v23 = *((_OWORD *)v15 + 7);
        v15 += 128;
        *(v22 - 1) = v23;
        --v18;
      }
      while ( v18 );
    }
    goto LABEL_24;
  }
  v6[4] = 7;
  v5 = -1073741670;
LABEL_37:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  return (unsigned int)v5;
}
