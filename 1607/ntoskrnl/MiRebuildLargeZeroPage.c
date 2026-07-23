/*
 * XREFs of MiRebuildLargeZeroPage @ 0x1401FDBBC
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140001E80 (MiDereferencePartition.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiProcessLargeCoalesceList @ 0x1401FD398 (MiProcessLargeCoalesceList.c)
 */

void __fastcall MiRebuildLargeZeroPage(__int64 a1)
{
  volatile LONG *v1; // rbp
  unsigned int v3; // ebx
  KIRQL v4; // r14
  unsigned __int16 *v5; // rsi
  __int128 *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  unsigned int v17; // eax
  _WORD *v18; // rcx
  _BYTE v19[528]; // [rsp+20h] [rbp-238h] BYREF

  v1 = (volatile LONG *)(a1 + 5580);
  v3 = 1;
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 5580));
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = (unsigned __int16 *)(a1 + 520LL * v3);
      if ( !v5[2253] )
        break;
      v6 = (__int128 *)(v5 + 2252);
      v7 = 4LL;
      v8 = v19;
      do
      {
        v9 = *v6;
        v10 = v6[1];
        v6 += 8;
        *v8 = v9;
        v11 = *(v6 - 6);
        v8[1] = v10;
        v12 = *(v6 - 5);
        v8[2] = v11;
        v13 = *(v6 - 4);
        v8[3] = v12;
        v14 = *(v6 - 3);
        v8[4] = v13;
        v15 = *(v6 - 2);
        v8[5] = v14;
        v16 = *(v6 - 1);
        v8[6] = v15;
        v8 += 8;
        *(v8 - 1) = v16;
        --v7;
      }
      while ( v7 );
      *(_QWORD *)v8 = *(_QWORD *)v6;
      memset(v5 + 2256, 0, 0x200uLL);
      v5[2253] = 0;
      ExReleaseSpinLockExclusive(v1, v4);
      MiProcessLargeCoalesceList(a1, v5 + 2252, (__int64)v19, v3 + 1);
      ExAcquireSpinLockExclusive(v1);
    }
    if ( !v3 )
      break;
LABEL_12:
    --v3;
  }
  v17 = 0;
  v18 = (_WORD *)(a1 + 4506);
  do
  {
    if ( *v18 )
      break;
    ++v17;
    v18 += 260;
  }
  while ( v17 < 2 );
  if ( v17 != 2 )
  {
    v3 = 2;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 5576) = 0;
  ExReleaseSpinLockExclusive(v1, v4);
  MiDereferencePartition((_DWORD *)a1);
}
