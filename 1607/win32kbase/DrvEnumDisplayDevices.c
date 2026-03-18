/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C00399E0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0016030 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     UpdateMonitorDevices @ 0x1C005F930 (UpdateMonitorDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005FDC0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDeviceFromName @ 0x1C0063110 (DrvGetDeviceFromName.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C007CAB4 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C007DE8C (DrvpGetDeviceInterfaceName.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v9; // r15d
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  wchar_t *v13; // rsi
  ULONG v14; // eax
  int v15; // edx
  __int64 v16; // rax
  struct _DEVICE_OBJECT *v18; // rax
  struct _DEVICE_OBJECT *v19; // rcx
  __int64 v20; // rax
  __int64 DeviceFromName; // rax
  __int64 v22; // rax
  _DWORD *v23; // rcx
  unsigned int v24; // r13d
  char *v25; // rdi
  __int64 v26; // r12
  const wchar_t *v27; // r8
  size_t i; // rcx
  NTSTATUS DeviceProperty; // eax
  void *v30; // r15
  int v31; // eax
  int v32; // eax
  int DeviceInterfaceName; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  size_t j; // rcx
  NTSTATUS v37; // eax
  void *v38; // r15
  char *v39; // r12
  __int64 v40; // r15
  __int64 v41; // rax
  ULONG v42; // eax
  char *v43; // r12
  __int64 v44; // rdx
  char *v45; // rsi
  PVOID v46; // rcx
  __int64 v47; // rax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  void *v50; // [rsp+50h] [rbp-198h]
  SIZE_T Length; // [rsp+58h] [rbp-190h]
  __int64 v52; // [rsp+60h] [rbp-188h]
  void *v53; // [rsp+68h] [rbp-180h]
  int v54; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h]
  PVOID P[2]; // [rsp+80h] [rbp-168h] BYREF
  __int64 v57; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v50 = a4;
  v54 = a3;
  v52 = a1;
  P[1] = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = a1;
  v57 = a3;
  v11[4] = a3;
  v11[5] = a4;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  if ( a1 )
  {
    UpdateMonitorDevices();
    DeviceFromName = DrvGetDeviceFromName(a1, a6);
    v13 = (wchar_t *)DeviceFromName;
    if ( !DeviceFromName || a3 >= *(_DWORD *)(DeviceFromName + 224) )
      return 3221225473LL;
    if ( (int)_guard_dispatch_icall_fptr() < 0 )
    {
      v22 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v22);
      return 3221225473LL;
    }
  }
  else
  {
    v13 = gpGraphicsDeviceList;
    if ( !gpGraphicsDeviceList )
      goto LABEL_13;
    v14 = BufferLength;
    do
    {
      if ( a6
        && ((v15 = *((_DWORD *)v13 + 40), (v15 & 0x2000000) != 0)
         || (v12 = (unsigned __int16)gProtocolType, gProtocolType)
         && v13[124] != gProtocolType
         && (v15 & 0x4000008) == 0) )
      {
        BufferLength = --v14;
      }
      else if ( v14 == a3 )
      {
        break;
      }
      v13 = (wchar_t *)*((_QWORD *)v13 + 16);
      BufferLength = ++v14;
    }
    while ( v13 );
    if ( !v13 )
    {
LABEL_13:
      v16 = WdLogNewEntry5_WdTrace(v12);
      WdLogEvent5_WdTrace(v16);
      return 3221225473LL;
    }
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
      && ::Object
      && (PVOID)PsGetCurrentProcess(65533LL) != gpepCSRSS
      && !(unsigned int)UserIsCurrentProcessDwm()
      && (v13[80] & 8) == 0 )
    {
      v9 = 1;
    }
    v18 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 18);
    if ( v18 )
      goto LABEL_24;
    if ( v9 )
    {
      v18 = (struct _DEVICE_OBJECT *)::Object;
LABEL_24:
      DeviceObject = v18;
      goto LABEL_33;
    }
    v19 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 17);
    if ( v19 )
    {
      if ( (int)DrvForceChildDeviceReenumeration(v19, (struct _DEVICE_RELATIONS **)P) >= 0 )
      {
        DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P[0] + 1);
        ExFreePoolWithTag(P[0], 0);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdTrace(0LL);
      WdLogEvent5_WdTrace(v20);
    }
  }
LABEL_33:
  v53 = 0LL;
  if ( a6 != 1 )
  {
    v24 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 >= 0x348u )
      v24 = 840;
    LODWORD(Length) = v24;
    v25 = (char *)v50;
    v53 = v50;
    memset(v50, 0, v24);
LABEL_43:
    if ( v24 >= 4 )
      *(_DWORD *)v25 = 4;
    v26 = v52;
    if ( v24 >= 0x44 )
    {
      *(_DWORD *)v25 = 68;
      if ( v26 )
      {
        swprintf_s((wchar_t *)v25 + 2, 0x20uLL, L"%ws\\Monitor%d", v13 + 32, v54);
      }
      else
      {
        *(_OWORD *)(v25 + 4) = *((_OWORD *)v13 + 4);
        *(_OWORD *)(v25 + 20) = *((_OWORD *)v13 + 5);
        *(_OWORD *)(v25 + 36) = *((_OWORD *)v13 + 6);
        *(_OWORD *)(v25 + 52) = *((_OWORD *)v13 + 7);
      }
      *((_WORD *)v25 + 33) = 0;
    }
    if ( v24 >= 0x144 )
    {
      *(_DWORD *)v25 = 324;
      *((_WORD *)v25 + 34) = 0;
      if ( v26 || v9 )
      {
        if ( DeviceObject )
        {
          BufferLength = 256;
          for ( i = 256LL; ; i = BufferLength )
          {
            v30 = PALLOCMEM2(i, 1684301127LL, 0);
            if ( !v30 )
            {
              LODWORD(v10) = -1073741670;
              goto LABEL_65;
            }
            DeviceProperty = IoGetDeviceProperty(
                               DeviceObject,
                               DevicePropertyDeviceDescription,
                               BufferLength,
                               v30,
                               &BufferLength);
            if ( DeviceProperty != -1073741789 )
              break;
            Win32FreePool();
          }
          if ( !DeviceProperty )
            wcsncpy_s((wchar_t *)v25 + 34, 0x80uLL, (const wchar_t *)v30, 0x7FuLL);
          Win32FreePool();
        }
      }
      else
      {
        v27 = (const wchar_t *)*((_QWORD *)v13 + 27);
        if ( v27 )
          wcsncpy_s((wchar_t *)v25 + 34, 0x80uLL, v27, 0x7FuLL);
      }
LABEL_65:
      *((_WORD *)v25 + 161) = 0;
    }
    if ( v24 >= 0x148 )
    {
      *(_DWORD *)v25 = 328;
      if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v13) )
        *((_DWORD *)v13 + 40) &= ~0x80000u;
      else
        *((_DWORD *)v13 + 40) |= 0x80000u;
      if ( v52 )
      {
        *((_DWORD *)v25 + 81) = *(_DWORD *)(*((_QWORD *)v13 + 29) + 20 * v57) & 0xFFFFFFF;
      }
      else
      {
        v31 = *((_DWORD *)v13 + 40);
        if ( (a5 & 2) != 0 )
          v32 = v31 & 0xFFFFFFF;
        else
          v32 = v31 & 0xF2FFFFF;
        *((_DWORD *)v25 + 81) = v32;
      }
    }
    if ( v24 < 0x248 )
    {
      v40 = -1LL;
      goto LABEL_99;
    }
    *(_DWORD *)v25 = 584;
    *((_WORD *)v25 + 164) = 0;
    if ( (a5 & 1) != 0 )
    {
      if ( DeviceObject )
      {
        DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject, &GUID_DEVINTERFACE_MONITOR);
        v10 = DeviceInterfaceName;
        if ( DeviceInterfaceName < 0 )
        {
          v35 = WdLogNewEntry5_WdTrace(v34);
          *(_QWORD *)(v35 + 24) = v10;
          WdLogEvent5_WdTrace(v35);
          goto LABEL_114;
        }
      }
    }
    else if ( DeviceObject )
    {
      BufferLength = 256;
      for ( j = 256LL; ; j = BufferLength )
      {
        v38 = PALLOCMEM2(j, 1684301127LL, 0);
        if ( !v38 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_90;
        }
        v37 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v38, &BufferLength);
        if ( v37 != -1073741789 )
          break;
        Win32FreePool();
      }
      if ( !v37 )
      {
        v39 = v25 + 328;
        wcsncpy_s((wchar_t *)v25 + 164, 0x80uLL, (const wchar_t *)v38, 0x7FuLL);
        Win32FreePool();
        goto LABEL_91;
      }
      Win32FreePool();
LABEL_90:
      v39 = v25 + 328;
LABEL_91:
      if ( v52 )
      {
        *((_WORD *)v25 + 291) = 0;
        v40 = -1LL;
        v41 = -1LL;
        do
          ++v41;
        while ( *(_WORD *)&v39[2 * v41] );
        v42 = v41 + 1;
        BufferLength = v42;
        if ( v42 < 0x7E )
        {
          *(_WORD *)&v25[2 * v42 + 326] = 92;
          IoGetDeviceProperty(
            DeviceObject,
            DevicePropertyDriverKeyName,
            2 * (127 - BufferLength),
            &v25[2 * BufferLength + 328],
            &BufferLength);
        }
        goto LABEL_97;
      }
    }
    v40 = -1LL;
LABEL_97:
    *((_WORD *)v25 + 291) = 0;
LABEL_99:
    if ( v24 >= 0x348 )
    {
      *(_DWORD *)v25 = 840;
      v43 = v25 + 584;
      *((_WORD *)v25 + 292) = 0;
      if ( v52 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v25 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v44 = -1LL;
          do
            ++v44;
          while ( *(_WORD *)&v43[2 * v44] );
          BufferLength = v44;
          wcsncpy_s(
            (wchar_t *)&v25[2 * (unsigned int)v44 + 584],
            128LL - (unsigned int)v44,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v44));
          do
            ++v40;
          while ( *(_WORD *)&v43[2 * v40] );
          BufferLength = v40;
          wcsncpy_s(
            (wchar_t *)&v25[2 * (unsigned int)v40 + 584],
            128LL - (unsigned int)v40,
            PropertyBuffer,
            (unsigned int)(127 - v40));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(v13, 3, 0LL, (unsigned __int16 *)v25 + 292, 0x80u, 0LL, gProtocolType);
      }
      *((_WORD *)v25 + 419) = 0;
    }
    if ( !v52 && DeviceObject && !*((_QWORD *)v13 + 18) && DeviceObject != ::Object )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_114;
  }
  v23 = v50;
  if ( (unsigned __int64)v50 >= W32UserProbeAddress )
    v23 = (_DWORD *)W32UserProbeAddress;
  LODWORD(Length) = *v23;
  v24 = 840;
  if ( (unsigned int)Length <= 0x348 )
    v24 = Length;
  LODWORD(Length) = v24;
  v25 = (char *)PALLOCMEM2(v24, 1936876615LL, 1);
  v53 = v25;
  if ( v25 )
    goto LABEL_43;
  LODWORD(v10) = -1073741823;
LABEL_114:
  v45 = (char *)v50;
  v46 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v25 != v45 )
  {
    if ( v25 )
    {
      ProbeForWrite(v45, v24, 4u);
      memmove(v45, v25, v24);
      Win32FreePool();
    }
  }
  v47 = WdLogNewEntry5_WdTrace(v46);
  *(_QWORD *)(v47 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v47);
  return (unsigned int)v10;
}
