/*
 * XREFs of DpiAddDevice @ 0x1C00D2490
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B77C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000CF1C (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C000DCA0 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C00103B4 (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     Template_ppq @ 0x1C0028270 (Template_ppq.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DpiFdoDetectPostDevice @ 0x1C00D00D0 (DpiFdoDetectPostDevice.c)
 *     DpiDxgkDdiAddDevice @ 0x1C00D0E24 (DpiDxgkDdiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C00D3310 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C00D3BD0 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C00D4060 (DpiGetDevicePropertyString.c)
 *     DpiGetAgpStatus @ 0x1C00E8D10 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00E8D60 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpEvalAcpiMethod @ 0x1C0169FF0 (DpEvalAcpiMethod.c)
 *     DpiFdoResetFdo @ 0x1C016CBD0 (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C01702B0 (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C017211C (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C01740A0 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017483C (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C0175068 (DpiDxgkDdiRemoveDevice.c)
 */

__int64 __fastcall DpiAddDevice(struct _DRIVER_OBJECT *ClientIdentificationAddress, __int64 a2, __int64 a3)
{
  int v3; // r14d
  unsigned __int64 v4; // rbp
  bool v7; // zf
  __int64 *v8; // rbx
  __int64 *v9; // r15
  char v10; // di
  char v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char *DriverObjectExtension; // r13
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rsi
  const UNICODE_STRING *v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  int RegistryValues; // eax
  __int64 v23; // rcx
  __int64 v24; // r8
  ULONG v25; // edi
  int v26; // r14d
  NTSTATUS Device; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct _DEVICE_OBJECT *v30; // rdi
  PDEVICE_OBJECT v31; // rax
  __int64 v32; // rcx
  struct _DEVICE_OBJECT *v33; // r12
  NTSTATUS DeviceProperty; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rsi
  __int64 v40; // rax
  _DWORD *v41; // rdi
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rsi
  __int64 v48; // rax
  struct _DEVICE_OBJECT *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rcx
  char v67; // al
  _DWORD *v68; // rdx
  unsigned __int64 v69; // r8
  char v70; // r12
  PVOID *v71; // rdx
  _DWORD *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  NTSTATUS v77; // eax
  __int64 v78; // rcx
  _DWORD *v79; // rax
  _DWORD *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // rcx
  __int64 v89; // r8
  struct _DEVICE_OBJECT *v91; // rcx
  void *v92; // rdi
  SIZE_T v93; // rax
  int v94; // eax
  __int64 v95; // rcx
  unsigned int v96; // eax
  int v97; // eax
  int v98; // ecx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rcx
  PVOID PoolWithTag; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r9
  unsigned __int16 *v110; // rcx
  char v111; // al
  int AgpStatus; // eax
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdi
  __int64 v116; // rcx
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  NTSTATUS (__stdcall *v119)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *); // rcx
  __int64 v120; // rax
  _QWORD *v121; // rax
  _DWORD *v122; // rcx
  _DWORD *v123; // rcx
  void (__fastcall *v124)(__int64); // rax
  void (__fastcall *v125)(__int64); // rax
  void (__fastcall *v126)(__int64); // rax
  void (__fastcall *v127)(__int64); // rax
  void *v128; // rcx
  struct _ERESOURCE *v129; // rcx
  _DWORD *v130; // rcx
  struct _DEVICE_OBJECT *v131; // rcx
  _QWORD *v132; // rax
  PDEVICE_OBJECT (__stdcall *v133)(PDEVICE_OBJECT, PDEVICE_OBJECT); // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  _QWORD *v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  int v140; // eax
  __int64 v141; // rcx
  __int64 v142; // rdi
  _QWORD *v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // rax
  __int64 v149; // rax
  struct _DEVICE_OBJECT *v150; // rdi
  _QWORD *v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  _QWORD *v157; // rax
  __int64 *v158; // rdx
  __int64 **v159; // rax
  __int64 Exclusive; // [rsp+28h] [rbp-58h]
  char v161; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v4 + 316) = 0LL;
  *(_WORD *)(v4 + 496) = aDriverVgpu[12];
  *(_QWORD *)(v4 + 136) = v4 + 472;
  *(_WORD *)(v4 + 584) = aDriverWddmwarp[16];
  *(_OWORD *)(v4 + 472) = *(_OWORD *)L"\\Driver\\VGPU";
  *(_QWORD *)(v4 + 120) = v4 + 552;
  *(_QWORD *)(v4 + 152) = v4 + 592;
  *(_OWORD *)(v4 + 552) = *(_OWORD *)L"\\Driver\\WddmWarp";
  *(_WORD *)(v4 + 544) = aDriverBasicdis[20];
  *(_QWORD *)(v4 + 168) = v4 + 504;
  *(_QWORD *)(v4 + 488) = *(_QWORD *)L"VGPU";
  *(_DWORD *)(v4 + 464) = *(_DWORD *)L"md";
  *(_OWORD *)(v4 + 592) = *(_OWORD *)L"\\Driver\\BasicRender";
  *(_QWORD *)(v4 + 40) = a2;
  v7 = bTracingEnabled == 0;
  LOBYTE(v3) = 0;
  v8 = 0LL;
  *(_OWORD *)(v4 + 568) = *(_OWORD *)L"WddmWarp";
  *(_WORD *)(v4 + 468) = aDriverSrakmd[14];
  v9 = 0LL;
  *(_QWORD *)(v4 + 96) = v4 + 440;
  *(_QWORD *)(v4 + 624) = *(_QWORD *)L"der";
  v10 = 0;
  *(_QWORD *)(v4 + 72) = ClientIdentificationAddress;
  v11 = 0;
  *(_OWORD *)(v4 + 608) = *(_OWORD *)L"BasicRender";
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_BYTE *)(v4 + 18) = 0;
  *(_OWORD *)(v4 + 504) = *(_OWORD *)L"\\Driver\\BasicDisplay";
  *(_DWORD *)(v4 + 312) = 0;
  *(_QWORD *)(v4 + 536) = *(_QWORD *)L"play";
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_OWORD *)(v4 + 520) = *(_OWORD *)L"BasicDisplay";
  *(_BYTE *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 25) = 0;
  *(_BYTE *)(v4 + 24) = 0;
  *(_BYTE *)(v4 + 20) = 0;
  *(_BYTE *)(v4 + 17) = 0;
  *(_BYTE *)(v4 + 19) = 0;
  *(_BYTE *)(v4 + 26) = 0;
  *(_BYTE *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 56) = v3;
  *(_DWORD *)(v4 + 28) = 3;
  *(_DWORD *)(v4 + 128) = 1703960;
  *(_DWORD *)(v4 + 112) = 2228256;
  *(_DWORD *)(v4 + 144) = 2621478;
  *(_DWORD *)(v4 + 160) = 2752552;
  *(_OWORD *)(v4 + 440) = *(_OWORD *)L"\\Driver\\srakmd";
  *(_DWORD *)(v4 + 88) = 1966108;
  *(_QWORD *)(v4 + 456) = *(_QWORD *)L"srakmd";
  if ( !v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_ppq((__int64)ClientIdentificationAddress, &EventEnterDpiAddDevice, a3, ClientIdentificationAddress, a2, 0);
  *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(v18) = -1073741811;
    v157 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v157[6] = IoGetDriverObjectExtension;
    v157[3] = 275LL;
    v157[4] = 21LL;
    v157[5] = DpiAddDevice;
    v157[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v157);
    goto LABEL_226;
  }
  v16 = DpiDxgkDdiAddDevice((__int64)DriverObjectExtension, a2, (__int64 *)(v4 + 64));
  v18 = v16;
  if ( v16 < 0 )
  {
    v117 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v117[3] = DpiAddDevice;
    v117[4] = *((_QWORD *)DriverObjectExtension + 18);
    v117[5] = v18;
    WdLogEvent5_WdError(v117);
LABEL_226:
    v70 = 0;
LABEL_72:
    if ( (int)v18 >= 0 )
      goto LABEL_73;
    if ( v10 != 1 )
    {
LABEL_234:
      if ( v70 != 1 )
        goto LABEL_137;
      goto LABEL_131;
    }
LABEL_228:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v158 = (__int64 *)*v8;
    v159 = (__int64 **)v8[1];
    if ( *(__int64 **)(*v8 + 8) != v8 || *v159 != v8 )
      __fastfail(3u);
    *v159 = v158;
    v158[1] = (__int64)v159;
    --*((_DWORD *)DriverObjectExtension + 32);
    if ( v9 && *((_DWORD *)v9 + 126) )
      DpiLdaUnLinkDeviceFromChain(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
    goto LABEL_234;
  }
  v19 = (const UNICODE_STRING *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 56LL);
  *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12) = 1;
  if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 144), v19, 1u) )
  {
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 112), v19, 1u) )
    {
      v11 = 1;
      goto LABEL_12;
    }
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 128), v19, 1u) )
    {
      *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13) = 1;
      goto LABEL_12;
    }
    if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 160), v19, 1u) )
    {
      v7 = RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 88), v19, 1u) == 0;
      *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = DriverObjectExtension[134];
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v7;
      memset((void *)(v4 + 184), 0, 0x68uLL);
      v21 = *((_QWORD *)DriverObjectExtension + 6);
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = L"Start";
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 292;
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = ((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                            + 60;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 67108868;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(0LL, v21, v4 + 176, 0LL, 0LL);
      v18 = RegistryValues;
      if ( RegistryValues < 0 )
      {
        v118 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v119 = (NTSTATUS (__stdcall *)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *))RtlQueryRegistryValuesEx;
LABEL_127:
        v118[3] = DpiAddDevice;
LABEL_129:
        v118[4] = v119;
        v118[5] = v18;
        WdLogEvent5_WdError(v118);
        v10 = 0;
        goto LABEL_226;
      }
      if ( *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) != 3 )
      {
        v120 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v120 + 24) = *(unsigned int *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
        WdLogEvent5_WdError(v120);
        LODWORD(v18) = -1073741637;
        goto LABEL_137;
      }
      goto LABEL_12;
    }
    v91 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
    *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) = 1;
    LODWORD(v18) = DpiGetDevicePropertyString(v91, DevicePropertyHardwareID, PagedPool, v4 + 32);
    if ( (int)v18 < 0 )
      goto LABEL_137;
    v92 = *(void **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) < 0x24u )
    {
      v20 = *(unsigned int *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    }
    else
    {
      v93 = RtlCompareMemory(
              *(const void **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
              L"ROOT\\BasicDisplay",
              0x24uLL);
      v20 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      if ( v93 == 36 )
        v20 = 1LL;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v20;
    }
    if ( v92 )
    {
      ExFreePoolWithTag(v92, 0);
LABEL_12:
      v20 = *(unsigned int *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    }
  }
  else
  {
    LOBYTE(v20) = 1;
    v11 = 1;
    *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v20;
  }
  v24 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( v24 )
  {
    *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
    v25 = 3368;
    v26 = 2;
    if ( *((_QWORD *)DriverObjectExtension + 77) )
    {
      if ( (_BYTE)v20 )
      {
        LODWORD(v18) = -1073741637;
        v132 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v132[3] = DpiAddDevice;
        v133 = (PDEVICE_OBJECT (__stdcall *)(PDEVICE_OBJECT, PDEVICE_OBJECT))*((_QWORD *)DriverObjectExtension + 77);
        v132[5] = -1073741637LL;
LABEL_173:
        v132[4] = v133;
        WdLogEvent5_WdError(v132);
        goto LABEL_137;
      }
      v94 = DpiDxgkDdiLinkDevice(
              (__int64)DriverObjectExtension,
              *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
              v24,
              (int *)(v4 + 312));
      v18 = v94;
      if ( v94 < 0 )
      {
        v118 = (_QWORD *)WdLogNewEntry5_WdError(v95);
        v118[3] = DpiAddDevice;
        v119 = (NTSTATUS (__stdcall *)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *))*((_QWORD *)DriverObjectExtension + 77);
        goto LABEL_129;
      }
      v96 = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C);
      if ( v96 > 0x100 )
      {
        LODWORD(v18) = -1073741756;
        v121 = (_QWORD *)WdLogNewEntry5_WdError(v95);
        v121[3] = DpiAddDevice;
        v121[4] = 0LL;
        v121[5] = -1073741756LL;
        goto LABEL_136;
      }
      if ( v96 && !*(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) )
      {
        v25 = 1528;
        *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 1;
        v26 = 3;
      }
    }
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 2;
    v25 = 496;
    v26 = 4;
    if ( (_BYTE)v20 )
      goto LABEL_134;
  }
  Device = IoCreateDevice(
             *(PDRIVER_OBJECT *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
             v25,
             0LL,
             0x23u,
             *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == 0 ? 0x100 : 0,
             0,
             (PDEVICE_OBJECT *)(v4 + 8));
  v18 = Device;
  if ( Device < 0 )
  {
    v118 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v119 = IoCreateDevice;
    goto LABEL_127;
  }
  v29 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) |= v29 & 0xFFFF00;
  v8 = *(__int64 **)(v29 + 64);
  *((_DWORD *)v8 + 5) = v26;
  *((_DWORD *)v8 + 4) = 1953656900;
  v8[3] = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v8[4] = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v8[5] = (__int64)DriverObjectExtension;
  v8[6] = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *((_BYTE *)v8 + 480) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  *((_BYTE *)v8 + 56) = 1;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, 0x74727044u, 1u, 0, 0x20u);
  v30 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  v8[19] = (__int64)v30;
  v31 = IoAttachDeviceToDeviceStack(*(PDEVICE_OBJECT *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v30);
  v8[20] = (__int64)v31;
  if ( !v31 )
  {
    LODWORD(v18) = -1073741810;
    v132 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v133 = IoAttachDeviceToDeviceStack;
    v132[3] = DpiAddDevice;
    v132[5] = -1073741810LL;
    goto LABEL_173;
  }
  *((_DWORD *)v8 + 71) = 1;
  *((_DWORD *)v8 + 70) = 1;
  v8[38] = (__int64)DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)v8 + 4) != 1953656900 || (unsigned int)(*((_DWORD *)v8 + 5) - 2) > 1 )
    goto LABEL_51;
  v9 = v8;
  *((_BYTE *)v8 + 1091) = *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11);
  *((_BYTE *)v8 + 1095) = *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *((_BYTE *)v8 + 1478) = *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13);
  *((_BYTE *)v8 + 1479) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *((_BYTE *)v8 + 1477) = v11;
  *((_DWORD *)v8 + 376) = 0;
  v8[36] = (__int64)DpiFdoHandleStartDevice;
  v8[59] = (__int64)DpiFdoHandleSurpriseRemoval;
  v8[49] = (__int64)&DpiFdoHandleFilterResources;
  if ( !byte_1C0046CD1 && !*((_BYTE *)v8 + 480) )
    v8[40] = (__int64)DpiFdoHandleStopDevice;
  *(__int64 *)((char *)v8 + 500) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138);
  *((_DWORD *)v8 + 127) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
  LODWORD(v18) = DpiGetDeviceRegistryPaths(
                   *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                   (__int64)v30,
                   (__int64)DriverObjectExtension);
  if ( (int)v18 < 0 )
    goto LABEL_137;
  if ( (int)DpiQueryBusInterface((PDEVICE_OBJECT)v8[20], (__int64)(v8 + 107)) >= 0 )
  {
    if ( *((_QWORD *)DriverObjectExtension + 29) )
    {
      v97 = DpiAcpiRegisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v98 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      if ( v97 >= 0 )
        v98 = 1;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v98;
    }
    *((_BYTE *)v8 + 1093) = 1;
  }
  v33 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  DeviceProperty = IoGetDeviceProperty(v33, DevicePropertyBusNumber, 4u, v8 + 135, (PULONG)(v4 + 32));
  v39 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = DpiAddDevice;
    *(_QWORD *)(v40 + 32) = v39;
    WdLogEvent5_WdWarning(v40);
    *((_DWORD *)v8 + 270) = -1;
  }
  v41 = (_DWORD *)v8 + 271;
  v42 = IoGetDeviceProperty(v33, DevicePropertyAddress, 4u, (char *)v8 + 1084, (PULONG)(v4 + 32));
  v47 = v42;
  if ( v42 < 0 || *v41 == -1 )
  {
    v48 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
    *(_QWORD *)(v48 + 24) = DpiAddDevice;
    *(_QWORD *)(v48 + 32) = v47;
    WdLogEvent5_WdWarning(v48);
    *v41 = -1;
  }
  v49 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  LODWORD(v18) = IoGetDeviceProperty(v49, DevicePropertyBusTypeGuid, 0x10u, v8 + 68, (PULONG)(v4 + 32));
  if ( (int)v18 < 0 || *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) < 0x10u )
  {
    v54 = WdLogNewEntry5_WdEvent(v51, v50, v52, v53);
    *(_QWORD *)(v54 + 24) = DpiAddDevice;
    *(_QWORD *)(v54 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v54);
    *((GUID *)v8 + 34) = GUID_BUS_TYPE_INVALID;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) )
  {
    LODWORD(v18) = DpiFdoDetectPostDevice(
                     *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                     (_BYTE *)(v4 + 26));
    if ( (int)v18 < 0 )
      goto LABEL_137;
    if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A) )
    {
      v103 = WdLogNewEntry5_WdEvent(v100, v99, v101, v102);
      *(_QWORD *)(v103 + 24) = DpiAddDevice;
      *(_QWORD *)(v103 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v103);
      *((_WORD *)v8 + 544) = 257;
      byte_1C0046FC8 = 1;
      if ( byte_1C0046CD1 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v49);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v49 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      }
    }
  }
  if ( RtlCompareMemory(v8 + 68, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(v8 + 68, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
    {
      if ( RtlCompareMemory(v8 + 68, &GUID_BUS_VMBUS, 0x10uLL) != 16 )
      {
        if ( *((_BYTE *)v8 + 1095) )
        {
          *((_DWORD *)v8 + 265) = 5140;
          v8[133] = 139LL;
          v8[134] = 0LL;
          *((_DWORD *)v8 + 264) = 0;
          goto LABEL_38;
        }
        if ( *((_BYTE *)v8 + 480) )
        {
          *((_DWORD *)v8 + 264) = 3;
          *((_DWORD *)v8 + 265) = 5140;
          if ( *((_BYTE *)v8 + 1091) )
          {
            *((_DWORD *)v8 + 266) = 141;
          }
          else if ( *((_BYTE *)v8 + 1477) )
          {
            *((_DWORD *)v8 + 266) = 140;
          }
          goto LABEL_38;
        }
        if ( *((_BYTE *)v8 + 1479) )
        {
          *((_DWORD *)v8 + 264) = 3;
          goto LABEL_38;
        }
        goto LABEL_134;
      }
      v152 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
      *(_QWORD *)(v152 + 24) = DpiAddDevice;
      *(_QWORD *)(v152 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v152);
      if ( *((_BYTE *)v8 + 1478) )
      {
        *((_DWORD *)v8 + 265) = 5140;
        v8[133] = 705LL;
        *((_DWORD *)v8 + 268) = 0;
        *((_DWORD *)v8 + 269) = 1;
      }
      *((_DWORD *)v8 + 264) = 4;
LABEL_38:
      if ( *((_BYTE *)v8 + 1088) )
        goto LABEL_40;
      goto LABEL_39;
    }
    v139 = WdLogNewEntry5_WdEvent(v60, v59, v61, v62);
    *(_QWORD *)(v139 + 24) = DpiAddDevice;
    *(_QWORD *)(v139 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v139);
    if ( *((_BYTE *)v8 + 1093) )
    {
      *((_DWORD *)v8 + 264) = 2;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1145653343LL;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      v140 = DpEvalAcpiMethod(
               *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
               0xFFFFFFFFLL,
               v4 + 288,
               24LL,
               v4 + 400,
               36);
      v142 = v140;
      if ( v140 >= 0 )
      {
        *((_DWORD *)v8 + 265) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
        *((_DWORD *)v8 + 266) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A4);
      }
      else
      {
        v143 = (_QWORD *)WdLogNewEntry5_WdError(v141);
        v143[3] = DpiAddDevice;
        v143[4] = DpEvalAcpiMethod;
        v143[5] = v142;
        WdLogEvent5_WdError(v143);
      }
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1112888159LL;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      if ( (int)DpEvalAcpiMethod(
                  *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                  0xFFFFFFFFLL,
                  v4 + 288,
                  24LL,
                  v4 + 400,
                  36) >= 0 )
      {
        *((_DWORD *)v8 + 267) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
        *((_DWORD *)v8 + 268) = *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A4);
      }
      else
      {
        v148 = WdLogNewEntry5_WdEvent(v145, v144, v146, v147);
        *(_QWORD *)(v148 + 24) = DpiAddDevice;
        *(_QWORD *)(v148 + 32) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v148);
      }
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1448233055LL;
      *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      LODWORD(v18) = DpEvalAcpiMethod(
                       *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       0xFFFFFFFFLL,
                       v4 + 288,
                       24LL,
                       v4 + 400,
                       36);
      if ( (int)v18 >= 0 )
      {
        *((_DWORD *)v8 + 269) = *(unsigned __int16 *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
      }
      else
      {
        v149 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
        *(_QWORD *)(v149 + 32) = DpEvalAcpiMethod;
        *(_QWORD *)(v149 + 24) = DpiAddDevice;
        WdLogEvent5_WdEvent(v149);
        LODWORD(v18) = 0;
      }
      if ( *((_BYTE *)v8 + 1088) )
      {
        v150 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        v18 = (int)DpiSetDeviceUsageType(v150);
        ObfDereferenceObject(v150);
        if ( (int)v18 < 0 )
        {
          v151 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v151[4] = DpiSetDeviceUsageType;
          v151[3] = DpiAddDevice;
          v151[5] = v18;
          WdLogEvent5_WdError(v151);
          LODWORD(v18) = 0;
        }
      }
      goto LABEL_38;
    }
LABEL_134:
    LODWORD(v18) = -1073741637;
    v121 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v121[3] = DpiAddDevice;
    v121[4] = 0LL;
    v121[5] = -1073741637LL;
LABEL_136:
    WdLogEvent5_WdError(v121);
    goto LABEL_137;
  }
  v104 = WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
  *(_QWORD *)(v104 + 24) = DpiAddDevice;
  *(_QWORD *)(v104 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  WdLogEvent5_WdEvent(v104);
  DpiQueryBusInterface(v49, (__int64)(v8 + 70));
  if ( !v8[77] )
  {
    LODWORD(v18) = -1073741127;
    v121 = (_QWORD *)WdLogNewEntry5_WdError(v105);
    v121[3] = DpiAddDevice;
    v121[4] = 0LL;
    v121[5] = -1073741127LL;
    goto LABEL_136;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  v8[131] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v18) = -1073741801;
    v135 = (_QWORD *)WdLogNewEntry5_WdLowResource(v108, v107, 0LL, v109);
    v135[4] = ExAllocatePoolWithTag;
    v135[3] = DpiAddDevice;
    v135[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v135);
    goto LABEL_137;
  }
  ((void (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, int))v8[77])(v8[71], 0LL, PoolWithTag, 0LL, 256);
  v110 = (unsigned __int16 *)v8[131];
  *((_DWORD *)v8 + 264) = 1;
  *((_DWORD *)v8 + 265) = *v110;
  *((_DWORD *)v8 + 266) = v110[1];
  *((_DWORD *)v8 + 269) = *((unsigned __int8 *)v110 + 8);
  if ( (v110[7] & 0x7F) == 0 )
  {
    *((_DWORD *)v8 + 267) = v110[22];
    *((_DWORD *)v8 + 268) = v110[23];
  }
  if ( *((_DWORD *)v8 + 265) != 22611 || (v111 = 1, *((_DWORD *)v8 + 266) != 4097) )
    v111 = 0;
  *((_BYTE *)v8 + 1480) = v111;
  DpiQueryBusInterface(v49, (__int64)(v8 + 78));
  DpiQueryBusInterface((PDEVICE_OBJECT)v8[20], (__int64)(v8 + 84));
  AgpStatus = DpiGetAgpStatus(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v115 = AgpStatus;
  if ( AgpStatus >= 0 && !v8[85] )
  {
    v136 = WdLogNewEntry5_WdWarning(v114, v113, v64, v65);
    *(_QWORD *)(v136 + 24) = DpiAddDevice;
    *(_QWORD *)(v136 + 32) = v115;
    WdLogEvent5_WdWarning(v136);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL);
  v63 = *(_QWORD *)(v20 + 1048);
  if ( (*(_BYTE *)(v63 + 4) & 1) != 0
    && (*(_WORD *)(v63 + 10) == 1 || *(_BYTE *)(v63 + 11) == 3 && !*(_BYTE *)(v63 + 10)) )
  {
    LODWORD(v18) = 0;
    if ( *((_BYTE *)v8 + 1088) )
      goto LABEL_113;
    if ( !byte_1C0046FC8 )
    {
      v137 = WdLogNewEntry5_WdWarning(v20, v63, v64, v65);
      *(_QWORD *)(v137 + 24) = DpiAddDevice;
      *(_QWORD *)(v137 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdWarning(v137);
      *((_BYTE *)v8 + 1088) = 1;
      byte_1C0046FC9 = 1;
    }
    if ( *((_BYTE *)v8 + 1088) )
    {
LABEL_113:
      if ( byte_1C0046CD5 )
        *((_BYTE *)v8 + 1092) = 1;
      goto LABEL_38;
    }
  }
  else
  {
    LODWORD(v18) = -1073741823;
    if ( *((_BYTE *)v8 + 1088) )
    {
      v138 = WdLogNewEntry5_WdWarning(v20, v63, v64, v65);
      *(_QWORD *)(v138 + 24) = DpiAddDevice;
      *(_QWORD *)(v138 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdWarning(v138);
      goto LABEL_38;
    }
  }
LABEL_39:
  if ( !*((_BYTE *)v8 + 480) && *((_BYTE *)v8 + 1091) )
  {
    v153 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
    *(_QWORD *)(v153 + 24) = DpiAddDevice;
    *(_QWORD *)(v153 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v153);
    LODWORD(v18) = -1071774664;
    goto LABEL_137;
  }
LABEL_40:
  v66 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = 0;
  if ( (int)DpiReadPnpRegistryValue(v66, L"SoftGPUAdapter", (char *)(v4 + 52), 4u, 2u) < 0
    || (v67 = 1, !*(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34)) )
  {
    v67 = 0;
  }
  *((_BYTE *)v8 + 1476) = v67;
  if ( v67 && *((_BYTE *)v8 + 1477) )
  {
    LODWORD(v18) = -1073741811;
    goto LABEL_137;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 158);
  v68 = v8 + 141;
  v69 = 7LL;
  if ( (((_BYTE)v8 + 104) & 4) != 0 )
  {
    *v68 = 1;
    v69 = 6LL;
    v68 = (_DWORD *)v8 + 283;
  }
  memset64(v68, 0x100000001uLL, v69 >> 1);
  if ( (v69 & 1) != 0 )
    v68[v69 - 1] = 1;
  KeInitializeDpc(
    (PRKDPC)(v8 + 150),
    (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr,
    *(PVOID *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  KeInitializeMutex((PRKMUTEX)(v8 + 163), 0);
  KeInitializeMutex((PRKMUTEX)(v8 + 173), 0);
  v8[162] = (__int64)(v8 + 161);
  v8[161] = (__int64)(v8 + 161);
  v8[172] = (__int64)(v8 + 171);
  v8[171] = (__int64)(v8 + 171);
  v8[187] = (__int64)(v8 + 186);
  v8[186] = (__int64)(v8 + 186);
  if ( *((_DWORD *)v8 + 4) != 1953656900 )
  {
LABEL_51:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v70 = 1;
    if ( v9 )
    {
      if ( *((_DWORD *)v9 + 126) )
      {
        LODWORD(v18) = DpiLdaLinkDeviceToChain(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
        if ( (int)v18 < 0 )
        {
LABEL_131:
          KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
          goto LABEL_137;
        }
      }
    }
    v71 = (PVOID *)*((_QWORD *)DriverObjectExtension + 8);
    *v8 = (__int64)(DriverObjectExtension + 56);
    v8[1] = (__int64)v71;
    if ( *v71 != DriverObjectExtension + 56 )
      __fastfail(3u);
    *v71 = v8;
    *((_QWORD *)DriverObjectExtension + 8) = v8;
    ++*((_DWORD *)DriverObjectExtension + 32);
    v7 = v8[21] == 0;
    *(_BYTE *)v4 = 1;
    if ( v7 )
    {
      v72 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
      v8[21] = (__int64)v72;
      if ( !v72 )
        goto LABEL_221;
      v72[26] = 1;
      v77 = ExInitializeResourceLite((PERESOURCE)v8[21]);
      v18 = v77;
      if ( v77 < 0 )
      {
        v155 = (_QWORD *)WdLogNewEntry5_WdError(v78);
        v155[4] = ExInitializeResourceLite;
        v155[3] = DpiAddDevice;
        v155[5] = v18;
        WdLogEvent5_WdError(v155);
LABEL_71:
        v10 = *(_BYTE *)v4;
        goto LABEL_72;
      }
      *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 1;
    }
    KeInitializeMutex((PRKMUTEX)(v8 + 22), 0);
    if ( !v9 )
      goto LABEL_65;
    if ( !v9[159] )
    {
      v79 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      v9[159] = (__int64)v79;
      if ( !v79 )
        goto LABEL_221;
      v79[2] = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v9[159]);
    }
    if ( v9[160] )
      goto LABEL_65;
    v80 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
    v9[160] = (__int64)v80;
    if ( v80 )
    {
      v80[2] = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v9[160]);
LABEL_65:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      v8[16] = (__int64)DpiFdoDispatchPnp;
      v70 = 0;
      if ( v9 )
      {
        v9[17] = (__int64)DpiFdoDispatchPower;
        if ( *((_BYTE *)v9 + 1088) )
        {
          AcquireMiniportListMutex();
          if ( qword_1C0046F00 && qword_1C0046F00 != qword_1C0046F08 )
          {
            v156 = (_QWORD *)WdLogNewEntry5_WdError(v116);
            v156[3] = DpiAddDevice;
            v156[4] = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            v156[5] = (int)v18;
            WdLogEvent5_WdError(v156);
          }
          qword_1C0046F00 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          _InterlockedExchange64(&qword_1C0046D08, 0LL);
          KeReleaseMutex(Mutex, 0);
        }
      }
      v85 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14)
        && *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) )
      {
        qword_1C0046F08 = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      *(_DWORD *)(v85 + 48) |= 4u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) |= 0x2000u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x4000u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x80u;
      v86 = WdLogNewEntry5_WdEvent(v82, v81, v83, v84);
      *(_QWORD *)(v86 + 24) = DpiAddDevice;
      *(_QWORD *)(v86 + 32) = *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v86);
      goto LABEL_71;
    }
LABEL_221:
    LODWORD(v18) = -1073741801;
    v154 = (_QWORD *)WdLogNewEntry5_WdLowResource(v74, v73, v75, v76);
    v154[3] = DpiAddDevice;
    v154[4] = ExAllocatePoolWithTag;
    v154[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v154);
    goto LABEL_228;
  }
  if ( *((_DWORD *)v8 + 5) != 2 )
  {
    if ( *((_DWORD *)v8 + 5) == 3 )
    {
      LODWORD(v18) = 0;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL) + 344LL) = &DpiLdaHandleQueryDeviceRelations;
    }
    goto LABEL_51;
  }
  LODWORD(v18) = DpiFdoInitializeFdo(*(PVOID *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  if ( (int)v18 >= 0 )
  {
    *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x19) = 1;
    goto LABEL_51;
  }
LABEL_137:
  if ( *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x19) == 1 )
      DpiFdoResetFdo();
    if ( v9 )
    {
      v122 = (_DWORD *)v9[159];
      if ( v122 && v122[2] == 1 )
      {
        ExFreePoolWithTag(v122, 0);
        v9[159] = 0LL;
      }
      v123 = (_DWORD *)v9[160];
      if ( v123 && v123[2] == 1 )
      {
        ExFreePoolWithTag(v123, 0);
        v9[160] = 0LL;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == 1 )
        DpiAcpiUnregisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v124 = (void (__fastcall *)(__int64))v9[73];
      if ( v124 )
      {
        v124(v9[71]);
        memset(v9 + 70, 0, 0x40uLL);
      }
      v125 = (void (__fastcall *)(__int64))v9[81];
      if ( v125 )
      {
        v125(v9[79]);
        memset(v9 + 78, 0, 0x30uLL);
      }
      v126 = (void (__fastcall *)(__int64))v9[87];
      if ( v126 )
      {
        v126(v9[85]);
        memset(v9 + 84, 0, 0xB8uLL);
      }
      v127 = (void (__fastcall *)(__int64))v9[110];
      if ( v127 )
      {
        v127(v9[108]);
        memset(v9 + 107, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v9 + 32);
      RtlFreeUnicodeString((PUNICODE_STRING)v9 + 33);
      v128 = (void *)v9[131];
      if ( v128 )
      {
        ExFreePoolWithTag(v128, 0);
        v9[131] = 0LL;
      }
    }
    if ( v8 )
    {
      v129 = (struct _ERESOURCE *)v8[21];
      if ( v129 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) == 1 )
          ExDeleteResourceLite(v129);
        v130 = (_DWORD *)v8[21];
        if ( v130[26] == 1 && v130 )
        {
          ExFreePoolWithTag(v130, 0);
          v8[21] = 0LL;
        }
      }
      v131 = (struct _DEVICE_OBJECT *)v8[20];
      if ( v131 )
        IoDetachDevice(v131);
    }
    IoDeleteDevice(*(PDEVICE_OBJECT *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12) == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
LABEL_73:
  memset((void *)(v4 + 336), 0, 0x40uLL);
  v87 = DxgkDiagCalcDuration1us((_QWORD *)(v4 + 104));
  DxgkDiagInitializeCodePointPacket(
    (_DWORD *)(v4 + 336),
    34,
    *(_DWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
    v87,
    v18);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)(v4 + 336));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(Exclusive) = v18;
    Template_ppq(
      v88,
      &EventExitDpiAddDevice,
      v89,
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      *(_QWORD *)(((unsigned __int64)&v161 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      Exclusive);
  }
  return (unsigned int)v18;
}
