/*
 * XREFs of ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800387B0
 * Callers:
 *     PolicyConfigGetPropertyValue @ 0x180038730 (PolicyConfigGetPropertyValue.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180038204 (-GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetPropertyValue(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        const struct _tagpropertykey *a4,
        struct tagPROPVARIANT *a5)
{
  struct tagPROPVARIANT *v7; // r14
  int v8; // esi
  int DevicePropertyStore; // eax
  __int64 v10; // rcx
  struct IMMDevice *v12; // [rsp+20h] [rbp-38h] BYREF
  struct IPropertyStore *v13; // [rsp+68h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( !a2 || (v7 = a5) == 0LL )
  {
    v8 = -2147467261;
    goto LABEL_15;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                        + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         a2,
         &v12);
  if ( v8 < 0 )
  {
LABEL_15:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
LABEL_16:
    if ( (struct _GUID *)v10 != &WPP_GLOBAL_Control && (*(_BYTE *)(v10 + 28) & 0x40) != 0 && *(_BYTE *)(v10 + 25) >= 2u )
      WPP_SF_D(*(_QWORD *)(v10 + 16), 0x3Fu, (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, v8);
    goto LABEL_11;
  }
  v13 = 0LL;
  DevicePropertyStore = GetDevicePropertyStore(v12, a3, 0, &v13);
  v8 = DevicePropertyStore;
  if ( DevicePropertyStore < 0 )
  {
    if ( DevicePropertyStore == -2147024894 )
    {
      *(_QWORD *)&v7->vt = 0LL;
      v8 = 0;
      v7->hVal.QuadPart = 0LL;
      v7->bstrblobVal.pData = 0LL;
    }
  }
  else
  {
    v8 = ((__int64 (__fastcall *)(struct IPropertyStore *, const struct _tagpropertykey *, struct tagPROPVARIANT *))v13->lpVtbl->GetValue)(
           v13,
           a4,
           v7);
  }
  if ( v8 >= 0 )
    goto LABEL_7;
  v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x47u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v8);
LABEL_7:
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v13 )
  {
    ((void (__fastcall *)(struct IPropertyStore *))v13->lpVtbl->Release)(v13);
    v10 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v8 < 0 )
    goto LABEL_16;
LABEL_11:
  if ( v12 )
    ((void (__fastcall *)(struct IMMDevice *))v12->lpVtbl->Release)(v12);
  return (unsigned int)v8;
}
