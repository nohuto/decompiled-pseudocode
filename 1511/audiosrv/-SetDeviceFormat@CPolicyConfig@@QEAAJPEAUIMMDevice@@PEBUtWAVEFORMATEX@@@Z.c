/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800849F4
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180084310 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x180084B10 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084D60 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormat(
        CPolicyConfig *this,
        struct IUnknown *a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // esi
  int v8; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v9; // [rsp+88h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0LL;
  if ( a2 && a3 )
  {
    ATL::AtlComQIPtrAssign(&v9, a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    if ( !v9 || (v6 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[3].Release)(v9, &v8), v6 >= 0) )
    {
      v6 = CPolicyConfig::SetDeviceFormatInternal(this, (struct IMMDevice *)a2, v8, eHostProcessConnector, a3);
      if ( v6 >= 0 )
        goto LABEL_12;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x26u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v6);
  }
LABEL_12:
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v6;
}
