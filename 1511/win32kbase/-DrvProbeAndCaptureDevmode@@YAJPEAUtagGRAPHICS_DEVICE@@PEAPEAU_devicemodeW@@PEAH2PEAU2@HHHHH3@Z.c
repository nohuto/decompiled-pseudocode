/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C0058474
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0058120 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     DrvDisplaySwitchHandler @ 0x1C00BD080 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     GetDpiSetting_0 @ 0x1C0002970 (GetDpiSetting_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     ?AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z @ 0x1C0053E70 (-AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z.c)
 *     DrvBuildDevmodeList @ 0x1C0058F50 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00592A0 (DrvGetDisplayDriverParameters.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C007AE08 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DrvProbeAndCaptureDevmode(
        struct tagGRAPHICS_DEVICE *a1,
        struct _devicemodeW **a2,
        int *a3,
        int *a4,
        struct _devicemodeW *Src,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        struct _devicemodeW *a11)
{
  unsigned int v13; // ebp
  const struct _devicemodeW *v14; // rdi
  struct _devicemodeW *v15; // r12
  struct _devicemodeW *v17; // rbx
  unsigned int dmSize; // eax
  int dmDriverExtra; // ecx
  unsigned int v20; // r12d
  struct _devicemodeW *v21; // rax
  DWORD dmFields; // ecx
  int v23; // eax
  const struct _devicemodeW *v24; // r10
  DWORD dmBitsPerPel; // eax
  DWORD dmPelsWidth; // eax
  DWORD dmPelsHeight; // eax
  DWORD v28; // eax
  struct tagGRAPHICS_DEVICE *v29; // r12
  BOOL v30; // edx
  int v31; // r11d
  DWORD dmPanningHeight; // ecx
  unsigned int dmDisplayOrientation; // eax
  DWORD v34; // ecx
  unsigned int dmDisplayFixedOutput; // eax
  LONG x; // r8d
  int v37; // ecx
  LONG y; // r9d
  int v39; // eax
  unsigned int v40; // r13d
  struct _devicemodeW *v41; // rsi
  char *v42; // rdx
  struct _devicemodeW *v43; // r13
  int v44; // r15d
  _DWORD *v45; // r9
  unsigned int v46; // r10d
  int v47; // eax
  unsigned int v48; // r11d
  __int64 v49; // rdx
  __int64 v50; // r8
  DWORD v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // r8d
  DWORD v56; // edx
  int v57; // r8d
  int v58; // edx
  unsigned int v59; // ebp
  int v60; // ecx
  int v61; // ecx
  int v63; // ecx
  struct _devicemodeW *v64; // rax
  struct _devicemodeW *v65; // rcx
  int v66; // eax
  DWORD dmDisplayFrequency; // eax
  __int64 v68; // rax
  bool v69; // zf
  unsigned int v70; // r14d
  DWORD *v71; // r12
  struct _devicemodeW *ClosestMode; // rcx
  _OWORD *v73; // rcx
  struct _devicemodeW *v74; // rax
  int v75; // ecx
  int v76; // [rsp+30h] [rbp-A8h]
  int v77; // [rsp+40h] [rbp-98h]
  BOOL v78; // [rsp+44h] [rbp-94h]
  DWORD v79; // [rsp+48h] [rbp-90h]
  DWORD v80; // [rsp+4Ch] [rbp-8Ch]
  LONG v81; // [rsp+50h] [rbp-88h]
  int v82; // [rsp+54h] [rbp-84h]
  int v83; // [rsp+58h] [rbp-80h]
  LONG v84; // [rsp+5Ch] [rbp-7Ch]
  DWORD dmPanningWidth; // [rsp+60h] [rbp-78h]
  unsigned int v86; // [rsp+64h] [rbp-74h]
  int v87; // [rsp+68h] [rbp-70h]
  struct _devicemodeW *v88; // [rsp+70h] [rbp-68h]
  _DWORD *v89; // [rsp+78h] [rbp-60h]
  struct _devicemodeW *v90; // [rsp+80h] [rbp-58h]
  unsigned int v93; // [rsp+F0h] [rbp+18h]
  int v94; // [rsp+F0h] [rbp+18h]
  int Srca; // [rsp+100h] [rbp+28h]
  int Srcb; // [rsp+100h] [rbp+28h]

  v76 = 1;
  v80 = 0;
  dmPanningWidth = 0;
  v79 = 0;
  v13 = -1073741823;
  v78 = 0;
  v14 = 0LL;
  v90 = 0LL;
  v15 = 0LL;
  *a2 = 0LL;
  *a3 = 0;
  if ( a4 )
    *a4 = 0;
  if ( !Src )
    return 0;
  v17 = (struct _devicemodeW *)PALLOCMEM2(0x100DBuLL, 1986356295LL, 0);
  if ( v17 )
  {
    if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && a11 )
    {
      if ( a11->dmSize + a11->dmDriverExtra == 244 )
        v15 = a11;
      v90 = v15;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v93 = dmSize;
    Srca = dmDriverExtra;
    if ( dmSize < 0xBC )
      goto LABEL_132;
    v20 = dmDriverExtra + dmSize;
    v21 = (struct _devicemodeW *)PALLOCMEM2(dmDriverExtra + dmSize, 1986356295LL, 0);
    v14 = v21;
    if ( !v21 )
      goto LABEL_132;
    memmove(v21, Src, v20);
    dmFields = v14->dmFields;
    v14->dmDriverExtra = Srca;
    v23 = a8;
    if ( !dmFields )
      v23 = 1;
    v14->dmSize = v93;
    v87 = v23;
    if ( (dmFields & 0x80020) == 0x80020 && !v14->dmPelsWidth && (dmFields & 0x100000) != 0 && !v14->dmPelsHeight )
    {
      *a3 = 1;
      v13 = 0;
LABEL_132:
      Win32FreePool();
      if ( v14 )
        Win32FreePool();
      return v13;
    }
    v88 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    if ( !v88 )
      goto LABEL_132;
    memset(v17, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&v17->dmSize = -8739;
    if ( a6 )
    {
      v29 = a1;
      DrvGetDisplayDriverParameters(a1, v17, 1LL, a9, a11);
      v24 = v88;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v17, 0LL, a9, a11) < 0 )
        *(_DWORD *)&v17->dmSize = 220;
      v24 = v88;
      *(_OWORD *)v88->dmDeviceName = *(_OWORD *)v17->dmDeviceName;
      *(_OWORD *)&v88->dmDeviceName[8] = *(_OWORD *)&v17->dmDeviceName[8];
      *(_OWORD *)&v88->dmDeviceName[16] = *(_OWORD *)&v17->dmDeviceName[16];
      *(_OWORD *)&v88->dmDeviceName[24] = *(_OWORD *)&v17->dmDeviceName[24];
      *(_OWORD *)&v88->dmSpecVersion = *(_OWORD *)&v17->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v88->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v17->76 + 4);
      *(_OWORD *)&v88->dmYResolution = *(_OWORD *)&v17->dmYResolution;
      *(_OWORD *)&v88->dmFormName[5] = *(_OWORD *)&v17->dmFormName[5];
      *(_OWORD *)&v88->dmFormName[13] = *(_OWORD *)&v17->dmFormName[13];
      *(_OWORD *)&v88->dmFormName[21] = *(_OWORD *)&v17->dmFormName[21];
      *(_OWORD *)&v88->dmFormName[29] = *(_OWORD *)&v17->dmFormName[29];
      *(_OWORD *)&v88->dmPelsHeight = *(_OWORD *)&v17->dmPelsHeight;
      *(_OWORD *)&v88->dmICMIntent = *(_OWORD *)&v17->dmICMIntent;
      *(_QWORD *)&v88->dmReserved2 = *(_QWORD *)&v17->dmReserved2;
      v88->dmPanningHeight = v17->dmPanningHeight;
      if ( (v14->dmFields & 0x40000) != 0 )
      {
        dmBitsPerPel = v14->dmBitsPerPel;
        if ( dmBitsPerPel )
          v17->dmBitsPerPel = dmBitsPerPel;
      }
      if ( (v14->dmFields & 0x80000) != 0 )
      {
        dmPelsWidth = v14->dmPelsWidth;
        if ( dmPelsWidth )
          v17->dmPelsWidth = dmPelsWidth;
      }
      if ( (v14->dmFields & 0x100000) != 0 )
      {
        dmPelsHeight = v14->dmPelsHeight;
        if ( dmPelsHeight )
          v17->dmPelsHeight = dmPelsHeight;
      }
      if ( (v14->dmFields & 0x400000) != 0 && (v28 = v14->dmDisplayFrequency) != 0 )
      {
        v17->dmDisplayFrequency = v28;
      }
      else if ( v14->dmPelsWidth || v14->dmPelsHeight )
      {
        dmDisplayFrequency = v17->dmDisplayFrequency;
        v17->dmDisplayFrequency = 0;
        v80 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v20 == 244 )
        {
          v68 = WdLogNewEntry5_WdWarning(&v17->dmFormName[13], &v88->dmFormName[13]);
          WdLogEvent5_WdWarning(v68);
          v24 = v88;
        }
      }
      v29 = a1;
    }
    v30 = 0;
    v31 = 1;
    if ( (v14->dmFields & 0x200000) != 0 )
    {
      v69 = (v14->dmDisplayFlags & 0xFFFFFFF9) == 0;
      v17->dmDisplayFlags = v14->dmDisplayFlags;
      a8 = 0;
      v30 = !v69;
    }
    else if ( (v17->dmFields & 0x200000) != 0 )
    {
      v17->dmDisplayFlags &= 6u;
    }
    if ( (v14->dmFields & 0x18000000) == 0x18000000 )
    {
      if ( v93 < 0xDC )
      {
        v14->dmFields &= 0xE7FFFFFF;
        goto LABEL_38;
      }
      dmPanningWidth = v14->dmPanningWidth;
      if ( dmPanningWidth > v17->dmPelsWidth || v14->dmPanningHeight > v17->dmPelsHeight )
        v30 = 1;
      dmPanningHeight = v14->dmPanningHeight;
    }
    else
    {
      if ( (v17->dmFields & 0x18000000) != 0x18000000
        || (dmPanningHeight = v17->dmPanningHeight, dmPanningHeight >= v17->dmPelsHeight)
        || v17->dmPanningWidth >= v17->dmPelsWidth )
      {
LABEL_38:
        if ( (v14->dmFields & 0x80u) != 0 )
        {
          dmDisplayOrientation = v14->dmDisplayOrientation;
          v17->dmDisplayOrientation = dmDisplayOrientation;
          if ( dmDisplayOrientation > 3 )
            v30 = 1;
        }
        if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 )
        {
          v34 = v14->dmFields;
          if ( (v34 & 0x20400000) == 0x400000 )
          {
            v14->dmDisplayFixedOutput = 0;
            v14->dmFields = v34 | 0x20000000;
            v76 = 0;
          }
        }
        if ( (v14->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v14->dmDisplayFixedOutput;
          v17->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            v77 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v30 = 1;
          }
          else
          {
            v77 = 3;
          }
          if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 )
            v17->dmFields |= 0x20000000u;
        }
        else
        {
          v63 = 0;
          if ( (v17->dmFields & 0x20000000) != 0 )
            v63 = 2;
          v77 = v63;
        }
        if ( v90 )
          v78 = v17->dmDisplayFixedOutput == 0;
        if ( (v14->dmFields & 0x20) != 0 )
        {
          x = v14->dmPosition.x;
          v37 = 1;
          y = v14->dmPosition.y;
        }
        else
        {
          x = v17->dmPosition.x;
          v37 = v17->dmFields & 0x20;
          y = v17->dmPosition.y;
        }
        v39 = *((_DWORD *)v29 + 40);
        v81 = y;
        v84 = x;
        v83 = v37;
        if ( (v39 & 0x20) != 0 && v37 && !x && !y || v30 )
          goto LABEL_131;
        v40 = Srca;
        v86 = Srca;
        if ( !Srca
          && ((v39 & 0x800000) == 0 || !v14->dmPelsWidth && !v14->dmPelsHeight || AreEquivalentDevModes(v14, v24)) )
        {
          v40 = v17->dmDriverExtra;
          v86 = v40;
        }
        v41 = (struct _devicemodeW *)PALLOCMEM2(v40 + 220, 1986356295LL, v31);
        if ( !v41 )
          goto LABEL_131;
        if ( v40 )
        {
          if ( Srca )
          {
            v42 = (char *)v14 + v93;
            goto LABEL_65;
          }
          if ( v17->dmDriverExtra )
          {
            v42 = (char *)v17 + v17->dmSize;
LABEL_65:
            memmove(&v41[1], v42, v40);
          }
        }
        v94 = 0;
        Srcb = 0;
        v82 = 0;
        v43 = 0LL;
        v44 = 0;
        DrvBuildDevmodeList(v29);
        v45 = (_DWORD *)*((_QWORD *)v29 + 23);
        v46 = 0;
        v89 = v45;
        if ( !v17->dmBitsPerPel && !v17->dmPelsWidth && !v17->dmPelsHeight && !v17->dmDisplayOrientation )
        {
          v66 = *((_DWORD *)v29 + 40);
          if ( (v66 & 0x6000000) != 0 )
          {
            if ( v45 )
            {
              v17->dmBitsPerPel = v45[42];
              v17->dmPelsWidth = *(_DWORD *)(*((_QWORD *)v29 + 23) + 172LL);
              v17->dmPelsHeight = *(_DWORD *)(*((_QWORD *)v29 + 23) + 176LL);
              v17->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)v29 + 23) + 184LL);
              v17->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)v29 + 23) + 84LL);
              v17->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)v29 + 23) + 88LL);
              v17->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)v29 + 23) + 180LL);
            }
          }
          else if ( (v66 & 8) != 0 )
          {
            if ( !*((_DWORD *)v29 + 44) )
              v13 = -1073741776;
          }
          else
          {
            v69 = gbBaseVideo == 0;
            v17->dmBitsPerPel = 0;
            v70 = !v69;
            if ( v87 )
            {
              if ( v70 < 3 )
              {
                v71 = &dword_1C00F1000[2 * !v69 + 1];
                do
                {
                  v17->dmPelsWidth = *(v71 - 1);
                  v17->dmPelsHeight = *v71;
                  ClosestMode = GetClosestMode(a1, v17, a7, 1);
                  if ( (ClosestMode || (ClosestMode = GetClosestMode(a1, v17, a7, 0)) != 0LL)
                    && ClosestMode->dmBitsPerPel > 0x10 )
                  {
                    break;
                  }
                  ++v70;
                  v71 += 2;
                }
                while ( v70 < 3 );
                v13 = -1073741823;
                v45 = v89;
                v44 = 0;
                v29 = a1;
                if ( ClosestMode )
                {
                  v17->dmBitsPerPel = ClosestMode->dmBitsPerPel;
                  v17->dmPelsWidth = ClosestMode->dmPelsWidth;
                  v17->dmPelsHeight = ClosestMode->dmPelsHeight;
                  v17->dmDisplayFrequency = ClosestMode->dmDisplayFrequency;
                  v17->dmDisplayOrientation = ClosestMode->dmDisplayOrientation;
                  v17->dmDisplayFixedOutput = ClosestMode->dmDisplayFixedOutput;
                  v17->dmDisplayFlags = ClosestMode->dmDisplayFlags;
                }
                v46 = 0;
              }
            }
            else
            {
              v17->dmPelsWidth = dword_1C00F1000[2 * !v69];
              v17->dmPelsHeight = dword_1C00F1000[2 * !v69 + 1];
            }
          }
          goto LABEL_70;
        }
        v47 = *((_DWORD *)v29 + 40);
        if ( (v47 & 8) != 0 && !*((_DWORD *)v29 + 44) )
        {
          v43 = v17;
LABEL_70:
          v48 = *((_DWORD *)v29 + 48);
          if ( !v48 )
          {
            v58 = 0;
            v57 = 0;
            goto LABEL_106;
          }
          v49 = v76;
          v50 = v77;
          while ( 1 )
          {
            if ( a7 && *(_DWORD *)(*((_QWORD *)v29 + 25) + 16LL * v46) )
              goto LABEL_77;
            v45 = *(_DWORD **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
            v51 = v17->dmBitsPerPel;
            if ( v51 )
            {
              if ( v51 != v45[42] )
                goto LABEL_77;
            }
            if ( v17->dmPelsWidth != v45[43] )
              goto LABEL_77;
            if ( v17->dmPelsHeight != v45[44] )
              goto LABEL_77;
            v52 = v45[21];
            if ( v17->dmDisplayOrientation != v52 )
              goto LABEL_77;
            if ( v49 && v17->dmDisplayFixedOutput != v45[22] )
            {
              if ( v50 == 1 )
                goto LABEL_77;
              v53 = Srcb;
              if ( Srcb == 2 && v94 == 2 )
                goto LABEL_77;
            }
            else
            {
              v53 = Srcb;
            }
            if ( !v43 )
              v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
            if ( v94 )
              break;
            v44 = 0;
            if ( !v52 )
            {
              v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
              v54 = 1;
              v94 = 1;
              v53 = 0;
              Srcb = 0;
              goto LABEL_89;
            }
LABEL_90:
            v94 = 2;
            v53 = 0;
            Srcb = 0;
            v44 = 0;
            v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
LABEL_91:
            if ( v53 != 2 && (v17->dmDisplayFixedOutput == v45[22] || !v49) )
            {
              v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
              Srcb = 2;
              v44 = 0;
            }
            if ( v44 )
              goto LABEL_98;
            if ( v45[46] == 60 && v45[45] == v17->dmDisplayFlags )
            {
              v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
              v44 = 1;
LABEL_98:
              if ( v44 == 2 )
                goto LABEL_77;
            }
            v55 = v45[46];
            if ( v55 == 1 && v17->dmDisplayFrequency == 64 && v45[45] == v17->dmDisplayFlags )
            {
              v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
              v44 = 2;
            }
            if ( v44 != 2 )
            {
              v56 = v17->dmDisplayFrequency;
              if ( v55 == v56 )
                goto LABEL_232;
              if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 )
              {
                if ( v17->dmDriverExtra + v17->dmSize != 244 )
                {
                  v49 = v76;
                  v50 = v77;
                  goto LABEL_77;
                }
                if ( !v56 && v80 == v55 )
                {
LABEL_232:
                  if ( v45[45] == v17->dmDisplayFlags )
                  {
                    v57 = v94;
                    v44 = 2;
                    v43 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v46 + 8);
                    if ( v94 == 2 )
                    {
                      v58 = Srcb;
                      if ( Srcb == 2 || !v17->dmDisplayFixedOutput && (*((_DWORD *)v29 + 40) & 0x800000) == 0 )
                      {
                        v82 = 1;
                        goto LABEL_106;
                      }
                    }
                  }
                }
              }
              v49 = v76;
            }
            v50 = v77;
LABEL_77:
            if ( ++v46 >= v48 )
            {
              v58 = Srcb;
              v57 = v94;
              goto LABEL_106;
            }
          }
          v54 = v94;
LABEL_89:
          if ( v54 == 2 )
            goto LABEL_91;
          goto LABEL_90;
        }
        if ( !a10
          || (v47 & 0x800000) == 0
          || v17->dmDriverExtra + v17->dmSize != 244
          || v14->dmBitsPerPel == 4
          || !v17->dmDisplayFrequency )
        {
          if ( v87 )
          {
            v64 = GetClosestMode(v29, v17, a7, 1);
            v46 = 0;
            v65 = v64;
            if ( v64 || (v74 = GetClosestMode(v29, v17, a7, 0), v46 = 0, (v65 = v74) != 0LL) )
            {
              v17->dmBitsPerPel = v65->dmBitsPerPel;
              v17->dmPelsWidth = v65->dmPelsWidth;
              v17->dmPelsHeight = v65->dmPelsHeight;
              v17->dmDisplayFrequency = v65->dmDisplayFrequency;
              v17->dmDisplayOrientation = v65->dmDisplayOrientation;
              v17->dmDisplayFixedOutput = v65->dmDisplayFixedOutput;
              v17->dmDisplayFlags = v65->dmDisplayFlags;
            }
            v45 = v89;
          }
          goto LABEL_70;
        }
        v43 = v17;
        if ( *((_DWORD *)v29 + 48) )
        {
          v73 = *(_OWORD **)(*((_QWORD *)v29 + 25) + 8LL);
          if ( v73 )
          {
            *(_OWORD *)v17->dmDeviceName = *v73;
            *(_OWORD *)&v17->dmDeviceName[8] = v73[1];
            *(_OWORD *)&v17->dmDeviceName[16] = v73[2];
            *(_OWORD *)&v17->dmDeviceName[24] = v73[3];
          }
        }
        v82 = 1;
        v57 = 2;
        v44 = 2;
        v58 = 2;
LABEL_106:
        if ( !v43 )
        {
          Win32FreePool();
LABEL_131:
          Win32FreePool();
          goto LABEL_132;
        }
        v59 = v86;
        if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0
          && v86 + v43->dmSize == 244
          && !v17->dmDisplayFrequency
          && v80 != v45[46] )
        {
          v59 = 0;
        }
        if ( a8 && v44 != 2 && v43->dmDisplayFrequency == v17->dmDisplayFrequency )
          v44 = 2;
        if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 && v57 == 2 && v58 == 2 && (v77 & 0xFFFFFFFD) == 0 )
          v44 = 2;
        memmove(v41, v43, v43->dmSize);
        v41->dmDriverExtra = v59;
        if ( !gdmLogPixels )
        {
          GetDpiSetting_0();
          v17->dmLogPixels = a8;
          gdmLogPixels = a8;
        }
        v60 = v41->dmFields | 0x18220000;
        v41->dmLogPixels = v17->dmLogPixels;
        v41->dmFields = v60;
        if ( (*((_DWORD *)v29 + 40) & 0x4000000) != 0 )
        {
          if ( !v83 )
          {
LABEL_121:
            v41->dmPanningWidth = dmPanningWidth;
            v41->dmPanningHeight = v79;
            if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 && v59 + v41->dmSize == 244 )
              ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C0104168)(v41, v41);
            if ( v90 )
            {
              if ( *(_DWORD *)&v90[1].dmDeviceName[6] )
              {
                v75 = v41->dmFields | 0x2000000;
                v41->dmFields = v75;
                v41->dmMediaType = *(_DWORD *)&v90[1].dmDeviceName[6];
                if ( v78 )
                {
                  v41->dmFields = v75 | 0x4000000;
                  v41->dmDisplayFixedOutput = *(_DWORD *)&v90[1].dmDeviceName[8];
                }
              }
            }
            if ( a4 && v43->dmSize + v43->dmDriverExtra == 244 && (*(_DWORD *)&v43[1].dmDeviceName[10] & 0x20) != 0 )
              *a4 = 1;
            *a2 = v41;
            if ( v82 || v44 == 2 )
            {
              v13 = 0;
            }
            else if ( v17->dmDisplayFrequency )
            {
              v13 = -1073741811;
            }
            else
            {
              v13 = 1073741839;
            }
            goto LABEL_131;
          }
          v61 = v60 | 0x20;
        }
        else
        {
          v61 = (v83 != 0 ? 0x20 : 0) | v60;
        }
        v41->dmPosition.x = v84;
        v41->dmPosition.y = v81;
        v41->dmFields = v61;
        goto LABEL_121;
      }
      dmPanningWidth = v17->dmPanningWidth;
    }
    v79 = dmPanningHeight;
    goto LABEL_38;
  }
  return v13;
}
