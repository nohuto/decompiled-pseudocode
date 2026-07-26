/*
 * XREFs of ndisReferenceNextUnprocessedMiniport @ 0x1C00EC348
 * Callers:
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ndisIsMiniportReady @ 0x1C004A968 (ndisIsMiniportReady.c)
 */

__int64 __fastcall ndisReferenceNextUnprocessedMiniport(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x48u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
  v3 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  while ( v3 )
  {
    if ( ndisIsMiniportReady((_DWORD *)v3) && (*(_DWORD *)(v3 + 124) & 0x40000) == 0 && ndisReferenceMiniport(v3) )
    {
      *(_DWORD *)(v3 + 124) |= 0x40000u;
      break;
    }
    v3 = *(_QWORD *)(v3 + 8);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v4);
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x49u, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
  return v3;
}
