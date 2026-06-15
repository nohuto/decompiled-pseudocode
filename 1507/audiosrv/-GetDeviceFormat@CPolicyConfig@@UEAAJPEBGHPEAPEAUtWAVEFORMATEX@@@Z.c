/*
 * XREFs of ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180037FA0
 * Callers:
 *     PolicyConfigGetDeviceFormat @ 0x180037C20 (PolicyConfigGetDeviceFormat.c)
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18003F5AC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 * Callees:
 *     ?GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002FCC0 (-GetDeviceFormatInternal@CPolicyConfig@@SAJPEAUIMMDevice@@HHW4__MIDL___MIDL_itf_audioengineendpo.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetDeviceFormat(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        struct tWAVEFORMATEX **a4)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v4; // r14d
  struct IMMDevice *v8; // rbx
  struct IMMDevice *v9; // rdi
  struct IMMDevice *v10; // rsi
  int MMDeviceIdFromInterfaceId; // esi
  __int64 v13; // rax
  struct IMMDevice *v14; // [rsp+30h] [rbp-40h] BYREF
  struct IMMDevice *v15; // [rsp+38h] [rbp-38h] BYREF
  int v16; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-28h] BYREF
  GUID v18; // [rsp+50h] [rbp-20h] BYREF

  v16 = 0;
  v4 = eHostProcessConnector;
  v14 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  v18 = GUID_00000000_0000_0000_0000_000000000000;
  if ( !a4 )
  {
    MMDeviceIdFromInterfaceId = -2147467261;
    goto LABEL_18;
  }
  *a4 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                    + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v14) < 0 )
  {
    MMDeviceIdFromInterfaceId = mmdDevGetMMDeviceIdFromInterfaceId(a2, &pv);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_18;
    MMDeviceIdFromInterfaceId = (*(__int64 (__fastcall **)(_QWORD, LPVOID, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                               + 40LL))(
                                  *(_QWORD *)&g_DeviceEnumerator,
                                  pv,
                                  &v14);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_18;
    MMDeviceIdFromInterfaceId = mmdDevGetInterfaceClassGuid(a2, &v18);
    if ( MMDeviceIdFromInterfaceId < 0 )
      goto LABEL_18;
    v13 = *(_QWORD *)&v18.Data1 - DEVINTERFACE_AUDIO_KEYWORDDETECTOR;
    if ( *(_QWORD *)&v18.Data1 == (_QWORD)DEVINTERFACE_AUDIO_KEYWORDDETECTOR )
      v13 = *(_QWORD *)v18.Data4 - *((_QWORD *)&DEVINTERFACE_AUDIO_KEYWORDDETECTOR + 1);
    if ( !v13 )
      v4 = eKeywordDetectorConnector;
  }
  v8 = v15;
  v9 = v14;
  if ( v15 != v14 )
  {
    v10 = v15;
    v8 = 0LL;
    v15 = 0LL;
    if ( v14 )
    {
      ((void (__fastcall *)(struct IMMDevice *, GUID *, struct IMMDevice **))v14->lpVtbl->QueryInterface)(
        v14,
        &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
        &v15);
      v9 = v14;
      v8 = v15;
    }
    if ( v10 )
    {
      ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
      v9 = v14;
      v8 = v15;
    }
  }
  if ( !v8 )
  {
LABEL_11:
    MMDeviceIdFromInterfaceId = CPolicyConfig::GetDeviceFormatInternal(v9, a3, v16, v4, a4);
    if ( MMDeviceIdFromInterfaceId >= 0 )
      goto LABEL_12;
    goto LABEL_18;
  }
  MMDeviceIdFromInterfaceId = ((__int64 (__fastcall *)(struct IMMDevice *, int *))v8->lpVtbl[1].OpenPropertyStore)(
                                v8,
                                &v16);
  if ( MMDeviceIdFromInterfaceId >= 0 )
  {
    v9 = v14;
    goto LABEL_11;
  }
LABEL_18:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x23u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      MMDeviceIdFromInterfaceId);
  }
LABEL_12:
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v15 )
    ((void (__fastcall *)(struct IMMDevice *))v15->lpVtbl->Release)(v15);
  if ( v14 )
    ((void (__fastcall *)(struct IMMDevice *))v14->lpVtbl->Release)(v14);
  return (unsigned int)MMDeviceIdFromInterfaceId;
}
