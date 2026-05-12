/*
 * XREFs of RaidAdapterPowerDownDeviceCompletion @ 0x1C0018870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     Template_qpq @ 0x1C0033114 (Template_qpq.c)
 */

__int64 __fastcall RaidAdapterPowerDownDeviceCompletion(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // edx
  int v5; // ecx
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]

  v2 = *(_QWORD *)(a1 + 64);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 25LL, &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids, v2, a2);
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  if ( StorEtwLoggingEnabled )
  {
    v7 = 0;
    v8 = 0LL;
    v9 = 0;
    IoGetActivityIdIrp(a2, &v7);
    if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
      Template_qpq(v5, v4, (unsigned int)&v7, *(_DWORD *)(v2 + 56), a2, *(_DWORD *)(a2 + 48));
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 256));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      26LL,
      &WPP_a3dcb199dfb635f773f8f8e69f1de7fa_Traceguids,
      v2,
      a2,
      *(_DWORD *)(a2 + 48));
  }
  return 0LL;
}
