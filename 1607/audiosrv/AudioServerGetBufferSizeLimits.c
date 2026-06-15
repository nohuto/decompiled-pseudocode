/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x180072450
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIEndpointCharacteristics@@VNil@Details@WRL@Microsoft@@.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18006899C (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        __int64 a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  __int64 v6; // rbx
  __int64 v9; // rax
  int v10; // edi
  int KSFormatFromWFXFormat; // eax
  __int64 v12; // rdx
  void *v13; // rsi
  void (*v14)(void); // rax
  _QWORD *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+48h] [rbp-8h] BYREF

  v6 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v9 = *(_QWORD *)g_pEndpointCharacteristicsCache;
  pv = 0LL;
  v10 = (*(__int64 (__fastcall **)(CEndpointCharacteristicsCache *, __int64, _QWORD **))(v9 + 24))(
          g_pEndpointCharacteristicsCache,
          a2,
          &v16);
  if ( v10 < 0 )
    goto LABEL_11;
  v6 = v16[2];
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v10 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v6 + 24LL))(
          v6,
          &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
          1LL);
  if ( v10 < 0 )
    goto LABEL_11;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 64LL))(v18, &v17);
  if ( v10 < 0 )
    goto LABEL_11;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v13 = pv;
  v10 = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, _QWORD *))(*(_QWORD *)v17 + 80LL))(v17, pv, a5, a6);
    if ( v10 >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        v12 = *a6 % 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v13 )
    CoTaskMemFree(v13);
  if ( v10 < 0 )
LABEL_11:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4431, v10);
  if ( v16 )
  {
    v14 = *(void (**)(void))(*v16 + 16LL);
    if ( (char *)v14 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IEndpointCharacteristics,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((__int64)v16);
    else
      v14();
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 16LL))(v17, v12);
  if ( v18 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v12);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16LL))(v6, v12);
  return (unsigned int)v10;
}
