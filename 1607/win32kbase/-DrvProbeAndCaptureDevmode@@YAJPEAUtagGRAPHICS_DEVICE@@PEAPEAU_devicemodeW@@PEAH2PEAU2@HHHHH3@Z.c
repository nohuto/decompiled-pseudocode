/*
 * XREFs of ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C00601F0
 * Callers:
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005FE98 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvDisplaySwitchHandler @ 0x1C00C8D70 (DrvDisplaySwitchHandler.c)
 * Callees:
 *     GetDpiSetting_0 @ 0x1C0002980 (GetDpiSetting_0.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     DrvBuildDevmodeList @ 0x1C0060CC0 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0061030 (DrvGetDisplayDriverParameters.c)
 *     ?AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z @ 0x1C00652D0 (-AreEquivalentDevModes@@YAHQEBU_devicemodeW@@0@Z.c)
 *     ?GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z @ 0x1C007EA68 (-GetClosestMode@@YAPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@PEAU1@HH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
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
  BOOL v30; // ecx
  int v31; // r11d
  DWORD dmDisplayFlags; // eax
  DWORD dmPanningHeight; // edx
  unsigned int dmDisplayOrientation; // eax
  DWORD v35; // edx
  unsigned int dmDisplayFixedOutput; // eax
  LONG x; // r8d
  int v38; // edx
  LONG y; // r9d
  int v40; // eax
  unsigned int v41; // r13d
  struct _devicemodeW *v42; // rsi
  char *v43; // rdx
  struct _devicemodeW *v44; // r13
  int v45; // r15d
  _DWORD *v46; // r9
  unsigned int v47; // r10d
  int v48; // eax
  unsigned int v49; // r11d
  __int64 v50; // rdx
  __int64 v51; // r8
  DWORD v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  int v56; // r8d
  DWORD v57; // edx
  int v58; // r8d
  int v59; // edx
  unsigned int v60; // ebp
  int v61; // ecx
  int v62; // ecx
  int v64; // edx
  struct _devicemodeW *v65; // rax
  struct _devicemodeW *v66; // rcx
  int v67; // eax
  DWORD dmDisplayFrequency; // eax
  __int64 v69; // rax
  bool v70; // zf
  unsigned int v71; // r14d
  DWORD *v72; // r12
  struct _devicemodeW *ClosestMode; // rcx
  _OWORD *v74; // rcx
  struct _devicemodeW *v75; // rax
  int v76; // ecx
  int v77; // [rsp+30h] [rbp-A8h]
  int v78; // [rsp+40h] [rbp-98h]
  DWORD v79; // [rsp+44h] [rbp-94h]
  unsigned int v80; // [rsp+48h] [rbp-90h]
  int v81; // [rsp+4Ch] [rbp-8Ch]
  LONG v82; // [rsp+50h] [rbp-88h]
  LONG v83; // [rsp+54h] [rbp-84h]
  DWORD dmPanningWidth; // [rsp+58h] [rbp-80h]
  DWORD v85; // [rsp+5Ch] [rbp-7Ch]
  BOOL v86; // [rsp+60h] [rbp-78h]
  int v87; // [rsp+64h] [rbp-74h]
  int v88; // [rsp+68h] [rbp-70h]
  _DWORD *v89; // [rsp+70h] [rbp-68h]
  struct _devicemodeW *v90; // [rsp+78h] [rbp-60h]
  struct _devicemodeW *v91; // [rsp+80h] [rbp-58h]
  unsigned int v94; // [rsp+F0h] [rbp+18h]
  int v95; // [rsp+F0h] [rbp+18h]
  int Srca; // [rsp+100h] [rbp+28h]
  int Srcb; // [rsp+100h] [rbp+28h]

  v77 = 1;
  v79 = 0;
  dmPanningWidth = 0;
  v85 = 0;
  v13 = -1073741823;
  v86 = 0;
  v14 = 0LL;
  v91 = 0LL;
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
      v91 = v15;
    }
    dmSize = Src->dmSize;
    dmDriverExtra = Src->dmDriverExtra;
    v94 = dmSize;
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
    v14->dmSize = v94;
    v88 = v23;
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
    v90 = (struct _devicemodeW *)PALLOCMEM2(0xDCuLL, 1986356295LL, 0);
    if ( !v90 )
      goto LABEL_132;
    memset(v17, 0, sizeof(struct _devicemodeW));
    *(_DWORD *)&v17->dmSize = -8739;
    if ( a6 )
    {
      v29 = a1;
      DrvGetDisplayDriverParameters(a1, v17, 1LL, a9, a11);
      v24 = v90;
    }
    else
    {
      if ( (int)DrvGetDisplayDriverParameters(a1, v17, 0LL, a9, a11) < 0 )
        *(_DWORD *)&v17->dmSize = 220;
      v24 = v90;
      *(_OWORD *)v90->dmDeviceName = *(_OWORD *)v17->dmDeviceName;
      *(_OWORD *)&v90->dmDeviceName[8] = *(_OWORD *)&v17->dmDeviceName[8];
      *(_OWORD *)&v90->dmDeviceName[16] = *(_OWORD *)&v17->dmDeviceName[16];
      *(_OWORD *)&v90->dmDeviceName[24] = *(_OWORD *)&v17->dmDeviceName[24];
      *(_OWORD *)&v90->dmSpecVersion = *(_OWORD *)&v17->dmSpecVersion;
      *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v90->76 + 4) = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v17->76 + 4);
      *(_OWORD *)&v90->dmYResolution = *(_OWORD *)&v17->dmYResolution;
      *(_OWORD *)&v90->dmFormName[5] = *(_OWORD *)&v17->dmFormName[5];
      *(_OWORD *)&v90->dmFormName[13] = *(_OWORD *)&v17->dmFormName[13];
      *(_OWORD *)&v90->dmFormName[21] = *(_OWORD *)&v17->dmFormName[21];
      *(_OWORD *)&v90->dmFormName[29] = *(_OWORD *)&v17->dmFormName[29];
      *(_OWORD *)&v90->dmPelsHeight = *(_OWORD *)&v17->dmPelsHeight;
      *(_OWORD *)&v90->dmICMIntent = *(_OWORD *)&v17->dmICMIntent;
      *(_QWORD *)&v90->dmReserved2 = *(_QWORD *)&v17->dmReserved2;
      v90->dmPanningHeight = v17->dmPanningHeight;
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
        v79 = dmDisplayFrequency;
        if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 && v20 == 244 )
        {
          v69 = WdLogNewEntry5_WdWarning();
          WdLogEvent5_WdWarning(v69);
          v24 = v90;
        }
      }
      v29 = a1;
    }
    v30 = 0;
    v31 = 1;
    if ( (v14->dmFields & 0x200000) != 0 )
    {
      dmDisplayFlags = v14->dmDisplayFlags;
      v17->dmDisplayFlags = dmDisplayFlags;
      v30 = (dmDisplayFlags & 0xFFFFFFF9) != 0;
      a8 = 0;
    }
    else if ( (v17->dmFields & 0x200000) != 0 )
    {
      v17->dmDisplayFlags &= 6u;
    }
    if ( (v14->dmFields & 0x18000000) == 0x18000000 )
    {
      if ( v94 < 0xDC )
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
          v35 = v14->dmFields;
          if ( (v35 & 0x20400000) == 0x400000 )
          {
            v14->dmDisplayFixedOutput = 0;
            v14->dmFields = v35 | 0x20000000;
            v77 = 0;
          }
        }
        if ( (v14->dmFields & 0x20000000) != 0 )
        {
          dmDisplayFixedOutput = v14->dmDisplayFixedOutput;
          v17->dmDisplayFixedOutput = dmDisplayFixedOutput;
          if ( dmDisplayFixedOutput )
          {
            v78 = 1;
            if ( dmDisplayFixedOutput > 2 )
              v30 = 1;
          }
          else
          {
            v78 = 3;
          }
          if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 )
            v17->dmFields |= 0x20000000u;
        }
        else
        {
          v64 = 0;
          if ( (v17->dmFields & 0x20000000) != 0 )
            v64 = 2;
          v78 = v64;
        }
        if ( v91 )
          v86 = v17->dmDisplayFixedOutput == 0;
        if ( (v14->dmFields & 0x20) != 0 )
        {
          x = v14->dmPosition.x;
          v38 = 1;
          y = v14->dmPosition.y;
        }
        else
        {
          x = v17->dmPosition.x;
          v38 = v17->dmFields & 0x20;
          y = v17->dmPosition.y;
        }
        v40 = *((_DWORD *)v29 + 40);
        v83 = y;
        v82 = x;
        v81 = v38;
        if ( (v40 & 0x20) != 0 && v38 && !x && !y || v30 )
          goto LABEL_131;
        v41 = Srca;
        v80 = Srca;
        if ( !Srca
          && ((v40 & 0x800000) == 0
           || !v14->dmPelsWidth && !v14->dmPelsHeight
           || (unsigned int)AreEquivalentDevModes(v14, v24)) )
        {
          v41 = v17->dmDriverExtra;
          v80 = v41;
        }
        v42 = (struct _devicemodeW *)PALLOCMEM2(v41 + 220, 1986356295LL, v31);
        if ( !v42 )
          goto LABEL_131;
        if ( v41 )
        {
          if ( Srca )
          {
            v43 = (char *)v14 + v94;
            goto LABEL_65;
          }
          if ( v17->dmDriverExtra )
          {
            v43 = (char *)v17 + v17->dmSize;
LABEL_65:
            memmove(&v42[1], v43, v41);
          }
        }
        v95 = 0;
        Srcb = 0;
        v87 = 0;
        v44 = 0LL;
        v45 = 0;
        DrvBuildDevmodeList(v29);
        v46 = (_DWORD *)*((_QWORD *)v29 + 23);
        v47 = 0;
        v89 = v46;
        if ( !v17->dmBitsPerPel && !v17->dmPelsWidth && !v17->dmPelsHeight && !v17->dmDisplayOrientation )
        {
          v67 = *((_DWORD *)v29 + 40);
          if ( (v67 & 0x6000000) != 0 )
          {
            if ( v46 )
            {
              v17->dmBitsPerPel = v46[42];
              v17->dmPelsWidth = *(_DWORD *)(*((_QWORD *)v29 + 23) + 172LL);
              v17->dmPelsHeight = *(_DWORD *)(*((_QWORD *)v29 + 23) + 176LL);
              v17->dmDisplayFrequency = *(_DWORD *)(*((_QWORD *)v29 + 23) + 184LL);
              v17->dmDisplayOrientation = *(_DWORD *)(*((_QWORD *)v29 + 23) + 84LL);
              v17->dmDisplayFixedOutput = *(_DWORD *)(*((_QWORD *)v29 + 23) + 88LL);
              v17->dmDisplayFlags = *(_DWORD *)(*((_QWORD *)v29 + 23) + 180LL);
            }
          }
          else if ( (v67 & 8) != 0 )
          {
            if ( !*((_DWORD *)v29 + 44) )
              v13 = -1073741776;
          }
          else
          {
            v70 = gbBaseVideo == 0;
            v17->dmBitsPerPel = 0;
            v71 = !v70;
            if ( v88 )
            {
              if ( v71 < 3 )
              {
                v72 = &dword_1C01060E0[2 * !v70 + 1];
                do
                {
                  v17->dmPelsWidth = *(v72 - 1);
                  v17->dmPelsHeight = *v72;
                  ClosestMode = GetClosestMode(a1, v17, a7, 1);
                  if ( (ClosestMode || (ClosestMode = GetClosestMode(a1, v17, a7, 0)) != 0LL)
                    && ClosestMode->dmBitsPerPel > 0x10 )
                  {
                    break;
                  }
                  ++v71;
                  v72 += 2;
                }
                while ( v71 < 3 );
                v13 = -1073741823;
                v46 = v89;
                v45 = 0;
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
                v47 = 0;
              }
            }
            else
            {
              v17->dmPelsWidth = dword_1C01060E0[2 * !v70];
              v17->dmPelsHeight = dword_1C01060E0[2 * !v70 + 1];
            }
          }
          goto LABEL_70;
        }
        v48 = *((_DWORD *)v29 + 40);
        if ( (v48 & 8) != 0 && !*((_DWORD *)v29 + 44) )
        {
          v44 = v17;
LABEL_70:
          v49 = *((_DWORD *)v29 + 48);
          if ( !v49 )
          {
            v59 = 0;
            v58 = 0;
            goto LABEL_106;
          }
          v50 = v77;
          v51 = v78;
          while ( 1 )
          {
            if ( a7 && *(_DWORD *)(*((_QWORD *)v29 + 25) + 16LL * v47) )
              goto LABEL_77;
            v46 = *(_DWORD **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
            v52 = v17->dmBitsPerPel;
            if ( v52 )
            {
              if ( v52 != v46[42] )
                goto LABEL_77;
            }
            if ( v17->dmPelsWidth != v46[43] )
              goto LABEL_77;
            if ( v17->dmPelsHeight != v46[44] )
              goto LABEL_77;
            v53 = v46[21];
            if ( v17->dmDisplayOrientation != v53 )
              goto LABEL_77;
            if ( v50 && v17->dmDisplayFixedOutput != v46[22] )
            {
              if ( v51 == 1 )
                goto LABEL_77;
              v54 = Srcb;
              if ( Srcb == 2 && v95 == 2 )
                goto LABEL_77;
            }
            else
            {
              v54 = Srcb;
            }
            if ( !v44 )
              v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
            if ( v95 )
              break;
            v45 = 0;
            if ( !v53 )
            {
              v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
              v55 = 1;
              v95 = 1;
              v54 = 0;
              Srcb = 0;
              goto LABEL_89;
            }
LABEL_90:
            v95 = 2;
            v54 = 0;
            Srcb = 0;
            v45 = 0;
            v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
LABEL_91:
            if ( v54 != 2 && (v17->dmDisplayFixedOutput == v46[22] || !v50) )
            {
              v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
              Srcb = 2;
              v45 = 0;
            }
            if ( v45 )
              goto LABEL_98;
            if ( v46[46] == 60 && v46[45] == v17->dmDisplayFlags )
            {
              v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
              v45 = 1;
LABEL_98:
              if ( v45 == 2 )
                goto LABEL_77;
            }
            v56 = v46[46];
            if ( v56 == 1 && v17->dmDisplayFrequency == 64 && v46[45] == v17->dmDisplayFlags )
            {
              v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
              v45 = 2;
            }
            if ( v45 != 2 )
            {
              v57 = v17->dmDisplayFrequency;
              if ( v56 == v57 )
                goto LABEL_232;
              if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 )
              {
                if ( v17->dmDriverExtra + v17->dmSize != 244 )
                {
                  v50 = v77;
                  v51 = v78;
                  goto LABEL_77;
                }
                if ( !v57 && v79 == v56 )
                {
LABEL_232:
                  if ( v46[45] == v17->dmDisplayFlags )
                  {
                    v58 = v95;
                    v45 = 2;
                    v44 = *(struct _devicemodeW **)(*((_QWORD *)v29 + 25) + 16LL * v47 + 8);
                    if ( v95 == 2 )
                    {
                      v59 = Srcb;
                      if ( Srcb == 2 || !v17->dmDisplayFixedOutput && (*((_DWORD *)v29 + 40) & 0x800000) == 0 )
                      {
                        v87 = 1;
                        goto LABEL_106;
                      }
                    }
                  }
                }
              }
              v50 = v77;
            }
            v51 = v78;
LABEL_77:
            if ( ++v47 >= v49 )
            {
              v59 = Srcb;
              v58 = v95;
              goto LABEL_106;
            }
          }
          v55 = v95;
LABEL_89:
          if ( v55 == 2 )
            goto LABEL_91;
          goto LABEL_90;
        }
        if ( !a10
          || (v48 & 0x800000) == 0
          || v17->dmDriverExtra + v17->dmSize != 244
          || v14->dmBitsPerPel == 4
          || !v17->dmDisplayFrequency )
        {
          if ( v88 )
          {
            v65 = GetClosestMode(v29, v17, a7, 1);
            v47 = 0;
            v66 = v65;
            if ( v65 || (v75 = GetClosestMode(v29, v17, a7, 0), v47 = 0, (v66 = v75) != 0LL) )
            {
              v17->dmBitsPerPel = v66->dmBitsPerPel;
              v17->dmPelsWidth = v66->dmPelsWidth;
              v17->dmPelsHeight = v66->dmPelsHeight;
              v17->dmDisplayFrequency = v66->dmDisplayFrequency;
              v17->dmDisplayOrientation = v66->dmDisplayOrientation;
              v17->dmDisplayFixedOutput = v66->dmDisplayFixedOutput;
              v17->dmDisplayFlags = v66->dmDisplayFlags;
            }
            v46 = v89;
          }
          goto LABEL_70;
        }
        v44 = v17;
        if ( *((_DWORD *)v29 + 48) )
        {
          v74 = *(_OWORD **)(*((_QWORD *)v29 + 25) + 8LL);
          if ( v74 )
          {
            *(_OWORD *)v17->dmDeviceName = *v74;
            *(_OWORD *)&v17->dmDeviceName[8] = v74[1];
            *(_OWORD *)&v17->dmDeviceName[16] = v74[2];
            *(_OWORD *)&v17->dmDeviceName[24] = v74[3];
          }
        }
        v87 = 1;
        v58 = 2;
        v45 = 2;
        v59 = 2;
LABEL_106:
        if ( !v44 )
        {
          Win32FreePool();
LABEL_131:
          Win32FreePool();
          goto LABEL_132;
        }
        v60 = v80;
        if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0
          && v80 + v44->dmSize == 244
          && !v17->dmDisplayFrequency
          && v79 != v46[46] )
        {
          v60 = 0;
        }
        if ( a8 && v45 != 2 && v44->dmDisplayFrequency == v17->dmDisplayFrequency )
          v45 = 2;
        if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 && v58 == 2 && v59 == 2 && (v78 & 0xFFFFFFFD) == 0 )
          v45 = 2;
        memmove(v42, v44, v44->dmSize);
        v42->dmDriverExtra = v60;
        if ( !gdmLogPixels )
        {
          GetDpiSetting_0();
          v17->dmLogPixels = a8;
          gdmLogPixels = a8;
        }
        v61 = v42->dmFields | 0x18220000;
        v42->dmLogPixels = v17->dmLogPixels;
        v42->dmFields = v61;
        if ( (*((_DWORD *)v29 + 40) & 0x4000000) != 0 )
        {
          if ( !v81 )
          {
LABEL_121:
            v42->dmPanningWidth = dmPanningWidth;
            v42->dmPanningHeight = v85;
            if ( (*((_DWORD *)v29 + 40) & 0x800000) != 0 && v60 + v42->dmSize == 244 )
              ((void (__fastcall *)(struct _devicemodeW *, struct _devicemodeW *))qword_1C011B4A8)(v42, v42);
            if ( v91 )
            {
              if ( *(_DWORD *)&v91[1].dmDeviceName[6] )
              {
                v76 = v42->dmFields | 0x2000000;
                v42->dmFields = v76;
                v42->dmMediaType = *(_DWORD *)&v91[1].dmDeviceName[6];
                if ( v86 )
                {
                  v42->dmFields = v76 | 0x4000000;
                  v42->dmDisplayFixedOutput = *(_DWORD *)&v91[1].dmDeviceName[8];
                }
              }
            }
            if ( a4 && v44->dmSize + v44->dmDriverExtra == 244 && (*(_DWORD *)&v44[1].dmDeviceName[10] & 0x20) != 0 )
              *a4 = 1;
            *a2 = v42;
            if ( v87 || v45 == 2 )
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
          v62 = v61 | 0x20;
        }
        else
        {
          v62 = (v81 != 0 ? 0x20 : 0) | v61;
        }
        v42->dmPosition.x = v82;
        v42->dmPosition.y = v83;
        v42->dmFields = v62;
        goto LABEL_121;
      }
      dmPanningWidth = v17->dmPanningWidth;
    }
    v85 = dmPanningHeight;
    goto LABEL_38;
  }
  return v13;
}
