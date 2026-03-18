/*
 * XREFs of CreatePointerDeviceInfo @ 0x1C01C7A40
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D2374 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     RetrieveCalibrationData @ 0x1C013A8F0 (RetrieveCalibrationData.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0145DF0 (UpdatePointerDeviceSystemMetrics.c)
 *     ValidateDeviceSignature @ 0x1C0150A80 (ValidateDeviceSignature.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     RetrieveNormalizationRange @ 0x1C01C22CC (RetrieveNormalizationRange.c)
 *     ?GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C01C5448 (-GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     AllocateMonitor @ 0x1C01C7370 (AllocateMonitor.c)
 *     AssignTouchType @ 0x1C01C74C0 (AssignTouchType.c)
 *     ComputeHighMetricValue @ 0x1C01C7948 (ComputeHighMetricValue.c)
 *     FindMonitorForDigitizer @ 0x1C01CA390 (FindMonitorForDigitizer.c)
 *     FreePointerDevice @ 0x1C01CA8D0 (FreePointerDevice.c)
 *     GetContainerId @ 0x1C01CAB34 (GetContainerId.c)
 *     GetDeviceButtons @ 0x1C01CAC24 (GetDeviceButtons.c)
 *     GetPhysicalSizeFromMonitor @ 0x1C01CAFE0 (GetPhysicalSizeFromMonitor.c)
 *     GetProductString @ 0x1C01CBB38 (GetProductString.c)
 *     InitFakeMonitor @ 0x1C01CBDB0 (InitFakeMonitor.c)
 *     IsDeviceExcluded @ 0x1C01CBE68 (IsDeviceExcluded.c)
 *     IsEssentialUsage @ 0x1C01CBF88 (IsEssentialUsage.c)
 *     ReadDigitizerToMonitorMappings @ 0x1C01CC2C0 (ReadDigitizerToMonitorMappings.c)
 *     ComputeVirtualHimetricSize @ 0x1C01CF050 (ComputeVirtualHimetricSize.c)
 *     GetDeviceParent @ 0x1C01D35E4 (GetDeviceParent.c)
 */

__int64 __fastcall CreatePointerDeviceInfo(
        struct DEVICEINFO *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _HIDP_CAPS *a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5,
        __int64 a6)
{
  struct DEVICEINFO *v6; // rsi
  struct _HIDP_CAPS *v8; // r12
  __int64 v10; // rbx
  __int64 Usage; // rcx
  USAGE v13; // ax
  NTSTATUS DeviceButtons; // edi
  NTSTATUS SpecificValueCaps; // eax
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rsi
  struct _HIDP_VALUE_CAPS *v20; // rax
  struct _HIDP_VALUE_CAPS *v21; // r14
  __int64 v22; // r8
  struct _HIDP_VALUE_CAPS *v23; // rdx
  unsigned int v24; // r9d
  __int64 v25; // rcx
  __int64 v26; // xmm0_8
  unsigned int v27; // r10d
  BOOLEAN *p_HasNull; // rsi
  __int16 v29; // r9
  unsigned __int16 v30; // r9
  __int16 v31; // r11
  __int64 v32; // rdx
  __int64 v33; // r8
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  bool v37; // zf
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  int v42; // eax
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // eax
  __int128 v48; // xmm1
  struct DEVICEINFO *v49; // rsi
  __int64 v50; // xmm0_8
  int v51; // eax
  __int64 Monitor; // rax
  __int64 v53; // xmm0_8
  __int64 v54; // rcx
  int v55; // ecx
  struct _LIST_ENTRY **v56; // rdx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v58; // [rsp+44h] [rbp-BCh] BYREF
  int v59; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+4Ch] [rbp-B4h]
  int v61; // [rsp+50h] [rbp-B0h]
  struct DEVICEINFO *v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h] BYREF
  int v64; // [rsp+68h] [rbp-98h]
  int v65; // [rsp+70h] [rbp-90h]
  int v66; // [rsp+74h] [rbp-8Ch]
  unsigned int v67; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v68; // [rsp+80h] [rbp-80h]
  struct _FILE_OBJECT *v69; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING v70; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v71[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-20h]
  _OWORD v73[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v74; // [rsp+130h] [rbp+30h]
  _OWORD v75[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v76; // [rsp+180h] [rbp+80h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+190h] [rbp+90h] BYREF
  struct _HIDP_VALUE_CAPS v78; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = a1;
  v62 = a1;
  v8 = a3;
  v68 = a4;
  v65 = -1;
  v59 = -1;
  v69 = a5;
  v63 = a6;
  LOBYTE(a3) = 22;
  ValueCapsLength[0] = 0;
  v58 = 0;
  v10 = HMAllocObject(0LL, 0LL, a3, 1768LL);
  if ( !v10 )
    return 3221225628LL;
  *(_DWORD *)(v10 + 704) = 1;
  *(_DWORD *)(v10 + 708) = 1;
  if ( (int)GetProductString(v10, a4, a5) < 0 )
    UserLogError(2147483902LL);
  *(_DWORD *)(v10 + 240) = 2;
  GetContainerId(a4, v10 + 244, v10 + 240);
  Usage = v8->Usage;
  v70 = *(struct _UNICODE_STRING *)(v10 + 272);
  if ( (unsigned int)IsDeviceExcluded(Usage, &v70) )
    goto LABEL_14;
  v13 = v8->Usage;
  if ( v8->Usage == 2 )
  {
    *(_DWORD *)(v10 + 24) = 6;
    *(_DWORD *)(v10 + 1476) = 3;
    goto LABEL_14;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v10 + 24) = 7;
    *(_DWORD *)(v10 + 1476) = 2;
    goto LABEL_14;
  }
  if ( (unsigned __int16)(v13 - 4) > 1u )
  {
LABEL_14:
    ValueCapsLength[0] = 1;
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0xDu, 0, 0x56u, &ValueCaps, ValueCapsLength, a2) >= 0 )
    {
      if ( ValueCaps.LogicalMin >= ValueCaps.LogicalMax || ValueCaps.LogicalMin < 0 || ValueCaps.LogicalMax < 0xFFFF )
      {
        UserLogError(3221225721LL);
        goto LABEL_23;
      }
      *(_DWORD *)(v10 + 236) |= 0x80u;
      *(_DWORD *)(v10 + 1472) = ValueCaps.LogicalMax;
    }
    ValueCapsLength[0] = 0;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v10 + 716), 0, 0LL, ValueCapsLength, a2);
    DeviceButtons = SpecificValueCaps;
    if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    {
      UserLogError(3221225725LL);
      goto LABEL_86;
    }
    v16 = (_DWORD *)(v10 + 32);
    v17 = 6LL;
    do
    {
      *v16 = -1;
      v16 += 4;
      --v17;
    }
    while ( v17 );
    v18 = Win32AllocPoolZInit(2400LL * *(unsigned int *)(v10 + 704), 2020635477LL);
    *(_QWORD *)(v10 + 680) = v18;
    if ( !v18 )
      goto LABEL_86;
    if ( (*(_DWORD *)(v10 + 236) & 2) == 0
      || !*(_WORD *)(*(_QWORD *)(v10 + 696) + 14LL)
      || (v58 = 2,
          DeviceButtons = HidP_GetSpecificValueCaps(
                            HidP_Input,
                            0,
                            *(_WORD *)(*(_QWORD *)(v10 + 696) + 14LL),
                            0,
                            &v78,
                            &v58,
                            a2),
          DeviceButtons >= 0) )
    {
      v19 = ValueCapsLength[0] + (unsigned int)v58;
      v67 = ValueCapsLength[0] + v58;
      v20 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * v19, 2020635477LL);
      v21 = v20;
      if ( !v20 )
      {
LABEL_85:
        v6 = v62;
        goto LABEL_86;
      }
      DeviceButtons = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v10 + 716), 0, v20, ValueCapsLength, a2);
      if ( DeviceButtons < 0 )
        goto LABEL_84;
      if ( (*(_DWORD *)(v10 + 236) & 2) == 0 )
        GetPropertyCount((struct tagHID_POINTER_DEVICE_INFO *)v10, *(_WORD *)(v10 + 716), ValueCapsLength[0], a2);
      if ( v58 )
      {
        v22 = ValueCapsLength[0];
        v23 = &v78;
        v24 = 0;
        do
        {
          if ( (unsigned int)v22 >= (unsigned int)v19 )
            break;
          v25 = v22;
          ++v24;
          v22 = (unsigned int)(v22 + 1);
          *(_OWORD *)&v21[v25].UsagePage = *(_OWORD *)&v23->UsagePage;
          *(_OWORD *)&v21[v25].HasNull = *(_OWORD *)&v23->HasNull;
          *(_OWORD *)&v21[v25].UnitsExp = *(_OWORD *)&v23->UnitsExp;
          *(_OWORD *)&v21[v25].PhysicalMin = *(_OWORD *)&v23->PhysicalMin;
          v26 = *(_QWORD *)&v23->NotRange.DesignatorIndex;
          ++v23;
          *(_QWORD *)&v21[v25].NotRange.DesignatorIndex = v26;
        }
        while ( v24 < 2 );
      }
      v61 = 0;
      v27 = 0;
      v60 = 0;
      if ( (_DWORD)v19 )
      {
        p_HasNull = &v21->HasNull;
        while ( v27 < 6 )
        {
          if ( *(_DWORD *)(v10 + 24) == 4 && !*p_HasNull )
          {
            DeviceButtons = -1073741668;
            break;
          }
          v29 = v8->Usage;
          if ( v8->Usage == 2 )
            v29 = 1;
          if ( (unsigned int)IsEssentialUsage((unsigned __int16)(*((_WORD *)p_HasNull + 20) | ((*((_WORD *)p_HasNull - 8) | (unsigned __int16)(16 * v29)) << 8))) )
          {
            v32 = 60LL * v27;
            *(_WORD *)(v32 + v10 + 320) = v31;
            *(_WORD *)(v32 + v10 + 332) = *((_WORD *)p_HasNull + 20);
            *(_DWORD *)(v32 + v10 + 324) = *(p_HasNull - 14);
            *(_WORD *)(v32 + v10 + 330) = *((_WORD *)p_HasNull - 3);
            *(_DWORD *)(v32 + v10 + 336) = *p_HasNull;
            *(_DWORD *)(v32 + v10 + 352) = *((_DWORD *)p_HasNull + 6);
            *(_DWORD *)(v32 + v10 + 356) = *((_DWORD *)p_HasNull + 7);
            *(_DWORD *)(60 * (v27 + 6LL) + v10) = *((_DWORD *)p_HasNull + 8);
            *(_DWORD *)(v32 + v10 + 364) = *((_DWORD *)p_HasNull + 9);
            *(_WORD *)(v32 + v10 + 376) = *((_WORD *)p_HasNull + 1);
            v33 = 16LL * v27;
            *(_DWORD *)(v10 + 16 * (v27 + 2LL)) = v27;
            *(_WORD *)(v33 + v10 + 28) = *((_WORD *)p_HasNull - 8);
            *(_WORD *)(v33 + v10 + 30) = *((_WORD *)p_HasNull + 20);
            v34 = *(_OWORD *)p_HasNull;
            v75[0] = *((_OWORD *)p_HasNull - 1);
            v35 = *((_OWORD *)p_HasNull + 1);
            v75[1] = v34;
            v36 = *((_OWORD *)p_HasNull + 2);
            v75[2] = v35;
            v76 = *((_QWORD *)p_HasNull + 6);
            v75[3] = v36;
            RetrieveNormalizationRange(v30, (__int16 *)v75, (_QWORD *)(v10 + v33 + 36));
            v27 = v60 + 1;
            v37 = *((_WORD *)p_HasNull + 20) == 48;
            ++v60;
            if ( v37 && *((_WORD *)p_HasNull - 8) == 1 )
            {
              v38 = *((_OWORD *)p_HasNull - 1);
              v39 = *(_OWORD *)p_HasNull;
              v65 = v61;
              v71[0] = v38;
              v40 = *((_OWORD *)p_HasNull + 1);
              v71[1] = v39;
              v41 = *((_OWORD *)p_HasNull + 2);
              v71[2] = v40;
              v72 = *((_QWORD *)p_HasNull + 6);
              v71[3] = v41;
              v42 = ComputeHighMetricValue((__int64)v71);
              v27 = v60;
              *(_DWORD *)(v10 + 164) = v42;
              *(_DWORD *)(v10 + 172) = *((_DWORD *)p_HasNull + 6);
              *(_DWORD *)(v10 + 180) = *((_DWORD *)p_HasNull + 7);
            }
            if ( *((_WORD *)p_HasNull + 20) == 49 && *((_WORD *)p_HasNull - 8) == 1 )
            {
              v43 = *((_OWORD *)p_HasNull - 1);
              v44 = *(_OWORD *)p_HasNull;
              v59 = v61;
              v73[0] = v43;
              v45 = *((_OWORD *)p_HasNull + 1);
              v73[1] = v44;
              v46 = *((_OWORD *)p_HasNull + 2);
              v73[2] = v45;
              v74 = *((_QWORD *)p_HasNull + 6);
              v73[3] = v46;
              v47 = ComputeHighMetricValue((__int64)v73);
              v27 = v60;
              *(_DWORD *)(v10 + 168) = v47;
              *(_DWORD *)(v10 + 176) = *((_DWORD *)p_HasNull + 6);
              *(_DWORD *)(v10 + 184) = *((_DWORD *)p_HasNull + 7);
            }
          }
          p_HasNull += 72;
          if ( ++v61 >= v67 )
            break;
        }
      }
      *(_DWORD *)(v10 + 712) = v27;
      v48 = *(_OWORD *)(v10 + 172);
      *(_OWORD *)(v10 + 140) = *(_OWORD *)(v10 + 156);
      *(_OWORD *)(v10 + 188) = v48;
      if ( DeviceButtons < 0 )
      {
LABEL_84:
        Win32FreePool(v21);
        goto LABEL_85;
      }
      if ( v65 == -1 || v59 == -1 )
      {
        v54 = 3221225725LL;
      }
      else
      {
        if ( v21[v65].LogicalMax != v21[v65].LogicalMin && v21[v59].LogicalMax != v21[v59].LogicalMin )
        {
          if ( v21[v65].PhysicalMax <= v21[v65].PhysicalMin
            || v21[v59].PhysicalMax <= v21[v59].PhysicalMin
            || *(_DWORD *)(v10 + 164) <= *(_DWORD *)(v10 + 156)
            || *(_DWORD *)(v10 + 168) <= *(_DWORD *)(v10 + 160) )
          {
            UserLogError(2147483903LL);
            if ( !(unsigned int)GetPhysicalSizeFromMonitor(v10) )
              UserLogError(2147483904LL);
          }
          if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 7) > 1 )
          {
            v49 = v62;
            v59 = 0;
            ReadDigitizerToMonitorMappings(v62);
            FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)v10);
            if ( v8->Usage == 4 )
            {
              v50 = *(_QWORD *)v63;
              v64 = *(_DWORD *)(v63 + 8);
              v63 = v50;
              if ( (int)ValidateDeviceSignature(v68, v69, a2, v8, v10, &v63, v59) >= 0 )
              {
                v51 = *(_DWORD *)(v10 + 236);
                if ( (v51 & 0x100) == 0 )
                  *(_DWORD *)(v10 + 236) = v51 & 0xFFFFFF7F;
                goto LABEL_77;
              }
              goto LABEL_83;
            }
LABEL_77:
            DeviceButtons = GetDeviceButtons(v10, a2, v8);
            if ( DeviceButtons >= 0 && *(_DWORD *)(v10 + 24) != 8 )
            {
              v70 = (struct _UNICODE_STRING)*((_OWORD *)v49 + 13);
              RetrieveCalibrationData((struct tagHID_POINTER_DEVICE_INFO *)v10, &v70);
            }
            goto LABEL_84;
          }
          Monitor = AllocateMonitor(v10);
          *(_QWORD *)(v10 + 264) = Monitor;
          if ( Monitor )
          {
            InitFakeMonitor(v10);
            if ( *(_DWORD *)(v10 + 24) != 8
              || (ComputeVirtualHimetricSize(v10),
                  v53 = *(_QWORD *)v63,
                  v64 = *(_DWORD *)(v63 + 8),
                  v63 = v53,
                  (int)ValidateDeviceSignature(v68, v69, a2, v8, v10, &v63, 0) >= 0) )
            {
              v49 = v62;
              goto LABEL_77;
            }
          }
LABEL_83:
          DeviceButtons = -1073741668;
          goto LABEL_84;
        }
        v54 = 3221225724LL;
      }
      UserLogError(v54);
      goto LABEL_83;
    }
LABEL_23:
    DeviceButtons = -1073741668;
    goto LABEL_24;
  }
  *(_DWORD *)(v10 + 24) = 1;
  *(_DWORD *)(v10 + 1476) = v8->Usage != 5;
  DeviceButtons = AssignTouchType((struct tagHID_POINTER_DEVICE_INFO *)v10, a2, v8, a4, a5);
  if ( DeviceButtons != -1073741668 )
  {
    if ( v8->Usage == 5 )
    {
      v66 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 24) = 8;
    }
    goto LABEL_14;
  }
LABEL_86:
  if ( DeviceButtons >= 0 )
  {
    if ( *(_DWORD *)(v10 + 24) == 8 )
    {
      DeviceButtons = -1073741668;
      if ( ((v66 - 3) & 0xFFFFFFFD) == 0 && (*(_DWORD *)(v10 + 236) & 0x80u) != 0 && *(_DWORD *)(v10 + 704) <= 6u )
        DeviceButtons = 0;
    }
    if ( DeviceButtons >= 0 )
    {
      *((_DWORD *)v6 + 79) = 1;
      v55 = *(_DWORD *)(v10 + 24);
      if ( (unsigned int)(v55 - 1) <= 4 )
      {
        gulPointerDeviceContactCount += *(_DWORD *)(v10 + 704);
        *(_DWORD *)(v10 + 236) |= 0x400u;
      }
      if ( v55 != 8 )
        UpdatePointerDeviceSystemMetrics((struct tagHID_POINTER_DEVICE_INFO *)v10);
      *(_DWORD *)(v10 + 864) = 100;
      *(_QWORD *)(v10 + 872) = 100 * gliQpcFreq.QuadPart / 0x3E8uLL;
      HMAssignmentLock((char *)v6 + 416, v10);
      v56 = (struct _LIST_ENTRY **)qword_1C03247A8;
      *(_QWORD *)(v10 + 1512) = qword_1C03247A8;
      *(_QWORD *)(v10 + 1504) = &gPointerDeviceInfoList;
      if ( *v56 != &gPointerDeviceInfoList )
        __fastfail(3u);
      *v56 = (struct _LIST_ENTRY *)(v10 + 1504);
      qword_1C03247A8 = v10 + 1504;
      *(_QWORD *)(v10 + 720) = *(_QWORD *)v6;
      GetDeviceParent(0LL, v6);
      return (unsigned int)DeviceButtons;
    }
  }
LABEL_24:
  FreePointerDevice((struct tagHID_POINTER_DEVICE_INFO *)v10);
  return (unsigned int)DeviceButtons;
}
