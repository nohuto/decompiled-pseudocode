/*
 * XREFs of CreatePointerDeviceInfo @ 0x1C01C9610
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D3DC4 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     RetrieveCalibrationData @ 0x1C00949F0 (RetrieveCalibrationData.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     ValidateDeviceSignature @ 0x1C0108DF0 (ValidateDeviceSignature.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     RetrieveNormalizationRange @ 0x1C01C3E8C (RetrieveNormalizationRange.c)
 *     ?GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1C01C7008 (-GetPropertyCount@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@GGPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     AllocateMonitor @ 0x1C01C8F30 (AllocateMonitor.c)
 *     AssignTouchType @ 0x1C01C9090 (AssignTouchType.c)
 *     ComputeHighMetricValue @ 0x1C01C9518 (ComputeHighMetricValue.c)
 *     FindMonitorForDigitizer @ 0x1C01CBF70 (FindMonitorForDigitizer.c)
 *     FreePointerDevice @ 0x1C01CC4B0 (FreePointerDevice.c)
 *     GetContainerId @ 0x1C01CC714 (GetContainerId.c)
 *     GetDeviceButtons @ 0x1C01CC804 (GetDeviceButtons.c)
 *     GetPhysicalSizeFromMonitor @ 0x1C01CCBC0 (GetPhysicalSizeFromMonitor.c)
 *     GetProductString @ 0x1C01CD718 (GetProductString.c)
 *     InitFakeMonitor @ 0x1C01CD990 (InitFakeMonitor.c)
 *     IsDeviceExcluded @ 0x1C01CDA48 (IsDeviceExcluded.c)
 *     IsEssentialUsage @ 0x1C01CDB68 (IsEssentialUsage.c)
 *     ReadDigitizerToMonitorMappings @ 0x1C01CDEA0 (ReadDigitizerToMonitorMappings.c)
 *     ComputeVirtualHimetricSize @ 0x1C01D0CB0 (ComputeVirtualHimetricSize.c)
 *     GetDeviceParent @ 0x1C01D5064 (GetDeviceParent.c)
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
  NTSTATUS v22; // eax
  struct _HIDP_VALUE_CAPS *v23; // rdx
  int v24; // r11d
  __int64 v25; // r8
  unsigned int v26; // r9d
  __int64 v27; // rcx
  __int64 v28; // xmm0_8
  unsigned int v29; // r8d
  BOOLEAN *p_HasNull; // rsi
  __int16 v31; // r9
  unsigned __int16 v32; // r9
  __int16 v33; // r10
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  bool v39; // zf
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  int v44; // eax
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int v49; // eax
  __int128 v50; // xmm1
  int PhysicalSizeFromMonitor; // eax
  struct DEVICEINFO *v52; // rsi
  __int64 v53; // xmm0_8
  int v54; // eax
  __int64 Monitor; // rax
  __int64 v56; // xmm0_8
  __int64 v57; // rcx
  int v58; // ecx
  struct _LIST_ENTRY **v59; // rdx
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  USHORT v61; // [rsp+44h] [rbp-BCh] BYREF
  int v62; // [rsp+48h] [rbp-B8h]
  unsigned int v63; // [rsp+4Ch] [rbp-B4h]
  int v64; // [rsp+50h] [rbp-B0h]
  struct DEVICEINFO *v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h] BYREF
  int v67; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+70h] [rbp-90h]
  int v69; // [rsp+74h] [rbp-8Ch]
  unsigned int v70; // [rsp+78h] [rbp-88h]
  struct _DEVICE_OBJECT *v71; // [rsp+80h] [rbp-80h]
  struct _FILE_OBJECT *v72; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING v73; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v74[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v75; // [rsp+E0h] [rbp-20h]
  _OWORD v76[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v77; // [rsp+130h] [rbp+30h]
  _OWORD v78[4]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v79; // [rsp+180h] [rbp+80h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+190h] [rbp+90h] BYREF
  struct _HIDP_VALUE_CAPS v81; // [rsp+1E0h] [rbp+E0h] BYREF

  v6 = a1;
  v65 = a1;
  v8 = a3;
  v71 = a4;
  v68 = -1;
  v62 = -1;
  v72 = a5;
  v66 = a6;
  LOBYTE(a3) = 22;
  ValueCapsLength[0] = 0;
  v61 = 0;
  v10 = HMAllocObject(0LL, 0LL, a3);
  if ( !v10 )
    return 3221225628LL;
  *(_DWORD *)(v10 + 720) = 1;
  *(_DWORD *)(v10 + 724) = 1;
  if ( (int)GetProductString(v10, a4, a5) < 0 )
    UserLogError(2147483902LL);
  *(_DWORD *)(v10 + 256) = 2;
  GetContainerId(a4, v10 + 260, v10 + 256);
  Usage = v8->Usage;
  v73 = *(struct _UNICODE_STRING *)(v10 + 288);
  if ( (unsigned int)IsDeviceExcluded(Usage, &v73) )
    goto LABEL_14;
  v13 = v8->Usage;
  if ( v8->Usage == 2 )
  {
    *(_DWORD *)(v10 + 24) = 6;
    *(_DWORD *)(v10 + 1492) = 3;
    goto LABEL_14;
  }
  if ( v13 == 1 )
  {
    *(_DWORD *)(v10 + 24) = 7;
    *(_DWORD *)(v10 + 1492) = 2;
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
      *(_DWORD *)(v10 + 252) |= 0x200u;
      *(_DWORD *)(v10 + 1488) = ValueCaps.LogicalMax;
    }
    ValueCapsLength[0] = 0;
    SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v10 + 732), 0, 0LL, ValueCapsLength, a2);
    DeviceButtons = SpecificValueCaps;
    if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    {
      UserLogError(3221225725LL);
      goto LABEL_87;
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
    v18 = Win32AllocPoolZInit(2400LL * *(unsigned int *)(v10 + 720), 2020635477LL);
    *(_QWORD *)(v10 + 696) = v18;
    if ( !v18 )
      goto LABEL_87;
    if ( (*(_DWORD *)(v10 + 252) & 8) == 0
      || !*(_WORD *)(*(_QWORD *)(v10 + 712) + 14LL)
      || (v61 = 2,
          DeviceButtons = HidP_GetSpecificValueCaps(
                            HidP_Input,
                            0,
                            *(_WORD *)(*(_QWORD *)(v10 + 712) + 14LL),
                            0,
                            &v81,
                            &v61,
                            a2),
          DeviceButtons >= 0) )
    {
      v19 = ValueCapsLength[0] + (unsigned int)v61;
      v70 = ValueCapsLength[0] + v61;
      v20 = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72 * v19);
      v21 = v20;
      if ( !v20 )
      {
LABEL_86:
        v6 = v65;
        goto LABEL_87;
      }
      v22 = HidP_GetSpecificValueCaps(HidP_Input, 0, *(_WORD *)(v10 + 732), 0, v20, ValueCapsLength, a2);
      v24 = 0;
      DeviceButtons = v22;
      if ( v22 < 0 )
        goto LABEL_85;
      if ( (*(_DWORD *)(v10 + 252) & 8) == 0 )
      {
        GetPropertyCount((struct tagHID_POINTER_DEVICE_INFO *)v10, *(_WORD *)(v10 + 732), ValueCapsLength[0], a2);
        v24 = 0;
      }
      if ( v61 )
      {
        v25 = ValueCapsLength[0];
        v23 = &v81;
        v26 = 0;
        do
        {
          if ( (unsigned int)v25 >= (unsigned int)v19 )
            break;
          v27 = v25;
          ++v26;
          v25 = (unsigned int)(v25 + 1);
          *(_OWORD *)&v21[v27].UsagePage = *(_OWORD *)&v23->UsagePage;
          *(_OWORD *)&v21[v27].HasNull = *(_OWORD *)&v23->HasNull;
          *(_OWORD *)&v21[v27].UnitsExp = *(_OWORD *)&v23->UnitsExp;
          *(_OWORD *)&v21[v27].PhysicalMin = *(_OWORD *)&v23->PhysicalMin;
          v28 = *(_QWORD *)&v23->NotRange.DesignatorIndex;
          ++v23;
          *(_QWORD *)&v21[v27].NotRange.DesignatorIndex = v28;
        }
        while ( v26 < 2 );
      }
      v64 = 0;
      v29 = 0;
      v63 = 0;
      if ( (_DWORD)v19 )
      {
        p_HasNull = &v21->HasNull;
        while ( v29 < 6 )
        {
          if ( *(_DWORD *)(v10 + 24) == 4 && *p_HasNull == (_BYTE)v24 )
          {
            DeviceButtons = -1073741668;
            break;
          }
          v31 = v8->Usage;
          if ( v8->Usage == 2 )
            v31 = 1;
          if ( (unsigned int)IsEssentialUsage(
                               (unsigned __int16)(*((_WORD *)p_HasNull + 20) | ((*((_WORD *)p_HasNull - 8) | (unsigned __int16)(16 * v31)) << 8)),
                               v23) )
          {
            v34 = 60LL * v29;
            *(_WORD *)(v34 + v10 + 336) = v33;
            *(_WORD *)(v34 + v10 + 348) = *((_WORD *)p_HasNull + 20);
            *(_DWORD *)(v34 + v10 + 340) = *(p_HasNull - 14);
            *(_WORD *)(v34 + v10 + 346) = *((_WORD *)p_HasNull - 3);
            *(_DWORD *)(v34 + v10 + 352) = *p_HasNull;
            *(_DWORD *)(v34 + v10 + 368) = *((_DWORD *)p_HasNull + 6);
            *(_DWORD *)(v34 + v10 + 372) = *((_DWORD *)p_HasNull + 7);
            *(_DWORD *)(v34 + v10 + 376) = *((_DWORD *)p_HasNull + 8);
            *(_DWORD *)(v34 + v10 + 380) = *((_DWORD *)p_HasNull + 9);
            *(_WORD *)(v34 + v10 + 392) = *((_WORD *)p_HasNull + 1);
            v35 = 16LL * v29;
            *(_DWORD *)(v10 + 16 * (v29 + 2LL)) = v29;
            *(_WORD *)(v35 + v10 + 28) = *((_WORD *)p_HasNull - 8);
            *(_WORD *)(v35 + v10 + 30) = *((_WORD *)p_HasNull + 20);
            v36 = *(_OWORD *)p_HasNull;
            v78[0] = *((_OWORD *)p_HasNull - 1);
            v37 = *((_OWORD *)p_HasNull + 1);
            v78[1] = v36;
            v38 = *((_OWORD *)p_HasNull + 2);
            v78[2] = v37;
            v79 = *((_QWORD *)p_HasNull + 6);
            v78[3] = v38;
            RetrieveNormalizationRange(v32, (__int16 *)v78, (_QWORD *)(v35 + v10 + 36));
            v29 = v63 + 1;
            v39 = *((_WORD *)p_HasNull + 20) == 48;
            ++v63;
            if ( v39 && *((_WORD *)p_HasNull - 8) == 1 )
            {
              v40 = *((_OWORD *)p_HasNull - 1);
              v41 = *(_OWORD *)p_HasNull;
              v68 = v64;
              v74[0] = v40;
              v42 = *((_OWORD *)p_HasNull + 1);
              v74[1] = v41;
              v43 = *((_OWORD *)p_HasNull + 2);
              v74[2] = v42;
              v75 = *((_QWORD *)p_HasNull + 6);
              v74[3] = v43;
              v44 = ComputeHighMetricValue((__int64)v74);
              v29 = v63;
              *(_DWORD *)(v10 + 164) = v44;
              *(_DWORD *)(v10 + 172) = *((_DWORD *)p_HasNull + 6);
              *(_DWORD *)(v10 + 180) = *((_DWORD *)p_HasNull + 7);
            }
            if ( *((_WORD *)p_HasNull + 20) == 49 && *((_WORD *)p_HasNull - 8) == 1 )
            {
              v45 = *((_OWORD *)p_HasNull - 1);
              v46 = *(_OWORD *)p_HasNull;
              v62 = v64;
              v76[0] = v45;
              v47 = *((_OWORD *)p_HasNull + 1);
              v76[1] = v46;
              v48 = *((_OWORD *)p_HasNull + 2);
              v76[2] = v47;
              v77 = *((_QWORD *)p_HasNull + 6);
              v76[3] = v48;
              v49 = ComputeHighMetricValue((__int64)v76);
              v29 = v63;
              *(_DWORD *)(v10 + 168) = v49;
              *(_DWORD *)(v10 + 176) = *((_DWORD *)p_HasNull + 6);
              *(_DWORD *)(v10 + 184) = *((_DWORD *)p_HasNull + 7);
            }
            v24 = 0;
          }
          p_HasNull += 72;
          if ( ++v64 >= v70 )
            break;
        }
      }
      *(_DWORD *)(v10 + 728) = v29;
      v50 = *(_OWORD *)(v10 + 172);
      *(_OWORD *)(v10 + 140) = *(_OWORD *)(v10 + 156);
      *(_OWORD *)(v10 + 188) = v50;
      if ( DeviceButtons < 0 )
      {
LABEL_85:
        Win32FreePool(v21);
        goto LABEL_86;
      }
      if ( v68 == -1 || v62 == -1 )
      {
        v57 = 3221225725LL;
      }
      else
      {
        if ( v21[v68].LogicalMax != v21[v68].LogicalMin && v21[v62].LogicalMax != v21[v62].LogicalMin )
        {
          if ( v21[v68].PhysicalMax <= v21[v68].PhysicalMin
            || v21[v62].PhysicalMax <= v21[v62].PhysicalMin
            || *(_DWORD *)(v10 + 164) <= *(_DWORD *)(v10 + 156)
            || *(_DWORD *)(v10 + 168) <= *(_DWORD *)(v10 + 160) )
          {
            UserLogError(2147483903LL);
            PhysicalSizeFromMonitor = GetPhysicalSizeFromMonitor(v10);
            v24 = 0;
            if ( !PhysicalSizeFromMonitor )
            {
              UserLogError(2147483904LL);
              v24 = 0;
            }
          }
          if ( (unsigned int)(*(_DWORD *)(v10 + 24) - 7) > 1 )
          {
            v52 = v65;
            v62 = v24;
            ReadDigitizerToMonitorMappings(v65);
            FindMonitorForDigitizer((struct tagHID_POINTER_DEVICE_INFO *)v10);
            if ( v8->Usage == 4 )
            {
              v53 = *(_QWORD *)v66;
              v67 = *(_DWORD *)(v66 + 8);
              v66 = v53;
              if ( (int)ValidateDeviceSignature(v71, v72, a2, v8, v10, &v66, v62) >= 0 )
              {
                v54 = *(_DWORD *)(v10 + 252);
                if ( (v54 & 0x400) == 0 )
                  *(_DWORD *)(v10 + 252) = v54 & 0xFFFFFDFF;
                goto LABEL_78;
              }
              goto LABEL_84;
            }
LABEL_78:
            DeviceButtons = GetDeviceButtons(v10, a2, v8);
            if ( DeviceButtons >= 0 && *(_DWORD *)(v10 + 24) != 8 )
            {
              v73 = *(struct _UNICODE_STRING *)((char *)v52 + 200);
              RetrieveCalibrationData((struct tagHID_POINTER_DEVICE_INFO *)v10, &v73);
            }
            goto LABEL_85;
          }
          Monitor = AllocateMonitor(v10);
          *(_QWORD *)(v10 + 280) = Monitor;
          if ( Monitor )
          {
            InitFakeMonitor(v10);
            if ( *(_DWORD *)(v10 + 24) != 8
              || (ComputeVirtualHimetricSize(v10, 1LL),
                  v56 = *(_QWORD *)v66,
                  v67 = *(_DWORD *)(v66 + 8),
                  v66 = v56,
                  (int)ValidateDeviceSignature(v71, v72, a2, v8, v10, &v66, 0) >= 0) )
            {
              v52 = v65;
              goto LABEL_78;
            }
          }
LABEL_84:
          DeviceButtons = -1073741668;
          goto LABEL_85;
        }
        v57 = 3221225724LL;
      }
      UserLogError(v57);
      goto LABEL_84;
    }
LABEL_23:
    DeviceButtons = -1073741668;
    goto LABEL_24;
  }
  *(_DWORD *)(v10 + 24) = 1;
  *(_DWORD *)(v10 + 1492) = v8->Usage != 5;
  DeviceButtons = AssignTouchType((struct tagHID_POINTER_DEVICE_INFO *)v10, a2, v8, a4, a5);
  if ( DeviceButtons != -1073741668 )
  {
    if ( v8->Usage == 5 )
    {
      v69 = *(_DWORD *)(v10 + 24);
      *(_DWORD *)(v10 + 24) = 8;
    }
    goto LABEL_14;
  }
LABEL_87:
  if ( DeviceButtons >= 0 )
  {
    if ( *(_DWORD *)(v10 + 24) == 8 )
    {
      DeviceButtons = -1073741668;
      if ( ((v69 - 3) & 0xFFFFFFFD) == 0 && (*(_DWORD *)(v10 + 252) & 0x200) != 0 && *(_DWORD *)(v10 + 720) <= 6u )
        DeviceButtons = 0;
    }
    if ( DeviceButtons >= 0 )
    {
      *((_DWORD *)v6 + 77) = 1;
      v58 = *(_DWORD *)(v10 + 24);
      if ( (unsigned int)(v58 - 1) <= 4 )
      {
        gulPointerDeviceContactCount += *(_DWORD *)(v10 + 720);
        *(_DWORD *)(v10 + 252) |= 0x1000u;
      }
      if ( v58 != 8 )
        UpdatePointerDeviceSystemMetrics((struct tagHID_POINTER_DEVICE_INFO *)v10);
      *(_DWORD *)(v10 + 880) = 100;
      *(_QWORD *)(v10 + 888) = 100 * gliQpcFreq.QuadPart / 1000;
      HMAssignmentLock((char *)v6 + 416, v10);
      v59 = (struct _LIST_ENTRY **)qword_1C0323FB8;
      *(_QWORD *)(v10 + 1528) = qword_1C0323FB8;
      *(_QWORD *)(v10 + 1520) = &gPointerDeviceInfoList;
      if ( *v59 != &gPointerDeviceInfoList )
        __fastfail(3u);
      *v59 = (struct _LIST_ENTRY *)(v10 + 1520);
      qword_1C0323FB8 = v10 + 1520;
      *(_QWORD *)(v10 + 736) = *(_QWORD *)v6;
      GetDeviceParent(0LL, v6);
      return (unsigned int)DeviceButtons;
    }
  }
LABEL_24:
  FreePointerDevice((struct tagHID_POINTER_DEVICE_INFO *)v10);
  return (unsigned int)DeviceButtons;
}
