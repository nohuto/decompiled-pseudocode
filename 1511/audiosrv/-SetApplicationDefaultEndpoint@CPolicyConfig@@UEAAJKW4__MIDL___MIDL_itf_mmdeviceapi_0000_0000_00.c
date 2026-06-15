/*
 * XREFs of ?SetApplicationDefaultEndpoint@CPolicyConfig@@UEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z @ 0x180084520
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180038050 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18006668C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?SetAt@?$CAtlMap@KV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@K@2@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@QEAAPEAU__POSITION@@KPEBG@Z @ 0x1800847E4 (-SetAt@-$CAtlMap@KV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V-$CElementTrai.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPolicyConfig::SetApplicationDefaultEndpoint(
        struct _RTL_CRITICAL_SECTION *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        const unsigned __int16 *a4)
{
  __int64 v5; // r14
  unsigned int v6; // r15d
  struct IUnknown *v8; // rdi
  struct IUnknown *v9; // rbx
  HRESULT Instance; // esi
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // rbx
  int v14; // [rsp+30h] [rbp-88h] BYREF
  struct IUnknown *v15; // [rsp+38h] [rbp-80h] BYREF
  struct IUnknown *v16; // [rsp+40h] [rbp-78h] BYREF
  LPVOID ppv[2]; // [rsp+48h] [rbp-70h] BYREF
  ATL::CAtlException *v18; // [rsp+58h] [rbp-60h] BYREF
  ATL::CAtlException *v19; // [rsp+60h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+68h] [rbp-50h] BYREF
  char v21; // [rsp+70h] [rbp-48h]
  int v22; // [rsp+C0h] [rbp+8h]

  ppv[1] = (LPVOID)-2LL;
  v5 = a3;
  v6 = a2;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  ppv[0] = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  if ( (unsigned int)v5 <= 2 )
  {
    Instance = CoCreateInstance(
                 &GUID_06cca63e_9941_441b_b004_39f999ada412,
                 0LL,
                 0x17u,
                 &GUID_8079001f_4cbb_4eb9_85df_a7e5eb250e7d,
                 ppv);
    if ( Instance < 0 )
      goto LABEL_13;
    Instance = mmdDevGetMMDeviceFromInterfaceId(a4, &v15);
    if ( Instance < 0 )
      goto LABEL_13;
    v9 = v16;
    v8 = v15;
    if ( v16 != v15 )
    {
      ATL::AtlComQIPtrAssign(&v16, v15, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
      v8 = v15;
      v9 = v16;
    }
    if ( v9 )
    {
      Instance = ((__int64 (__fastcall *)(struct IUnknown *, int *))v9->lpVtbl[1].QueryInterface)(v9, &v14);
      if ( Instance >= 0 )
      {
        if ( v14 )
        {
          try
          {
            ATL::CAtlMap<unsigned long,ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>>::SetAt(
              &this[9].OwningThread + 8 * v5 + v5,
              v6,
              a4);
          }
          catch ( ATL::CAtlException *v19 )
          {
            v13 = v19;
            if ( *(_DWORD *)v19 == -1073741571 )
              _resetstkoflw();
            v22 = *(_DWORD *)v13;
LABEL_10:
            Instance = v22;
            if ( v22 < 0 )
              goto LABEL_13;
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
          catch ( ATL::CAtlException *v18 )
          {
            v12 = v18;
            if ( *(_DWORD *)v18 == -1073741571 )
              _resetstkoflw();
            v22 = *(_DWORD *)v12;
            goto LABEL_10;
          }
        }
        Instance = (*(__int64 (__fastcall **)(LPVOID, struct IUnknown *, _QWORD, _QWORD))(*(_QWORD *)ppv[0] + 96LL))(
                     ppv[0],
                     v15,
                     (unsigned int)v5,
                     v6);
      }
LABEL_13:
      v8 = v15;
      v9 = v16;
      goto LABEL_15;
    }
  }
  Instance = -2147024809;
LABEL_15:
  if ( v9 )
  {
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v8 = v15;
  }
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)Instance;
}
