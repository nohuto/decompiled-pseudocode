/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C001F8A0
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C001F170 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     DrvGetDeviceFromName @ 0x1C0043830 (DrvGetDeviceFromName.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C005016C (DrvpGetDeviceInterfaceName.c)
 *     UpdateMonitorDevices @ 0x1C0061AA0 (UpdateMonitorDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00718F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0079250 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
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
  __int64 v15; // rax
  __int64 CurrentProcess; // rax
  __int64 v18; // rdx
  const char *ProcessImageFileName; // rdi
  struct _DEVICE_OBJECT *v20; // rax
  struct _DEVICE_OBJECT *v21; // rcx
  __int64 v22; // rax
  __int64 DeviceFromName; // rax
  __int64 v24; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // r13d
  char *v27; // rdi
  __int64 v28; // r12
  const wchar_t *v29; // r8
  ULONG v30; // r12d
  size_t i; // rcx
  NTSTATUS v32; // eax
  void *v33; // r15
  int v34; // eax
  int v35; // eax
  int DeviceInterfaceName; // eax
  __int64 v37; // rcx
  __int64 v38; // rax
  void *v39; // r15
  NTSTATUS DeviceProperty; // eax
  char *v41; // r12
  __int64 v42; // r15
  __int64 v43; // rax
  ULONG v44; // eax
  char *v45; // r12
  __int64 v46; // rdx
  char *v47; // rsi
  PVOID v48; // rcx
  __int64 v49; // rax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  void *v52; // [rsp+50h] [rbp-198h]
  SIZE_T Length; // [rsp+58h] [rbp-190h]
  __int64 v54; // [rsp+60h] [rbp-188h]
  void *v55; // [rsp+68h] [rbp-180h]
  int v56; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h]
  PVOID P; // [rsp+80h] [rbp-168h] BYREF
  __int64 v59; // [rsp+88h] [rbp-160h]
  volatile void *Address; // [rsp+90h] [rbp-158h]
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v52 = a4;
  v56 = a3;
  v54 = a1;
  Address = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v11[3] = a1;
  v59 = a3;
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
      v24 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v24);
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
        && ((v12 = *((unsigned int *)v13 + 40), (v12 & 0x2000000) != 0)
         || gProtocolType && v13[124] != gProtocolType && (v12 & 0x4000008) == 0) )
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
      v15 = WdLogNewEntry5_WdTrace(v12);
      WdLogEvent5_WdTrace(v15);
      return 3221225473LL;
    }
    CurrentProcess = PsGetCurrentProcess(v12, (unsigned __int16)gProtocolType);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
      && ::Object
      && (PVOID)PsGetCurrentProcess(65533LL, v18) != gpepCSRSS
      && !(unsigned int)UserIsCurrentProcessDwm()
      && ProcessImageFileName
      && _stricmp(ProcessImageFileName, "rdpshell.exe")
      && _stricmp(ProcessImageFileName, "rdpclip.exe")
      && (v13[80] & 8) == 0 )
    {
      v9 = 1;
    }
    v20 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 18);
    if ( v20 )
      goto LABEL_27;
    if ( v9 )
    {
      v20 = (struct _DEVICE_OBJECT *)::Object;
LABEL_27:
      DeviceObject = v20;
      goto LABEL_36;
    }
    v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)v13 + 17);
    if ( v21 )
    {
      if ( (int)DrvForceChildDeviceReenumeration(v21, (struct _DEVICE_RELATIONS **)&P) >= 0 )
      {
        DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P + 1);
        ExFreePoolWithTag(P, 0);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdTrace(0LL);
      WdLogEvent5_WdTrace(v22);
    }
  }
LABEL_36:
  v55 = 0LL;
  if ( a6 != 1 )
  {
    v26 = *(_DWORD *)v52;
    if ( *(_DWORD *)v52 >= 0x348u )
      v26 = 840;
    LODWORD(Length) = v26;
    v27 = (char *)v52;
    v55 = v52;
    memset(v52, 0, v26);
LABEL_46:
    if ( v26 >= 4 )
      *(_DWORD *)v27 = 4;
    v28 = v54;
    if ( v26 >= 0x44 )
    {
      *(_DWORD *)v27 = 68;
      if ( v28 )
      {
        swprintf_s((wchar_t *)v27 + 2, 0x20uLL, L"%ws\\Monitor%d", v13 + 32, v56);
      }
      else
      {
        *(_OWORD *)(v27 + 4) = *((_OWORD *)v13 + 4);
        *(_OWORD *)(v27 + 20) = *((_OWORD *)v13 + 5);
        *(_OWORD *)(v27 + 36) = *((_OWORD *)v13 + 6);
        *(_OWORD *)(v27 + 52) = *((_OWORD *)v13 + 7);
      }
      *((_WORD *)v27 + 33) = 0;
    }
    if ( v26 < 0x144 )
    {
      v30 = 256;
LABEL_70:
      if ( v26 >= 0x148 )
      {
        *(_DWORD *)v27 = 328;
        if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v13) )
          *((_DWORD *)v13 + 40) &= ~0x80000u;
        else
          *((_DWORD *)v13 + 40) |= 0x80000u;
        if ( v54 )
        {
          *((_DWORD *)v27 + 81) = *(_DWORD *)(*((_QWORD *)v13 + 29) + 20 * v59) & 0xFFFFFFF;
        }
        else
        {
          v34 = *((_DWORD *)v13 + 40);
          if ( (a5 & 2) != 0 )
            v35 = v34 & 0xFFFFFFF;
          else
            v35 = v34 & 0xF2FFFFF;
          *((_DWORD *)v27 + 81) = v35;
        }
      }
      if ( v26 < 0x248 )
      {
        v42 = -1LL;
        goto LABEL_105;
      }
      *(_DWORD *)v27 = 584;
      *((_WORD *)v27 + 164) = 0;
      if ( (a5 & 1) != 0 )
      {
        if ( DeviceObject )
        {
          DeviceInterfaceName = DrvpGetDeviceInterfaceName(DeviceObject, &GUID_DEVINTERFACE_MONITOR);
          v10 = DeviceInterfaceName;
          if ( DeviceInterfaceName < 0 )
          {
            v38 = WdLogNewEntry5_WdTrace(v37);
            *(_QWORD *)(v38 + 24) = v10;
            WdLogEvent5_WdTrace(v38);
            goto LABEL_120;
          }
        }
      }
      else if ( DeviceObject )
      {
        for ( BufferLength = 256; ; v30 = BufferLength )
        {
          v39 = 0LL;
          if ( v30 )
          {
            v39 = (void *)Win32AllocPool(v30, 1684301127LL);
            v30 = BufferLength;
          }
          if ( !v39 )
          {
            LODWORD(v10) = -1073741670;
            goto LABEL_96;
          }
          DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, v30, v39, &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool(v39);
        }
        if ( !DeviceProperty )
        {
          v41 = v27 + 328;
          wcsncpy_s((wchar_t *)v27 + 164, 0x80uLL, (const wchar_t *)v39, 0x7FuLL);
          Win32FreePool(v39);
          goto LABEL_97;
        }
        Win32FreePool(v39);
LABEL_96:
        v41 = v27 + 328;
LABEL_97:
        if ( v54 )
        {
          *((_WORD *)v27 + 291) = 0;
          v42 = -1LL;
          v43 = -1LL;
          do
            ++v43;
          while ( *(_WORD *)&v41[2 * v43] );
          v44 = v43 + 1;
          BufferLength = v44;
          if ( v44 < 0x7E )
          {
            *(_WORD *)&v27[2 * v44 + 326] = 92;
            IoGetDeviceProperty(
              DeviceObject,
              DevicePropertyDriverKeyName,
              2 * (127 - BufferLength),
              &v27[2 * BufferLength + 328],
              &BufferLength);
          }
          goto LABEL_103;
        }
      }
      v42 = -1LL;
LABEL_103:
      *((_WORD *)v27 + 291) = 0;
LABEL_105:
      if ( v26 >= 0x348 )
      {
        *(_DWORD *)v27 = 840;
        v45 = v27 + 584;
        *((_WORD *)v27 + 292) = 0;
        if ( v54 )
        {
          if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
          {
            wcscpy_s((wchar_t *)v27 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
            v46 = -1LL;
            do
              ++v46;
            while ( *(_WORD *)&v45[2 * v46] );
            BufferLength = v46;
            wcsncpy_s(
              (wchar_t *)&v27[2 * (unsigned int)v46 + 584],
              128LL - (unsigned int)v46,
              L"\\Control\\Class\\",
              (unsigned int)(127 - v46));
            do
              ++v42;
            while ( *(_WORD *)&v45[2 * v42] );
            BufferLength = v42;
            wcsncpy_s(
              (wchar_t *)&v27[2 * (unsigned int)v42 + 584],
              128LL - (unsigned int)v42,
              PropertyBuffer,
              (unsigned int)(127 - v42));
          }
        }
        else
        {
          DrvGetRegistryHandleFromDeviceMap(v13, 3LL, 0LL, v27 + 584, 128, 0LL, gProtocolType);
        }
        *((_WORD *)v27 + 419) = 0;
      }
      if ( !v54 && DeviceObject && !*((_QWORD *)v13 + 18) && DeviceObject != ::Object )
        ObfDereferenceObject(DeviceObject);
      goto LABEL_120;
    }
    *(_DWORD *)v27 = 324;
    *((_WORD *)v27 + 34) = 0;
    if ( v28 || v9 )
    {
      if ( DeviceObject )
      {
        v30 = 256;
        BufferLength = 256;
        for ( i = 256LL; ; i = BufferLength )
        {
          v33 = (void *)PALLOCMEM2(i);
          if ( !v33 )
          {
            LODWORD(v10) = -1073741670;
            goto LABEL_68;
          }
          v32 = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, v33, &BufferLength);
          if ( v32 != -1073741789 )
            break;
          Win32FreePool(v33);
        }
        if ( !v32 )
          wcsncpy_s((wchar_t *)v27 + 34, 0x80uLL, (const wchar_t *)v33, 0x7FuLL);
        Win32FreePool(v33);
        goto LABEL_68;
      }
    }
    else
    {
      v29 = (const wchar_t *)*((_QWORD *)v13 + 27);
      if ( v29 )
        wcsncpy_s((wchar_t *)v27 + 34, 0x80uLL, v29, 0x7FuLL);
    }
    v30 = 256;
LABEL_68:
    *((_WORD *)v27 + 161) = 0;
    goto LABEL_70;
  }
  v25 = v52;
  if ( v52 >= W32UserProbeAddress )
    v25 = W32UserProbeAddress;
  LODWORD(Length) = *v25;
  v26 = 840;
  if ( (unsigned int)Length <= 0x348 )
    v26 = Length;
  LODWORD(Length) = v26;
  v27 = (char *)PALLOCMEM2(v26);
  v55 = v27;
  if ( v27 )
    goto LABEL_46;
  LODWORD(v10) = -1073741823;
LABEL_120:
  v47 = (char *)v52;
  v48 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v27 != v47 )
  {
    if ( v27 )
    {
      ProbeForWrite(v47, v26, 4u);
      memmove(v47, v27, v26);
      Win32FreePool(v27);
    }
  }
  v49 = WdLogNewEntry5_WdTrace(v48);
  *(_QWORD *)(v49 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v49);
  return (unsigned int)v10;
}
