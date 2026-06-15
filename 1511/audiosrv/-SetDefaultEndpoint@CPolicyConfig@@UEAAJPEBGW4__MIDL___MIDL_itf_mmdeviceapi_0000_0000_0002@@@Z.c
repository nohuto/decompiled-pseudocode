/*
 * XREFs of ?SetDefaultEndpoint@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800848B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::SetDefaultEndpoint(CPolicyConfig *this, const unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  HRESULT v6; // esi
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp+20h] BYREF

  ppv = 0LL;
  v3 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    v6 = CoCreateInstance(
           &GUID_06cca63e_9941_441b_b004_39f999ada412,
           0LL,
           0x17u,
           &GUID_8079001f_4cbb_4eb9_85df_a7e5eb250e7d,
           &ppv);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                  + 40LL))(
             *(_QWORD *)&g_DeviceEnumerator,
             a2,
             &v8);
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 40LL))(ppv, v8, a3);
        if ( v6 >= 0 )
          goto LABEL_11;
      }
    }
    v3 = v8;
  }
  else
  {
    v6 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x40u, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v6);
LABEL_11:
    v3 = v8;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v6;
}
