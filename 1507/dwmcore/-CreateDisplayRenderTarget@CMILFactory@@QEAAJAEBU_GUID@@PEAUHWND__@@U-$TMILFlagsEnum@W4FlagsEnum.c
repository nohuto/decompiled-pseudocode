/*
 * XREFs of ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x18008E418
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18004ADC0 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800FA8A0 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMILFactory::CreateDisplayRenderTarget(
        __int64 a1,
        struct _GUID *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64); // rsi
  int v10; // edi
  int v11; // eax
  int v13; // ebx
  unsigned int v14; // [rsp+20h] [rbp-18h]
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64); // [rsp+50h] [rbp+18h] BYREF
  int v16; // [rsp+58h] [rbp+20h]

  v16 = a4;
  v15 = 0LL;
  if ( !a6 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, -2147024809, 0xA4u);
    goto LABEL_13;
  }
  if ( (a4 & 0x10) == 0 && !IsWindow(0LL) )
  {
    v13 = -2147023496;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023496, 0x30u);
    v10 = -2147023496;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v13, 0xA7u);
    goto LABEL_10;
  }
  if ( (a4 & 0xCFFF8103) != 0 )
  {
    v14 = 76;
LABEL_20:
    v10 = -2147024809;
    v13 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v14);
    goto LABEL_21;
  }
  if ( (a4 & 0x810) == 0x800 )
  {
    v14 = 84;
    goto LABEL_20;
  }
  if ( (a4 & 0x2010) == 0x2000 )
  {
    v14 = 93;
    goto LABEL_20;
  }
  v8 = CHwDisplayRenderTarget::Create(a2, (__int64)&v15);
  v9 = v15;
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v8, 0xB2u);
  }
  else
  {
    v11 = (**v15)(v15, &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb, a6);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v11, 0xB5u);
  }
  if ( v9 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64)))(*v9)[2])(v9);
LABEL_10:
  if ( v10 < 0 )
LABEL_13:
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v10, 0xBAu);
  return (unsigned int)v10;
}
