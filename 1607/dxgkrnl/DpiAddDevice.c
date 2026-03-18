/*
 * XREFs of DpiAddDevice @ 0x1C00EA390
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000BB0C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000BB54 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C000F508 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C0010AF4 (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     Template_ppq @ 0x1C002F3E0 (Template_ppq.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     DpiFdoDetectPostDevice @ 0x1C00E3374 (DpiFdoDetectPostDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C00EB240 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C00EBB88 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C00EBFE8 (DpiGetDevicePropertyString.c)
 *     DpiDxgkDdiAddDevice @ 0x1C00EC75C (DpiDxgkDdiAddDevice.c)
 *     DpiGetAgpStatus @ 0x1C00FBD24 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00FBD74 (DpiAcpiRegisterAcpiCallbacks.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C014D450 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     DpEvalAcpiMethod @ 0x1C0191EC0 (DpEvalAcpiMethod.c)
 *     DpiFdoResetFdo @ 0x1C01958D0 (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C019677C (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C019BDD0 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C019DAFC (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C019E24C (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C019EA18 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  bool v6; // zf
  __int64 *v7; // rbx
  __int64 *v8; // r14
  char v9; // di
  char v10; // r12
  bool v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *DriverObjectExtension; // r15
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  const UNICODE_STRING *v19; // rdi
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *v21; // rcx
  void *v22; // rdi
  char v23; // al
  __int64 v24; // r8
  __int64 v25; // rcx
  ULONG v26; // edi
  int v27; // r15d
  NTSTATUS Device; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  char v31; // al
  struct _DEVICE_OBJECT *v32; // rax
  PDEVICE_OBJECT v33; // rax
  __int64 v34; // rcx
  struct _DEVICE_OBJECT *v35; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rax
  _DWORD *v43; // rdi
  NTSTATUS v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  char v53; // r13
  __int64 v54; // rcx
  bool v55; // al
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  _DWORD *v59; // rdx
  unsigned __int64 v60; // r8
  char v61; // r12
  PVOID *v62; // rdx
  _DWORD *PoolWithTag; // rax
  __int64 v64; // rcx
  NTSTATUS v65; // eax
  __int64 v66; // rcx
  _DWORD *v67; // rax
  _DWORD *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v76; // rdx
  int RegistryValues; // eax
  int v78; // eax
  __int64 v79; // rcx
  unsigned int v80; // eax
  int v81; // eax
  int v82; // ecx
  __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  PVOID v87; // rax
  __int64 v88; // rcx
  unsigned __int16 *v89; // rcx
  char v90; // al
  int AgpStatus; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  _BYTE *v97; // rdx
  char v98; // al
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rax
  __int64 v120; // rax
  struct _DEVICE_OBJECT *v121; // rdi
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  _QWORD *v128; // rax
  __int64 *v129; // rdx
  __int64 **v130; // rax
  _DWORD *v131; // rcx
  _DWORD *v132; // rcx
  void (__fastcall *v133)(__int64); // rax
  void (__fastcall *v134)(__int64); // rax
  void (__fastcall *v135)(__int64); // rax
  void (__fastcall *v136)(__int64); // rax
  void *v137; // rcx
  struct _ERESOURCE *v138; // rcx
  _DWORD *v139; // rcx
  struct _DEVICE_OBJECT *v140; // rcx
  __int64 Exclusive; // [rsp+28h] [rbp-58h]
  char v142; // [rsp+80h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v3 + 332) = 0LL;
  *(_WORD *)(v3 + 688) = aDriverVgpu[12];
  *(_QWORD *)(v3 + 144) = v3 + 664;
  *(_WORD *)(v3 + 776) = aDriverWddmwarp[16];
  *(_OWORD *)(v3 + 664) = *(_OWORD *)L"\\Driver\\VGPU";
  *(_QWORD *)(v3 + 128) = v3 + 744;
  *(_QWORD *)(v3 + 112) = v3 + 784;
  *(_OWORD *)(v3 + 744) = *(_OWORD *)L"\\Driver\\WddmWarp";
  *(_WORD *)(v3 + 736) = aDriverBasicdis[20];
  *(_QWORD *)(v3 + 160) = v3 + 696;
  *(_QWORD *)(v3 + 680) = *(_QWORD *)L"VGPU";
  *(_DWORD *)(v3 + 656) = *(_DWORD *)L"md";
  *(_OWORD *)(v3 + 784) = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_QWORD *)(v3 + 80) = ClientIdentificationAddress;
  v6 = bTracingEnabled == 0;
  v7 = 0LL;
  v8 = 0LL;
  *(_OWORD *)(v3 + 760) = *(_OWORD *)L"WddmWarp";
  *(_WORD *)(v3 + 660) = aDriverSrakmd[14];
  v9 = 0;
  *(_QWORD *)(v3 + 176) = v3 + 632;
  *(_QWORD *)(v3 + 816) = *(_QWORD *)L"der";
  v10 = 0;
  *(_QWORD *)(v3 + 64) = a2;
  v11 = 0;
  *(_OWORD *)(v3 + 800) = *(_OWORD *)L"BasicRender";
  *(_QWORD *)(v3 + 72) = 0LL;
  *(_BYTE *)(v3 + 22) = 0;
  *(_OWORD *)(v3 + 696) = *(_OWORD *)L"\\Driver\\BasicDisplay";
  *(_DWORD *)(v3 + 328) = 0;
  *(_QWORD *)(v3 + 728) = *(_QWORD *)L"play";
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_OWORD *)(v3 + 712) = *(_OWORD *)L"BasicDisplay";
  *(_BYTE *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 20) = 0;
  *(_BYTE *)(v3 + 21) = 0;
  *(_BYTE *)v3 = 0;
  *(_BYTE *)(v3 + 17) = 0;
  *(_BYTE *)(v3 + 18) = 0;
  *(_BYTE *)(v3 + 19) = 0;
  *(_BYTE *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 32) = 3;
  *(_DWORD *)(v3 + 136) = 1703960;
  *(_DWORD *)(v3 + 120) = 2228256;
  *(_DWORD *)(v3 + 104) = 2621478;
  *(_DWORD *)(v3 + 152) = 2752552;
  *(_OWORD *)(v3 + 632) = *(_OWORD *)L"\\Driver\\srakmd";
  *(_DWORD *)(v3 + 168) = 1966108;
  *(_QWORD *)(v3 + 648) = *(_QWORD *)L"srakmd";
  if ( !v6 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_ppq(0LL, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, a2, 0);
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = DriverObjectExtension;
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(v18) = -1073741811;
    v128 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v128[3] = 275LL;
    v128[4] = 21LL;
    v128[5] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v128);
    goto LABEL_201;
  }
  v16 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, v3 + 72);
  v18 = v16;
  if ( v16 < 0 )
  {
    v100 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v100 + 24) = *((_QWORD *)DriverObjectExtension + 18);
    *(_QWORD *)(v100 + 32) = v18;
    WdLogEvent5_WdError(v100);
LABEL_201:
    v61 = 0;
LABEL_77:
    if ( (int)v18 >= 0 )
      goto LABEL_78;
    if ( v9 != 1 )
    {
LABEL_209:
      if ( v61 != 1 )
        goto LABEL_211;
LABEL_210:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      goto LABEL_211;
    }
LABEL_203:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v129 = (__int64 *)*v7;
    v130 = (__int64 **)v7[1];
    if ( *(__int64 **)(*v7 + 8) != v7 || *v130 != v7 )
      __fastfail(3u);
    *v130 = v129;
    v129[1] = (__int64)v130;
    --*((_DWORD *)DriverObjectExtension + 32);
    if ( v8 && *((_DWORD *)v8 + 126) )
      DpiLdaUnLinkDeviceFromChain(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
    goto LABEL_209;
  }
  v19 = (const UNICODE_STRING *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 56LL);
  *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x16) = 1;
  if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 104), v19, 1u) )
  {
    v23 = 1;
    v10 = 1;
    *(_BYTE *)v3 = 1;
LABEL_16:
    v24 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    if ( !v24 )
    {
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 2;
      v26 = 496;
      v27 = 4;
      if ( v23 )
      {
        LODWORD(v18) = -1073741637;
        v105 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v105 + 24) = -1073741637LL;
        goto LABEL_140;
      }
      goto LABEL_18;
    }
    v25 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    v26 = 4968;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0;
    v27 = 2;
    if ( !*(_QWORD *)(v25 + 616) )
    {
LABEL_18:
      Device = IoCreateDevice(
                 *(PDRIVER_OBJECT *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
                 v26,
                 0LL,
                 0x23u,
                 *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == 0 ? 0x100 : 0,
                 0,
                 (PDEVICE_OBJECT *)(v3 + 8));
      v18 = Device;
      if ( Device >= 0 )
      {
        v30 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) |= v30 & 0xFFFF00;
        v7 = *(__int64 **)(v30 + 64);
        *((_DWORD *)v7 + 5) = v27;
        DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        *((_DWORD *)v7 + 4) = 1953656900;
        v7[3] = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v7[4] = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v7[5] = (__int64)DriverObjectExtension;
        v7[6] = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        v31 = *(_BYTE *)v3;
        *((_BYTE *)v7 + 56) = 1;
        *((_BYTE *)v7 + 480) = v31;
        IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)v7 + 2, 0x74727044u, 1u, 0, 0x20u);
        v32 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        v7[19] = (__int64)v32;
        v33 = IoAttachDeviceToDeviceStack(
                *(PDEVICE_OBJECT *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                v32);
        v7[20] = (__int64)v33;
        if ( v33 )
        {
          *((_DWORD *)v7 + 71) = 1;
          *((_DWORD *)v7 + 70) = 1;
          v7[38] = (__int64)DpiFdoHandleRemoveDevice;
          if ( *((_DWORD *)v7 + 4) != 1953656900 || (unsigned int)(*((_DWORD *)v7 + 5) - 2) > 1 )
          {
            v53 = *(_BYTE *)v3;
            goto LABEL_55;
          }
          v8 = v7;
          *((_BYTE *)v7 + 1139) = *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11);
          *((_BYTE *)v7 + 1143) = *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          *((_BYTE *)v7 + 2558) = *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12);
          *((_BYTE *)v7 + 2557) = v10;
          *((_BYTE *)v7 + 2559) = v11;
          *((_DWORD *)v7 + 646) = 0;
          v7[36] = (__int64)&DpiFdoHandleStartDevice;
          v7[59] = (__int64)DpiFdoHandleSurpriseRemoval;
          v7[49] = (__int64)&DpiFdoHandleFilterResources;
          if ( !byte_1C0056E91 && !*((_BYTE *)v7 + 480) )
            v7[40] = (__int64)DpiFdoHandleStopDevice;
          v35 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          *(__int64 *)((char *)v7 + 500) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x148);
          *((_DWORD *)v7 + 127) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150);
          LODWORD(v18) = DpiGetDeviceRegistryPaths(
                           *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                           (__int64)v35,
                           (__int64)DriverObjectExtension);
          if ( (int)v18 < 0 )
            goto LABEL_211;
          if ( (int)DpiQueryBusInterface((PDEVICE_OBJECT)v7[20], (__int64)(v7 + 107)) >= 0 )
          {
            if ( *((_QWORD *)DriverObjectExtension + 29) )
            {
              v81 = DpiAcpiRegisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
              v82 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
              if ( v81 >= 0 )
                v82 = 1;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v82;
            }
            *((_BYTE *)v7 + 1141) = 1;
          }
          DeviceProperty = IoGetDeviceProperty(v35, DevicePropertyBusNumber, 4u, v7 + 141, (PULONG)(v3 + 36));
          v41 = DeviceProperty;
          if ( DeviceProperty < 0 )
          {
            v42 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
            *(_QWORD *)(v42 + 24) = v41;
            WdLogEvent5_WdWarning(v42);
            *((_DWORD *)v7 + 282) = -1;
          }
          v43 = (_DWORD *)v7 + 283;
          v44 = IoGetDeviceProperty(v35, DevicePropertyAddress, 4u, (char *)v7 + 1132, (PULONG)(v3 + 36));
          v49 = v44;
          if ( v44 < 0 || *v43 == -1 )
          {
            v50 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
            *(_QWORD *)(v50 + 24) = v49;
            WdLogEvent5_WdWarning(v50);
            *v43 = -1;
          }
          LODWORD(v18) = IoGetDeviceProperty(v35, DevicePropertyBusTypeGuid, 0x10u, v7 + 68, (PULONG)(v3 + 36));
          if ( (int)v18 < 0 || *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) < 0x10u )
          {
            v52 = WdLogNewEntry5_WdEvent(v51);
            *(_QWORD *)(v52 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            WdLogEvent5_WdEvent(v52);
            *((GUID *)v7 + 34) = GUID_BUS_TYPE_INVALID;
          }
          v53 = *(_BYTE *)v3;
          if ( !*(_BYTE *)v3 )
          {
            LODWORD(v18) = DpiFdoDetectPostDevice(
                             *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                             (_BYTE *)(v3 + 19));
            if ( (int)v18 < 0 )
              goto LABEL_167;
            if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13) )
            {
              v84 = WdLogNewEntry5_WdEvent(v83);
              *(_QWORD *)(v84 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              WdLogEvent5_WdEvent(v84);
              *((_WORD *)v7 + 568) = 257;
              byte_1C0057188 = 1;
              if ( byte_1C0056E91 == 1 )
              {
                AttachedDeviceReference = IoGetAttachedDeviceReference(v35);
                DpiSetDeviceUsageType(AttachedDeviceReference);
                ObfDereferenceObject(AttachedDeviceReference);
              }
            }
          }
          v54 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0;
          v55 = (int)DpiReadPnpRegistryValue(v54, L"SoftGPUAdapter", (char *)(v3 + 56), 4u, 2u) >= 0
             && *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          *((_BYTE *)v7 + 2556) = v55;
          if ( RtlCompareMemory(v7 + 68, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
          {
            if ( RtlCompareMemory(v7 + 68, &GUID_BUS_TYPE_ACPI, 0x10uLL) == 16 )
            {
              v112 = WdLogNewEntry5_WdEvent(v57);
              *(_QWORD *)(v112 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              WdLogEvent5_WdEvent(v112);
              if ( !*((_BYTE *)v7 + 1141) )
                goto LABEL_166;
              *((_DWORD *)v7 + 276) = 2;
              *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x134) = 1145653343LL;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 1130980673;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C) = 0;
              memset((void *)(v3 + 592), 0, 0x24uLL);
              v113 = DpEvalAcpiMethod(
                       *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       0xFFFFFFFFLL,
                       v3 + 304,
                       24LL,
                       v3 + 592,
                       36);
              v115 = v113;
              if ( v113 >= 0 )
              {
                *((_DWORD *)v7 + 277) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260);
                *((_DWORD *)v7 + 278) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x264);
              }
              else
              {
                v116 = WdLogNewEntry5_WdError(v114);
                *(_QWORD *)(v116 + 24) = v115;
                WdLogEvent5_WdError(v116);
              }
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 1130980673;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C) = 0;
              *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x134) = 1112888159LL;
              memset((void *)(v3 + 592), 0, 0x24uLL);
              if ( (int)DpEvalAcpiMethod(
                          *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                          0xFFFFFFFFLL,
                          v3 + 304,
                          24LL,
                          v3 + 592,
                          36) >= 0 )
              {
                *((_DWORD *)v7 + 279) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260);
                *((_DWORD *)v7 + 280) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x264);
              }
              else
              {
                v119 = WdLogNewEntry5_WdEvent(v118);
                *(_QWORD *)(v119 + 24) = DpEvalAcpiMethod;
                WdLogEvent5_WdEvent(v119);
              }
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x130) = 1130980673;
              *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x134) = 1448233055LL;
              *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C) = 0;
              memset((void *)(v3 + 592), 0, 0x24uLL);
              LODWORD(v18) = DpEvalAcpiMethod(
                               *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                               0xFFFFFFFFLL,
                               v3 + 304,
                               24LL,
                               v3 + 592,
                               36);
              if ( (int)v18 >= 0 )
              {
                *((_DWORD *)v7 + 281) = *(unsigned __int16 *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x260);
              }
              else
              {
                v120 = WdLogNewEntry5_WdEvent(v58);
                *(_QWORD *)(v120 + 24) = DpEvalAcpiMethod;
                WdLogEvent5_WdEvent(v120);
                LODWORD(v18) = 0;
              }
              if ( *((_BYTE *)v7 + 1136) )
              {
                v121 = IoGetAttachedDeviceReference(v35);
                v18 = (int)DpiSetDeviceUsageType(v121);
                ObfDereferenceObject(v121);
                if ( (int)v18 < 0 )
                {
                  v122 = WdLogNewEntry5_WdError(v58);
                  *(_QWORD *)(v122 + 24) = v18;
                  WdLogEvent5_WdError(v122);
                  LODWORD(v18) = 0;
                }
              }
            }
            else
            {
              if ( RtlCompareMemory(v7 + 68, &GUID_BUS_VMBUS, 0x10uLL) != 16 )
              {
                if ( *((_BYTE *)v7 + 1143) )
                {
                  v7[140] = 0LL;
                  *((_DWORD *)v7 + 277) = 5140;
                  v7[139] = 139LL;
                  *((_DWORD *)v7 + 276) = 0;
                  goto LABEL_43;
                }
                if ( *((_BYTE *)v7 + 480) )
                {
                  *((_DWORD *)v7 + 276) = 3;
                  *((_DWORD *)v7 + 277) = 5140;
                  if ( *((_BYTE *)v7 + 1139) )
                  {
                    *((_DWORD *)v7 + 278) = 141;
                  }
                  else if ( *((_BYTE *)v7 + 2557) )
                  {
                    *((_DWORD *)v7 + 278) = 140;
                  }
                  goto LABEL_43;
                }
                if ( *((_BYTE *)v7 + 2559) || g_OSTestSigningEnabled && *((_BYTE *)v7 + 2556) )
                {
                  *((_DWORD *)v7 + 276) = 3;
                  goto LABEL_43;
                }
LABEL_166:
                LODWORD(v18) = -1073741637;
                v117 = WdLogNewEntry5_WdError(v58);
                *(_QWORD *)(v117 + 24) = -1073741637LL;
                WdLogEvent5_WdError(v117);
                goto LABEL_167;
              }
              v123 = WdLogNewEntry5_WdEvent(v58);
              *(_QWORD *)(v123 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              WdLogEvent5_WdEvent(v123);
              if ( *((_BYTE *)v7 + 2558) )
              {
                *((_DWORD *)v7 + 277) = 5140;
                v7[139] = 705LL;
                *((_DWORD *)v7 + 280) = 0;
                *((_DWORD *)v7 + 281) = 1;
              }
              *((_DWORD *)v7 + 276) = 4;
            }
LABEL_43:
            if ( *((_BYTE *)v7 + 1136) )
            {
LABEL_45:
              if ( *((_BYTE *)v7 + 2556) && *((_BYTE *)v7 + 2557) )
              {
                LODWORD(v18) = -1073741811;
                goto LABEL_167;
              }
              KeInitializeSpinLock((PKSPIN_LOCK)v7 + 164);
              v59 = v7 + 147;
              v60 = 7LL;
              if ( (((_BYTE)v7 - 104) & 4) != 0 )
              {
                *v59 = 1;
                v60 = 6LL;
                v59 = (_DWORD *)v7 + 295;
              }
              memset64(v59, 0x100000001uLL, v60 >> 1);
              if ( (v60 & 1) != 0 )
                v59[v60 - 1] = 1;
              KeInitializeDpc(
                (PRKDPC)(v7 + 156),
                (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr,
                *(PVOID *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
              KeInitializeMutex((PRKMUTEX)(v7 + 298), 0);
              KeInitializeMutex((PRKMUTEX)v7 + 44, 0);
              v7[297] = (__int64)(v7 + 296);
              v7[296] = (__int64)(v7 + 296);
              v7[307] = (__int64)(v7 + 306);
              v7[306] = (__int64)(v7 + 306);
              v7[322] = (__int64)(v7 + 321);
              v7[321] = (__int64)(v7 + 321);
              if ( *((_DWORD *)v7 + 4) != 1953656900 )
                goto LABEL_54;
              if ( *((_DWORD *)v7 + 5) != 2 )
              {
                DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                if ( *((_DWORD *)v7 + 5) == 3 )
                {
                  LODWORD(v18) = 0;
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL)
                            + 344LL) = &DpiLdaHandleQueryDeviceRelations;
                }
LABEL_55:
                KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
                v61 = 1;
                if ( v8 )
                {
                  if ( *((_DWORD *)v8 + 126) )
                  {
                    LODWORD(v18) = DpiLdaLinkDeviceToChain(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                     + 8));
                    if ( (int)v18 < 0 )
                      goto LABEL_210;
                  }
                }
                v62 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
                if ( *v62 != DriverObjectExtension + 56 )
                  __fastfail(3u);
                *v7 = (__int64)(DriverObjectExtension + 56);
                v7[1] = (__int64)v62;
                *v62 = v7;
                *((_QWORD *)DriverObjectExtension + 8) = v7;
                ++*((_DWORD *)DriverObjectExtension + 32);
                v6 = v7[21] == 0;
                *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 1) = 1;
                if ( v6 )
                {
                  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
                  v7[21] = (__int64)PoolWithTag;
                  if ( !PoolWithTag )
                    goto LABEL_196;
                  PoolWithTag[26] = 1;
                  v65 = ExInitializeResourceLite((PERESOURCE)v7[21]);
                  v18 = v65;
                  if ( v65 < 0 )
                  {
                    v126 = WdLogNewEntry5_WdError(v66);
                    *(_QWORD *)(v126 + 24) = v18;
                    WdLogEvent5_WdError(v126);
LABEL_76:
                    v9 = *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 1);
                    goto LABEL_77;
                  }
                  *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x15) = 1;
                }
                KeInitializeMutex((PRKMUTEX)(v7 + 22), 0);
                if ( !v8 )
                  goto LABEL_70;
                if ( !v8[165] )
                {
                  v67 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
                  v8[165] = (__int64)v67;
                  if ( !v67 )
                    goto LABEL_196;
                  v67[2] = 1;
                  KeInitializeSpinLock((PKSPIN_LOCK)v8[165]);
                }
                if ( v8[166] )
                {
LABEL_69:
                  *((_DWORD *)v8 + 334) = 0;
                  memset(v8 + 168, 0, 0x400uLL);
LABEL_70:
                  KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
                  v61 = 0;
                  v7[16] = (__int64)DpiFdoDispatchPnp;
                  if ( v8 )
                  {
                    v8[17] = (__int64)DpiFdoDispatchPower;
                    if ( *((_BYTE *)v8 + 1136) )
                    {
                      AcquireMiniportListMutex();
                      if ( qword_1C00570C0 && qword_1C00570C0 != qword_1C00570C8 )
                      {
                        v127 = WdLogNewEntry5_WdError(v99);
                        *(_QWORD *)(v127 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                        *(_QWORD *)(v127 + 32) = (int)v18;
                        WdLogEvent5_WdError(v127);
                      }
                      qword_1C00570C0 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                      _InterlockedExchange64(&qword_1C0056EC8, 0LL);
                      KeReleaseMutex(Mutex, 0);
                    }
                  }
                  v70 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  if ( v53 && *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) )
                    qword_1C00570C8 = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  *(_DWORD *)(v70 + 48) |= 4u;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) |= 0x2000u;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x4000u;
                  *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x80u;
                  v71 = WdLogNewEntry5_WdEvent(v69);
                  *(_QWORD *)(v71 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                  WdLogEvent5_WdEvent(v71);
                  goto LABEL_76;
                }
                v68 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
                v8[166] = (__int64)v68;
                if ( v68 )
                {
                  v68[2] = 1;
                  KeInitializeSpinLock((PKSPIN_LOCK)v8[166]);
                  goto LABEL_69;
                }
LABEL_196:
                LODWORD(v18) = -1073741801;
                v125 = WdLogNewEntry5_WdLowResource(v64);
                *(_QWORD *)(v125 + 24) = -1073741801LL;
                WdLogEvent5_WdLowResource(v125);
                goto LABEL_203;
              }
              LODWORD(v18) = DpiFdoInitializeFdo(*(PVOID *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
              if ( (int)v18 >= 0 )
              {
                *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = 1;
LABEL_54:
                DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
                goto LABEL_55;
              }
LABEL_167:
              DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
              goto LABEL_211;
            }
LABEL_44:
            if ( !*((_BYTE *)v7 + 480) && *((_BYTE *)v7 + 1139) )
            {
              v124 = WdLogNewEntry5_WdEvent(v58);
              *(_QWORD *)(v124 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
              WdLogEvent5_WdEvent(v124);
              LODWORD(v18) = -1071774664;
              goto LABEL_167;
            }
            goto LABEL_45;
          }
          v85 = WdLogNewEntry5_WdEvent(v56);
          *(_QWORD *)(v85 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          WdLogEvent5_WdEvent(v85);
          DpiQueryBusInterface(v35, (__int64)(v7 + 70));
          if ( v7[77] )
          {
            v87 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
            v7[137] = (__int64)v87;
            if ( v87 )
            {
              ((void (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, int))v7[77])(v7[71], 0LL, v87, 0LL, 256);
              v89 = (unsigned __int16 *)v7[137];
              *((_DWORD *)v7 + 276) = 1;
              *((_DWORD *)v7 + 277) = *v89;
              *((_DWORD *)v7 + 278) = v89[1];
              *((_DWORD *)v7 + 281) = *((unsigned __int8 *)v89 + 8);
              if ( (v89[7] & 0x7F) == 0 )
              {
                *((_DWORD *)v7 + 279) = v89[22];
                *((_DWORD *)v7 + 280) = v89[23];
              }
              if ( *((_DWORD *)v7 + 277) != 22611 || (v90 = 1, *((_DWORD *)v7 + 278) != 4097) )
                v90 = 0;
              *((_BYTE *)v7 + 2560) = v90;
              DpiQueryBusInterface(v35, (__int64)(v7 + 78));
              DpiQueryBusInterface((PDEVICE_OBJECT)v7[20], (__int64)(v7 + 84));
              AgpStatus = DpiGetAgpStatus(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
              v96 = AgpStatus;
              if ( AgpStatus >= 0 && !v7[85] )
              {
                v109 = WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
                *(_QWORD *)(v109 + 24) = v96;
                WdLogEvent5_WdWarning(v109);
              }
              v58 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL);
              v97 = *(_BYTE **)(v58 + 1096);
              if ( (v97[4] & 1) != 0 && ((v98 = v97[11]) == 0 && v97[10] == 1 || v98 == 3 && !v97[10]) )
              {
                LODWORD(v18) = 0;
                if ( !*((_BYTE *)v7 + 1136) )
                {
                  if ( !byte_1C0057188 )
                  {
                    v110 = WdLogNewEntry5_WdWarning(v58, v97, v94, v95);
                    *(_QWORD *)(v110 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                    WdLogEvent5_WdWarning(v110);
                    *((_BYTE *)v7 + 1136) = 1;
                    byte_1C0057189 = 1;
                  }
                  if ( !*((_BYTE *)v7 + 1136) )
                    goto LABEL_44;
                }
                if ( byte_1C0056E95 )
                  *((_BYTE *)v7 + 1140) = 1;
              }
              else
              {
                LODWORD(v18) = -1073741823;
                if ( !*((_BYTE *)v7 + 1136) )
                  goto LABEL_44;
                v111 = WdLogNewEntry5_WdWarning(v58, v97, v94, v95);
                *(_QWORD *)(v111 + 24) = *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
                WdLogEvent5_WdWarning(v111);
              }
              goto LABEL_43;
            }
            LODWORD(v18) = -1073741801;
            v106 = WdLogNewEntry5_WdLowResource(v88);
            *(_QWORD *)(v106 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v106);
            goto LABEL_142;
          }
          LODWORD(v18) = -1073741127;
          v105 = WdLogNewEntry5_WdError(v86);
          *(_QWORD *)(v105 + 24) = -1073741127LL;
LABEL_140:
          WdLogEvent5_WdError(v105);
LABEL_142:
          DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          goto LABEL_211;
        }
        LODWORD(v18) = -1073741810;
        v107 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v107 + 24) = -1073741810LL;
LABEL_145:
        WdLogEvent5_WdError(v107);
        goto LABEL_211;
      }
      v103 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v103 + 24) = v18;
      WdLogEvent5_WdError(v103);
      DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      goto LABEL_135;
    }
    if ( v23 )
    {
      LODWORD(v18) = -1073741637;
      v107 = WdLogNewEntry5_WdError(v25);
      DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      *(_QWORD *)(v107 + 24) = *((_QWORD *)DriverObjectExtension + 77);
      *(_QWORD *)(v107 + 32) = -1073741637LL;
      goto LABEL_145;
    }
    v78 = DpiDxgkDdiLinkDevice(
            v25,
            *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
            v24,
            (int *)(v3 + 328));
    v18 = v78;
    if ( v78 >= 0 )
    {
      v80 = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14C);
      if ( v80 > 0x100 )
      {
        LODWORD(v18) = -1073741756;
        v105 = WdLogNewEntry5_WdError(v79);
        *(_QWORD *)(v105 + 24) = -1073741756LL;
        goto LABEL_140;
      }
      if ( v80 && !*(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x150) )
      {
        v26 = 2608;
        *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 1;
        v27 = 3;
      }
      goto LABEL_18;
    }
    v102 = WdLogNewEntry5_WdError(v79);
    DriverObjectExtension = *(char **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    *(_QWORD *)(v102 + 24) = *((_QWORD *)DriverObjectExtension + 77);
    *(_QWORD *)(v102 + 32) = v18;
LABEL_133:
    WdLogEvent5_WdError(v102);
LABEL_135:
    v9 = 0;
    goto LABEL_201;
  }
  if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 120), v19, 1u) )
  {
    v10 = 1;
LABEL_83:
    v23 = 0;
    goto LABEL_16;
  }
  if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 136), v19, 1u) )
  {
    *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12) = 1;
    goto LABEL_83;
  }
  if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 152), v19, 1u) )
  {
    v11 = RtlCompareUnicodeString((PCUNICODE_STRING)(v3 + 168), v19, 1u) == 0;
    *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = DriverObjectExtension[134];
    memset((void *)(v3 + 192), 0, 0x70uLL);
    v76 = *((_QWORD *)DriverObjectExtension + 6);
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = L"Start";
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = 292;
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = ((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                          + 52;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 67108868;
    *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 4;
    RegistryValues = RtlQueryRegistryValuesEx(0LL, v76, v3 + 192, 0LL, 0LL);
    v18 = RegistryValues;
    if ( RegistryValues < 0 )
    {
      v102 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v102 + 24) = v18;
      goto LABEL_133;
    }
    if ( *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) != 3 )
    {
      v104 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v104 + 24) = *(unsigned int *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
      WdLogEvent5_WdError(v104);
      LODWORD(v18) = -1073741637;
      goto LABEL_211;
    }
    goto LABEL_83;
  }
  v21 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
  *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) = 1;
  LODWORD(v18) = DpiGetDevicePropertyString(v21, DevicePropertyHardwareID, PagedPool, v3 + 36);
  if ( (int)v18 >= 0 )
  {
    v22 = *(void **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
    if ( *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x24) >= 0x24u
      && RtlCompareMemory(
           *(const void **)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58),
           L"ROOT\\BasicDisplay",
           0x24uLL) == 36 )
    {
      v6 = byte_1C0056E97 == 0;
      v23 = 1;
      *(_BYTE *)v3 = 1;
      if ( v6 )
        goto LABEL_14;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D8) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x210) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x218) = 0;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = -1;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) = -1;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B0) = L"EnableBasicDisplayFallback";
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A8) = 288;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1B8) = ((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 40;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C8) = ((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 40;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E8) = L"DisableBasicDisplayFallback";
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F0) = ((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 44;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1E0) = 288;
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x200) = ((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                             + 44;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C0) = 67108868;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1D0) = 4;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1F8) = 67108868;
      *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x208) = 4;
      memset((void *)(v3 + 544), 0, 0x28uLL);
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\BasicDisplay", v3 + 416, 0LL, 0LL) >= 0
        && *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) != 1
        && *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C) == 1 )
      {
        LODWORD(v18) = -1073741637;
        v101 = WdLogNewEntry5_WdEvent(v20);
        *(_QWORD *)(v101 + 24) = 0LL;
        WdLogEvent5_WdEvent(v101);
        goto LABEL_211;
      }
      v23 = 1;
    }
    else
    {
      v23 = 0;
    }
LABEL_14:
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      v23 = *(_BYTE *)v3;
    }
    goto LABEL_16;
  }
LABEL_211:
  if ( *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == 1 )
      DpiFdoResetFdo();
    if ( v8 )
    {
      v131 = (_DWORD *)v8[165];
      if ( v131 && v131[2] == 1 )
      {
        ExFreePoolWithTag(v131, 0);
        v8[165] = 0LL;
      }
      v132 = (_DWORD *)v8[166];
      if ( v132 && v132[2] == 1 )
      {
        ExFreePoolWithTag(v132, 0);
        v8[166] = 0LL;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == 1 )
        DpiAcpiUnregisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v133 = (void (__fastcall *)(__int64))v8[73];
      if ( v133 )
      {
        v133(v8[71]);
        memset(v8 + 70, 0, 0x40uLL);
      }
      v134 = (void (__fastcall *)(__int64))v8[81];
      if ( v134 )
      {
        v134(v8[79]);
        memset(v8 + 78, 0, 0x30uLL);
      }
      v135 = (void (__fastcall *)(__int64))v8[87];
      if ( v135 )
      {
        v135(v8[85]);
        memset(v8 + 84, 0, 0xB8uLL);
      }
      v136 = (void (__fastcall *)(__int64))v8[110];
      if ( v136 )
      {
        v136(v8[108]);
        memset(v8 + 107, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v8 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v8 + 33);
      v137 = (void *)v8[137];
      if ( v137 )
      {
        ExFreePoolWithTag(v137, 0);
        v8[137] = 0LL;
      }
    }
    if ( v7 )
    {
      v138 = (struct _ERESOURCE *)v7[21];
      if ( v138 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x15) == 1 )
          ExDeleteResourceLite(v138);
        v139 = (_DWORD *)v7[21];
        if ( v139[26] == 1 && v139 )
        {
          ExFreePoolWithTag(v139, 0);
          v7[21] = 0LL;
        }
      }
      v140 = (struct _DEVICE_OBJECT *)v7[20];
      if ( v140 )
        IoDetachDevice(v140);
    }
    IoDeleteDevice(*(PDEVICE_OBJECT *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x16) == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48));
  if ( (_DWORD)v18 != -1071774664 )
    DxgCreateLiveDumpWithWdLogs(0x193u, 0x801uLL, (int)v18, 0LL, 0LL);
LABEL_78:
  memset((void *)(v3 + 352), 0, 0x40uLL);
  v72 = DxgkDiagCalcDuration1us((_QWORD *)(v3 + 96));
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x160) = 6;
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x168) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x170) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x178) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x194) = *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0x20);
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x164) = 64;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x188) = 0;
  *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x180) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x190) = 34;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x198) = v72;
  *(_DWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x19C) = v18;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)(v3 + 352));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(Exclusive) = v18;
    Template_ppq(
      v73,
      &EventExitDpiAddDevice,
      v74,
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
      *(_QWORD *)(((unsigned __int64)&v142 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
      Exclusive);
  }
  return (unsigned int)v18;
}
