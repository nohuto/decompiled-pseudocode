/*
 * XREFs of ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x1800188F4
 * Callers:
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180013CE0 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z @ 0x180013E50 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z @ 0x1800141EC (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x1800145D4 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180019C08 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

__int64 __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  unsigned int v10; // r10d
  _QWORD *v11; // r11

  v3 = 0;
  if ( (unsigned __int8)operator==(a2, a1 + 16) || !v5 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 116, 87);
    if ( IsDebuggerPresent() )
      __debugbreak();
    __fastfail(7u);
  }
  v7 = 0LL;
  if ( *((_DWORD *)v6 + 2) )
  {
    v8 = *v6;
    while ( !(unsigned __int8)operator==(v8 + 48 * v7, a2) )
    {
      v7 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v7 >= v10 )
        goto LABEL_7;
    }
    *v11 = *(_QWORD *)(v8 + 48 * v9 + 40);
  }
  else
  {
LABEL_7:
    v3 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq(v4, &MinInput_Warning_CheckResult, 0, 133, 5);
  }
  return v3;
}
