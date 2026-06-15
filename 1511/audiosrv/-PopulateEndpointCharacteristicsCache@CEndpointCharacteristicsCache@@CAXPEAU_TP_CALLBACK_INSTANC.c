/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180042580
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=17
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_WORK Work)
{
  unsigned int v4; // esi
  unsigned int i; // esi
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int16 *v7; // [rsp+38h] [rbp-28h] BYREF
  struct CEndpointCharacteristics *v8; // [rsp+40h] [rbp-20h] BYREF
  struct CEndpointCharacteristics *v9[3]; // [rsp+48h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+48h] BYREF

  v9[1] = (struct CEndpointCharacteristics *)-2LL;
  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0
      && !LOBYTE(Context[11].Ptr) )
    {
      v6 = 0LL;
      if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v6) >= 0 )
      {
        pv = 0LL;
        if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0 )
        {
          v8 = 0LL;
          CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(Context, (const unsigned __int16 *)pv, &v8);
          if ( v8 )
            (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
        }
        CoTaskMemFree(pv);
      }
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      if ( !LOBYTE(Context[11].Ptr) )
      {
        v6 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v6) >= 0 )
        {
          pv = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0 )
          {
            v8 = 0LL;
            CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(Context, (const unsigned __int16 *)pv, &v8);
            if ( v8 )
              (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
          }
          CoTaskMemFree(pv);
        }
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        if ( !LOBYTE(Context[11].Ptr) )
        {
          v6 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v6) >= 0 )
          {
            pv = 0LL;
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0 )
            {
              v8 = 0LL;
              CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                Context,
                (const unsigned __int16 *)pv,
                &v8);
              if ( v8 )
                (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
            }
            CoTaskMemFree(pv);
          }
          if ( v6 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          if ( !LOBYTE(Context[11].Ptr) )
          {
            v6 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(
                   ppv,
                   1LL,
                   2LL,
                   &v6) >= 0 )
            {
              pv = 0LL;
              if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 40LL))(v6, &pv) >= 0 )
              {
                v8 = 0LL;
                CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                  Context,
                  (const unsigned __int16 *)pv,
                  &v8);
                if ( v8 )
                  (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
              }
              CoTaskMemFree(pv);
            }
            if ( v6 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
            if ( !LOBYTE(Context[11].Ptr) )
            {
              v6 = 0LL;
              v4 = 1;
              if ( (unsigned int)PerformEndpointDiscoveryForUnpluggedEndpoints() )
                v4 = 9;
              if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, __int64 *))(*(_QWORD *)ppv + 24LL))(
                     ppv,
                     2LL,
                     v4,
                     &v6) >= 0
                && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v6 + 24LL))(v6, &pv) >= 0 )
              {
                for ( i = 0; !LOBYTE(Context[11].Ptr) && i < (unsigned int)pv; ++i )
                {
                  v8 = 0LL;
                  if ( (*(int (__fastcall **)(__int64, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)v6 + 32LL))(
                         v6,
                         i,
                         &v8) >= 0 )
                  {
                    v7 = 0LL;
                    if ( (*(int (__fastcall **)(struct CEndpointCharacteristics *, unsigned __int16 **))(*(_QWORD *)v8 + 40LL))(
                           v8,
                           &v7) >= 0 )
                    {
                      v9[0] = 0LL;
                      CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(Context, v7, v9);
                      if ( v9[0] )
                        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
                    }
                    CoTaskMemFree(v7);
                  }
                  if ( v8 )
                    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v8 + 16LL))(v8);
                }
              }
              if ( v6 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
            }
          }
        }
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
