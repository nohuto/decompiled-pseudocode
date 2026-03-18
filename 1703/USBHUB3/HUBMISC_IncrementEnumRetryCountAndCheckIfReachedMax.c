/*
 * XREFs of HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax @ 0x1C0026280
 * Callers:
 *     HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership @ 0x1C0019CA0 (HUBDSM_CheckingIfEnumRetryReachedMaximumOnRenumWithAddress0Ownership.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0002970 (WPP_RECORDER_SF_qd.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     HUBMISC_VerifierDbgBreak @ 0x1C0029B74 (HUBMISC_VerifierDbgBreak.c)
 *     memset @ 0x1C0038540 (memset.c)
 */

__int64 __fastcall HUBMISC_IncrementEnumRetryCountAndCheckIfReachedMax(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rdx
  const char *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v11; // [rsp+30h] [rbp-18h]
  int v12; // [rsp+30h] [rbp-18h]

  ++*(_DWORD *)(a1 + 32);
  v2 = 4061;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1620), 0x200u);
  if ( *(_DWORD *)(a1 + 32) <= 3u )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1620), 0xFFFFDFFF);
    *(_DWORD *)(a1 + 2416) = 0;
    v7 = *(void **)(a1 + 2472);
    if ( v7 )
      ExFreePoolWithTag(v7, 0x64334855u);
    memset((void *)(a1 + 2448), 0, 0x60uLL);
    v12 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x11u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      a1,
      v12);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(v8, &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_RETRY, (const GUID *)(a1 + 1500), *(_QWORD *)(a1 + 24));
    v9 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v9 + 2560LL) & 0x2000) != 0 )
    {
      v5 = v9 + 272;
      v6 = "HubHwVerifierDeviceEnumerationRetry";
      goto LABEL_12;
    }
  }
  else
  {
    v2 = 4089;
    v11 = *(_DWORD *)(a1 + 32);
    WPP_RECORDER_SF_qd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x10u,
      (__int64)&WPP_b6e50536a4fa3dade9fc9443e0bc8f19_Traceguids,
      a1,
      v11);
    if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) < 0 )
      Template_p(
        v3,
        &USBHUB3_ETW_EVENT_DEVICE_ENUMERATION_MAXIMUM_RETRY_COUNT_REACHED,
        (const GUID *)(a1 + 1500),
        *(_QWORD *)(a1 + 24));
    v4 = *(_QWORD *)(a1 + 8);
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 2560LL) & 0x1000) != 0 )
    {
      v5 = v4 + 272;
      v6 = "HubHwVerifierDeviceFailedEnumeration";
LABEL_12:
      HUBMISC_VerifierDbgBreak(v6, v5);
    }
  }
  return v2;
}
