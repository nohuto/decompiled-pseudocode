/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180038204
 * Callers:
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800349D0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800387B0 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IMMDevice *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v6; // esi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = -2LL;
  if ( !a2 )
  {
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, struct IPropertyStore **))a1->lpVtbl->OpenPropertyStore)(
           a1,
           a3,
           a4);
    goto LABEL_6;
  }
  if ( a1 )
  {
    v8[0] = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, _QWORD *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_ed899cbb_5613_4541_a78f_66302f0ce211,
      v8);
    if ( v8[0] )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct IPropertyStore **))(*(_QWORD *)v8[0] + 40LL))(
             v8[0],
             a3,
             a4);
      if ( v8[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
LABEL_6:
      if ( v6 >= 0 )
        return (unsigned int)v6;
      goto LABEL_10;
    }
  }
  v6 = -2147467262;
LABEL_10:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x37u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
