/*
 * XREFs of ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x1800852E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x180085A5C (-SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetEndpointAbilityToBeDefault(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3)
{
  __int64 v3; // rdi
  HRESULT v6; // esi
  HRESULT v7; // eax
  LPVOID ppv; // [rsp+30h] [rbp-30h] BYREF
  struct IMMDevice *v10; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+98h] [rbp+38h] BYREF
  LPVOID v15; // [rsp+A8h] [rbp+48h] BYREF

  ppv = 0LL;
  v3 = 0LL;
  v10 = 0LL;
  v15 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v6 = -2147467261;
LABEL_18:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x44u,
        (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
        v6);
      v3 = v14;
    }
    goto LABEL_22;
  }
  v6 = CoCreateInstance(
         &GUID_06cca63e_9941_441b_b004_39f999ada412,
         0LL,
         0x17u,
         &GUID_8079001f_4cbb_4eb9_85df_a7e5eb250e7d,
         &ppv);
  if ( v6 < 0 )
    goto LABEL_17;
  v6 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v15);
  if ( v6 < 0
    || (v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(
               v15,
               0LL,
               2LL,
               &v13),
        v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, 0LL, &v12),
        v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IMMDevice **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                              + 40LL))(
               *(_QWORD *)&g_DeviceEnumerator,
               a2,
               &v10),
        v6 < 0)
    || (v6 = SetNeverSetAsDefaultProperty(v10, a3), v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(
               v15,
               0LL,
               2LL,
               &v11),
        v6 < 0)
    || (v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, 0LL, 0LL, &v14),
        v6 < 0)
    || v13 != v11
    && (v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 96LL))(ppv, v11, 2LL), v6 < 0) )
  {
LABEL_17:
    v3 = v14;
    goto LABEL_18;
  }
  v3 = v14;
  if ( v12 != v14 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)ppv + 96LL))(ppv, v14, 0LL, 0LL);
    v3 = v14;
    v6 = v7;
  }
  if ( v6 < 0 )
    goto LABEL_18;
LABEL_22:
  if ( v10 )
  {
    ((void (__fastcall *)(struct IMMDevice *))v10->lpVtbl->Release)(v10);
    v3 = v14;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
