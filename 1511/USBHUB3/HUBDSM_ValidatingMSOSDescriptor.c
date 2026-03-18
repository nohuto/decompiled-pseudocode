/*
 * XREFs of HUBDSM_ValidatingMSOSDescriptor @ 0x1C00193C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C0006048 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // edi
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 240) == 18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_1C00570E8);
    if ( RtlCompareMemory((const void *)(v1 + 2066), L"MSFT100", 0xEuLL) == 14 )
    {
      v3 = 4077;
      *(_BYTE *)(v1 + 2036) = *(_BYTE *)(v1 + 2080);
      return v3;
    }
  }
  else
  {
    v5 = *(_DWORD *)(v1 + 240);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x50u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v5);
  }
  v3 = 4065;
  if ( SLOBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) < 0 )
    Template_p(v2, &USBHUB3_ETW_EVENT_INVALID_MSOS_DESCRIPTOR, (const GUID *)(v1 + 1500), *(_QWORD *)(v1 + 24));
  return v3;
}
