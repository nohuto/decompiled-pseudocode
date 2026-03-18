/*
 * XREFs of ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B2304
 * Callers:
 *     ?EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007C430 (-EnsureHwRenderTarget@CHwndRenderTarget@@MEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@MilR.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180114810 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 */

__int64 __fastcall CMILFactory::CreateDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v12; // ebx
  unsigned int v13; // [rsp+20h] [rbp-18h]

  if ( !a6 )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, -2147024809, 0xA4u);
    goto LABEL_12;
  }
  if ( (a4 & 0x10) == 0 && !IsWindow(0LL) )
  {
    v12 = -2147023496;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023496, 0x30u);
    v9 = -2147023496;
LABEL_20:
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v12, 0xA7u);
    goto LABEL_9;
  }
  if ( (a4 & 0xCFFF8103) != 0 )
  {
    v13 = 76;
LABEL_19:
    v9 = -2147024809;
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v13);
    goto LABEL_20;
  }
  if ( (a4 & 0x810) == 0x800 )
  {
    v13 = 84;
    goto LABEL_19;
  }
  if ( (a4 & 0x2010) == 0x2000 )
  {
    v13 = 93;
    goto LABEL_19;
  }
  v8 = CHwDisplayRenderTarget::Create(a2, a2, a5);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v8, 0xB2u);
  }
  else
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, GUID *, __int64))*MEMORY[0])(
            0LL,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            a6);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v10, 0xB5u);
  }
LABEL_9:
  if ( v9 < 0 )
LABEL_12:
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v9, 0xBAu);
  return (unsigned int)v9;
}
