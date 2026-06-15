/*
 * XREFs of ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067C88
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180068DB0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x18006DD10 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18006EB18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_it.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067B44 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18006ACE4 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat(
        struct CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        __int32 a4,
        int a5)
{
  GUID *v8; // rdi
  __int64 v9; // rbx
  AEError *CanRenderFormat; // rsi
  unsigned int v11; // r14d
  GUID *v12; // rax
  int v13; // edx
  _QWORD v15[4]; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v16; // [rsp+50h] [rbp-48h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+8h] BYREF
  struct _GUID *v18; // [rsp+B0h] [rbp+18h]

  v18 = a3;
  v15[1] = -2LL;
  v17 = 0LL;
  v15[0] = 0LL;
  v8 = 0LL;
  v9 = *((_QWORD *)this + 2);
  v15[2] = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  LODWORD(CanRenderFormat) = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 24LL))(
                               v9,
                               &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                               23LL,
                               0LL,
                               &v17);
  if ( (int)CanRenderFormat >= 0 )
  {
    v11 = a2->cbSize + 82;
    v12 = (GUID *)operator new(v11);
    v8 = v12;
    if ( v12 )
    {
      memset(v12, 0, v11);
      v8->Data1 = v11;
      v8[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
      v8[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      if ( a2->wFormatTag == 0xFFFE )
      {
        v8[2] = *(GUID *)((char *)&a2[1].nSamplesPerSec + 2);
      }
      else
      {
        v8[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
        v8[2].Data1 = a2->wFormatTag;
      }
      memcpy_0(&v8[4], a2, a2->cbSize + 18LL);
      if ( a4 != 3 )
        LODWORD(CanRenderFormat) = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v17 + 24LL))(
                                     v17,
                                     v8,
                                     v8->Data1,
                                     0LL,
                                     v15);
      if ( (_DWORD)CanRenderFormat )
      {
        LODWORD(CanRenderFormat) = -2004287480;
      }
      else
      {
        v16 = *v18;
        CanRenderFormat = (AEError *)(unsigned int)CPolicyConfig::ConfirmDeviceCanRenderFormat(this, a2, &v16, a4, a5);
        if ( AEError::DeviceInUse(CanRenderFormat, v13) )
          LODWORD(CanRenderFormat) = 0;
      }
    }
    else
    {
      LODWORD(CanRenderFormat) = -2147024882;
    }
  }
  operator delete(v8);
  if ( (int)CanRenderFormat < 0 )
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::ConfirmDeviceFormat", 2369, (int)CanRenderFormat);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v15[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return (unsigned int)CanRenderFormat;
}
