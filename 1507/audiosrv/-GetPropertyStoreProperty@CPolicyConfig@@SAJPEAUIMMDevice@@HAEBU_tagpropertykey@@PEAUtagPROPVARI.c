/*
 * XREFs of ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18002D5C0
 * Callers:
 *     ?IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D408 (-IsExclusiveModeDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z @ 0x18002D460 (-IsOffloadDisabled@@YAHPEAUIMMDevice@@@Z.c)
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z @ 0x18002D4B8 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAUIMMDevice@@HPEA_J1@Z.c)
 *     ?CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@@PEBUtWAVEFORMATEX@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x180034CE0 (-CheckAndSynchronizeWaveRTPeriodicity@CPolicyConfig@@SAJPEAUIAudioDeviceEndpoint@@PEAUIMMDevice@.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800877DC (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1800878E0 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetPropertyStoreProperty(
        struct IUnknown *a1,
        int a2,
        const struct _tagpropertykey *a3,
        struct tagPROPVARIANT *a4)
{
  int v6; // edi
  __int64 v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  struct IUnknown *v10[6]; // [rsp+28h] [rbp-30h] BYREF

  v10[1] = (struct IUnknown *)-2LL;
  v9 = 0LL;
  if ( a2 )
  {
    v10[0] = 0LL;
    if ( !a1 || (ATL::AtlComQIPtrAssign(v10, a1, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211), !v10[0]) )
    {
      v6 = -2147467262;
      goto LABEL_16;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))v10[0]->lpVtbl[1].Release)(v10[0], 0LL, &v9);
    if ( v10[0] )
      ((void (__fastcall *)(struct IUnknown *))v10[0]->lpVtbl->Release)(v10[0]);
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))a1->lpVtbl[1].AddRef)(a1, 0LL, &v9);
  }
  if ( v6 >= 0 )
  {
LABEL_4:
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
    goto LABEL_5;
  }
LABEL_16:
  v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      55LL,
      &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      (unsigned int)v6);
    goto LABEL_4;
  }
LABEL_5:
  if ( v6 < 0 )
  {
    if ( v6 == -2147024894 )
    {
      *(_QWORD *)&a4->vt = 0LL;
      a4->hVal.QuadPart = 0LL;
      a4->bstrblobVal.pData = 0LL;
      v6 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, struct tagPROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
           v9,
           a3,
           a4);
    v7 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  if ( v6 < 0
    && (struct _GUID *)v7 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(v7 + 28) & 0x40) != 0
    && *(_BYTE *)(v7 + 25) >= 2u )
  {
    WPP_SF_D(*(_QWORD *)(v7 + 16), 71LL, &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, (unsigned int)v6);
  }
LABEL_8:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
