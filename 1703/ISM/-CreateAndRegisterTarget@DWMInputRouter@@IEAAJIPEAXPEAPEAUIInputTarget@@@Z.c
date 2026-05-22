/*
 * XREFs of ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJIPEAXPEAPEAUIInputTarget@@@Z @ 0x1800141EC
 * Callers:
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800188A0 (-ExistsValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgR.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x1800188F4 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z @ 0x180019FE4 (-Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@PEAXPEAPEAUIInputTarget@@@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::CreateAndRegisterTarget(
        DWMInputRouter *this,
        unsigned int a2,
        void *a3,
        struct IInputTarget **a4)
{
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  int v11; // r9d
  __int64 v12; // rax
  __int64 (__fastcall *v13)(char *, _OWORD *); // rax
  int ValueForKey; // eax
  __int64 v15; // rcx
  struct IInputTarget *v16; // rbx
  struct IInputTarget *v18; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v19[40]; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[2]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v21; // [rsp+80h] [rbp+7h]

  memset(v19, 0, sizeof(v19));
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(**((_QWORD **)this + 17) + 112LL))(
         *((_QWORD *)this + 17),
         a2,
         v19);
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( (unsigned __int8)DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey((char *)this + 80)
      || (v12 = *((_QWORD *)this + 7),
          v20[0] = *(_OWORD *)v19,
          v13 = *(__int64 (__fastcall **)(char *, _OWORD *))(v12 + 24),
          v20[1] = *(_OWORD *)&v19[16],
          v21 = *(_QWORD *)&v19[32],
          v8 = v13((char *)this + 56, v20),
          v10 = v8,
          v8 >= 0) )
    {
      if ( a3 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(**((_QWORD **)this + 17) + 112LL))(
               *((_QWORD *)this + 17),
               a2,
               v20);
        v10 = v8;
        if ( v8 >= 0 )
        {
          v8 = DWMInputTarget::Create((const struct tagMsgRoutingInfo *)v20, a3, a4);
          v10 = v8;
          if ( v8 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
          {
            v11 = 987;
            goto LABEL_22;
          }
        }
        else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v11 = 983;
          goto LABEL_22;
        }
      }
      else
      {
        v18 = 0LL;
        ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey((char *)this + 80, v19, &v18);
        v10 = ValueForKey;
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(v15, &MinInput_Warning_CheckResult, 0, 968, ValueForKey);
          if ( IsDebuggerPresent() )
            __debugbreak();
          __fastfail(7u);
        }
        v16 = v18;
        (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v18 + 8LL))(v18);
        *a4 = v16;
      }
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v11 = 955;
      goto LABEL_22;
    }
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v11 = 950;
LABEL_22:
    Template_qqq(v9, &MinInput_Warning_CheckResult, 0, v11, v8);
  }
  return v10;
}
