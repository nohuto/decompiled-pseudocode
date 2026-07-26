/*
 * XREFs of NdisMSetTimer @ 0x1C0025360
 * Callers:
 *     NdisSetTimer @ 0x1C0024B50 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C005B0E0 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C005B120 (NdisSetTimerEx.c)
 *     ndisMTimerDpc @ 0x1C005C7D0 (ndisMTimerDpc.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 144);
  v5 = -10000LL * a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3816) + 26LL) & 2) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v8 = *(_QWORD *)(a1 + 144);
    v9 = *(_QWORD *)(v8 + 560);
    v10 = v9;
    if ( !v9 )
      goto LABEL_9;
    do
    {
      if ( v10 == a1 )
        break;
      v10 = *(_QWORD *)(v10 + 152);
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 152) = v9;
      *(_QWORD *)(v8 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v7);
  }
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_qqd(10LL, &WPP_34eaeff8600c26a691447e424419d251_Traceguids, *(_QWORD *)(a1 + 144), a1, a2);
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)v5, (PKDPC)(a1 + 64));
}
