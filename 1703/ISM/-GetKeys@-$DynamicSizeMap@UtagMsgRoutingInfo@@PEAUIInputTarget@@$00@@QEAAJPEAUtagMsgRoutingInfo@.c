/*
 * XREFs of ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x180018C18
 * Callers:
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     ?NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z @ 0x180013540 (-NotifyProxyDisposed@DWMInputRouter@@UEAAJII@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x1800145D4 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180019C08 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r10
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // r10d
  __int64 v11; // r11
  __int64 v12; // rcx

  v3 = 0LL;
  v6 = a1;
  if ( *(_DWORD *)(a1 + 8) )
  {
    v7 = a1 + 16;
    do
    {
      if ( !(unsigned __int8)operator==(*(_QWORD *)v6 + 48 * v3, v7) )
      {
        if ( (_DWORD)v11 == a3 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v8, &MinInput_Warning_CheckResult, 0, 322, 87);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v12 = 5 * v11;
        *(_OWORD *)(a2 + 8 * v12) = *(_OWORD *)v9;
        *(_OWORD *)(a2 + 8 * v12 + 16) = *(_OWORD *)(v9 + 16);
        *(_QWORD *)(a2 + 8 * v12 + 32) = *(_QWORD *)(v9 + 32);
      }
      v3 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(v6 + 8) );
  }
  return 0LL;
}
