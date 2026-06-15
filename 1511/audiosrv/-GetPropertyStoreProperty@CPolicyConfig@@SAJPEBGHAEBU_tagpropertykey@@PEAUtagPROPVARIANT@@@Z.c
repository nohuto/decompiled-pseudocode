/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800320A8
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x1800310D8 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x180071510 (-OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x18008805C (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000EA00 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        const unsigned __int16 *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int PropertyStoreProperty; // esi
  struct IMMDevice *v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[1] = (struct IMMDevice *)-2LL;
  v9[0] = 0LL;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a1,
                            v9);
  if ( PropertyStoreProperty < 0
    || (PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v9[0], a2, a3, a4), PropertyStoreProperty < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        69LL,
        &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        (unsigned int)PropertyStoreProperty);
    }
  }
  if ( v9[0] )
    ((void (__fastcall *)(struct IMMDevice *))v9[0]->lpVtbl->Release)(v9[0]);
  return (unsigned int)PropertyStoreProperty;
}
