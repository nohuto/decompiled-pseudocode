/*
 * XREFs of wmain @ 0x140004718
 * Callers:
 *     NtProcessStartupW_AfterSecurityCookieInitialized @ 0x140004420 (NtProcessStartupW_AfterSecurityCookieInitialized.c)
 * Callees:
 *     SmpInit @ 0x140001F90 (SmpInit.c)
 *     SmpGetCoreProcessIds @ 0x140002EB4 (SmpGetCoreProcessIds.c)
 *     SmscMain @ 0x140002F70 (SmscMain.c)
 *     SmpGetFirstSessionId @ 0x140004D28 (SmpGetFirstSessionId.c)
 *     SmpIsHostSmss @ 0x140004D48 (SmpIsHostSmss.c)
 *     SmpWaitForSubSysStartup @ 0x140005B9C (SmpWaitForSubSysStartup.c)
 *     SmpSearchKnownSubSysDatabase @ 0x140006AB4 (SmpSearchKnownSubSysDatabase.c)
 *     SmpUnlockKnownSubSysList @ 0x140006B5C (SmpUnlockKnownSubSysList.c)
 *     SmpDereferenceKnownSubSys @ 0x140007B10 (SmpDereferenceKnownSubSys.c)
 *     SmpWaitForSingleSubSys @ 0x140007BA8 (SmpWaitForSingleSubSys.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140013128 (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x1400131B8 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall wmain(signed int a1, PCWSTR *a2, __int64 a3, int a4)
{
  int v6; // eax
  REGHANDLE v7; // rcx
  __int64 *v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // r8
  int v11; // esi
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  unsigned int FirstSessionId; // eax
  unsigned int v22; // eax
  void *v23; // rsi
  int v24; // eax
  __int64 v25; // r14
  NTSTATUS v26; // edi
  __int64 (__fastcall *v27)(_QWORD); // rcx
  NTSTATUS InformationProcess; // eax
  NTSTATUS v29; // eax
  __int64 v30; // rdi
  int v31; // [rsp+40h] [rbp-128h] BYREF
  int v32; // [rsp+44h] [rbp-124h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-120h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-110h]
  int v35; // [rsp+5Ch] [rbp-10Ch] BYREF
  int v36; // [rsp+60h] [rbp-108h] BYREF
  __int64 v37; // [rsp+68h] [rbp-100h] BYREF
  _DWORD ProcessInformation[2]; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v39; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v40; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+88h] [rbp-E0h]
  __int64 v42; // [rsp+90h] [rbp-D8h] BYREF
  _QWORD v43[2]; // [rsp+98h] [rbp-D0h] BYREF
  _BYTE v44[16]; // [rsp+A8h] [rbp-C0h] BYREF
  int v45; // [rsp+B8h] [rbp-B0h] BYREF
  _BYTE *v46; // [rsp+C0h] [rbp-A8h]
  int v47; // [rsp+C8h] [rbp-A0h]
  NTSTATUS v48[12]; // [rsp+D0h] [rbp-98h] BYREF
  volatile signed __int32 *v49; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 Parameters; // [rsp+110h] [rbp-58h] BYREF
  __int64 v51; // [rsp+118h] [rbp-50h]
  __int64 v52; // [rsp+120h] [rbp-48h]
  __int64 v53; // [rsp+128h] [rbp-40h]

  v32 = a4;
  ProcessInformation[0] = 2;
  ProcessInformation[1] = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie|ProcessUserModeIOPL, ProcessInformation, 8u);
  v36 = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCycleTime|ProcessUserModeIOPL, &v36, 4u);
  RtlSetHeapInformation(0LL, HeapEnableTerminationOnCorruption, 0LL, 0LL);
  v6 = EtwEventRegister(&SmssEventProvider, 0LL, 0LL, &SmpTraceHandle);
  v7 = SmpTraceHandle;
  if ( v6 )
    v7 = 0LL;
  SmpTraceHandle = v7;
  qword_1400234B0 = 0LL;
  WPP_MAIN_CB = 0LL;
  qword_1400234B8 = 1LL;
  WPP_REGISTRATION_GUIDS = (__int64)&WPP_ThisDir_CTLGUID_Smss;
  v8 = &WPP_MAIN_CB;
  WPP_GLOBAL_Control = &WPP_MAIN_CB;
  v9 = &WPP_REGISTRATION_GUIDS;
  do
  {
    v10 = *v9++;
    v43[0] = v10;
    v43[1] = 0LL;
    v8[4] = v10;
    EtwRegisterTraceGuidsW(WppControlCallback, v8, v10, 1LL, v43, 0LL, 0LL, v8 + 1);
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  SmpHostSmss = SmpIsHostSmss();
  v11 = v32;
  if ( a1 <= 1 )
  {
    SmpPrimarySmss = 1;
    RtlInitUnicodeStringEx(&SmpHelperCmd, *a2);
    RtlSetThreadIsCritical(1u, 0LL, 0);
    v35 = 11;
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBasePriority, &v35, 4u);
    Parameters = (unsigned __int64)&DestinationString;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    if ( (MEMORY[0x7FFE02F0] & 0x20) != 0 )
    {
      v31 = 3;
      v29 = NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityUpdateMode, &v31, 4u);
      v30 = (unsigned int)v29;
      if ( v29 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Session Manager failed to set affinity update mode");
        v51 = v30;
        goto LABEL_41;
      }
    }
    v13 = SmpDebug;
    if ( v11 )
      v13 = v11;
    SmpDebug = v13;
    v42 = 0LL;
    v37 = 0LL;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
    RtlInitializeSRWLock(&v39);
    v14 = TpAllocPool(&v40, 0LL);
    v15 = (unsigned int)v14;
    v32 = v14;
    if ( v14 < 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread pool allocation");
      SmpInitProgressByLine = 395;
      SmpInitReturnStatus = v15;
      v27 = (__int64 (__fastcall *)(_QWORD))TpAllocPool;
    }
    else
    {
      LODWORD(v41) = SmpNumberInitialSessions;
      v16 = TpSetPoolMinThreads(v40);
      v15 = v16;
      if ( v16 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        SmpInitProgressByLine = 421;
        SmpInitReturnStatus = v15;
        v27 = TpSetPoolMinThreads;
      }
      else
      {
        SmpCallbackEnviron = 3;
        xmmword_1400234E8 = 0LL;
        qword_1400234F8 = 0LL;
        xmmword_140023500 = 0LL;
        qword_140023510 = 0LL;
        dword_140023518 = 0;
        dword_14002351C = 1;
        dword_140023520 = 72;
        *(_QWORD *)&xmmword_1400234E8 = v40;
        v17 = SmpInit();
        v15 = (unsigned int)v17;
        if ( v17 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_30;
        }
        v18 = TpAllocAlpcCompletion(&v42, SmpApiConnectionPort, SmpApiCallback, &v39, &SmpCallbackEnviron);
        v15 = (unsigned int)v18;
        if ( v18 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Complition object allocation");
          SmpInitProgressByLine = 465;
          SmpInitReturnStatus = v15;
          v27 = (__int64 (__fastcall *)(_QWORD))TpAllocAlpcCompletion;
        }
        else
        {
          v19 = TpAllocWork(&v37, SmpCreateInitialSession, 0LL, &SmpCallbackEnviron);
          v15 = v19;
          if ( v19 >= 0 )
          {
            v20 = 0;
            v34 = 0;
            while ( v20 < SmpNumberInitialSessions )
            {
              TpPostWork(v37);
              if ( (unsigned int)SmpNumberInitialSessions > 1 && !v20 )
              {
                v45 = 1;
                v46 = v44;
                v47 = 2;
                do
                {
                  FirstSessionId = SmpGetFirstSessionId();
                  SmpWaitForSubSysStartup(FirstSessionId, 2LL, 0LL, v44);
                  v22 = SmpGetFirstSessionId();
                  v23 = (void *)SmpSearchKnownSubSysDatabase(v22, &v45);
                  SmpUnlockKnownSubSysList(v44);
                }
                while ( !v23 );
                v24 = SmpWaitForSingleSubSys(v23);
                v25 = v24;
                if ( v24 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v51 = v25;
                  goto LABEL_41;
                }
                SmpDereferenceKnownSubSys(v23);
              }
              v34 = ++v20;
            }
            SmpGetCoreProcessIds(0, &v49);
            v26 = NtWaitForMultipleObjects(1u, SmpCoreSubsysProcess, WaitAny, 0, 0LL);
            if ( v26 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v48[0] = v26;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(
                                     SmpCoreSubsysProcess[0],
                                     ProcessBasicInformation,
                                     v48,
                                     0x30u,
                                     0LL);
              v26 = v48[0];
            }
            if ( InformationProcess < 0 )
              v51 = -1073741823LL;
            else
              v51 = v26;
LABEL_41:
            SmpTerminate(&Parameters, 1u, 4u);
            JUMPOUT(0x14000D8FELL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          SmpInitProgressByLine = 497;
          SmpInitReturnStatus = v15;
          v27 = (__int64 (__fastcall *)(_QWORD))TpAllocWork;
        }
      }
    }
    SmpInitLastCall = (__int64)v27;
LABEL_30:
    v51 = v15;
    goto LABEL_41;
  }
  SmscMain(a1, (__int64)a2, v32);
  return 0LL;
}
