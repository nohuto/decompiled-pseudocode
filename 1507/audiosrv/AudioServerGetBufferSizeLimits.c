/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x18008C500
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180024370 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180031424 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        CEndpointCharacteristicsCache *a1,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v6; // rsi
  int AliasedEndpointCharacteristics; // eax
  __int64 v9; // rdx
  struct CEndpointCharacteristics *v10; // rdi
  int v11; // r14d
  int KSFormatFromWFXFormat; // eax
  void *v13; // r15
  unsigned int (__fastcall *v14)(__int64, volatile int *); // rbx
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h]
  struct CEndpointCharacteristics *v18; // [rsp+40h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(a1, a2, &v18);
  v10 = v18;
  v11 = AliasedEndpointCharacteristics;
  if ( AliasedEndpointCharacteristics >= 0 )
  {
    v6 = *((_QWORD *)v18 + 2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
            v6,
            &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
            1LL);
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 64LL))(v17, &v16);
      if ( v11 >= 0 )
      {
        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
        v13 = pv;
        v11 = KSFormatFromWFXFormat;
        if ( KSFormatFromWFXFormat >= 0 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, _QWORD *))(*(_QWORD *)v16 + 80LL))(
                  v16,
                  pv,
                  a5,
                  a6);
          if ( v11 >= 0 )
          {
            if ( a4 )
            {
              *a5 /= 2LL;
              v9 = *a6 % 2LL;
              *a6 /= 2LL;
            }
          }
        }
        if ( v13 )
          CoTaskMemFree(v13);
      }
    }
  }
  if ( v10 )
  {
    v14 = *(unsigned int (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v10 + 16LL);
    if ( v14 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(
        (__int64)v10,
        (volatile int *)v9);
    else
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v14)(v10);
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v11;
}
