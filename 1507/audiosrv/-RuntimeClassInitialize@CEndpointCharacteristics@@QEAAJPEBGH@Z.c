/*
 * XREFs of ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18003C238
 * Callers:
 *     ??$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointCharacteristics@@AEAPEBGAEAH@Z @ 0x1800423E8 (--$MakeAndInitialize@VCEndpointCharacteristics@@V1@AEAPEBGAEAH@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18003B4FC (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ @ 0x18003BB10 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::RuntimeClassInitialize(
        CEndpointCharacteristics *this,
        const unsigned __int16 *a2,
        int a3)
{
  int Instance; // esi
  struct IUnknown **v6; // r15
  _QWORD *v7; // r12
  struct IUnknown *v8; // rbx
  int v9; // eax
  struct IUnknown *v10; // rbx
  int v11; // eax
  struct IUnknown *v13; // [rsp+30h] [rbp-40h] BYREF
  struct IUnknown *v14; // [rsp+38h] [rbp-38h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-30h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-20h] BYREF
  __int64 v17; // [rsp+58h] [rbp-18h]
  __int64 v18; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+C8h] [rbp+58h] BYREF

  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  pvar = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               ppv);
  if ( Instance >= 0 )
  {
    v6 = (struct IUnknown **)((char *)this + 16);
    Instance = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, char *))(*(_QWORD *)ppv[0] + 40LL))(
                 ppv[0],
                 a2,
                 (char *)this + 16);
    if ( Instance >= 0 )
    {
      v7 = (_QWORD *)((char *)this + 32);
      Instance = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, char *))(*v6)->lpVtbl[1].AddRef)(
                   *v6,
                   0LL,
                   (char *)this + 32);
      if ( Instance >= 0 )
      {
        v8 = v13;
        if ( v13 != *v6 )
        {
          ATL::AtlComQIPtrAssign(&v13, *v6, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211);
          v8 = v13;
        }
        if ( !v8 )
          goto LABEL_31;
        ((void (__fastcall *)(struct IUnknown *, _QWORD, char *))v8->lpVtbl[1].Release)(v8, 0LL, (char *)this + 56);
        *((_DWORD *)this + 6) = GetClassFromEndpointId(a2);
        Instance = CEndpointCharacteristics::DiscoverProcessingModeCapabilities(this);
        if ( Instance < 0 )
          goto LABEL_24;
        Instance = (*(__int64 (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v7 + 40LL))(
                     *v7,
                     &PKEY_AudioEngine_LatencyCoefficient,
                     &pvar);
        if ( Instance < 0 )
          goto LABEL_24;
        if ( (_WORD)pvar == 19 )
        {
          v9 = v17;
        }
        else
        {
          if ( (_WORD)pvar )
          {
            Instance = -2147418113;
            goto LABEL_24;
          }
          v9 = 0;
        }
        *((_DWORD *)this + 92) = v9;
        v10 = v14;
        if ( v14 != *v6 )
        {
          ATL::AtlComQIPtrAssign(&v14, *v6, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
          v10 = v14;
        }
        if ( !v10 )
        {
LABEL_31:
          Instance = -2147467262;
          goto LABEL_24;
        }
        Instance = ((__int64 (__fastcall *)(struct IUnknown *, int *))v10->lpVtbl[1].QueryInterface)(v10, &v20);
        if ( Instance >= 0 )
        {
          *((_DWORD *)this + 93) = v20 != 0;
          PropVariantClear(&pvar);
          if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(*(_QWORD *)*v7 + 40LL))(
                 *v7,
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
          if ( (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)*v7 + 40LL))(
                 *v7,
                 &PKEY_Endpoint_KeywordDetector_ConnectorId,
                 &pvar) < 0
            || (v11 = 1, (_WORD)pvar != 19) )
          {
            v11 = 0;
          }
          *((_DWORD *)this + 101) = v11;
          *((_DWORD *)this + 97) = 0;
          *((_DWORD *)this + 99) = 0;
          *((_DWORD *)this + 102) = 0;
          if ( a3 )
            Instance = CEndpointCharacteristics::DiscoverProcessingModeCharacteristics((struct IPropertyStore **)this);
        }
      }
    }
  }
LABEL_24:
  PropVariantClear(&pvar);
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  if ( v14 )
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
