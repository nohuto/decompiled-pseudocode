/*
 * XREFs of ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800878E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002D5C0 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::GetShareMode(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        enum _DeviceShareMode *a3)
{
  int PropertyStoreProperty; // esi
  struct tagPROPVARIANT pvar[2]; // [rsp+20h] [rbp-38h] BYREF
  struct IMMDevice *v7; // [rsp+68h] [rbp+10h] BYREF

  memset(pvar, 0, 24);
  v7 = 0LL;
  PropertyStoreProperty = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            a2,
                            &v7);
  if ( PropertyStoreProperty >= 0 )
  {
    PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(
                              (struct IUnknown *)v7,
                              0,
                              &PKEY_AudioEngine_ShareMode,
                              pvar);
    if ( PropertyStoreProperty >= 0 )
    {
      if ( pvar[0].vt == 19 )
      {
        *(_DWORD *)a3 = pvar[0].lVal;
      }
      else if ( pvar[0].vt )
      {
        PropertyStoreProperty = -2147024809;
      }
      else
      {
        *(_DWORD *)a3 = 0;
      }
    }
  }
  PropVariantClear((PROPVARIANT *)pvar);
  if ( PropertyStoreProperty < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      PropertyStoreProperty);
  }
  if ( v7 )
    ((void (__fastcall *)(struct IMMDevice *))v7->lpVtbl->Release)(v7);
  return (unsigned int)PropertyStoreProperty;
}
