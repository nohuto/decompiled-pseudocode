/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x14029FFC8
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x14029DF4C (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     GetPhysicalScreenRect @ 0x14021550C (GetPhysicalScreenRect.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x14029FDAC (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *DeviceInfo; // rbx
  HANDLE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  __m128i v11; // xmm6
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // eax
  HANDLE v23; // rcx
  void **v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  struct tagRECT v29; // [rsp+38h] [rbp-99h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+48h] [rbp-89h] BYREF
  __int64 v31; // [rsp+58h] [rbp-79h] BYREF
  int v32; // [rsp+60h] [rbp-71h]
  int v33; // [rsp+64h] [rbp-6Dh]
  __int64 v34; // [rsp+B0h] [rbp-21h]
  int v35; // [rsp+B8h] [rbp-19h]
  __int64 v36; // [rsp+BCh] [rbp-15h]
  int v37; // [rsp+C4h] [rbp-Dh]
  unsigned int v38; // [rsp+C8h] [rbp-9h]
  int v39; // [rsp+CCh] [rbp-5h]
  int v40; // [rsp+D8h] [rbp+7h]

  DestinationString_8 = 0LL;
  DeviceInfo = 0LL;
  RtlInitUnicodeString(&DestinationString_8, L"\\??\\VIRTUAL_DIGITIZER");
  EtwTracePseudoDevCreationStart();
  v7 = (HANDLE *)(a3 + 88);
  UserSessionState = W32GetUserSessionState(v9, v8);
  if ( (int)CHidInput::GetKernelHandleToRimObj(*(CHidInput **)(UserSessionState + 16832), (void **)(a3 + 88)) >= 0 )
  {
    v11 = *(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v29);
    v29 = (struct tagRECT)*GetPhysicalScreenRect(&v29, v12);
    _UpdateReportDescriptor(
      &v29,
      3937 * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 8)) / 1000) / 0x64u,
      3937 * (_mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) / 1000) / 0x64u);
    memset_0(&v31, 0, 0x88uLL);
    v15 = W32GetUserSessionState(v14, v13);
    v32 = 498;
    v31 = v15 + 69940;
    v34 = 0LL;
    v33 = 1;
    v35 = a1;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v16);
    v19 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v18 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v19 = v18 & CurrentProcessWin32Process;
    }
    v36 = *(_QWORD *)(v19 + 864);
    v37 = *(_DWORD *)(v19 + 872);
    v20 = PsGetCurrentProcessWin32Process(v18);
    v21 = v20;
    if ( v20 )
      v21 = -(__int64)(*(_QWORD *)v20 != 0LL) & v20;
    v22 = *(_DWORD *)(v21 + 12);
    v23 = *v7;
    v39 = a2;
    v24 = (void **)(a3 + 96);
    v38 = v22 & 0x80000000;
    v40 = 0;
    if ( (int)RIMAddInjectionDeviceOfType(v23, &DestinationString_8, 2LL, &v31, 0, v24) < 0 )
    {
      ZwClose(*v7);
      *v7 = 0LL;
      *v24 = 0LL;
    }
    else
    {
      v27 = W32GetUserSessionState(v26, v25);
      DeviceInfo = CBaseInput::FindDeviceInfo(*(CBaseInput **)(v27 + 16832), *v24, 0);
    }
  }
  EtwTracePseudoDevCreationStop();
  return DeviceInfo;
}
