/*
 * XREFs of HUBMISC_IsBootDeviceReady @ 0x1C002A324
 * Callers:
 *     HUBBOOT_IsBootDeviceReady @ 0x1C0034360 (HUBBOOT_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     HUBHTX_GetPortStatusForBootDevice @ 0x1C0005980 (HUBHTX_GetPortStatusForBootDevice.c)
 *     HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002A4D8 (HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice.c)
 */

char __fastcall HUBMISC_IsBootDeviceReady(__int64 a1)
{
  char v2; // di
  unsigned __int16 v3; // r9
  __int64 v4; // r10
  __int64 v5; // rcx
  unsigned __int16 v6; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2320LL) & 0x10) != 0 )
  {
    v2 = 1;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x61u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
LABEL_18:
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 1336LL), 0xFFFFFFF7);
    HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(a1);
    return v2;
  }
  v2 = 0;
  *(_DWORD *)(a1 + 2224) = 0;
  if ( (int)HUBHTX_GetPortStatusForBootDevice(a1, &v8) >= 0 )
  {
    if ( (*(_DWORD *)(a1 + 1620) & 0x400) == 0 || (v8 & 0x10000) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( *(_DWORD *)(v4 + 1424) == 2 )
      {
        v5 = *(_QWORD *)(v4 + 1432);
        v3 = 100;
        goto LABEL_21;
      }
      if ( (v8 & 1) != 0 )
      {
        v6 = 101;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 1440) & 0x800) == 0 || (v8 & 0x1E0) != 0xC0 )
        {
          _InterlockedAnd((volatile signed __int32 *)(v4 + 1336), 0xFFFFFFF7);
          v3 = 104;
          goto LABEL_20;
        }
        if ( (*(_DWORD *)(v4 + 1336) & 8) == 0 )
        {
          _InterlockedOr((volatile signed __int32 *)(v4 + 1336), 8u);
          v3 = 102;
          goto LABEL_20;
        }
        v6 = 103;
      }
      WPP_RECORDER_SF_(*(_QWORD *)(v4 + 1432), 4u, 5u, v6, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
      v2 = 1;
      goto LABEL_18;
    }
    v3 = 99;
  }
  else
  {
    v3 = 98;
  }
LABEL_20:
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
LABEL_21:
  WPP_RECORDER_SF_(v5, 4u, 5u, v3, (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
  if ( _InterlockedExchange((volatile __int32 *)(a1 + 2224), 1) == 1 )
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      4u,
      5u,
      0x69u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids);
    return 1;
  }
  return v2;
}
