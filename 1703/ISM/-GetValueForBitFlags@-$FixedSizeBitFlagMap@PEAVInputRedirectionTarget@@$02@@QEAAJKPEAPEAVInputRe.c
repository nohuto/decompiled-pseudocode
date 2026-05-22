/*
 * XREFs of ?GetValueForBitFlags@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJKPEAPEAVInputRedirectionTarget@@@Z @ 0x180083154
 * Callers:
 *     ?OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180082B40 (-OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@.c)
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180082E90 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeBitFlagMap<InputRedirectionTarget *,3>::GetValueForBitFlags(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  _DWORD *v5; // r9

  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)a1;
  do
  {
    if ( (a2 & *v5) != 0 )
    {
      *a3 = *(_QWORD *)(a1 + 16LL * v4 + 8);
      return v3;
    }
    ++v4;
    v5 += 4;
  }
  while ( v4 < 3 );
  v3 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 91, 5);
  return v3;
}
