/*
 * XREFs of ?Create@ButtonProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002FF30
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z @ 0x1800094B8 (-Create@RegistryWatcher@@SAJPEAUHKEY__@@PEBGPEAXP6AX20@ZPEAPEAV1@@Z.c)
 *     ?associate@?$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX0I@Z$0A@@wil@@QEAAXPEAUIMessageSession@@@Z @ 0x180017F44 (-associate@-$unique_com_token@UIMessageSession@@I$$A6AXPEAU1@I@Z$1-IMessageSessionCloseEndpointF.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002C8B0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ @ 0x18002FE6C (-FindRemoteEndpoint@ButtonProcessor@@AEAAXXZ.c)
 *     ??0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005A3F4 (--0NonPointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ButtonProcessor::Create(struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  char *v6; // rbx
  unsigned int v7; // edi
  int v8; // r9d
  int ChildInputProcessor; // eax
  int v10; // r9d
  __int64 v11; // rcx
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  int v15; // [rsp+58h] [rbp-20h]
  char v16; // [rsp+5Ch] [rbp-1Ch]

  v4 = (char *)malloc(0x150uLL);
  v6 = v4;
  if ( v4 )
    memset(v4, 0, 0x150uLL);
  if ( v6 )
  {
    NonPointerProcessor::NonPointerProcessor((NonPointerProcessor *)v6, *a1, a1[1]);
    *(_QWORD *)v6 = &ButtonProcessor::`vftable'{for `IInputProcessor'};
    *((_QWORD *)v6 + 1) = &ButtonProcessor::`vftable'{for `RefCountedObject'};
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_DWORD *)v6 + 16) = 0;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
    memset(v6 + 96, 0, 0xEDuLL);
    v13 = 0LL;
    v14 = 0LL;
    v15 = -1;
    v16 = 1;
    ChildInputProcessor = CoreUICreate(v6 + 48);
    v7 = ChildInputProcessor;
    if ( ChildInputProcessor >= 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned int,void (IMessageSession *,unsigned int),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned int),0>::associate(
        (_DWORD *)v6 + 14,
        *((_QWORD *)v6 + 6));
      ButtonProcessor::FindRemoteEndpoint((ButtonProcessor *)v6);
      *((_WORD *)v6 + 40) = 0;
      RegistryWatcher::Create(
        v11,
        L"SYSTEM\\INPUT\\BUTTONS",
        v6,
        (void (*)(void *, HKEY))ButtonProcessor::OnButtonRegistryKeyChangeStatic,
        (struct RegistryWatcher **)v6 + 9);
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 4LL) |= 4u;
      *(_QWORD *)&v13 = *((_QWORD *)v6 + 4);
      *(_QWORD *)&v14 = v6;
      *((_QWORD *)&v13 + 1) = *((_QWORD *)v6 + 3);
      ChildInputProcessor = CreateChildInputProcessor(4, (__int64)&v13, (__int64)(v6 + 88));
      v7 = ChildInputProcessor;
      if ( ChildInputProcessor >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      {
LABEL_15:
        if ( (v7 & 0x80000000) == 0 )
        {
          *a2 = (struct IInputProcessor *)v6;
          return v7;
        }
        if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
        {
          v8 = 125;
          goto LABEL_7;
        }
        return v7;
      }
      v10 = 76;
    }
    else
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_15;
      v10 = 45;
    }
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v10, ChildInputProcessor);
    goto LABEL_15;
  }
  v7 = -2147024882;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v8 = 122;
LABEL_7:
    Template_qqq(v5, &MinInput_Warning_CheckResult, 0, v8, v7);
  }
  return v7;
}
