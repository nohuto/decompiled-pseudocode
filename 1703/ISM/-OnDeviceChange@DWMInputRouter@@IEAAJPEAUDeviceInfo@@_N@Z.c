/*
 * XREFs of ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x1800145D4
 * Callers:
 *     ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180014890 (-OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x1800148A0 (-OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?SetValueForKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z @ 0x18000CAA0 (-SetValueForKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBKAEBQEAUDeviceInfo@@@Z.c)
 *     ?RemoveKey@?$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z @ 0x18000CC88 (-RemoveKey@-$DynamicSizeMap@KPEAUDeviceInfo@@$00@@QEAAJAEBK@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x1800188F4 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x180018C18 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::OnDeviceChange(DWMInputRouter *this, struct DeviceInfo *a2, char a3)
{
  char *v5; // rcx
  int Keys; // eax
  __int64 v7; // rcx
  int v8; // r9d
  unsigned __int64 v9; // rdi
  unsigned int v10; // ebx
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // r12
  __int64 v14; // r14
  int ValueForKey; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  _QWORD *v19; // rcx
  int v20; // r9d
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD **); // [rsp+30h] [rbp-50h] BYREF
  char *v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+40h] [rbp-40h]
  _OWORD v25[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h]
  struct DeviceInfo *v27; // [rsp+C8h] [rbp+48h] BYREF
  char v28; // [rsp+D0h] [rbp+50h]
  _QWORD *v29; // [rsp+D8h] [rbp+58h] BYREF

  v28 = a3;
  v27 = a2;
  v24 = -2LL;
  LODWORD(v29) = 0;
  v5 = (char *)this + 192;
  if ( a3 )
  {
    Keys = DynamicSizeMap<unsigned long,DeviceInfo *,1>::SetValueForKey((__int64)v5, (int *)a2, &v27);
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v8 = 1065;
      goto LABEL_5;
    }
  }
  else
  {
    Keys = DynamicSizeMap<unsigned long,DeviceInfo *,1>::RemoveKey((__int64)v5, (unsigned int *)a2);
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_6;
      v8 = 1074;
      goto LABEL_5;
    }
  }
  v9 = *((unsigned int *)this + 23);
  v10 = 0;
  if ( (_DWORD)v9 )
  {
    v11 = (char *)operator new[](saturated_mul(v9, 0x28uLL));
    v13 = v11;
    if ( !v11 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        Template_qqq(v12, &MinInput_Warning_CheckResult, 0, 1090, 14);
      goto LABEL_6;
    }
    Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((char *)this + 80, v11, (unsigned int)v9);
    if ( Keys >= 0 )
    {
      v14 = 0LL;
      while ( 1 )
      {
        v22 = 0LL;
        v29 = 0LL;
        v23 = &v13[40 * v14];
        ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey((char *)this + 80, v23, &v22);
        if ( ValueForKey < 0 )
          break;
        ValueForKey = (**v22)(v22, &GUID_8f2e54af_e6e4_4354_a186_91990afaebb7, &v29);
        if ( ValueForKey < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            goto LABEL_42;
          v20 = 1112;
LABEL_41:
          Template_qqq(v16, &MinInput_Warning_CheckResult, 0, v20, ValueForKey);
          goto LABEL_42;
        }
        if ( !v29 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 1116, 255);
          goto LABEL_42;
        }
        v17 = *v29;
        if ( v28 )
          v18 = (*(__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))(v17 + 24))(v29, a2);
        else
          v18 = (*(__int64 (__fastcall **)(_QWORD *, struct DeviceInfo *))(v17 + 32))(v29, a2);
        v10 = v18;
        if ( v18 < 0 )
        {
          v25[0] = *(_OWORD *)v23;
          v25[1] = *((_OWORD *)v23 + 1);
          v26 = *((_QWORD *)v23 + 4);
          ValueForKey = (*(__int64 (__fastcall **)(char *, _OWORD *))(*((_QWORD *)this + 7) + 32LL))(
                          (char *)this + 56,
                          v25);
          if ( ValueForKey < 0 )
          {
            if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
            {
              v20 = 1138;
              goto LABEL_41;
            }
LABEL_42:
            if ( IsDebuggerPresent() )
              __debugbreak();
            __fastfail(7u);
          }
          v10 = 0;
        }
        v19 = v29;
        v29 = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= (unsigned int)v9 )
          return v10;
      }
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_42;
      v20 = 1108;
      goto LABEL_41;
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_6:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v8 = 1095;
LABEL_5:
    Template_qqq(v7, &MinInput_Warning_CheckResult, 0, v8, Keys);
    goto LABEL_6;
  }
  return v10;
}
