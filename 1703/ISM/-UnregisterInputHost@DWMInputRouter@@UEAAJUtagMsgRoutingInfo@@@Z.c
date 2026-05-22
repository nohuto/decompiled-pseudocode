/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180013CE0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800188A0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x1800188F4 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?SetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@AEBQEAUIInputTarget@@@Z @ 0x1800189CC (-SetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180019C08 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  int ValueForKey; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__int64 *)(a1 + 24);
  if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(a1 + 24) )
  {
    v14[0] = 0LL;
    ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(v2, a2, v14);
    if ( ValueForKey < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v5, &MinInput_Warning_CheckResult, 0, 756, ValueForKey);
      goto LABEL_15;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
    v14[0] = 0LL;
    v6 = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::SetValueForKey(v2, a2, v14);
    if ( v6 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 763, v6);
      goto LABEL_15;
    }
    v8 = 0LL;
    if ( !*((_DWORD *)v2 + 2) )
    {
LABEL_12:
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        Template_qqq(v7, &MinInput_Warning_CheckResult, 0, 220, 5);
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          Template_qqq(v11, &MinInput_Warning_CheckResult, 0, 766, 5);
      }
LABEL_15:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v9 = *v2;
    while ( !(unsigned __int8)operator==(v9 + 48 * v8, a2) )
    {
      v8 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v8 >= *((_DWORD *)v2 + 2) )
        goto LABEL_12;
    }
    v13 = 6 * v10;
    *(_OWORD *)(v9 + 8 * v13) = *((_OWORD *)v2 + 1);
    *(_OWORD *)(v9 + 8 * v13 + 16) = *((_OWORD *)v2 + 2);
    *(_QWORD *)(v9 + 8 * v13 + 32) = v2[6];
    --*((_DWORD *)v2 + 3);
  }
  return 0LL;
}
