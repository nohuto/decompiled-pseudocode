/*
 * XREFs of Controller_Create @ 0x1C004BE90
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C00487D0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0004570 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006B30 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C0009824 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C0010810 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0011000 (memset.c)
 *     RtlStringCchCopyA @ 0x1C001C668 (RtlStringCchCopyA.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004AB90 (Controller_GetDeviceEnumerator.c)
 *     Controller_RetrievePciData @ 0x1C004AF44 (Controller_RetrievePciData.c)
 *     Controller_SetLogIdentifier @ 0x1C004B64C (Controller_SetLogIdentifier.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004BC9C (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004C3E8 (Controller_PopulateTestConfiguration.c)
 *     Controller_RetrieveAcpiData @ 0x1C004F7C0 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C004F9E4 (Controller_RetrieveUrsData.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  __int64 v8; // rdx
  _BYTE *v9; // rax
  char v10; // cl
  int DeviceEnumerator; // eax
  int v12; // ebx
  int PciData; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int16 v23; // r9
  int AcpiData; // eax
  __int64 v25; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  void *v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  int v30; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v32[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v33[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v34[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v35[20]; // [rsp+F0h] [rbp-10h] BYREF
  char pszSrc[8]; // [rsp+190h] [rbp+90h] BYREF
  char v37[4]; // [rsp+198h] [rbp+98h] BYREF
  __int16 v38; // [rsp+19Ch] [rbp+9Ch]
  char v39; // [rsp+19Eh] [rbp+9Eh]
  __int64 v40; // [rsp+1A0h] [rbp+A0h]
  __int64 v41; // [rsp+1A8h] [rbp+A8h]
  __int64 v42; // [rsp+1B0h] [rbp+B0h]
  char v43; // [rsp+1B8h] [rbp+B8h]
  int v44; // [rsp+1BCh] [rbp+BCh]
  char pszDest[16]; // [rsp+1C0h] [rbp+C0h] BYREF

  v31 = -1LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v37 = 0;
  v38 = 0;
  v39 = 0;
  memset(v33, 0, sizeof(v33));
  v40 = 48LL;
  pszDest[0] = 0;
  v44 = 16;
  v42 = 0LL;
  v43 = 0;
  v41 = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  memset(v32, 0, sizeof(v32));
  v32[6] = off_1C00410E8;
  LODWORD(v32[0]) = 56;
  v32[3] = 0x100000001LL;
  memset(v35, 0, sizeof(v35));
  v35[0] = -4294967136LL;
  LODWORD(v35[9]) = 0;
  BYTE4(v35[12]) = 0;
  v8 = 40LL;
  BYTE1(v35[13]) = 0;
  v9 = (char *)&v35[14] + 3;
  BYTE6(v35[13]) = 0;
  *(_QWORD *)((char *)&v35[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  WORD2(v35[10]) = 0;
  v35[11] = 0LL;
  LODWORD(v35[12]) = 0;
  while ( v8 != -2147483606 )
  {
    v10 = v9["USBXHCI" - ((char *)&v35[14] + 3)];
    if ( !v10 )
      break;
    *v9++ = v10;
    if ( !--v8 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  v35[4] = UsbDevice_UcxEvtDeviceAdd;
  v35[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v35[7] = Crashdump_UcxEvtGetDumpData;
  v35[8] = Crashdump_UcxEvtFreeDumpData;
  v35[5] = Controller_UcxEvtReset;
  v35[6] = Controller_UcxEvtEnableForwardProgress;
  v35[1] = Controller_UcxEvtQueryUsbCapability;
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2);
  if ( !DeviceEnumerator )
  {
    v12 = 1;
    PciData = Controller_RetrievePciData(a1, a2, (__int64)v33, (__int64)&v31);
    v14 = PciData;
    if ( PciData < 0 )
    {
      v23 = 96;
LABEL_20:
      LODWORD(v25) = PciData;
      WPP_RECORDER_SF_d(a2, 2u, 3u, v23, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, v25);
      return v14;
    }
    goto LABEL_8;
  }
  if ( DeviceEnumerator == 1 )
  {
    v12 = 2;
    AcpiData = Controller_RetrieveAcpiData(a1, a2, pszSrc);
    v14 = AcpiData;
    if ( AcpiData < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x61u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids, AcpiData);
      return v14;
    }
  }
  else
  {
    PciData = Controller_RetrieveUrsData(a1, a2, (int)&v30, (int)pszSrc, v33, (__int64)&v31);
    v14 = PciData;
    if ( PciData < 0 )
    {
      v23 = 98;
      goto LABEL_20;
    }
    v12 = v30;
    if ( v30 != 2 )
    {
LABEL_8:
      *(_QWORD *)((char *)&v35[9] + 4) = *(_QWORD *)&v33[0];
      WORD2(v35[10]) = WORD4(v33[0]);
      v35[11] = *(_QWORD *)((char *)v33 + 12);
      LODWORD(v35[12]) = DWORD1(v33[1]);
      LODWORD(v35[9]) = 1;
      goto LABEL_9;
    }
  }
  LODWORD(v35[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v35[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v35[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v35[13] + 6, 5uLL, &v37[2]);
LABEL_9:
  PciData = ((__int64 (__fastcall *)(void *, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C0042748)(
              WPP_MAIN_CB.Dpc.DpcData,
              a1,
              v35,
              v32,
              &v26);
  v14 = PciData;
  if ( PciData < 0 )
  {
    v23 = 99;
    goto LABEL_20;
  }
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v26,
          off_1C00410E8);
  v16 = v15;
  *(_QWORD *)v15 = a1;
  *(_QWORD *)(v15 + 8) = v26;
  *(_QWORD *)(v15 + 224) = v31;
  *(_QWORD *)(v15 + 64) = a2;
  *(_DWORD *)(v15 + 144) = a3;
  *(_DWORD *)(v15 + 148) = v12;
  if ( v12 == 1 )
  {
    v17 = v33[1];
    *(_OWORD *)(v15 + 152) = v33[0];
    v18 = v33[2];
    *(_OWORD *)(v15 + 168) = v17;
    *(_OWORD *)(v15 + 184) = v18;
    *(_BYTE *)(v15 + 200) = 0;
    *(_BYTE *)(v15 + 205) = 0;
    *(_BYTE *)(v15 + 210) = 0;
  }
  else
  {
    *(_QWORD *)(v15 + 200) = *(_QWORD *)pszSrc;
    *(_DWORD *)(v15 + 208) = *(_DWORD *)v37;
    *(_WORD *)(v15 + 212) = v38;
    *(_BYTE *)(v15 + 214) = v39;
    *(_WORD *)(v15 + 160) = 0;
    *(_QWORD *)(v15 + 164) = 0LL;
    *(_DWORD *)(v15 + 172) = 0;
    *(_DWORD *)(v15 + 152) = 0x7FFFFFFF;
    *(_DWORD *)(v15 + 156) = 0x7FFFFFFF;
  }
  Controller_SetLogIdentifier(v15);
  *a4 = v16;
  memset(v34, 0, sizeof(v34));
  LODWORD(v34[0]) = 40;
  LODWORD(v34[2]) = 5000;
  v34[1] = Controller_WdfEvtTimerFunction;
  BYTE4(v34[2]) = 1;
  LODWORD(v34[3]) = 1000;
  memset(v32, 0, sizeof(v32));
  v32[4] = v26;
  LODWORD(v32[0]) = 56;
  v32[3] = 0x100000001LL;
  PciData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
              WdfDriverGlobals,
              v34,
              v32,
              v16 + 248);
  v14 = PciData;
  if ( PciData < 0 )
  {
    v23 = 100;
    goto LABEL_20;
  }
  memset(v32, 0, sizeof(v32));
  v32[4] = v26;
  LODWORD(v32[0]) = 56;
  v29 = 1LL;
  v28 = Controller_IdleTimeoutUpdateWorker;
  v32[3] = 0x100000001LL;
  v27 = 24LL;
  PciData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v27,
              v32,
              v16 + 376);
  v14 = PciData;
  if ( PciData < 0 )
  {
    v23 = 101;
    goto LABEL_20;
  }
  memset(v32, 0, sizeof(v32));
  v32[6] = off_1C00412C8;
  v32[4] = v26;
  v29 = 1LL;
  v28 = Controller_TelemetryReportWorker;
  LODWORD(v32[0]) = 56;
  v32[3] = 0x100000001LL;
  v27 = 24LL;
  PciData = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v27,
              v32,
              v16 + 256);
  v14 = PciData;
  if ( PciData < 0 )
  {
    v23 = 102;
    goto LABEL_20;
  }
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          *(_QWORD *)(v16 + 256),
          off_1C00412C8);
  KeInitializeMutex((PRKMUTEX)(v19 + 24), 0);
  *(_QWORD *)(v19 + 8) = v19;
  *(_QWORD *)v19 = v19;
  KeInitializeSpinLock((PKSPIN_LOCK)(v19 + 16));
  Controller_PopulateDeviceFlags(v16, v20, v21);
  if ( (*(_BYTE *)(v16 + 232) & 0x10) != 0 )
  {
    v14 = -1073741637;
    WPP_RECORDER_SF_(a2, 2u, 3u, 0x67u, (__int64)&WPP_a6e1c58309a3d9966a339d413262311d_Traceguids);
  }
  else
  {
    Controller_PopulateTestConfiguration(v16);
  }
  return v14;
}
