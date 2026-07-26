/*
 * XREFs of ndisUnprocessAllMiniports @ 0x1C00F2434
 * Callers:
 *     ndisNotifyMiniports @ 0x1C00EAC48 (ndisNotifyMiniports.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 */

void __fastcall ndisUnprocessAllMiniports(__int64 a1)
{
  KIRQL v2; // al
  __int64 i; // rbx

  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x4Au, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_q(0x4Bu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, a1);
}
