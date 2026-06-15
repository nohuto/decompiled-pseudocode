/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180004414
 * Callers:
 *     ?Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z @ 0x180003518 (-Init@AudioEffectsWatcher@@QEAAJPEBGKH@Z.c)
 *     ?OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x18005A0F0 (-OnPropertyValueChanged@AudioEffectsWatcher@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEBG@Z @ 0x1800717B4 (-IsExclusiveModeDisabled@@YAHPEBG@Z.c)
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800273C4 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        const unsigned __int16 *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int PropertyStoreProperty; // ebx
  struct IMMDevice *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = (struct IMMDevice *)-2LL;
  v9[0] = 0LL;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a1,
                            v9);
  if ( PropertyStoreProperty < 0
    || (PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v9[0], a2, a3, a4), PropertyStoreProperty < 0) )
  {
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetPropertyStoreProperty", 0x1096u, PropertyStoreProperty);
  }
  if ( v9[0] )
    ((void (__fastcall *)(struct IMMDevice *))v9[0]->lpVtbl->Release)(v9[0]);
  return (unsigned int)PropertyStoreProperty;
}
