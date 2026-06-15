/*
 * XREFs of ?SetDeviceFormat@CPolicyConfig@@QEAAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@@Z @ 0x1800884F4
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180087E50 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z @ 0x180088620 (-SetDeviceFormat@CPolicyConfig@@UEAAJPEBGPEBUtWAVEFORMATEX@@1@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033F74 (-SetDeviceFormatInternal@CPolicyConfig@@QEAAJPEAUIMMDevice@@HW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::SetDeviceFormat(CPolicyConfig *this, struct IUnknown *a2, struct tWAVEFORMATEX *a3)
{
  struct IUnknown *v6; // rbx
  int v7; // esi
  int v9; // [rsp+78h] [rbp+10h] BYREF
  struct IUnknown *v10; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0;
  v6 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147467261;
LABEL_8:
    if ( v7 >= 0 )
      goto LABEL_13;
    goto LABEL_9;
  }
  ATL::AtlComQIPtrAssign(&v10, a2, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
  if ( !v10 || (v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v10->lpVtbl[3].Release)(v10, &v9), v7 >= 0) )
  {
    v7 = CPolicyConfig::SetDeviceFormatInternal(this, (struct IMMDevice *)a2, v9, eHostProcessConnector, a3);
    v6 = v10;
    goto LABEL_8;
  }
  v6 = v10;
LABEL_9:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x27u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v7);
    v6 = v10;
  }
LABEL_13:
  if ( v6 )
    ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
  return (unsigned int)v7;
}
