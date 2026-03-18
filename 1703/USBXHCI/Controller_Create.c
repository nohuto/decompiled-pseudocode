/*
 * XREFs of Controller_Create @ 0x1C004CAB0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C004FFB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002180 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0006370 (WPP_RECORDER_SF_d.c)
 *     RtlStringCchPrintfA @ 0x1C0008B60 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1C00105E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010E80 (memset.c)
 *     RtlStringCchCopyA @ 0x1C0018DE8 (RtlStringCchCopyA.c)
 *     Controller_PopulateTestConfiguration @ 0x1C004D00C (Controller_PopulateTestConfiguration.c)
 *     Controller_SetLogIdentifier @ 0x1C004DA68 (Controller_SetLogIdentifier.c)
 *     Controller_RetrievePciData @ 0x1C004DC6C (Controller_RetrievePciData.c)
 *     Controller_GetDeviceEnumerator @ 0x1C004E1D8 (Controller_GetDeviceEnumerator.c)
 *     Controller_PopulateDeviceFlags @ 0x1C004E590 (Controller_PopulateDeviceFlags.c)
 *     Controller_RetrieveAcpiData @ 0x1C0053560 (Controller_RetrieveAcpiData.c)
 *     Controller_RetrieveUrsData @ 0x1C0053788 (Controller_RetrieveUrsData.c)
 */

__int64 __fastcall Controller_Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  signed __int64 v8; // r8
  __int64 v9; // rdx
  _BYTE *v10; // rax
  char v11; // cl
  int DeviceEnumerator; // eax
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // esi
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rbx
  int AcpiData; // eax
  int UrsData; // eax
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int64 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  void *v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v35[7]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v36[3]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v37[5]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v38[26]; // [rsp+F0h] [rbp-10h] BYREF
  char pszSrc[8]; // [rsp+1C0h] [rbp+C0h] BYREF
  char v40[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  __int16 v41; // [rsp+1CCh] [rbp+CCh]
  char v42; // [rsp+1CEh] [rbp+CEh]
  __int64 v43; // [rsp+1D0h] [rbp+D0h]
  __int64 v44; // [rsp+1D8h] [rbp+D8h]
  __int64 v45; // [rsp+1E0h] [rbp+E0h]
  char v46; // [rsp+1E8h] [rbp+E8h]
  int v47; // [rsp+1ECh] [rbp+ECh]
  char pszDest[16]; // [rsp+1F0h] [rbp+F0h] BYREF

  v34 = -1LL;
  *(_QWORD *)pszSrc = 0LL;
  *(_DWORD *)v40 = 0;
  v41 = 0;
  v42 = 0;
  memset(v36, 0, sizeof(v36));
  v43 = 48LL;
  pszDest[0] = 0;
  v47 = 16;
  v45 = 0LL;
  v46 = 0;
  v44 = 512LL;
  RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d RUNDOWN", a3);
  memset(v35, 0, sizeof(v35));
  v35[6] = off_1C0045340;
  LODWORD(v35[0]) = 56;
  v35[3] = 0x100000001LL;
  memset(v38, 0, sizeof(v38));
  v38[0] = -4294967088LL;
  v8 = "USBXHCI" - ((char *)&v38[14] + 3);
  LODWORD(v38[9]) = 0;
  BYTE4(v38[12]) = 0;
  v9 = 40LL;
  BYTE1(v38[13]) = 0;
  v10 = (char *)&v38[14] + 3;
  BYTE6(v38[13]) = 0;
  *(_QWORD *)((char *)&v38[9] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  WORD2(v38[10]) = 0;
  v38[11] = 0LL;
  LODWORD(v38[12]) = 0;
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
  v38[4] = UsbDevice_UcxEvtDeviceAdd;
  v38[3] = Controller_UcxEvtGetCurrentFrameNumber;
  v38[7] = Crashdump_UcxEvtGetDumpData;
  v38[8] = Crashdump_UcxEvtFreeDumpData;
  v38[5] = Controller_UcxEvtReset;
  v38[6] = Controller_UcxEvtEnableForwardProgress;
  v38[1] = Controller_UcxEvtQueryUsbCapability;
  DeviceEnumerator = Controller_GetDeviceEnumerator(a1, a2, v8);
  if ( !DeviceEnumerator )
  {
    v13 = 1;
    v14 = Controller_RetrievePciData(a1, a2, v36, &v34);
    v15 = v14;
    if ( v14 < 0 )
    {
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x60u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v14);
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
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x61u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, AcpiData);
      return v15;
    }
  }
  else
  {
    UrsData = Controller_RetrieveUrsData(a1, a2, (int)&v33, (int)pszSrc, v36, (__int64)&v34);
    v15 = UrsData;
    if ( UrsData < 0 )
    {
      LODWORD(v28) = UrsData;
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x62u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v28);
      return v15;
    }
    v13 = v33;
    if ( v33 != 2 )
    {
LABEL_8:
      *(_QWORD *)((char *)&v38[9] + 4) = *(_QWORD *)&v36[0];
      WORD2(v38[10]) = WORD4(v36[0]);
      v38[11] = *(_QWORD *)((char *)v36 + 12);
      LODWORD(v38[12]) = DWORD1(v36[1]);
      LODWORD(v38[9]) = 1;
      goto LABEL_9;
    }
  }
  LODWORD(v38[9]) = 2;
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v38[12] + 4, 5uLL, pszSrc);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v38[13] + 1, 5uLL, &pszSrc[5]);
  RtlStringCchCopyA((NTSTRSAFE_PSTR)&v38[13] + 6, 5uLL, &v40[2]);
LABEL_9:
  v16 = ((__int64 (__fastcall *)(void *, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C0046728)(
          WPP_MAIN_CB.Dpc.SystemArgument2,
          a1,
          v38,
          v35,
          &v29);
  v15 = v16;
  if ( v16 < 0 )
  {
    LODWORD(v28) = v16;
    WPP_RECORDER_SF_d(a2, 2u, 3u, 0x63u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v28);
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            v29,
            off_1C0045340);
    v18 = v17;
    *(_QWORD *)v17 = a1;
    *(_QWORD *)(v17 + 8) = v29;
    *(_QWORD *)(v17 + 224) = v34;
    *(_QWORD *)(v17 + 64) = a2;
    *(_DWORD *)(v17 + 144) = a3;
    *(_DWORD *)(v17 + 148) = v13;
    if ( v13 == 1 )
    {
      v19 = v36[1];
      *(_OWORD *)(v17 + 152) = v36[0];
      v20 = v36[2];
      *(_OWORD *)(v17 + 168) = v19;
      *(_OWORD *)(v17 + 184) = v20;
      *(_BYTE *)(v17 + 200) = 0;
      *(_BYTE *)(v17 + 205) = 0;
      *(_BYTE *)(v17 + 210) = 0;
    }
    else
    {
      *(_QWORD *)(v17 + 200) = *(_QWORD *)pszSrc;
      *(_DWORD *)(v17 + 208) = *(_DWORD *)v40;
      *(_WORD *)(v17 + 212) = v41;
      *(_BYTE *)(v17 + 214) = v42;
      *(_WORD *)(v17 + 160) = 0;
      *(_QWORD *)(v17 + 164) = 0LL;
      *(_DWORD *)(v17 + 172) = 0;
      *(_DWORD *)(v17 + 152) = 0x7FFFFFFF;
      *(_DWORD *)(v17 + 156) = 0x7FFFFFFF;
    }
    Controller_SetLogIdentifier(v17);
    *a4 = v18;
    memset(v37, 0, sizeof(v37));
    LODWORD(v37[0]) = 40;
    LODWORD(v37[2]) = 5000;
    v37[1] = Controller_WdfEvtTimerFunction;
    BYTE4(v37[2]) = 1;
    LODWORD(v37[3]) = 1000;
    memset(v35, 0, sizeof(v35));
    v35[4] = v29;
    LODWORD(v35[0]) = 56;
    v35[3] = 0x100000001LL;
    v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64))(WdfFunctions_01015 + 2544))(
            WdfDriverGlobals,
            v37,
            v35,
            v18 + 256);
    v15 = v21;
    if ( v21 < 0 )
    {
      LODWORD(v28) = v21;
      WPP_RECORDER_SF_d(a2, 2u, 3u, 0x64u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v28);
    }
    else
    {
      memset(v35, 0, sizeof(v35));
      v35[4] = v29;
      LODWORD(v35[0]) = 56;
      v32 = 1LL;
      v31 = Controller_IdleTimeoutUpdateWorker;
      v35[3] = 0x100000001LL;
      v30 = 24LL;
      v22 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
              WdfDriverGlobals,
              &v30,
              v35,
              v18 + 384);
      v15 = v22;
      if ( v22 < 0 )
      {
        LODWORD(v28) = v22;
        WPP_RECORDER_SF_d(a2, 2u, 3u, 0x65u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v28);
      }
      else
      {
        memset(v35, 0, sizeof(v35));
        v35[6] = off_1C00450C0;
        v35[4] = v29;
        v32 = 1LL;
        v31 = Controller_TelemetryReportWorker;
        LODWORD(v35[0]) = 56;
        v35[3] = 0x100000001LL;
        v30 = 24LL;
        v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64))(WdfFunctions_01015 + 3032))(
                WdfDriverGlobals,
                &v30,
                v35,
                v18 + 264);
        v15 = v23;
        if ( v23 < 0 )
        {
          LODWORD(v28) = v23;
          WPP_RECORDER_SF_d(a2, 2u, 3u, 0x66u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids, v28);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  *(_QWORD *)(v18 + 264),
                  off_1C00450C0);
          KeInitializeMutex((PRKMUTEX)(v24 + 24), 0);
          *(_QWORD *)(v24 + 8) = v24;
          *(_QWORD *)v24 = v24;
          KeInitializeSpinLock((PKSPIN_LOCK)(v24 + 16));
          Controller_PopulateDeviceFlags(v18);
          if ( (*(_BYTE *)(v18 + 232) & 0x10) != 0 )
          {
            v15 = -1073741637;
            WPP_RECORDER_SF_(a2, 2u, 3u, 0x67u, (__int64)&WPP_701346eebafd3a8cb9c6116049697060_Traceguids);
          }
          else
          {
            Controller_PopulateTestConfiguration(v18);
          }
        }
      }
    }
  }
  return v15;
}
