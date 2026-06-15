/*
 * XREFs of ?SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x18006E170
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180050D24 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?SetAt@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@KPEBG@Z @ 0x18006E418 (-SetAt@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrai.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::SetApplicationDefaultEndpoint(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  struct IUnknown *v8; // rcx
  struct IUnknown *v9; // rax
  HRESULT Instance; // ebx
  struct IUnknown *v11; // rcx
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  int v15; // [rsp+30h] [rbp-78h] BYREF
  struct IUnknown *v16; // [rsp+38h] [rbp-70h] BYREF
  struct IUnknown *v17; // [rsp+40h] [rbp-68h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-60h] BYREF
  ATL::CAtlException *v19; // [rsp+58h] [rbp-50h] BYREF
  ATL::CAtlException *v20; // [rsp+60h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-40h] BYREF
  char v22; // [rsp+70h] [rbp-38h]
  int v23; // [rsp+B0h] [rbp+8h]

  ppv[1] = (LPVOID)-2LL;
  v5 = a3;
  v6 = a2;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  ppv[0] = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  v9 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)v5 > 2 )
  {
    Instance = -2147024809;
    goto LABEL_15;
  }
  Instance = CoCreateInstance(
               &GUID_06cca63e_9941_441b_b004_39f999ada412,
               0LL,
               0x17u,
               &GUID_cc08e979_3b54_451c_8ac3_ba2809744615,
               ppv);
  if ( Instance < 0 )
    goto LABEL_16;
  Instance = mmdDevGetMMDeviceFromInterfaceId(a4, &v16);
  if ( Instance < 0 )
    goto LABEL_16;
  v11 = v17;
  if ( v17 != v16 )
  {
    ATL::AtlComQIPtrAssign(&v17, v16, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
    v11 = v17;
  }
  if ( v11 )
  {
    Instance = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[1].QueryInterface)(v11, &v15);
    if ( Instance < 0 )
      goto LABEL_16;
    if ( v15 )
    {
      try
      {
        ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::SetAt(
          &this[9].OwningThread + 8 * v5 + v5,
          v6,
          a4);
      }
      catch ( ATL::CAtlException *v20 )
      {
        v14 = v20;
        if ( *(_DWORD *)v20 == -1073741571 )
          _o__resetstkoflw();
        v23 = *(_DWORD *)v14;
LABEL_11:
        Instance = v23;
        if ( v23 < 0 )
          goto LABEL_16;
        v6 = a2;
        LODWORD(v5) = a3;
      }
    }
    else
    {
      try
      {
        ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::SetAt(
          (char *)&this[4] + 64 * v5 + 8 * v5,
          v6,
          a4);
      }
      catch ( ATL::CAtlException *v19 )
      {
        v13 = v19;
        if ( *(_DWORD *)v19 == -1073741571 )
          _o__resetstkoflw();
        v23 = *(_DWORD *)v13;
        goto LABEL_11;
      }
    }
    Instance = (*(__int64 (__fastcall **)(LPVOID, struct IUnknown *, _QWORD, _QWORD))(*(_QWORD *)ppv[0] + 96LL))(
                 ppv[0],
                 v16,
                 (unsigned int)v5,
                 v6);
    v8 = v16;
    v9 = v17;
LABEL_15:
    if ( Instance >= 0 )
      goto LABEL_17;
    goto LABEL_16;
  }
  Instance = -2147024809;
LABEL_16:
  AudSrvTraceLoggingErrorHelper("CPolicyConfig::SetApplicationDefaultEndpoint", 4108, Instance);
  v8 = v16;
  v9 = v17;
LABEL_17:
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v8 = v16;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  if ( v22 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
