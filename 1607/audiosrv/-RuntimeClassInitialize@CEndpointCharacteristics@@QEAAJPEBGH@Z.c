/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18002E8FC
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800341BC (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800276E8 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ??4?$CComQIPtr@UIMMEndpointInternal@@$1?_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@B@ATL@@QEAAPEAUIMMEndpointInternal@@PEAUIUnknown@@@Z @ 0x180027844 (--4-$CComQIPtr@UIMMEndpointInternal@@$1-_GUID_eecca8a7_a629_4dba_9f23_20f6db42d990@@3U__s_GUID@@.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18002DF50 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18002E3CC (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  HRESULT Instance; // ebx
  struct IUnknown **v7; // rsi
  _QWORD *v8; // r14
  __int64 v9; // r8
  int v10; // eax
  struct IUnknown *v11; // rcx
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v15[2]; // [rsp+38h] [rbp-28h] BYREF
  PROPVARIANT pvar; // [rsp+48h] [rbp-18h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+58h] [rbp-8h]
  int v19; // [rsp+A0h] [rbp+40h] BYREF
  struct IUnknown *v20; // [rsp+B8h] [rbp+58h] BYREF

  v15[1] = (LPVOID)-2LL;
  v15[0] = 0LL;
  v20 = 0LL;
  v14 = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v15);
  if ( Instance >= 0 )
  {
    v7 = (struct IUnknown **)((char *)this + 16);
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)v15[0] + 40LL))(
                 v15[0],
                 a2,
                 (char *)this + 16);
    if ( Instance >= 0 )
    {
      v8 = (_QWORD *)((char *)this + 32);
      Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))(*v7)->lpVtbl[1].AddRef)(
                   *v7,
                   0LL,
                   (char *)this + 32);
      if ( Instance >= 0 )
      {
        ATL::CComQIPtr<IMMEndpointInternal,&__s_GUID const _GUID_eecca8a7_a629_4dba_9f23_20f6db42d990>::operator=(
          &v14,
          *v7,
          v9);
        if ( !v14 )
          goto LABEL_29;
        (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 40LL))(v14, 0LL, (char *)this + 56);
        *((_DWORD *)this + 6) = GetClassFromEndpointId(a2);
        Instance = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this);
        if ( Instance < 0 )
          goto LABEL_22;
        Instance = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v8 + 40LL))(
                     *v8,
                     &PKEY_AudioEngine_LatencyCoefficient,
                     &pvar);
        if ( Instance < 0 )
          goto LABEL_22;
        if ( (_WORD)pvar == 19 )
        {
          v10 = v17;
        }
        else
        {
          if ( (_WORD)pvar )
          {
            Instance = -2147418113;
            goto LABEL_22;
          }
          v10 = 0;
        }
        *((_DWORD *)this + 92) = v10;
        v11 = v20;
        if ( v20 != *v7 )
        {
          ATL::AtlComQIPtrAssign(&v20, *v7, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v11 = v20;
        }
        if ( !v11 )
        {
LABEL_29:
          Instance = -2147467262;
          goto LABEL_22;
        }
        Instance = ((__int64 (__fastcall *)(struct IUnknown *, int *))v11->lpVtbl[1].QueryInterface)(v11, &v19);
        if ( Instance >= 0 )
        {
          *((_DWORD *)this + 93) = v19 != 0;
          PropVariantClear(&pvar);
          if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v8 + 40LL))(
                 *v8,
                 &PKEY_MMDEVAPI_ActiveTime,
                 &pvar) >= 0
            && (_WORD)pvar == 21 )
          {
            *((_QWORD *)this + 47) = v17;
          }
          else
          {
            *((_QWORD *)this + 47) = 0LL;
          }
          PropVariantClear(&pvar);
          if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)*v8 + 40LL))(
                 *v8,
                 &PKEY_Endpoint_KeywordDetector_ConnectorId,
                 &pvar) < 0
            || (v12 = 1, (_WORD)pvar != 19) )
          {
            v12 = 0;
          }
          *((_DWORD *)this + 100) = v12;
          *((_DWORD *)this + 97) = 0;
          *((_DWORD *)this + 99) = 0;
          *((_DWORD *)this + 101) = 0;
          if ( a3 )
            Instance = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics(this);
        }
      }
    }
  }
LABEL_22:
  PropVariantClear(&pvar);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v20 )
    ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
  if ( v15[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  return (unsigned int)Instance;
}
