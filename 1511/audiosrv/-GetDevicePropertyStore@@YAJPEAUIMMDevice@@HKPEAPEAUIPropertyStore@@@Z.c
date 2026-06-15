/*
 * XREFs of ?GetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x18008318C
 * Callers:
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180085CF8 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDevicePropertyStore(struct IUnknown *a1, int a2, unsigned int a3, struct IPropertyStore **a4)
{
  int v6; // esi
  struct IUnknown *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = (struct IUnknown *)-2LL;
  if ( !a2 )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))a1->lpVtbl[1].AddRef)(a1, a3, a4);
    goto LABEL_8;
  }
  v8[0] = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(v8, a1, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
    if ( v8[0] )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IPropertyStore **))v8[0]->lpVtbl[1].Release)(
             v8[0],
             a3,
             a4);
      if ( v8[0] )
        ((void (__fastcall *)(struct IUnknown *))v8[0]->lpVtbl->Release)(v8[0]);
LABEL_8:
      if ( v6 >= 0 )
        return (unsigned int)v6;
      goto LABEL_9;
    }
  }
  v6 = -2147467262;
LABEL_9:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v6);
  }
  return (unsigned int)v6;
}
