/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x18003FD30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall PopulateEndpointCharacteristicsCache(PTP_CALLBACK_INSTANCE Instance, PVOID Context)
{
  CEndpointCharacteristicsCache *v2; // rcx
  volatile int *v3; // rdx
  unsigned int (__fastcall *v4)(__int64, volatile int *); // rdi
  CEndpointCharacteristicsCache *v5; // rcx
  volatile int *v6; // rdx
  unsigned int (__fastcall *v7)(__int64, volatile int *); // rdi
  CEndpointCharacteristicsCache *v8; // rcx
  volatile int *v9; // rdx
  unsigned int (__fastcall *v10)(__int64, volatile int *); // rdi
  CEndpointCharacteristicsCache *v11; // rcx
  volatile int *v12; // rdx
  unsigned int (__fastcall *v13)(__int64, volatile int *); // rdi
  unsigned int i; // esi
  CEndpointCharacteristicsCache *v15; // rcx
  volatile int *v16; // rdx
  unsigned int (__fastcall *v17)(__int64, volatile int *); // rdi
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int16 *v20; // [rsp+40h] [rbp-20h] BYREF
  struct CEndpointCharacteristics *v21[3]; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+48h] BYREF

  v21[1] = (struct CEndpointCharacteristics *)-2LL;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0 )
    {
      v20 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)ppv + 32LL))(
             ppv,
             0LL,
             0LL,
             &v20) >= 0 )
      {
        pv = 0LL;
        if ( (*(int (__fastcall **)(unsigned __int16 *, LPVOID *))(*(_QWORD *)v20 + 40LL))(v20, &pv) >= 0 )
        {
          v21[0] = 0LL;
          CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v2, (const unsigned __int16 *)pv, v21);
          if ( v21[0] )
          {
            v4 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v21[0] + 16LL);
            if ( v4 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
                (__int64)v21[0],
                v3);
            else
              ((void (__fastcall *)(struct CEndpointCharacteristics *))v4)(v21[0]);
          }
        }
        CoTaskMemFree(pv);
      }
      if ( v20 )
        (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v20 + 16LL))(v20);
      pv = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &pv) >= 0 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, unsigned __int16 **))(*(_QWORD *)pv + 40LL))(pv, &v20) >= 0 )
        {
          v21[0] = 0LL;
          CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v5, v20, v21);
          if ( v21[0] )
          {
            v7 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v21[0] + 16LL);
            if ( v7 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
                (__int64)v21[0],
                v6);
            else
              ((void (__fastcall *)(struct CEndpointCharacteristics *))v7)(v21[0]);
          }
        }
        CoTaskMemFree(v20);
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      pv = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &pv) >= 0 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, unsigned __int16 **))(*(_QWORD *)pv + 40LL))(pv, &v20) >= 0 )
        {
          v21[0] = 0LL;
          CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v8, v20, v21);
          if ( v21[0] )
          {
            v10 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v21[0] + 16LL);
            if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
                (__int64)v21[0],
                v9);
            else
              ((void (__fastcall *)(struct CEndpointCharacteristics *))v10)(v21[0]);
          }
        }
        CoTaskMemFree(v20);
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      pv = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &pv) >= 0 )
      {
        v20 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, unsigned __int16 **))(*(_QWORD *)pv + 40LL))(pv, &v20) >= 0 )
        {
          v21[0] = 0LL;
          CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v11, v20, v21);
          if ( v21[0] )
          {
            v13 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v21[0] + 16LL);
            if ( v13 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
              Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
                (__int64)v21[0],
                v12);
            else
              ((void (__fastcall *)(struct CEndpointCharacteristics *))v13)(v21[0]);
          }
        }
        CoTaskMemFree(v20);
      }
      if ( pv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
      v18 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, 1LL, &v18) >= 0
        && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v22) >= 0 )
      {
        for ( i = 0; i < v22; ++i )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v18 + 32LL))(v18, i, &pv) >= 0 )
          {
            v20 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, unsigned __int16 **))(*(_QWORD *)pv + 40LL))(pv, &v20) >= 0 )
            {
              v21[0] = 0LL;
              CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(v15, v20, v21);
              if ( v21[0] )
              {
                v17 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v21[0] + 16LL);
                if ( v17 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
                    (__int64)v21[0],
                    v16);
                else
                  ((void (__fastcall *)(struct CEndpointCharacteristics *))v17)(v21[0]);
              }
            }
            CoTaskMemFree(v20);
          }
          if ( pv )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
        }
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
