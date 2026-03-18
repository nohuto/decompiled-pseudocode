/*
 * XREFs of HUBDSM_ValidatingMSOSDescriptor @ 0x1C001AFF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     Template_p @ 0x1C000630C (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 240) == 18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_1C005B110);
    if ( RtlCompareMemory((const void *)(v1 + 2066), L"MSFT100", 0xEuLL) == 14 )
    {
      v3 = 4077;
      *(_BYTE *)(v1 + 2036) = *(_BYTE *)(v1 + 2080);
      return v3;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x50u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      *(_DWORD *)(v1 + 240));
  }
  v3 = 4065;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 0x100) != 0 )
    Template_p(v2, &USBHUB3_ETW_EVENT_INVALID_MSOS_DESCRIPTOR, (const GUID *)(v1 + 1500), *(_QWORD *)(v1 + 24));
  return v3;
}
