/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01D631C
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01D4958 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     FindRimDevBackedDeviceInfo @ 0x1C00E16D4 (FindRimDevBackedDeviceInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C015A4C0 (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01D5FB0 (ComputeVirtualDesktopPhysicalSize.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3, __int64 a4)
{
  struct DEVICEINFO *RimDevBackedDeviceInfo; // rsi
  __int64 v9; // rcx
  HANDLE *v10; // r14
  __int64 v11; // rcx
  int v12; // edi
  int v13; // ebx
  struct tagRECT v14; // xmm6
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // rbx
  unsigned int v19; // ecx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[18]; // [rsp+68h] [rbp-A0h] BYREF

  RimDevBackedDeviceInfo = 0LL;
  v26 = 0;
  v25 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  EnterDeviceInfoListCrit_(v9);
  EtwTracePseudoDevCreationStart();
  v10 = (HANDLE *)(a4 + 80);
  v24 = a4 + 80;
  if ( (int)RawInputManagerObjectCreateKernelHandle(aDeviceTemplate[153], 3LL, 0LL) >= 0 )
  {
    ComputeVirtualDesktopPhysicalSize(&v26, &v25, a3);
    v12 = v25;
    v13 = v26;
    v27 = *(struct tagRECT *)(gpDispInfo + 104LL);
    v14 = v27;
    _UpdateReportDescriptor(&v27, 3937 * v26 / 0x64u, 3937 * v25 / 0x64u);
    memset(v29, 0, 0x88uLL);
    LODWORD(v29[1]) = 498;
    v29[0] = &unk_1C0325440;
    v29[10] = 0LL;
    *(struct tagRECT *)((char *)&v29[11] + 4) = v14;
    LODWORD(v29[11]) = a1;
    HIDWORD(v29[13]) = v13;
    LODWORD(v29[14]) = v12;
    *(_QWORD *)((char *)&v29[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v16, v15) + 824);
    v18 = (__int64 *)(a4 + 88);
    LOBYTE(v24) = 0;
    v19 = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v29[14] + 4), v17) + 12) & 0x80000000;
    LODWORD(v29[16]) = a2;
    HIDWORD(v29[15]) = v19;
    if ( (int)RIMAddInjectionDeviceOfType(*v10, &DestinationString, 2LL, v29, v24, a4 + 88) < 0 )
    {
      ZwClose(*v10);
      *v10 = 0LL;
      *v18 = 0LL;
    }
    else
    {
      RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(*v18, 0, v20);
    }
  }
  EtwTracePseudoDevCreationStop(v11);
  LeaveDeviceInfoListCrit_(v22, v21);
  return RimDevBackedDeviceInfo;
}
