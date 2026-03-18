/*
 * XREFs of ?CreateDisplayRenderTarget@CMILFactory@@QEAAJAEBU_GUID@@PEAUHWND__@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x1800B5F7C
 * Callers:
 *     ?EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180034700 (-EnsureHwRenderTarget@CDisplay@@QEAAJPEAVCMILFactory@@AEBU_GUID@@U-$TMILFlagsEnum@W4FlagsEnum@Mi.c)
 *     ?EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18012DD30 (-EnsureHwRenderTarget@CHwndRenderTargetDDA@@EEAAJPEAVCMILFactory@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILFactory::CreateDisplayRenderTarget(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // r14
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v14; // esi
  unsigned int v15; // [rsp+20h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  int v17; // [rsp+68h] [rbp+20h]

  v17 = a4;
  v6 = a6;
  v7 = 0LL;
  v16 = 0LL;
  if ( !a6 )
  {
    v11 = -2147024809;
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, -2147024809, 0xA4u);
LABEL_13:
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v11, 0xBAu);
    return (unsigned int)v11;
  }
  if ( (a4 & 0x10) == 0 && !IsWindow(0LL) )
  {
    v14 = -2147023496;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147023496, 0x30u);
    v11 = -2147023496;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v14, 0xA7u);
    goto LABEL_8;
  }
  if ( (a4 & 0xCFFF8103) != 0 )
  {
    v15 = 76;
LABEL_20:
    v11 = -2147024809;
    v14 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v15);
    goto LABEL_21;
  }
  if ( (a4 & 0x810) == 0x800 )
  {
    v15 = 84;
    goto LABEL_20;
  }
  if ( (a4 & 0x2010) == 0x2000 )
  {
    v15 = 93;
    goto LABEL_20;
  }
  v10 = CHwDisplayRenderTarget::Create(a2, (__int64)&v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v10, 0xB2u);
    v7 = v16;
  }
  else
  {
    v7 = v16;
    v12 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64))v16)(
            v16,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            v6);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v12, 0xB5u);
  }
LABEL_8:
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v11 < 0 )
    goto LABEL_13;
  return (unsigned int)v11;
}
