/*
 * XREFs of ?GetPreferredFormatsArray@@YAJPEAUIMMDevice@@PEAPEAU_AudioFormat@@PEA_K@Z @ 0x180087418
 * Callers:
 *     ?GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180086960 (-GetComputedDefaultFormat@CPolicyConfig@@CAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GetPreferredFormatsArray(struct IUnknown *a1, struct _AudioFormat **a2, unsigned __int64 *a3)
{
  struct IUnknown *v6; // rbx
  int v7; // r12d
  struct IUnknown *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct IUnknown *v12; // [rsp+30h] [rbp-50h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h]
  struct IUnknown *v15; // [rsp+48h] [rbp-38h] BYREF
  struct IUnknown *v16; // [rsp+50h] [rbp-30h] BYREF
  int v17; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  __int64 v20; // [rsp+70h] [rbp-10h]

  v18 = -2LL;
  v6 = 0LL;
  v16 = 0LL;
  *a3 = 0LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(&v16, a1, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v6 = v16;
  }
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v6->lpVtbl[1].QueryInterface)(v6, &v17);
  if ( v7 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Au,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        v7);
    }
  }
  else if ( v17 )
  {
    *a2 = (struct _AudioFormat *)&_PreferredFormatsMicrophone;
    *a3 = 8LL;
    v14 = 0LL;
    v13 = 0LL;
    v15 = 0LL;
    v12 = 0LL;
    if ( ((int (__fastcall *)(struct IUnknown *, GUID *, __int64))a1->lpVtbl[1].QueryInterface)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL) >= 0
      && (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13) >= 0
      && (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v13 + 64LL))(v13, &v15) >= 0 )
    {
      v8 = v12;
      if ( v12 != v15 )
      {
        ATL::AtlComQIPtrAssign(&v12, v15, &GUID_ae2de0e4_5bca_4f2d_aa46_5d13f8fdb3a9);
        v8 = v12;
      }
      if ( ((int (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[2].AddRef)(v8, &v19) >= 0 )
      {
        v9 = v19 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
        if ( v19 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
          v9 = v20 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
        if ( v9 )
        {
          v10 = v19 - *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1;
          if ( v19 == *(_QWORD *)&GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data1 )
            v10 = v20 - *(_QWORD *)GUID_dff21fe3_f70f_11d0_b917_00a0c9223196.Data4;
          if ( !v10 )
          {
            *a2 = (struct _AudioFormat *)&_PreferredFormatsLineIn;
            *a3 = 8LL;
          }
        }
        else
        {
          *a2 = 0LL;
          *a3 = 0LL;
        }
      }
    }
    if ( v12 )
      ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
    if ( v15 )
      ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  else
  {
    *a2 = (struct _AudioFormat *)&_PreferredFormatsRender;
    *a3 = 4LL;
  }
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->Release)(v16);
  return (unsigned int)v7;
}
