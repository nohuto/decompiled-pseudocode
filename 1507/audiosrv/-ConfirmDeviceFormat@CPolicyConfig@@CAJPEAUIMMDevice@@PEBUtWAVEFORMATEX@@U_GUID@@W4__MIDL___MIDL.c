/*
 * XREFs of ?ConfirmDeviceFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032F04
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800336B0 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@QEAAJPEAVCEndpointCharacteristics@@W4__MIDL.c)
 *     ?SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180033B28 (-SetDeviceFormatSwAudioEngine@CPolicyConfig@@AEAAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180087E50 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180032BB8 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MI.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::ConfirmDeviceFormat(
        struct IUnknown *a1,
        const struct tWAVEFORMATEX *a2,
        struct _GUID *a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        int a5)
{
  GUID *v9; // rsi
  int CanRenderFormat; // ebp
  unsigned int v11; // ebx
  HANDLE ProcessHeap; // rax
  GUID *v13; // rax
  HANDLE v14; // rax
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  struct _GUID v17; // [rsp+40h] [rbp-38h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v16[1] = -2LL;
  v18 = 0LL;
  v16[0] = 0LL;
  v9 = 0LL;
  CanRenderFormat = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl[1].QueryInterface)(
                      a1,
                      &GUID_00bf79d8_20f2_4b3d_a648_d633308ccfe9,
                      23LL,
                      0LL,
                      &v18);
  if ( CanRenderFormat >= 0 )
  {
    v11 = a2->cbSize + 82;
    ProcessHeap = GetProcessHeap();
    v13 = (GUID *)HeapAlloc(ProcessHeap, 0, v11);
    v9 = v13;
    if ( v13 )
    {
      memset_0(v13, 0, v11);
      v9->Data1 = v11;
      v9[1] = GUID_73647561_0000_0010_8000_00aa00389b71;
      v9[3] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
      if ( a2->wFormatTag == 0xFFFE )
      {
        v9[2] = *(GUID *)((char *)&a2[1].nSamplesPerSec + 2);
      }
      else
      {
        v9[2] = GUID_00000000_0000_0010_8000_00aa00389b71;
        v9[2].Data1 = a2->wFormatTag;
      }
      memcpy_0(&v9[4], a2, a2->cbSize + 18LL);
      if ( a4 != eKeywordDetectorConnector )
        CanRenderFormat = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v18 + 24LL))(
                            v18,
                            v9,
                            v9->Data1,
                            0LL,
                            v16);
      if ( CanRenderFormat )
      {
        CanRenderFormat = -2004287480;
      }
      else
      {
        v17 = *a3;
        CanRenderFormat = CPolicyConfig::ConfirmDeviceCanRenderFormat(a1, (__int64)a2, (__int64)&v17, a4, a5);
      }
    }
    else
    {
      CanRenderFormat = -2147024882;
    }
  }
  v14 = GetProcessHeap();
  HeapFree(v14, 0, v9);
  if ( CanRenderFormat < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x1Du,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      CanRenderFormat);
  }
  if ( v16[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return (unsigned int)CanRenderFormat;
}
