/*
 * XREFs of Controller_Create @ 0x1C004AA30
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004E2E0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002070 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0005BA0 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C0008ED0 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     RtlStringCchCopyA @ 0x1C001CACC (RtlStringCchCopyA.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004AF88 (Controller_PopulateTestConfiguration.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004B06C (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrievePciData @ 0x1C004BC98 (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004C284 (Controller_GetDeviceEnumerator.c)
 *     Controller_SetLogIdentifier @ 0x1C004DAB0 (Controller_SetLogIdentifier.c)
 *     Controller_RetrieveAcpiData @ 0x1C00518C0 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0051AE4 (Controller_RetrieveUrsData.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  signed __int64 v8; // r8
  __int64 v9; // rdx
  _BYTE *v10; // rax
  char v11; // cl
  int DeviceEnumerator; // eax
  int v13; // ebx
  int UrsData; // eax
  unsigned int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rdi
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rbx
  unsigned __int16 v22; // r9
  int AcpiData; // eax
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  void *v27; // [rsp+40h] [rbp-C0h]
  __int64 v28; // [rsp+48h] [rbp-B8h]
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v31[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v32[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v33[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v34[20]; // [rsp+F0h] [rbp-10h] BYREF
  char pszSrc[8]; // [rsp+190h] [rbp+90h] BYREF
  char v36[4]; // [rsp+198h] [rbp+98h] BYREF
  __int16 v37; // [rsp+19Ch] [rbp+9Ch]
  char v38; // [rsp+19Eh] [rbp+9Eh]
  __int64 v39; // [rsp+1A0h] [rbp+A0h]
  __int64 v40; // [rsp+1A8h] [rbp+A8h]
  __int64 v41; // [rsp+1B0h] [rbp+B0h]
  char v42; // [rsp+1B8h] [rbp+B8h]
  int v43; // [rsp+1BCh] [rbp+BCh]
  char pszDest[16]; // [rsp+1C0h] [rbp+C0h] BYREF

  v30 = -1LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v36 = 0;
  v37 = 0;
  v38 = 0;
  memset(v32, 0, sizeof(v32));
  v39 = 48LL;
  pszDest[0] = 0;
  v43 = 16;
  v41 = 0LL;
  v42 = 0;
  v40 = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  memset(v31, 0, sizeof(v31));
  v31[6] = off_1C0043340;
  LODWORD(v31[0]) = 56;
  v31[3] = 0x100000001LL;
  memset(v34, 0, sizeof(v34));
  v34[0] = -4294967136LL;
  v8 = "USBXHCI" - ((char *)&v34[14] + 3);
  LODWORD(v34[9]) = 0;
  BYTE4(v34[12]) = 0;
  v9 = 40LL;
  BYTE1(v34[13]) = 0;
  v10 = (char *)&v34[14] + 3;
  BYTE6(v34[13]) = 0;
  *(_QWORD *)((char *)&v34[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  WORD2(v34[10]) = 0;
  v34[11] = 0LL;
  LODWORD(v34[12]) = 0;
  while ( v9 != -2147483606 )
  {
    v11 = v10[v8];
    if ( !v11 )
      break;
    *v10++ = v11;
    if ( !--v9 )
    {
      --v10;
      break;
    }
  }
  *v10 = 0;
  v34[4] = UsbDevice_UcxEvtDeviceAdd;
  v34[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v34[7] = Crashdump_UcxEvtGetDumpData;
  v34[8] = Crashdump_UcxEvtFreeDumpData;
  v34[5] = Controller_UcxEvtReset;
  v34[6] = Controller_UcxEvtEnableForwardProgress;
  v34[1] = Controller_UcxEvtQueryUsbCapability;
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v8);
  if ( !DeviceEnumerator )
  {
    v13 = 1;
    UrsData = Controller_RetrievePciData(a1, a2, v32, &v30);
    v15 = UrsData;
    if ( UrsData < 0 )
    {
      v22 = 96;
LABEL_20:
      LODWORD(v24) = UrsData;
      WPP_RECORDER_SF_d(a2, 2u, 3u, v22, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, v24);
      return v15;
    }
    goto LABEL_8;
  }
  if ( DeviceEnumerator == 1 )
  {
    v13 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    v15 = AcpiData;
    if ( AcpiData < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x61u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids, AcpiData);
      return v15;
    }
  }
  else
  {
    UrsData = Controller_RetrieveUrsData(a1, a2, (int)&v29, (int)pszSrc, v32, (__int64)&v30);
    v15 = UrsData;
    if ( UrsData < 0 )
    {
      v22 = 98;
      goto LABEL_20;
    }
    v13 = v29;
    if ( v29 != 2 )
    {
LABEL_8:
      *(_QWORD *)((char *)&v34[9] + 4) = *(_QWORD *)&v32[0];
      WORD2(v34[10]) = WORD4(v32[0]);
      v34[11] = *(_QWORD *)((char *)v32 + 12);
      LODWORD(v34[12]) = DWORD1(v32[1]);
      LODWORD(v34[9]) = 1;
      goto LABEL_9;
    }
  }
  LODWORD(v34[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v34[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v34[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v34[13] + 6, 5uLL, &v36[2]);
LABEL_9:
  UrsData = ((__int64 (__fastcall *)(void *, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C0044728)(
              WPP_MAIN_CB.Dpc.SystemArgument2,
              a1,
              v34,
              v31,
              &v25);
  v15 = UrsData;
  if ( UrsData < 0 )
  {
    v22 = 99;
    goto LABEL_20;
  }
  v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v25,
          off_1C0043340);
  v17 = v16;
  *(_QWORD *)v16 = a1;
  *(_QWORD *)(v16 + 8) = v25;
  *(_QWORD *)(v16 + 224) = v30;
  *(_QWORD *)(v16 + 64) = a2;
  *(_DWORD *)(v16 + 144) = a3;
  *(_DWORD *)(v16 + 148) = v13;
  if ( v13 == 1 )
  {
    v18 = v32[1];
    *(_OWORD *)(v16 + 152) = v32[0];
    v19 = v32[2];
    *(_OWORD *)(v16 + 168) = v18;
    *(_OWORD *)(v16 + 184) = v19;
    *(_BYTE *)(v16 + 200) = 0;
    *(_BYTE *)(v16 + 205) = 0;
    *(_BYTE *)(v16 + 210) = 0;
  }
  else
  {
    *(_QWORD *)(v16 + 200) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v16 + 208) = *(_DWORD *)v36;
    *(_WORD *)(v16 + 212) = v37;
    *(_BYTE *)(v16 + 214) = v38;
    *(_WORD *)(v16 + 160) = 0;
    *(_QWORD *)(v16 + 164) = 0LL;
    *(_DWORD *)(v16 + 172) = 0;
    *(_DWORD *)(v16 + 152) = 0x7FFFFFFF;
    *(_DWORD *)(v16 + 156) = 0x7FFFFFFF;
  }
  Controller_SetLogIdentifier(v16);
  *a4 = v17;
  memset(v33, 0, sizeof(v33));
  LODWORD(v33[0]) = 40;
  LODWORD(v33[2]) = 5000;
  v33[1] = Controller_WdfEvtTimerFunction;
  BYTE4(v33[2]) = 1;
  LODWORD(v33[3]) = 1000;
  memset(v31, 0, sizeof(v31));
  v31[4] = v25;
  LODWORD(v31[0]) = 56;
  v31[3] = 0x100000001LL;
  UrsData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              v33,
              v31,
              v17 + 256);
  v15 = UrsData;
  if ( UrsData < 0 )
  {
    v22 = 100;
    goto LABEL_20;
  }
  memset(v31, 0, sizeof(v31));
  v31[4] = v25;
  LODWORD(v31[0]) = 56;
  v28 = 1LL;
  v27 = Controller_IdleTimeoutUpdateWorker;
  v31[3] = 0x100000001LL;
  v26 = 24LL;
  UrsData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v26,
              v31,
              v17 + 384);
  v15 = UrsData;
  if ( UrsData < 0 )
  {
    v22 = 101;
    goto LABEL_20;
  }
  memset(v31, 0, sizeof(v31));
  v31[6] = off_1C00430C0;
  v31[4] = v25;
  v28 = 1LL;
  v27 = Controller_TelemetryReportWorker;
  LODWORD(v31[0]) = 56;
  v31[3] = 0x100000001LL;
  v26 = 24LL;
  UrsData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v26,
              v31,
              v17 + 264);
  v15 = UrsData;
  if ( UrsData < 0 )
  {
    v22 = 102;
    goto LABEL_20;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v17 + 264),
          off_1C00430C0);
  KeInitializeMutex((PRKMUTEX)(v20 + 24), 0);
  *(_QWORD *)(v20 + 8) = v20;
  *(_QWORD *)v20 = v20;
  KeInitializeSpinLock((PKSPIN_LOCK)(v20 + 16));
  Controller_PopulateDeviceFlags(v17);
  if ( (*(_BYTE *)(v17 + 232) & 0x10) != 0 )
  {
    v15 = -1073741637;
    WPP_RECORDER_SF_(a2, 2u, 3u, 0x67u, (__int64)&WPP_30b8102214563469b125fcb27e814bad_Traceguids);
  }
  else
  {
    Controller_PopulateTestConfiguration(v17);
  }
  return v15;
}
