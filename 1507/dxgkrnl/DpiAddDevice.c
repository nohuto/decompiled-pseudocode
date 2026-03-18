/*
 * XREFs of DpiAddDevice @ 0x1C00C5300
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0005A48 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     DxgkDiagCalcDuration1us @ 0x1C000D114 (DxgkDiagCalcDuration1us.c)
 *     DpiGetDeviceRegistryPaths @ 0x1C000D3D0 (DpiGetDeviceRegistryPaths.c)
 *     DpiDxgkDdiLinkDevice @ 0x1C000F4CC (DpiDxgkDdiLinkDevice.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     Template_ppq @ 0x1C00286B0 (Template_ppq.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DpiFdoInitializeFdo @ 0x1C00C6170 (DpiFdoInitializeFdo.c)
 *     DpiQueryBusInterface @ 0x1C00C6960 (DpiQueryBusInterface.c)
 *     DpiGetDevicePropertyString @ 0x1C00C6DF0 (DpiGetDevicePropertyString.c)
 *     DpiDxgkDdiAddDevice @ 0x1C00C73F0 (DpiDxgkDdiAddDevice.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 *     DpiFdoDetectPostDevice @ 0x1C00DBAF0 (DpiFdoDetectPostDevice.c)
 *     DpiGetAgpStatus @ 0x1C00DDAB0 (DpiGetAgpStatus.c)
 *     DpiAcpiRegisterAcpiCallbacks @ 0x1C00DDC70 (DpiAcpiRegisterAcpiCallbacks.c)
 *     DpEvalAcpiMethod @ 0x1C0165AC0 (DpEvalAcpiMethod.c)
 *     DpiFdoResetFdo @ 0x1C01684A0 (DpiFdoResetFdo.c)
 *     DpiSetDeviceUsageType @ 0x1C016BAA0 (DpiSetDeviceUsageType.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C016D90C (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaLinkDeviceToChain @ 0x1C016F870 (DpiLdaLinkDeviceToChain.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C017000C (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C01707E8 (DpiDxgkDdiRemoveDevice.c)
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
  __int64 v73; // rcx
  NTSTATUS v74; // eax
  __int64 v75; // rcx
  _DWORD *v76; // rax
  _DWORD *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v82; // rax
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
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
  __int64 v107; // rcx
  unsigned __int16 *v108; // rcx
  char v109; // al
  int AgpStatus; // eax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdi
  __int64 v114; // rcx
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  NTSTATUS (__stdcall *v117)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *); // rcx
  __int64 v118; // rax
  _QWORD *v119; // rax
  __int64 v120; // rcx
  _DWORD *v121; // rcx
  _DWORD *v122; // rcx
  void (__fastcall *v123)(__int64); // rax
  void (__fastcall *v124)(__int64); // rax
  void (__fastcall *v125)(__int64); // rax
  void (__fastcall *v126)(__int64); // rax
  void *v127; // rcx
  struct _ERESOURCE *v128; // rcx
  _DWORD *v129; // rcx
  struct _DEVICE_OBJECT *v130; // rcx
  _QWORD *v131; // rax
  PDEVICE_OBJECT (__stdcall *v132)(PDEVICE_OBJECT, PDEVICE_OBJECT); // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  _QWORD *v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rax
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rdi
  _QWORD *v142; // rax
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // r8
  __int64 v146; // r9
  __int64 v147; // rax
  __int64 v148; // rax
  struct _DEVICE_OBJECT *v149; // rdi
  _QWORD *v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  __int64 *v157; // rdx
  __int64 **v158; // rax
  __int64 Exclusive; // [rsp+28h] [rbp-58h]
  char v160; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL;
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
  *(_BYTE *)(v4 + 17) = 0;
  *(_OWORD *)(v4 + 504) = *(_OWORD *)L"\\Driver\\BasicDisplay";
  *(_DWORD *)(v4 + 312) = 0;
  *(_QWORD *)(v4 + 536) = *(_QWORD *)L"play";
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_OWORD *)(v4 + 520) = *(_OWORD *)L"BasicDisplay";
  *(_BYTE *)(v4 + 48) = 0;
  *(_BYTE *)(v4 + 26) = 0;
  *(_BYTE *)(v4 + 24) = 0;
  *(_BYTE *)(v4 + 20) = 0;
  *(_BYTE *)(v4 + 16) = 0;
  *(_BYTE *)(v4 + 19) = 0;
  *(_BYTE *)(v4 + 25) = 0;
  *(_BYTE *)(v4 + 18) = 0;
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
  *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = MEMORY[0xFFFFF78000000320];
  DriverObjectExtension = (char *)IoGetDriverObjectExtension(ClientIdentificationAddress, ClientIdentificationAddress);
  if ( !DriverObjectExtension
    || *((_DWORD *)DriverObjectExtension + 4) != 1953656900
    || *((_DWORD *)DriverObjectExtension + 5) != 1 )
  {
    LODWORD(v18) = -1073741811;
    v156 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12, v14);
    v156[6] = IoGetDriverObjectExtension;
    v156[3] = 275LL;
    v156[4] = 21LL;
    v156[5] = DpiAddDevice;
    v156[7] = -1073741811LL;
    WdLogEvent5_WdCriticalError(v156);
    goto LABEL_226;
  }
  v16 = DpiDxgkDdiAddDevice(DriverObjectExtension, a2, v4 + 64);
  v18 = v16;
  if ( v16 < 0 )
  {
    v115 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v115[3] = DpiAddDevice;
    v115[4] = *((_QWORD *)DriverObjectExtension + 18);
    v115[5] = v18;
    WdLogEvent5_WdError(v115);
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
    v157 = (__int64 *)*v8;
    v158 = (__int64 **)v8[1];
    if ( *(__int64 **)(*v8 + 8) != v8 || *v158 != v8 )
      __fastfail(3u);
    *v158 = v157;
    v157[1] = (__int64)v158;
    --*((_DWORD *)DriverObjectExtension + 32);
    if ( v9 && *((_DWORD *)v9 + 118) )
      DpiLdaUnLinkDeviceFromChain(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
    goto LABEL_234;
  }
  v19 = (const UNICODE_STRING *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) + 56LL);
  *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) = 1;
  if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 144), v19, 1u) )
  {
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 112), v19, 1u) )
    {
      v11 = 1;
      goto LABEL_12;
    }
    if ( !RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 128), v19, 1u) )
    {
      *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13) = 1;
      goto LABEL_12;
    }
    if ( RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 160), v19, 1u) )
    {
      v7 = RtlCompareUnicodeString((PCUNICODE_STRING)(v4 + 88), v19, 1u) == 0;
      *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12) = DriverObjectExtension[134];
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v7;
      memset((void *)(v4 + 184), 0, 0x68uLL);
      v21 = *((_QWORD *)DriverObjectExtension + 6);
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = L"Start";
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = 292;
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) = ((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                            + 60;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) = 67108868;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 4;
      RegistryValues = RtlQueryRegistryValuesEx(0LL, v21, v4 + 176, 0LL, 0LL);
      v18 = RegistryValues;
      if ( RegistryValues < 0 )
      {
        v116 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v117 = (NTSTATUS (__stdcall *)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *))RtlQueryRegistryValuesEx;
LABEL_127:
        v116[3] = DpiAddDevice;
LABEL_129:
        v116[4] = v117;
        v116[5] = v18;
        WdLogEvent5_WdError(v116);
        v10 = 0;
        goto LABEL_226;
      }
      if ( *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) != 3 )
      {
        v118 = WdLogNewEntry5_WdError(v23);
        *(_QWORD *)(v118 + 24) = *(unsigned int *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
        WdLogEvent5_WdError(v118);
        LODWORD(v18) = -1073741637;
        goto LABEL_137;
      }
      goto LABEL_12;
    }
    v91 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
    *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
    LODWORD(v18) = DpiGetDevicePropertyString(v91, DevicePropertyHardwareID, PagedPool, v4 + 32);
    if ( (int)v18 < 0 )
      goto LABEL_137;
    v92 = *(void **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    if ( *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) < 0x24u )
    {
      v20 = *(unsigned int *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    }
    else
    {
      v93 = RtlCompareMemory(
              *(const void **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50),
              L"ROOT\\BasicDisplay",
              0x24uLL);
      v20 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
      if ( v93 == 36 )
        v20 = 1LL;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v20;
    }
    if ( v92 )
    {
      ExFreePoolWithTag(v92, 0);
LABEL_12:
      v20 = *(unsigned int *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
    }
  }
  else
  {
    LOBYTE(v20) = 1;
    v11 = 1;
    *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v20;
  }
  v24 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  if ( v24 )
  {
    *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 0;
    v25 = 3304;
    v26 = 2;
    if ( *((_QWORD *)DriverObjectExtension + 77) )
    {
      if ( (_BYTE)v20 )
      {
        LODWORD(v18) = -1073741637;
        v131 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v131[3] = DpiAddDevice;
        v132 = (PDEVICE_OBJECT (__stdcall *)(PDEVICE_OBJECT, PDEVICE_OBJECT))*((_QWORD *)DriverObjectExtension + 77);
        v131[5] = -1073741637LL;
LABEL_173:
        v131[4] = v132;
        WdLogEvent5_WdError(v131);
        goto LABEL_137;
      }
      v94 = DpiDxgkDdiLinkDevice(
              (__int64)DriverObjectExtension,
              *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
              v24,
              (int *)(v4 + 312));
      v18 = v94;
      if ( v94 < 0 )
      {
        v116 = (_QWORD *)WdLogNewEntry5_WdError(v95);
        v116[3] = DpiAddDevice;
        v117 = (NTSTATUS (__stdcall *)(PDRIVER_OBJECT, ULONG, PUNICODE_STRING, ULONG, ULONG, BOOLEAN, PDEVICE_OBJECT *))*((_QWORD *)DriverObjectExtension + 77);
        goto LABEL_129;
      }
      v96 = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13C);
      if ( v96 > 0x100 )
      {
        LODWORD(v18) = -1073741756;
        v119 = (_QWORD *)WdLogNewEntry5_WdError(v95);
        v119[3] = DpiAddDevice;
        v119[4] = 0LL;
        v119[5] = -1073741756LL;
        goto LABEL_136;
      }
      if ( v96 && !*(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140) )
      {
        v25 = 1488;
        *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 1;
        v26 = 3;
      }
    }
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = 2;
    v25 = 464;
    v26 = 4;
    if ( (_BYTE)v20 )
      goto LABEL_134;
  }
  Device = IoCreateDevice(
             *(PDRIVER_OBJECT *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
             v25,
             0LL,
             0x23u,
             0x100u,
             0,
             (PDEVICE_OBJECT *)(v4 + 8));
  v18 = Device;
  if ( Device < 0 )
  {
    v116 = (_QWORD *)WdLogNewEntry5_WdError(v28);
    v117 = IoCreateDevice;
    goto LABEL_127;
  }
  v29 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) |= v29 & 0xFFFF00;
  v8 = *(__int64 **)(v29 + 64);
  *((_DWORD *)v8 + 5) = v26;
  *((_DWORD *)v8 + 4) = 1953656900;
  v8[3] = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v8[4] = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v8[5] = (__int64)DriverObjectExtension;
  v8[6] = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *((_BYTE *)v8 + 448) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
  *((_BYTE *)v8 + 56) = 1;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)v8 + 2, 0x74727044u, 1u, 0, 0x20u);
  v30 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  v8[19] = (__int64)v30;
  v31 = IoAttachDeviceToDeviceStack(*(PDEVICE_OBJECT *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v30);
  v8[20] = (__int64)v31;
  if ( !v31 )
  {
    LODWORD(v18) = -1073741810;
    v131 = (_QWORD *)WdLogNewEntry5_WdError(v32);
    v132 = IoAttachDeviceToDeviceStack;
    v131[3] = DpiAddDevice;
    v131[5] = -1073741810LL;
    goto LABEL_173;
  }
  *((_DWORD *)v8 + 62) = 1;
  *((_DWORD *)v8 + 61) = 1;
  v8[34] = (__int64)DpiFdoHandleRemoveDevice;
  if ( *((_DWORD *)v8 + 4) != 1953656900 || (unsigned int)(*((_DWORD *)v8 + 5) - 2) > 1 )
    goto LABEL_51;
  v9 = v8;
  *((_BYTE *)v8 + 1058) = *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
  *((_BYTE *)v8 + 1062) = *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12);
  *((_BYTE *)v8 + 1438) = *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x13);
  *((_BYTE *)v8 + 1439) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  *((_BYTE *)v8 + 1437) = v11;
  *((_DWORD *)v8 + 366) = 0;
  v8[32] = (__int64)&DpiFdoHandleStartDevice;
  v8[55] = (__int64)DpiFdoHandleSurpriseRemoval;
  v8[45] = (__int64)&DpiFdoHandleFilterResources;
  if ( !byte_1C0046C51 && !*((_BYTE *)v8 + 448) )
    v8[36] = (__int64)DpiFdoHandleStopDevice;
  *(__int64 *)((char *)v8 + 468) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x138);
  *((_DWORD *)v8 + 119) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x140);
  LODWORD(v18) = DpiGetDeviceRegistryPaths(
                   *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                   (__int64)v30,
                   (__int64)DriverObjectExtension);
  if ( (int)v18 < 0 )
    goto LABEL_137;
  if ( (int)DpiQueryBusInterface((PDEVICE_OBJECT)v8[20], (__int64)(v8 + 103)) >= 0 )
  {
    if ( *((_QWORD *)DriverObjectExtension + 29) )
    {
      v97 = DpiAcpiRegisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v98 = (unsigned __int8)*(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      if ( v97 >= 0 )
        v98 = 1;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v98;
    }
    *((_BYTE *)v8 + 1060) = 1;
  }
  v33 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  DeviceProperty = IoGetDeviceProperty(v33, DevicePropertyBusNumber, 4u, v8 + 131, (PULONG)(v4 + 32));
  v39 = DeviceProperty;
  if ( DeviceProperty < 0 )
  {
    v40 = WdLogNewEntry5_WdWarning(v36, v35, v37, v38);
    *(_QWORD *)(v40 + 24) = DpiAddDevice;
    *(_QWORD *)(v40 + 32) = v39;
    WdLogEvent5_WdWarning(v40);
    *((_DWORD *)v8 + 262) = -1;
  }
  v41 = (_DWORD *)v8 + 263;
  v42 = IoGetDeviceProperty(v33, DevicePropertyAddress, 4u, (char *)v8 + 1052, (PULONG)(v4 + 32));
  v47 = v42;
  if ( v42 < 0 || *v41 == -1 )
  {
    v48 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
    *(_QWORD *)(v48 + 24) = DpiAddDevice;
    *(_QWORD *)(v48 + 32) = v47;
    WdLogEvent5_WdWarning(v48);
    *v41 = -1;
  }
  v49 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  LODWORD(v18) = IoGetDeviceProperty(v49, DevicePropertyBusTypeGuid, 0x10u, v8 + 64, (PULONG)(v4 + 32));
  if ( (int)v18 < 0 || *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) < 0x10u )
  {
    v54 = WdLogNewEntry5_WdEvent(v51, v50, v52, v53);
    *(_QWORD *)(v54 + 24) = DpiAddDevice;
    *(_QWORD *)(v54 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v54);
    *((GUID *)v8 + 32) = GUID_BUS_TYPE_INVALID;
  }
  if ( !*(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) )
  {
    LODWORD(v18) = DpiFdoDetectPostDevice(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8), v4 + 25);
    if ( (int)v18 < 0 )
      goto LABEL_137;
    if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x19) )
    {
      v103 = WdLogNewEntry5_WdEvent(v100, v99, v101, v102);
      *(_QWORD *)(v103 + 24) = DpiAddDevice;
      *(_QWORD *)(v103 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v103);
      *((_BYTE *)v8 + 1056) = 1;
      byte_1C0046F48 = 1;
      if ( byte_1C0046C51 == 1 )
      {
        AttachedDeviceReference = IoGetAttachedDeviceReference(v49);
        DpiSetDeviceUsageType(AttachedDeviceReference);
        ObfDereferenceObject(AttachedDeviceReference);
        v49 = *(struct _DEVICE_OBJECT **)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      }
    }
  }
  if ( RtlCompareMemory(v8 + 64, &GUID_BUS_TYPE_PCI, 0x10uLL) != 16 )
  {
    if ( RtlCompareMemory(v8 + 64, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 16 )
    {
      if ( RtlCompareMemory(v8 + 64, &GUID_BUS_VMBUS, 0x10uLL) != 16 )
      {
        if ( *((_BYTE *)v8 + 1062) )
        {
          *((_DWORD *)v8 + 257) = 5140;
          v8[129] = 139LL;
          v8[130] = 0LL;
          *((_DWORD *)v8 + 256) = 0;
          goto LABEL_38;
        }
        if ( *((_BYTE *)v8 + 448) )
        {
          *((_DWORD *)v8 + 256) = 3;
          *((_DWORD *)v8 + 257) = 5140;
          if ( *((_BYTE *)v8 + 1058) )
          {
            *((_DWORD *)v8 + 258) = 141;
          }
          else if ( *((_BYTE *)v8 + 1437) )
          {
            *((_DWORD *)v8 + 258) = 140;
          }
          goto LABEL_38;
        }
        if ( *((_BYTE *)v8 + 1439) )
        {
          *((_DWORD *)v8 + 256) = 3;
          goto LABEL_38;
        }
        goto LABEL_134;
      }
      v151 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
      *(_QWORD *)(v151 + 24) = DpiAddDevice;
      *(_QWORD *)(v151 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v151);
      if ( *((_BYTE *)v8 + 1438) )
      {
        *((_DWORD *)v8 + 257) = 5140;
        v8[129] = 705LL;
        *((_DWORD *)v8 + 260) = 0;
        *((_DWORD *)v8 + 261) = 1;
      }
      *((_DWORD *)v8 + 256) = 4;
LABEL_38:
      if ( *((_BYTE *)v8 + 1056) )
        goto LABEL_40;
      goto LABEL_39;
    }
    v138 = WdLogNewEntry5_WdEvent(v60, v59, v61, v62);
    *(_QWORD *)(v138 + 24) = DpiAddDevice;
    *(_QWORD *)(v138 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v138);
    if ( *((_BYTE *)v8 + 1060) )
    {
      *((_DWORD *)v8 + 256) = 2;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1145653343LL;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      v139 = DpEvalAcpiMethod(
               *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
               0xFFFFFFFFLL,
               v4 + 288,
               24LL,
               v4 + 400,
               36);
      v141 = v139;
      if ( v139 >= 0 )
      {
        *((_DWORD *)v8 + 257) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
        *((_DWORD *)v8 + 258) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A4);
      }
      else
      {
        v142 = (_QWORD *)WdLogNewEntry5_WdError(v140);
        v142[3] = DpiAddDevice;
        v142[4] = DpEvalAcpiMethod;
        v142[5] = v141;
        WdLogEvent5_WdError(v142);
      }
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1112888159LL;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      if ( (int)DpEvalAcpiMethod(
                  *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                  0xFFFFFFFFLL,
                  v4 + 288,
                  24LL,
                  v4 + 400,
                  36) >= 0 )
      {
        *((_DWORD *)v8 + 259) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
        *((_DWORD *)v8 + 260) = *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A4);
      }
      else
      {
        v147 = WdLogNewEntry5_WdEvent(v144, v143, v145, v146);
        *(_QWORD *)(v147 + 24) = DpiAddDevice;
        *(_QWORD *)(v147 + 32) = DpEvalAcpiMethod;
        WdLogEvent5_WdEvent(v147);
      }
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x120) = 1130980673;
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x124) = 1448233055LL;
      *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x12C) = 0;
      memset((void *)(v4 + 400), 0, 0x24uLL);
      LODWORD(v18) = DpEvalAcpiMethod(
                       *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
                       0xFFFFFFFFLL,
                       v4 + 288,
                       24LL,
                       v4 + 400,
                       36);
      if ( (int)v18 >= 0 )
      {
        *((_DWORD *)v8 + 261) = *(unsigned __int16 *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A0);
      }
      else
      {
        v148 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
        *(_QWORD *)(v148 + 32) = DpEvalAcpiMethod;
        *(_QWORD *)(v148 + 24) = DpiAddDevice;
        WdLogEvent5_WdEvent(v148);
        LODWORD(v18) = 0;
      }
      if ( *((_BYTE *)v8 + 1056) )
      {
        v149 = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
        v18 = (int)DpiSetDeviceUsageType(v149);
        ObfDereferenceObject(v149);
        if ( (int)v18 < 0 )
        {
          v150 = (_QWORD *)WdLogNewEntry5_WdError(v20);
          v150[4] = DpiSetDeviceUsageType;
          v150[3] = DpiAddDevice;
          v150[5] = v18;
          WdLogEvent5_WdError(v150);
          LODWORD(v18) = 0;
        }
      }
      goto LABEL_38;
    }
LABEL_134:
    LODWORD(v18) = -1073741637;
    v119 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v119[3] = DpiAddDevice;
    v119[4] = 0LL;
    v119[5] = -1073741637LL;
LABEL_136:
    WdLogEvent5_WdError(v119);
    goto LABEL_137;
  }
  v104 = WdLogNewEntry5_WdEvent(v56, v55, v57, v58);
  *(_QWORD *)(v104 + 24) = DpiAddDevice;
  *(_QWORD *)(v104 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  WdLogEvent5_WdEvent(v104);
  DpiQueryBusInterface(v49, (__int64)(v8 + 66));
  if ( !v8[73] )
  {
    LODWORD(v18) = -1073741127;
    v119 = (_QWORD *)WdLogNewEntry5_WdError(v105);
    v119[3] = DpiAddDevice;
    v119[4] = 0LL;
    v119[5] = -1073741127LL;
    goto LABEL_136;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x74727044u);
  v8[127] = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v18) = -1073741801;
    v134 = (_QWORD *)WdLogNewEntry5_WdLowResource(v107);
    v134[4] = ExAllocatePoolWithTag;
    v134[3] = DpiAddDevice;
    v134[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v134);
    goto LABEL_137;
  }
  ((void (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, int))v8[73])(v8[67], 0LL, PoolWithTag, 0LL, 256);
  v108 = (unsigned __int16 *)v8[127];
  *((_DWORD *)v8 + 256) = 1;
  *((_DWORD *)v8 + 257) = *v108;
  *((_DWORD *)v8 + 258) = v108[1];
  *((_DWORD *)v8 + 261) = *((unsigned __int8 *)v108 + 8);
  if ( (v108[7] & 0x7F) == 0 )
  {
    *((_DWORD *)v8 + 259) = v108[22];
    *((_DWORD *)v8 + 260) = v108[23];
  }
  if ( *((_DWORD *)v8 + 257) != 22611 || (v109 = 1, *((_DWORD *)v8 + 258) != 4097) )
    v109 = 0;
  *((_BYTE *)v8 + 1440) = v109;
  DpiQueryBusInterface(v49, (__int64)(v8 + 74));
  DpiQueryBusInterface((PDEVICE_OBJECT)v8[20], (__int64)(v8 + 80));
  AgpStatus = DpiGetAgpStatus(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  v113 = AgpStatus;
  if ( AgpStatus >= 0 && !v8[81] )
  {
    v135 = WdLogNewEntry5_WdWarning(v112, v111, v64, v65);
    *(_QWORD *)(v135 + 24) = DpiAddDevice;
    *(_QWORD *)(v135 + 32) = v113;
    WdLogEvent5_WdWarning(v135);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL);
  v63 = *(_QWORD *)(v20 + 1016);
  if ( (*(_BYTE *)(v63 + 4) & 1) != 0
    && (*(_WORD *)(v63 + 10) == 1 || *(_BYTE *)(v63 + 11) == 3 && !*(_BYTE *)(v63 + 10)) )
  {
    LODWORD(v18) = 0;
    if ( *((_BYTE *)v8 + 1056) )
      goto LABEL_113;
    if ( !byte_1C0046F48 )
    {
      v136 = WdLogNewEntry5_WdWarning(v20, v63, v64, v65);
      *(_QWORD *)(v136 + 24) = DpiAddDevice;
      *(_QWORD *)(v136 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdWarning(v136);
      *((_BYTE *)v8 + 1056) = 1;
      byte_1C0046F49 = 1;
    }
    if ( *((_BYTE *)v8 + 1056) )
    {
LABEL_113:
      if ( byte_1C0046C55 )
        *((_BYTE *)v8 + 1059) = 1;
      goto LABEL_38;
    }
  }
  else
  {
    LODWORD(v18) = -1073741823;
    if ( *((_BYTE *)v8 + 1056) )
    {
      v137 = WdLogNewEntry5_WdWarning(v20, v63, v64, v65);
      *(_QWORD *)(v137 + 24) = DpiAddDevice;
      *(_QWORD *)(v137 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdWarning(v137);
      goto LABEL_38;
    }
  }
LABEL_39:
  if ( !*((_BYTE *)v8 + 448) && *((_BYTE *)v8 + 1058) )
  {
    v152 = WdLogNewEntry5_WdEvent(v20, v63, v64, v65);
    *(_QWORD *)(v152 + 24) = DpiAddDevice;
    *(_QWORD *)(v152 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    WdLogEvent5_WdEvent(v152);
    LODWORD(v18) = -1071774664;
    goto LABEL_137;
  }
LABEL_40:
  v66 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) = 0;
  if ( (int)DpiReadPnpRegistryValue(v66, L"SoftGPUAdapter", v4 + 52, 4LL) < 0
    || (v67 = 1, !*(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34)) )
  {
    v67 = 0;
  }
  *((_BYTE *)v8 + 1436) = v67;
  if ( v67 && *((_BYTE *)v8 + 1437) )
  {
    LODWORD(v18) = -1073741811;
    goto LABEL_137;
  }
  KeInitializeSpinLock((PKSPIN_LOCK)v8 + 153);
  v68 = v8 + 136;
  v69 = 7LL;
  if ( (((_BYTE)v8 + 64) & 4) != 0 )
  {
    *v68 = 1;
    v69 = 6LL;
    v68 = (_DWORD *)v8 + 273;
  }
  memset64(v68, 0x100000001uLL, v69 >> 1);
  if ( (v69 & 1) != 0 )
    v68[v69 - 1] = 1;
  KeInitializeDpc(
    (PRKDPC)(v8 + 145),
    (PKDEFERRED_ROUTINE)DpiFdoDpcForIsr,
    *(PVOID *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  KeInitializeMutex((PRKMUTEX)(v8 + 158), 0);
  KeInitializeMutex((PRKMUTEX)v8 + 24, 0);
  v8[157] = (__int64)(v8 + 156);
  v8[156] = (__int64)(v8 + 156);
  v8[167] = (__int64)(v8 + 166);
  v8[166] = (__int64)(v8 + 166);
  v8[182] = (__int64)(v8 + 181);
  v8[181] = (__int64)(v8 + 181);
  if ( *((_DWORD *)v8 + 4) != 1953656900 )
  {
LABEL_51:
    KeWaitForSingleObject(DriverObjectExtension + 72, Executive, 0, 0, 0LL);
    v70 = 1;
    if ( v9 )
    {
      if ( *((_DWORD *)v9 + 118) )
      {
        LODWORD(v18) = DpiLdaLinkDeviceToChain(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
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
      v74 = ExInitializeResourceLite((PERESOURCE)v8[21]);
      v18 = v74;
      if ( v74 < 0 )
      {
        v154 = (_QWORD *)WdLogNewEntry5_WdError(v75);
        v154[4] = ExInitializeResourceLite;
        v154[3] = DpiAddDevice;
        v154[5] = v18;
        WdLogEvent5_WdError(v154);
LABEL_71:
        v10 = *(_BYTE *)v4;
        goto LABEL_72;
      }
      *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 1;
    }
    KeInitializeMutex((PRKMUTEX)(v8 + 22), 0);
    if ( !v9 )
      goto LABEL_65;
    if ( !v9[154] )
    {
      v76 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
      v9[154] = (__int64)v76;
      if ( !v76 )
        goto LABEL_221;
      v76[2] = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v9[154]);
    }
    if ( v9[155] )
      goto LABEL_65;
    v77 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x10uLL, 0x74727044u);
    v9[155] = (__int64)v77;
    if ( v77 )
    {
      v77[2] = 1;
      KeInitializeSpinLock((PKSPIN_LOCK)v9[155]);
LABEL_65:
      KeReleaseMutex((PRKMUTEX)(DriverObjectExtension + 72), 0);
      v8[16] = (__int64)DpiFdoDispatchPnp;
      v70 = 0;
      if ( v9 )
      {
        v9[17] = (__int64)DpiFdoDispatchPower;
        if ( *((_BYTE *)v9 + 1056) )
        {
          AcquireMiniportListMutex();
          if ( qword_1C0046E80 && qword_1C0046E80 != qword_1C0046E88 )
          {
            v155 = (_QWORD *)WdLogNewEntry5_WdError(v114);
            v155[3] = DpiAddDevice;
            v155[4] = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            v155[5] = (int)v18;
            WdLogEvent5_WdError(v155);
          }
          qword_1C0046E80 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
          _InterlockedExchange64(&qword_1C0046C88, 0LL);
          KeReleaseMutex((PRKMUTEX)Mutex, 0);
        }
      }
      v82 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14)
        && *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
        qword_1C0046E88 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      }
      *(_DWORD *)(v82 + 48) |= 4u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) |= 0x2000u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x4000u;
      *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 48LL) &= ~0x80u;
      v83 = WdLogNewEntry5_WdEvent(v79, v78, v80, v81);
      *(_QWORD *)(v83 + 24) = DpiAddDevice;
      *(_QWORD *)(v83 + 32) = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      WdLogEvent5_WdEvent(v83);
      goto LABEL_71;
    }
LABEL_221:
    LODWORD(v18) = -1073741801;
    v153 = (_QWORD *)WdLogNewEntry5_WdLowResource(v73);
    v153[3] = DpiAddDevice;
    v153[4] = ExAllocatePoolWithTag;
    v153[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v153);
    goto LABEL_228;
  }
  if ( *((_DWORD *)v8 + 5) != 2 )
  {
    if ( *((_DWORD *)v8 + 5) == 3 )
    {
      LODWORD(v18) = 0;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 64LL) + 312LL) = &DpiLdaHandleQueryDeviceRelations;
    }
    goto LABEL_51;
  }
  LODWORD(v18) = DpiFdoInitializeFdo(*(PVOID *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  if ( (int)v18 >= 0 )
  {
    *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A) = 1;
    goto LABEL_51;
  }
LABEL_137:
  v120 = *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( v120 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1A) == 1 )
      DpiFdoResetFdo(v120);
    if ( v9 )
    {
      v121 = (_DWORD *)v9[154];
      if ( v121 && v121[2] == 1 )
      {
        ExFreePoolWithTag(v121, 0);
        v9[154] = 0LL;
      }
      v122 = (_DWORD *)v9[155];
      if ( v122 && v122[2] == 1 )
      {
        ExFreePoolWithTag(v122, 0);
        v9[155] = 0LL;
      }
      if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) == 1 )
        DpiAcpiUnregisterAcpiCallbacks(*(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      v123 = (void (__fastcall *)(__int64))v9[69];
      if ( v123 )
      {
        v123(v9[67]);
        memset(v9 + 66, 0, 0x40uLL);
      }
      v124 = (void (__fastcall *)(__int64))v9[77];
      if ( v124 )
      {
        v124(v9[75]);
        memset(v9 + 74, 0, 0x30uLL);
      }
      v125 = (void (__fastcall *)(__int64))v9[83];
      if ( v125 )
      {
        v125(v9[81]);
        memset(v9 + 80, 0, 0xB8uLL);
      }
      v126 = (void (__fastcall *)(__int64))v9[106];
      if ( v126 )
      {
        v126(v9[104]);
        memset(v9 + 103, 0, 0x58uLL);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v9 + 30);
      RtlFreeUnicodeString((PUNICODE_STRING)v9 + 31);
      v127 = (void *)v9[127];
      if ( v127 )
      {
        ExFreePoolWithTag(v127, 0);
        v9[127] = 0LL;
      }
    }
    if ( v8 )
    {
      v128 = (struct _ERESOURCE *)v8[21];
      if ( v128 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) == 1 )
          ExDeleteResourceLite(v128);
        v129 = (_DWORD *)v8[21];
        if ( v129[26] == 1 && v129 )
        {
          ExFreePoolWithTag(v129, 0);
          v8[21] = 0LL;
        }
      }
      v130 = (struct _DEVICE_OBJECT *)v8[20];
      if ( v130 )
        IoDetachDevice(v130);
    }
    IoDeleteDevice(*(PDEVICE_OBJECT *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL;
  }
  if ( *(_BYTE *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x11) == 1 )
    DpiDxgkDdiRemoveDevice(DriverObjectExtension, *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40));
LABEL_73:
  memset((void *)(v4 + 336), 0, 0x40uLL);
  v84 = DxgkDiagCalcDuration1us((_QWORD *)(v4 + 104));
  DxgkDiagInitializeCodePointPacket(
    (_DWORD *)(v4 + 336),
    34,
    *(_DWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C),
    v84,
    v18);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)(v4 + 336), v85, v86, v87);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(Exclusive) = v18;
    Template_ppq(
      v88,
      &EventExitDpiAddDevice,
      v89,
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
      *(_QWORD *)(((unsigned __int64)&v160 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      Exclusive);
  }
  return (unsigned int)v18;
}
