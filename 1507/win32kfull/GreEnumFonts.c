/*
 * XREFs of GreEnumFonts @ 0x1C00E5F4C
 * Callers:
 *     NtGdiEnumFonts @ 0x1C00E5DD0 (NtGdiEnumFonts.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0030CB4 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0030CF4 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0032930 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0126390 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B2F28 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

__int64 __fastcall GreEnumFonts(
        HDC a1,
        unsigned int a2,
        __int16 a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // rsi
  unsigned int v8; // ebx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // r8
  struct PFF *v18; // rax
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  _DWORD v22[10]; // [rsp+68h] [rbp-71h] BYREF
  struct _FONTHASH **v23; // [rsp+90h] [rbp-49h] BYREF
  __int64 v24; // [rsp+98h] [rbp-41h] BYREF
  struct _FONTHASH **v25; // [rsp+A0h] [rbp-39h] BYREF
  struct PFT **v26; // [rsp+A8h] [rbp-31h] BYREF
  struct PFT *v27; // [rsp+B0h] [rbp-29h] BYREF
  struct PFT **v28; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v29[6]; // [rsp+C0h] [rbp-19h] BYREF
  struct PFF *v30; // [rsp+F0h] [rbp+17h] BYREF

  v7 = a7;
  v8 = 0;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v29, a1);
  if ( v29[0] )
  {
    a7 = *(_DWORD **)(v29[0] + 48LL);
    if ( (a7[14] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v24 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v22[9] = a5;
    v22[3] = 0;
    v13 = a7[541];
    v22[6] = v13 == 0;
    v22[5] = v13 == 4;
    v14 = *(_QWORD *)(v29[0] + 80LL);
    if ( (*(_DWORD *)(v14 + 104) & 1) != 0 || (v15 = a7[14], v22[0] = 0, (v15 & 1) == 0) )
      v22[0] = 1;
    v22[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7, v14, v12);
    v22[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7, v16, v17);
    v22[7] = a3 & 0x200;
    v27 = gpPFTDevice;
    v22[4] = gulFontInformation & 1;
    v18 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v27, *(_QWORD *)(v29[0] + 48LL), 0LL);
    if ( !v18
      || (v30 = v18,
          v25 = gpPFTPublic,
          v28 = gpPFTPrivate,
          (v20 = EnumDeviceAndEngine(
                   a4,
                   v19,
                   a2,
                   (struct _EFFILTER_INFO *)v22,
                   (struct PUBLIC_PFTOBJ *)&v25,
                   (struct PUBLIC_PFTOBJ *)&v28,
                   (struct PFFOBJ *)&v30,
                   (struct PDEVOBJ *)&a7,
                   (struct DCOBJ *)v29,
                   a6,
                   v7)) == 0) )
    {
      v23 = gpPFTPublic;
      v26 = gpPFTPrivate;
      v20 = EnumEngineOnly(
              a4,
              v19,
              a2,
              (struct _EFFILTER_INFO *)v22,
              (__int64 **)&v23,
              (__int64 **)&v26,
              (struct DCOBJ *)v29,
              a6,
              v7);
    }
    v8 = v20;
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v29);
  return v8;
}
