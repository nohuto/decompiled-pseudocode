/*
 * XREFs of ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x180070A70
 * Callers:
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x180071C90 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180027BAC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?StringCbCatW@@YAJPEAG_KPEBG@Z @ 0x180072304 (-StringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall EndpointRequiresAC97VistaShim(struct IMMDevice *a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  struct IUnknown *v4; // rcx
  LPVOID pv; // [rsp+48h] [rbp-C0h] BYREF
  struct IUnknown *v7; // [rsp+50h] [rbp-B8h] BYREF
  DWORD pcbData[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+70h] [rbp-98h] BYREF
  struct IUnknown *v12; // [rsp+78h] [rbp-90h] BYREF
  __int64 v13; // [rsp+80h] [rbp-88h] BYREF
  DWORD pdwType[2]; // [rsp+88h] [rbp-80h] BYREF
  LPVOID ppv; // [rsp+90h] [rbp-78h] BYREF
  PROPVARIANT pvar; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int16 *v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A8h] [rbp-60h]
  __int64 v19; // [rsp+B0h] [rbp-58h]
  WCHAR SubKey[264]; // [rsp+B8h] [rbp-50h] BYREF
  WCHAR String1[264]; // [rsp+2C8h] [rbp+1C0h] BYREF

  v19 = -2LL;
  ppv = 0LL;
  *(_QWORD *)pdwType = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  v7 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  pv = 0LL;
  v2 = 0;
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv);
  if ( v3 >= 0 )
  {
    v3 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, DWORD *))a1->lpVtbl->Activate)(
           a1,
           &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
           23LL,
           0LL,
           pdwType);
    if ( v3 >= 0 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)pdwType + 32LL))(
             *(_QWORD *)pdwType,
             0LL,
             &v13);
      if ( v3 >= 0 )
      {
        v3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v13 + 80LL))(v13, &pv);
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, struct IUnknown **))(*(_QWORD *)ppv + 40LL))(ppv, pv, &v12);
          if ( v3 >= 0 )
          {
            v4 = v7;
            if ( v7 != v12 )
            {
              ATL::AtlComQIPtrAssign(&v7, v12, &GUID_78b60045_08a6_4ac3_8ac7_d3307c2d2e63);
              v4 = v7;
            }
            if ( v4 )
            {
              v3 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v4->lpVtbl[1].QueryInterface)(v4, &v10);
              if ( v3 >= 0 )
              {
                v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
                       v10,
                       &GUID_d666063f_1587_4e43_81f1_b948e807363f,
                       &v11);
                if ( v3 >= 0 )
                {
                  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, &v9);
                  if ( v3 >= 0 )
                  {
                    v3 = (*(__int64 (__fastcall **)(__int64, const DEVPROPKEY *, PROPVARIANT *))(*(_QWORD *)v9 + 40LL))(
                           v9,
                           &DEVPKEY_Device_Driver,
                           &pvar);
                    if ( v3 >= 0 && (_WORD)pvar == 31 )
                    {
                      pcbData[0] = 520;
                      v3 = StringCbCopyW(SubKey, 0x208uLL, (size_t *)L"SYSTEM\\CurrentControlSet\\Control\\Class\\");
                      if ( v3 >= 0 )
                      {
                        v3 = StringCbCatW(SubKey, 0x208uLL, v17);
                        if ( v3 >= 0 && !RegGetValueW(HKEY_LOCAL_MACHINE, SubKey, L"Driver", 2u, 0LL, String1, pcbData) )
                          LOBYTE(v2) = CompareStringOrdinal(String1, -1, L"smwdm.sys", 9, 1) == 2;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v3 = -2147467262;
            }
          }
        }
      }
    }
  }
  PropVariantClear(&pvar);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  if ( v3 < 0 )
    AudSrvTraceLoggingErrorHelper("EndpointRequiresAC97VistaShim", 4839, v3);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v12 )
    ((void (__fastcall *)(struct IUnknown *))v12->lpVtbl->Release)(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( *(_QWORD *)pdwType )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)pdwType + 16LL))(*(_QWORD *)pdwType);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v2;
}
