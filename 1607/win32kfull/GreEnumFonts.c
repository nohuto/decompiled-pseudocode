/*
 * XREFs of GreEnumFonts @ 0x1C0021B50
 * Callers:
 *     NtGdiEnumFonts @ 0x1C0020F70 (NtGdiEnumFonts.c)
 * Callees:
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00210EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0028190 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0029B10 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0029B44 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C002A12C (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02B50A8 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
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
  int v12; // edx
  int v13; // ecx
  struct PFF *v14; // rax
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  _DWORD v18[10]; // [rsp+68h] [rbp-71h] BYREF
  struct PFT *v19; // [rsp+90h] [rbp-49h] BYREF
  struct PFT **v20; // [rsp+98h] [rbp-41h] BYREF
  struct _FONTHASH **v21; // [rsp+A0h] [rbp-39h] BYREF
  struct PFT **v22; // [rsp+A8h] [rbp-31h] BYREF
  struct _FONTHASH **v23; // [rsp+B0h] [rbp-29h] BYREF
  __int64 v24; // [rsp+B8h] [rbp-21h] BYREF
  _QWORD v25[2]; // [rsp+C0h] [rbp-19h] BYREF
  _BYTE v26[32]; // [rsp+D0h] [rbp-9h] BYREF
  struct PFF *v27; // [rsp+F0h] [rbp+17h] BYREF

  v7 = a7;
  v8 = 0;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( v25[0] )
  {
    a7 = *(_DWORD **)(v25[0] + 48LL);
    if ( (a7[14] & 0x40) == 0 )
      PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
    v24 = ghsemPublicPFT;
    GreAcquireSemaphore(ghsemPublicPFT);
    v18[9] = a5;
    v18[3] = 0;
    v12 = a7[541];
    v18[6] = v12 == 0;
    v18[5] = v12 == 4;
    if ( (*(_DWORD *)(*(_QWORD *)(v25[0] + 80LL) + 104LL) & 1) != 0 || (v13 = a7[14], v18[0] = 0, (v13 & 1) == 0) )
      v18[0] = 1;
    v18[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
    v18[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
    v18[7] = a3 & 0x200;
    v19 = gpPFTDevice;
    v18[4] = gulFontInformation & 1;
    v14 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)&v19, *(HDEV *)(v25[0] + 48LL), 0LL);
    if ( !v14
      || (v27 = v14,
          v21 = gpPFTPublic,
          v20 = gpPFTPrivate,
          (v16 = EnumDeviceAndEngine(
                   a4,
                   v15,
                   a2,
                   (struct _EFFILTER_INFO *)v18,
                   (struct PUBLIC_PFTOBJ *)&v21,
                   (struct PUBLIC_PFTOBJ *)&v20,
                   (struct PFFOBJ *)&v27,
                   (struct PDEVOBJ *)&a7,
                   (struct DCOBJ *)v25,
                   a6,
                   v7)) == 0) )
    {
      v23 = gpPFTPublic;
      v22 = gpPFTPrivate;
      v16 = EnumEngineOnly(
              a4,
              v15,
              a2,
              (struct _EFFILTER_INFO *)v18,
              (__int64 **)&v23,
              (__int64 **)&v22,
              (struct DCOBJ *)v25,
              a6,
              v7);
    }
    v8 = v16;
    SEMOBJ::vUnlock((SEMOBJ *)&v24);
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v25);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v26);
  return v8;
}
