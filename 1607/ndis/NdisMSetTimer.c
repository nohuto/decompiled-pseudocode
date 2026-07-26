/*
 * XREFs of NdisMSetTimer @ 0x1C0060050
 * Callers:
 *     NdisSetTimer @ 0x1C001B600 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C005EF20 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C005EF60 (NdisSetTimerEx.c)
 *     ndisMTimerDpc @ 0x1C0060810 (ndisMTimerDpc.c)
 * Callees:
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v11; // [rsp+20h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 144);
  v5 = -10000LL * a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3816) + 26LL) & 2) != 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v7 = *(_QWORD *)(a1 + 144);
    v8 = *(_QWORD *)(v7 + 560);
    v9 = v8;
    if ( !v8 )
      goto LABEL_6;
    do
    {
      if ( v9 == a1 )
        break;
      v9 = *(_QWORD *)(v9 + 152);
    }
    while ( v9 );
    if ( !v9 )
    {
LABEL_6:
      *(_QWORD *)(a1 + 152) = v8;
      *(_QWORD *)(v7 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v6);
  }
  if ( (unsigned __int8)byte_1C00895D3 >= 4u )
  {
    v11 = a2;
    WPP_SF_qqd(0xAu, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, *(_QWORD *)(a1 + 144), a1, v11);
  }
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)v5, (PKDPC)(a1 + 64));
}
