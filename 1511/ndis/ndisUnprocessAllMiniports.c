/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C00EC40C
 * Callers:
 *     ndisNotifyMiniports @ 0x1C00E4E20 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x4Au, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
  while ( 1 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 392));
    for ( i = *(_QWORD *)(a1 + 16); i; i = *(_QWORD *)(i + 8) )
    {
      if ( (*(_DWORD *)(i + 124) & 0x40000) != 0 )
      {
        *(_DWORD *)(i + 124) &= ~0x40000u;
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 392), v2);
    if ( !i )
      break;
    ndisDereferenceMiniport(i, 0x50u);
  }
  if ( (unsigned __int8)byte_1C0083714 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_6772f755ba2ecdacbfb9b612c2ccccf9_Traceguids, a1);
}
