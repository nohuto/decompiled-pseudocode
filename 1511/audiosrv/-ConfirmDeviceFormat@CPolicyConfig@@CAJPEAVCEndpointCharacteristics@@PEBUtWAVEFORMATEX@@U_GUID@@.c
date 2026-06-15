/*
 * XREFs of ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007FA60
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180080460 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180084310 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180084E18 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007F914 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat(
        struct CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        unsigned __int32 a4,
        int a5)
{
  GUID *v8; // r14
  __int64 v9; // rdi
  int CanRenderFormat; // esi
  unsigned int v11; // ebx
  GUID *v12; // rax
  _QWORD v14[4]; // [rsp+30h] [rbp-68h] BYREF
  struct _GUID v15; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+A0h] [rbp+8h] BYREF
  struct _GUID *v17; // [rsp+B0h] [rbp+18h]

  v17 = a3;
  v14[1] = -2LL;
  v16 = 0LL;
  v14[0] = 0LL;
  v8 = 0LL;
  v9 = *((_QWORD *)this + 2);
  v14[2] = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 24LL))(
                      v9,
                      &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                      23LL,
                      0LL,
                      &v16);
  if ( CanRenderFormat >= 0 )
  {
    v11 = a2->cbSize + 82;
    v12 = (GUID *)operator new(v11);
    v8 = v12;
    if ( v12 )
    {
      memset_0(v12, 0, v11);
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
        CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v16 + 24LL))(
                            v16,
                            v8,
                            v8->Data1,
                            0LL,
                            v14);
      if ( CanRenderFormat )
      {
        CanRenderFormat = -2004287480;
      }
      else
      {
        v15 = *v17;
        CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat((struct IMMDevice **)this, a2, &v15, a4, a5);
        if ( CanRenderFormat == -2005139389 )
          CanRenderFormat = 0;
      }
    }
    else
    {
      CanRenderFormat = -2147024882;
    }
  }
  operator delete(v8);
  if ( CanRenderFormat < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Fu,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      CanRenderFormat);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v14[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return (unsigned int)CanRenderFormat;
}
