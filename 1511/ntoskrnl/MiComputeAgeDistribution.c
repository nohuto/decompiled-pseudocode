/*
 * XREFs of MiComputeAgeDistribution @ 0x140015D1C
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x140014E30 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x1401D7DD0 (MiOrderTrimList.c)
 * Callees:
 *     MiUpdateClaimDistribution @ 0x140015E80 (MiUpdateClaimDistribution.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  unsigned int v6; // esi
  unsigned __int64 v7; // rbx
  __int128 v8; // xmm1
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  int v12; // ecx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v17[56]; // [rsp+38h] [rbp-50h] BYREF

  memset(v17, 0, sizeof(v17));
  v3 = *(_QWORD *)(a1 + 5616);
  if ( a2 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v4 = (_QWORD **)(a1 + 5624);
    for ( i = *v4; i != v4; i = (_QWORD *)*i )
      MiUpdateClaimDistribution(i - 3, v17);
    v6 = 6;
    v7 = 0LL;
    v8 = *(_OWORD *)&v17[16];
    v9 = (_QWORD *)(v3 + 2480);
    *(_OWORD *)(v3 + 2432) = *(_OWORD *)v17;
    v10 = 2LL;
    v11 = *(_OWORD *)&v17[32];
    *(_OWORD *)(v3 + 2448) = v8;
    *(_QWORD *)&v8 = *(_QWORD *)&v17[48];
    *(_OWORD *)(v3 + 2464) = v11;
    *(_QWORD *)(v3 + 2480) = v8;
    do
    {
      v7 += *v9;
      --v6;
      --v9;
      --v10;
    }
    while ( v10 );
    *(_QWORD *)(v3 + 2424) = v7;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v7 = *(_QWORD *)(v3 + 2424);
    v6 = 4;
  }
  v12 = 0;
  while ( v7 < 4LL * *(_QWORD *)(v3 + 2400) )
  {
    ++v12;
    v7 += *(_QWORD *)(v3 + 8LL * v6 + 2432);
    if ( !v6 )
      break;
    --v6;
  }
  v13 = *(_QWORD *)(v3 + 2368);
  if ( v13 )
  {
    v14 = (unsigned int)(1000 * v12) / v13;
    if ( (unsigned __int16)v14 > 0x3E8u )
      LOWORD(v14) = 1000;
    return (unsigned __int16)v14;
  }
  else if ( v12 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
