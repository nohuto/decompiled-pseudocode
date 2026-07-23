/*
 * XREFs of MiComputeAgeDistribution @ 0x1400BE384
 * Callers:
 *     MiComputeSystemTrimCriteria @ 0x1400BCFF0 (MiComputeSystemTrimCriteria.c)
 *     MiOrderTrimList @ 0x1401E99B8 (MiOrderTrimList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateClaimDistribution @ 0x1400BE4E4 (MiUpdateClaimDistribution.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall MiComputeAgeDistribution(__int64 a1, int a2)
{
  __int64 v4; // rdi
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  unsigned int v7; // esi
  unsigned __int64 v8; // rbx
  __int128 v9; // xmm1
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  int v13; // ecx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v18[56]; // [rsp+38h] [rbp-50h] BYREF

  memset(v18, 0, sizeof(v18));
  v4 = *(_QWORD *)(a1 + 6248);
  if ( a2 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    v5 = (_QWORD **)(a1 + 6256);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
      MiUpdateClaimDistribution(i - 3, v18);
    v7 = 6;
    v8 = 0LL;
    v9 = *(_OWORD *)&v18[16];
    v10 = (_QWORD *)(v4 + 2480);
    *(_OWORD *)(v4 + 2432) = *(_OWORD *)v18;
    v11 = 2LL;
    v12 = *(_OWORD *)&v18[32];
    *(_OWORD *)(v4 + 2448) = v9;
    *(_QWORD *)&v9 = *(_QWORD *)&v18[48];
    *(_OWORD *)(v4 + 2464) = v12;
    *(_QWORD *)(v4 + 2480) = v9;
    do
    {
      v8 += *v10;
      --v7;
      --v10;
      --v11;
    }
    while ( v11 );
    *(_QWORD *)(v4 + 2424) = v8;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v8 = *(_QWORD *)(v4 + 2424);
    v7 = 4;
  }
  v13 = 0;
  while ( v8 < 4LL * *(_QWORD *)(v4 + 2400) )
  {
    ++v13;
    v8 += *(_QWORD *)(v4 + 8LL * v7 + 2432);
    if ( !v7 )
      break;
    --v7;
  }
  v14 = *(_QWORD *)(v4 + 2368);
  if ( v14 )
  {
    v15 = (unsigned int)(1000 * v13) / v14;
    if ( (unsigned __int16)v15 > 0x3E8u )
      LOWORD(v15) = 1000;
    return (unsigned __int16)v15;
  }
  else if ( v13 )
  {
    return 1000LL;
  }
  else
  {
    return 0LL;
  }
}
