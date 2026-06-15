/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18000EA00
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x18000E7F0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E948 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18000E9A0 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800320A8 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180083800 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x180083900 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IMMDevice *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // esi
  TraceLoggingHProvider v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v10[6]; // [rsp+28h] [rbp-30h] BYREF

  v10[1] = -2LL;
  v10[0] = 0LL;
  if ( a2 )
  {
    v9 = 0LL;
    if ( !a1
      || (v9 = 0LL,
          ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
            a1,
            &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
            &v9),
          !v9) )
    {
      v6 = -2147467262;
      goto LABEL_9;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v9 + 40LL))(v9, 0LL, v10);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, _QWORD *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, v10);
  }
  if ( v6 >= 0 )
  {
LABEL_13:
    v7 = WPP_GLOBAL_Control;
    goto LABEL_14;
  }
LABEL_9:
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      54LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)v6);
    goto LABEL_13;
  }
LABEL_14:
  if ( v6 < 0 )
  {
    if ( v6 == -2147024894 )
    {
      *(_QWORD *)&a4->vt = 0LL;
      a4->hVal.QuadPart = 0LL;
      a4->bstrblobVal.pData = 0LL;
      v6 = 0;
      goto LABEL_23;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v10[0] + 40LL))(
           v10[0],
           a3,
           a4);
    v7 = WPP_GLOBAL_Control;
  }
  if ( v6 < 0
    && v7 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)v7 + 28) & 0x40) != 0
    && *((_BYTE *)v7 + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)v7 + 2), 70LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, (unsigned int)v6);
  }
LABEL_23:
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  return (unsigned int)v6;
}
