/*
 * XREFs of ?RefreshDeviceFormat@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180033A1C
 * Callers:
 *     ?GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F1A0 (-GetMixFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18001F6A0 (-GetDevicePipeFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033F74 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::RefreshDeviceFormat(
        CPolicyConfig *this,
        struct IUnknown *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  int v6; // r8d
  int DeviceFormatInternal; // esi
  void *v8; // rbx
  LPVOID pv[7]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v12; // [rsp+88h] [rbp+20h] BYREF

  pv[1] = (LPVOID)-2LL;
  v12 = 0LL;
  v6 = 0;
  v11 = 0;
  pv[0] = 0LL;
  if ( a2 )
  {
    ATL::AtlComQIPtrAssign(&v12, a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    if ( v12 )
    {
      DeviceFormatInternal = ((__int64 (__fastcall *)(struct IUnknown *, int *))v12->lpVtbl[3].Release)(v12, &v11);
      if ( DeviceFormatInternal < 0 )
      {
LABEL_13:
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x2Du,
            (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
            DeviceFormatInternal);
        }
        goto LABEL_10;
      }
    }
    v6 = v11;
  }
  DeviceFormatInternal = CPolicyConfig::GetDeviceFormatInternal(
                           (struct IMMDevice *)a2,
                           0,
                           v6,
                           a3,
                           (struct tWAVEFORMATEX **)pv);
  v8 = pv[0];
  if ( DeviceFormatInternal >= 0 )
    DeviceFormatInternal = CPolicyConfig::SetDeviceFormatInternal(
                             this,
                             (struct IMMDevice *)a2,
                             v11,
                             a3,
                             (const struct tWAVEFORMATEX *)pv[0]);
  if ( v8 )
    CoTaskMemFree(v8);
  if ( DeviceFormatInternal < 0 )
    goto LABEL_13;
LABEL_10:
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  return (unsigned int)DeviceFormatInternal;
}
