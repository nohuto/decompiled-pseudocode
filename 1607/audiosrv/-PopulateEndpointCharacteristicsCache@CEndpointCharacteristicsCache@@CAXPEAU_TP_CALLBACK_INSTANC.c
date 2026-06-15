/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002F640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180008370 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WORK Work)
{
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  void (*v5)(void); // rax
  __int64 (__fastcall *v6)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  void (*v7)(void); // rax
  int v8; // eax
  __int64 v9; // r8
  unsigned int i; // edi
  __int64 (__fastcall *v11)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **); // rax
  void (*v12)(void); // rax
  void (*v13)(void); // rax
  void (*v14)(void); // rax
  unsigned __int16 *v15; // [rsp+30h] [rbp-30h] BYREF
  struct CEndpointCharacteristics *v16; // [rsp+38h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18[3]; // [rsp+48h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+48h] BYREF

  v18[1] = -2LL;
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
      if ( !LOBYTE(Context[13].Ptr) )
      {
        v15 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)ppv + 32LL))(
               ppv,
               0LL,
               0LL,
               &v15) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(unsigned __int16 *, LPVOID *))(*(_QWORD *)v15 + 40LL))(v15, &pv) >= 0 )
          {
            v16 = 0LL;
            v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))*((_QWORD *)Context->Ptr + 3);
            if ( v4 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
              CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                Context,
                (const unsigned __int16 *)pv,
                &v16);
            else
              v4(Context, (const unsigned __int16 *)pv, &v16);
            if ( v16 )
            {
              v5 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
              if ( (char *)v5 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v16);
              else
                v5();
            }
          }
          CoTaskMemFree(pv);
        }
        if ( v15 )
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v15 + 16LL))(v15);
        if ( !LOBYTE(Context[13].Ptr) )
        {
          v16 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)ppv + 32LL))(
                 ppv,
                 1LL,
                 0LL,
                 &v16) >= 0 )
          {
            pv = 0LL;
            if ( (*(int (__fastcall **)(struct CEndpointCharacteristics *, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &pv) >= 0 )
            {
              v18[0] = 0LL;
              (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, __int64 *))Context->Ptr + 3))(Context, pv, v18);
              if ( v18[0] )
              {
                v13 = *(void (**)(void))(*(_QWORD *)v18[0] + 16LL);
                if ( (char *)v13 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18[0]);
                else
                  v13();
              }
            }
            CoTaskMemFree(pv);
          }
          if ( v16 )
            (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL))(v16);
        }
      }
      if ( !LOBYTE(Context[13].Ptr) )
      {
        v15 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, unsigned __int16 **))(*(_QWORD *)ppv + 32LL))(
               ppv,
               0LL,
               2LL,
               &v15) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(unsigned __int16 *, LPVOID *))(*(_QWORD *)v15 + 40LL))(v15, &pv) >= 0 )
          {
            v16 = 0LL;
            v6 = (__int64 (__fastcall *)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))*((_QWORD *)Context->Ptr + 3);
            if ( v6 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
              CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                Context,
                (const unsigned __int16 *)pv,
                &v16);
            else
              v6(Context, (const unsigned __int16 *)pv, &v16);
            if ( v16 )
            {
              v7 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
              if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v16);
              else
                v7();
            }
          }
          CoTaskMemFree(pv);
        }
        if ( v15 )
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v15 + 16LL))(v15);
        if ( !LOBYTE(Context[13].Ptr) )
        {
          v16 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, struct CEndpointCharacteristics **))(*(_QWORD *)ppv + 32LL))(
                 ppv,
                 1LL,
                 2LL,
                 &v16) >= 0 )
          {
            pv = 0LL;
            if ( (*(int (__fastcall **)(struct CEndpointCharacteristics *, LPVOID *))(*(_QWORD *)v16 + 40LL))(v16, &pv) >= 0 )
            {
              v18[0] = 0LL;
              (*((void (__fastcall **)(RTL_SRWLOCK *, LPVOID, __int64 *))Context->Ptr + 3))(Context, pv, v18);
              if ( v18[0] )
              {
                v14 = *(void (**)(void))(*(_QWORD *)v18[0] + 16LL);
                if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v18[0]);
                else
                  v14();
              }
            }
            CoTaskMemFree(pv);
          }
          if ( v16 )
            (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL))(v16);
          if ( !LOBYTE(Context[13].Ptr) )
          {
            v16 = 0LL;
            v8 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v9 = 1LL;
            if ( v8 )
              v9 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, struct CEndpointCharacteristics **))(*(_QWORD *)ppv + 24LL))(
                   ppv,
                   2LL,
                   v9,
                   &v16) >= 0
              && (*(int (__fastcall **)(struct CEndpointCharacteristics *, LPVOID *))(*(_QWORD *)v16 + 24LL))(v16, &pv) >= 0 )
            {
              for ( i = 0; !LOBYTE(Context[13].Ptr) && i < (unsigned int)pv; ++i )
              {
                v18[0] = 0LL;
                if ( (*(int (__fastcall **)(struct CEndpointCharacteristics *, _QWORD, __int64 *))(*(_QWORD *)v16 + 32LL))(
                       v16,
                       i,
                       v18) >= 0 )
                {
                  v15 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, unsigned __int16 **))(*(_QWORD *)v18[0] + 40LL))(v18[0], &v15) >= 0 )
                  {
                    v17 = 0LL;
                    v11 = (__int64 (__fastcall *)(RTL_SRWLOCK *, const unsigned __int16 *, struct CEndpointCharacteristics **))*((_QWORD *)Context->Ptr + 3);
                    if ( v11 == CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics )
                      CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(Context, v15, &v17);
                    else
                      v11(Context, v15, &v17);
                    if ( v17 )
                    {
                      v12 = *(void (**)(void))(*(_QWORD *)v17 + 16LL);
                      if ( (char *)v12 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
                        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v17);
                      else
                        v12();
                    }
                  }
                  CoTaskMemFree(v15);
                }
                if ( v18[0] )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
              }
            }
            if ( v16 )
              (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v16 + 16LL))(v16);
          }
        }
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
