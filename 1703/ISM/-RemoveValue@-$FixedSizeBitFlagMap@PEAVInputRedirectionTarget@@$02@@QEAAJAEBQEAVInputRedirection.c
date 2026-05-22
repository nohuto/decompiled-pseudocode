/*
 * XREFs of ?RemoveValue@?$FixedSizeBitFlagMap@PEAVInputRedirectionTarget@@$02@@QEAAJAEBQEAVInputRedirectionTarget@@@Z @ 0x1800832AC
 * Callers:
 *     ?OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180082B40 (-OnHitTest@InputRedirectionComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@.c)
 *     ?DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z @ 0x180082E90 (-DisableInputRedirection@InputRedirectionComponent@@UEAAJ_KUtagMsgRoutingInfo@@1H@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall FixedSizeBitFlagMap<InputRedirectionTarget *,3>::RemoveValue(__int64 a1, __int64 *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // eax
  _QWORD *v6; // rdx

  v3 = 0;
  v4 = *a2;
  v5 = 0;
  v6 = (_QWORD *)(a1 + 8);
  do
  {
    if ( *v6 == v4 )
    {
      *(_DWORD *)(a1 + 16LL * v5) = 0;
      return v3;
    }
    ++v5;
    v6 += 2;
  }
  while ( v5 < 3 );
  v3 = -2147467259;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 172, 5);
  return v3;
}
