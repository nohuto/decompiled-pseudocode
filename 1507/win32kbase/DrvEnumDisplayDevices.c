/*
 * XREFs of DrvEnumDisplayDevices @ 0x1C0031990
 * Callers:
 *     NtUserEnumDisplayDevices @ 0x1C0020A80 (NtUserEnumDisplayDevices.c)
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvpGetDeviceInterfaceName @ 0x1C001D718 (DrvpGetDeviceInterfaceName.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     DrvGetDeviceFromName @ 0x1C0053CD0 (DrvGetDeviceFromName.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     ?DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00827F4 (-DrvForceChildDeviceReenumeration@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvEnumDisplayDevices(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        unsigned int a5,
        unsigned int a6)
{
  int v9; // r12d
  __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  wchar_t *v15; // rsi
  ULONG v16; // eax
  struct _DEVICE_OBJECT *v17; // rax
  _DWORD *v18; // rcx
  unsigned int v19; // r13d
  char *v20; // rdx
  char *v21; // rdi
  const wchar_t *v22; // r8
  __int64 v23; // r15
  ULONG v24; // eax
  int v25; // eax
  int v26; // eax
  void *v27; // r15
  NTSTATUS v28; // eax
  char *v29; // r12
  __int64 v30; // r15
  char *v31; // r12
  char *v32; // rsi
  PVOID v33; // rcx
  __int64 v34; // rax
  __int64 v36; // rax
  __int64 DeviceFromName; // rax
  __int64 v38; // rdx
  size_t v39; // rcx
  void *v40; // r15
  NTSTATUS DeviceProperty; // eax
  __int64 v42; // rax
  ULONG v43; // eax
  int DeviceInterfaceName; // eax
  __int64 v45; // rcx
  struct _DEVICE_OBJECT *v46; // rcx
  BOOL v47; // edi
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  ULONG BufferLength; // [rsp+40h] [rbp-1A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-1A0h]
  void *v55; // [rsp+50h] [rbp-198h]
  __int64 v56; // [rsp+58h] [rbp-190h]
  SIZE_T Length; // [rsp+60h] [rbp-188h]
  void *v58; // [rsp+68h] [rbp-180h]
  int v59; // [rsp+70h] [rbp-178h]
  PVOID Object; // [rsp+78h] [rbp-170h]
  volatile void *Address; // [rsp+80h] [rbp-168h]
  __int64 v62; // [rsp+88h] [rbp-160h]
  PVOID P; // [rsp+90h] [rbp-158h] BYREF
  wchar_t PropertyBuffer[128]; // [rsp+A0h] [rbp-148h] BYREF

  v55 = a4;
  v59 = a3;
  v56 = a1;
  Address = a4;
  BufferLength = 0;
  DeviceObject = 0LL;
  Object = 0LL;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(a1, a2);
  v11[3] = a1;
  v62 = a3;
  v11[4] = a3;
  v11[5] = a4;
  v11[6] = a5;
  WdLogEvent5_WdEvent(v11);
  if ( a1 )
  {
    UpdateMonitorDevices();
    DeviceFromName = DrvGetDeviceFromName(a1, a6);
    v15 = (wchar_t *)DeviceFromName;
    if ( DeviceFromName && a3 < *(_DWORD *)(DeviceFromName + 224) )
    {
      if ( (int)_guard_dispatch_icall_fptr() >= 0 )
        goto LABEL_12;
      v51 = WdLogNewEntry5_WdError();
      WdLogEvent5_WdError(v51);
    }
    return 3221225473LL;
  }
  v15 = gpGraphicsDeviceList;
  if ( !gpGraphicsDeviceList )
    goto LABEL_68;
  v16 = BufferLength;
  v12 = (unsigned __int16)gProtocolType;
  do
  {
    if ( a6
      && ((v13 = *((unsigned int *)v15 + 40), (v13 & 0x2000000) != 0)
       || gProtocolType && v15[124] != gProtocolType && (v13 & 0x4000008) == 0) )
    {
      BufferLength = --v16;
    }
    else if ( v16 == a3 )
    {
      break;
    }
    v15 = (wchar_t *)*((_QWORD *)v15 + 16);
    BufferLength = ++v16;
  }
  while ( v15 );
  if ( !v15 )
  {
LABEL_68:
    v36 = WdLogNewEntry5_WdTrace(v13, v12, v14);
    WdLogEvent5_WdTrace(v36);
    return 3221225473LL;
  }
  if ( dword_1C0102080 && (*((_DWORD *)v15 + 40) & 4) != 0 )
  {
    v47 = 0;
    CurrentProcess = PsGetCurrentProcess(v13, (unsigned __int16)gProtocolType);
    ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
    if ( ProcessImageFileName )
      v47 = _stricmp(ProcessImageFileName, "rdvgm.exe") == 0;
    if ( v47 )
      v9 = 1;
  }
  v17 = (struct _DEVICE_OBJECT *)*((_QWORD *)v15 + 18);
  if ( v17 )
    goto LABEL_11;
  if ( v9 )
  {
    v17 = (struct _DEVICE_OBJECT *)::Object;
LABEL_11:
    DeviceObject = v17;
    goto LABEL_12;
  }
  v46 = (struct _DEVICE_OBJECT *)*((_QWORD *)v15 + 17);
  if ( v46 )
  {
    if ( (int)DrvForceChildDeviceReenumeration(v46, (struct _DEVICE_RELATIONS **)&P) >= 0 )
    {
      DeviceObject = (PDEVICE_OBJECT)*((_QWORD *)P + 1);
      ExFreePoolWithTag(P, 0);
    }
  }
  else
  {
    v50 = WdLogNewEntry5_WdTrace(0LL, v12, v14);
    WdLogEvent5_WdTrace(v50);
  }
LABEL_12:
  v58 = 0LL;
  if ( a6 == 1 )
  {
    v18 = v55;
    if ( v55 >= W32UserProbeAddress )
      v18 = W32UserProbeAddress;
    LODWORD(Length) = *v18;
    v19 = 840;
    if ( (unsigned int)Length <= 0x348 )
      v19 = Length;
    LODWORD(Length) = v19;
    v21 = (char *)PALLOCMEM2(v19);
    v58 = v21;
    if ( !v21 )
    {
      LODWORD(v10) = -1073741823;
      goto LABEL_56;
    }
  }
  else
  {
    v19 = *(_DWORD *)v55;
    if ( *(_DWORD *)v55 >= 0x348u )
      v19 = 840;
    LODWORD(Length) = v19;
    v21 = (char *)v55;
    v58 = v55;
    memset(v55, 0, v19);
  }
  if ( v19 >= 4 )
    *(_DWORD *)v21 = 4;
  v23 = v56;
  if ( v19 >= 0x44 )
  {
    *(_DWORD *)v21 = 68;
    if ( v23 )
    {
      swprintf_s((wchar_t *)v21 + 2, 0x20uLL, L"%ws\\Monitor%d", v15 + 32, v59);
    }
    else
    {
      *(_OWORD *)(v21 + 4) = *((_OWORD *)v15 + 4);
      *(_OWORD *)(v21 + 20) = *((_OWORD *)v15 + 5);
      *(_OWORD *)(v21 + 36) = *((_OWORD *)v15 + 6);
      *(_OWORD *)(v21 + 52) = *((_OWORD *)v15 + 7);
    }
    *((_WORD *)v21 + 33) = 0;
  }
  if ( v19 >= 0x144 )
  {
    *(_DWORD *)v21 = 324;
    *((_WORD *)v21 + 34) = 0;
    if ( v23 || v9 )
    {
      if ( DeviceObject )
      {
        v39 = 256LL;
        for ( BufferLength = 256; ; v39 = BufferLength )
        {
          v40 = (void *)PALLOCMEM2(v39);
          if ( !v40 )
          {
            LODWORD(v10) = -1073741670;
            goto LABEL_116;
          }
          DeviceProperty = IoGetDeviceProperty(
                             DeviceObject,
                             DevicePropertyDeviceDescription,
                             BufferLength,
                             v40,
                             &BufferLength);
          if ( DeviceProperty != -1073741789 )
            break;
          Win32FreePool(v40);
        }
        if ( !DeviceProperty )
        {
          wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, (const wchar_t *)v40, 0x7FuLL);
          Win32FreePool(v40);
          v23 = v56;
          goto LABEL_29;
        }
        Win32FreePool(v40);
LABEL_116:
        v23 = v56;
      }
    }
    else
    {
      v22 = (const wchar_t *)*((_QWORD *)v15 + 27);
      if ( v22 )
        wcsncpy_s((wchar_t *)v21 + 34, 0x80uLL, v22, 0x7FuLL);
    }
LABEL_29:
    *((_WORD *)v21 + 161) = 0;
  }
  v24 = 256;
  if ( v19 >= 0x148 )
  {
    *(_DWORD *)v21 = 328;
    if ( (unsigned int)DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v15) )
      *((_DWORD *)v15 + 40) &= ~0x80000u;
    else
      *((_DWORD *)v15 + 40) |= 0x80000u;
    if ( v23 )
    {
      v20 = (char *)(*(_DWORD *)(*((_QWORD *)v15 + 29) + 20 * v62) & 0xFFFFFFF);
      *((_DWORD *)v21 + 81) = (_DWORD)v20;
    }
    else
    {
      v25 = *((_DWORD *)v15 + 40);
      if ( (a5 & 2) != 0 )
        v26 = v25 & 0xFFFFFFF;
      else
        v26 = v25 & 0xF2FFFFF;
      *((_DWORD *)v21 + 81) = v26;
    }
    v24 = 256;
  }
  if ( v19 < 0x248 )
  {
    v30 = -1LL;
    goto LABEL_49;
  }
  *(_DWORD *)v21 = 584;
  v20 = v21 + 328;
  *((_WORD *)v21 + 164) = 0;
  if ( (a5 & 1) == 0 )
  {
    if ( DeviceObject )
    {
      for ( BufferLength = 256; ; v24 = BufferLength )
      {
        v27 = (void *)PALLOCMEM2(v24);
        if ( !v27 )
        {
          LODWORD(v10) = -1073741670;
          goto LABEL_122;
        }
        v28 = IoGetDeviceProperty(DeviceObject, DevicePropertyHardwareID, BufferLength, v27, &BufferLength);
        if ( v28 != -1073741789 )
          break;
        Win32FreePool(v27);
      }
      if ( !v28 )
      {
        v29 = v21 + 328;
        wcsncpy_s((wchar_t *)v21 + 164, 0x80uLL, (const wchar_t *)v27, 0x7FuLL);
        Win32FreePool(v27);
        goto LABEL_46;
      }
      Win32FreePool(v27);
LABEL_122:
      v29 = v21 + 328;
LABEL_46:
      if ( v56 )
      {
        *((_WORD *)v21 + 291) = 0;
        v30 = -1LL;
        v42 = -1LL;
        do
          ++v42;
        while ( *(_WORD *)&v29[2 * v42] );
        v43 = v42 + 1;
        BufferLength = v43;
        if ( v43 < 0x7E )
        {
          *(_WORD *)&v21[2 * v43 + 326] = 92;
          IoGetDeviceProperty(
            DeviceObject,
            DevicePropertyDriverKeyName,
            2 * (127 - BufferLength),
            &v21[2 * BufferLength + 328],
            &BufferLength);
        }
        goto LABEL_48;
      }
    }
LABEL_47:
    v30 = -1LL;
LABEL_48:
    *((_WORD *)v21 + 291) = 0;
LABEL_49:
    if ( v19 >= 0x348 )
    {
      *(_DWORD *)v21 = 840;
      v31 = v21 + 584;
      *((_WORD *)v21 + 292) = 0;
      if ( v56 )
      {
        if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDriverKeyName, 0xFEu, PropertyBuffer, &BufferLength) >= 0 )
        {
          wcscpy_s((wchar_t *)v21 + 292, 0x80uLL, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v38 = -1LL;
          do
            ++v38;
          while ( *(_WORD *)&v31[2 * v38] );
          BufferLength = v38;
          wcsncpy_s(
            (wchar_t *)&v21[2 * (unsigned int)v38 + 584],
            128LL - (unsigned int)v38,
            L"\\Control\\Class\\",
            (unsigned int)(127 - v38));
          do
            ++v30;
          while ( *(_WORD *)&v31[2 * v30] );
          BufferLength = v30;
          wcsncpy_s(
            (wchar_t *)&v21[2 * (unsigned int)v30 + 584],
            128LL - (unsigned int)v30,
            PropertyBuffer,
            (unsigned int)(127 - v30));
        }
      }
      else
      {
        DrvGetRegistryHandleFromDeviceMap(v15, 3LL, 0LL, v21 + 584, 128, 0LL, gProtocolType);
      }
      *((_WORD *)v21 + 419) = 0;
    }
    if ( !v56 && DeviceObject && !*((_QWORD *)v15 + 18) && DeviceObject != ::Object )
      ObfDereferenceObject(DeviceObject);
    goto LABEL_56;
  }
  if ( !DeviceObject )
    goto LABEL_47;
  DeviceInterfaceName = DrvpGetDeviceInterfaceName(
                          DeviceObject,
                          &GUID_DEVINTERFACE_MONITOR,
                          (__int64)v22,
                          (wchar_t *)v21 + 164);
  v10 = DeviceInterfaceName;
  if ( DeviceInterfaceName >= 0 )
    goto LABEL_47;
  v52 = WdLogNewEntry5_WdTrace(v45, v20, v22);
  *(_QWORD *)(v52 + 24) = v10;
  WdLogEvent5_WdTrace(v52);
LABEL_56:
  v32 = (char *)v55;
  v33 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 != v32 )
  {
    if ( v21 )
    {
      ProbeForWrite(v32, v19, 4u);
      memmove(v32, v21, v19);
      Win32FreePool(v21);
    }
  }
  v34 = WdLogNewEntry5_WdTrace(v33, v20, v22);
  *(_QWORD *)(v34 + 24) = (int)v10;
  WdLogEvent5_WdTrace(v34);
  return (unsigned int)v10;
}
