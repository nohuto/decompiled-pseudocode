/*
 * XREFs of ?GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z @ 0x180083390
 * Callers:
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180082770 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_au.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPreferredFormatsArray(struct IUnknown *a1, struct _AudioFormat **a2, unsigned __int64 *a3)
{
  struct IUnknown *v6; // rbx
  int v7; // r12d
  struct IUnknown *v8; // rbx
  struct IUnknown *v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  __int64 v12; // [rsp+40h] [rbp-40h]
  struct IUnknown *v13; // [rsp+48h] [rbp-38h] BYREF
  struct IUnknown *v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]

  v16 = -2LL;
  v6 = 0LL;
  v14 = 0LL;
  *a3 = 0LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(&v14, a1, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v6 = v14;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v6->lpVtbl[1].QueryInterface)(v6, &v15);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Cu,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        v7);
    }
  }
  else if ( v15 )
  {
    *a2 = (struct _AudioFormat *)&_PreferredFormatsMicrophone;
    *a3 = 8LL;
    v12 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    v10 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64))a1->lpVtbl[1].QueryInterface)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL) >= 0
      && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, 0LL, &v11) >= 0
      && (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v11 + 64LL))(v11, &v13) >= 0 )
    {
      v8 = v10;
      if ( v10 != v13 )
      {
        ATL::AtlComQIPtrAssign(&v10, v13, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9);
        v8 = v10;
      }
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[2].AddRef)(v8, &v17) >= 0 )
      {
        if ( v17 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1
          && v18 == *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4 )
        {
          *a2 = 0LL;
          *a3 = 0LL;
        }
        else if ( v17 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1
               && v18 == *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4 )
        {
          *a2 = (struct _AudioFormat *)&_PreferredFormatsLineIn;
          *a3 = 8LL;
        }
      }
    }
    if ( v10 )
      ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
    if ( v13 )
      ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    *a2 = (struct _AudioFormat *)&_PreferredFormatsRender;
    *a3 = 4LL;
  }
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  return (unsigned int)v7;
}
