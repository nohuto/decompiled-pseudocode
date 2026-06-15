/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180027464
 * Callers:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800273C4 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x18006F7E8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IMMDevice *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v6; // ebx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = -2LL;
  if ( a2 )
  {
    v8[0] = 0LL;
    ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(v8, a1);
    if ( !v8[0] )
    {
      v6 = -2147467262;
      goto LABEL_8;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IPropertyStore **))(*(_QWORD *)v8[0] + 40LL))(v8[0], a3, a4);
    if ( v8[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, struct IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
           a1,
           a3,
           a4);
  }
  if ( v6 < 0 )
LABEL_8:
    AudSrvTraceLoggingErrorHelper("GetDevicePropertyStore", 0xDCAu, v6);
  return (unsigned int)v6;
}
