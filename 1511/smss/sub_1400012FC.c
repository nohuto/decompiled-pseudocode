/*
 * XREFs of sub_1400012FC @ 0x1400012FC
 * Callers:
 *     sub_140001040 @ 0x140001040 (sub_140001040.c)
 * Callees:
 *     sub_140001914 @ 0x140001914 (sub_140001914.c)
 *     sub_140002D0C @ 0x140002D0C (sub_140002D0C.c)
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_1400042C4 @ 0x1400042C4 (sub_1400042C4.c)
 *     sub_14000436C @ 0x14000436C (sub_14000436C.c)
 *     sub_1400046B4 @ 0x1400046B4 (sub_1400046B4.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 *     sub_140009D20 @ 0x140009D20 (sub_140009D20.c)
 *     sub_14000BA14 @ 0x14000BA14 (sub_14000BA14.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140012B6C @ 0x140012B6C (sub_140012B6C.c)
 *     sub_140012BFC @ 0x140012BFC (sub_140012BFC.c)
 */

__int64 __fastcall sub_1400012FC(int a1, PCWSTR *a2, __int64 a3, unsigned int a4)
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
  unsigned int v21; // eax
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
  unsigned int v32; // [rsp+44h] [rbp-124h]
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
  char v49[16]; // [rsp+100h] [rbp-68h] BYREF
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
  v6 = EtwEventRegister(&unk_140014AF0, 0LL, 0LL, &RegHandle);
  v7 = RegHandle;
  if ( v6 )
    v7 = 0LL;
  RegHandle = v7;
  qword_14001FC50 = 0LL;
  qword_14001FC40 = 0LL;
  qword_14001FC58 = 1LL;
  qword_14001FC20 = (__int64)&unk_14001AA10;
  v8 = &qword_14001FC40;
  off_14001F020 = &qword_14001FC40;
  v9 = &qword_14001FC20;
  do
  {
    v10 = *v9++;
    v43[0] = v10;
    v43[1] = 0LL;
    v8[4] = v10;
    EtwRegisterTraceGuidsW(sub_140012C90, v8, v10, 1LL, v43, 0LL, 0LL, v8 + 1);
    v8 = (__int64 *)*v8;
  }
  while ( v8 );
  byte_1400208E0 = (unsigned int)RtlGetCurrentServiceSessionId() == 0;
  v11 = v32;
  if ( a1 <= 1 )
  {
    byte_1400208E1 = 1;
    RtlInitUnicodeStringEx(&ImageFileName, *a2);
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
    v13 = dword_140020898;
    if ( v11 )
      v13 = v11;
    dword_140020898 = v13;
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
      dword_14001FCF8 = 305;
      dword_14001FCFC = v15;
      v27 = (__int64 (__fastcall *)(_QWORD))TpAllocPool;
    }
    else
    {
      LODWORD(v41) = dword_14001F028;
      v16 = TpSetPoolMinThreads(v40);
      v15 = v16;
      if ( v16 < 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Configuring thread pool minimum thread number");
        dword_14001FCF8 = 331;
        dword_14001FCFC = v15;
        v27 = TpSetPoolMinThreads;
      }
      else
      {
        dword_14001FC80 = 3;
        xmmword_14001FC88 = 0LL;
        qword_14001FC98 = 0LL;
        xmmword_14001FCA0 = 0LL;
        qword_14001FCB0 = 0LL;
        dword_14001FCB8 = 0;
        dword_14001FCBC = 1;
        dword_14001FCC0 = 72;
        *(_QWORD *)&xmmword_14001FC88 = v40;
        v17 = sub_140009D20();
        v15 = (unsigned int)v17;
        if ( v17 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"Session Manager Initialization");
          goto LABEL_30;
        }
        v18 = TpAllocAlpcCompletion(&v42, qword_14001FCE0, sub_1400038D0, &v39, &dword_14001FC80);
        v15 = (unsigned int)v18;
        if ( v18 < 0 )
        {
          RtlInitUnicodeString(&DestinationString, L"ALPC Complition object allocation");
          dword_14001FCF8 = 375;
          dword_14001FCFC = v15;
          v27 = (__int64 (__fastcall *)(_QWORD))TpAllocAlpcCompletion;
        }
        else
        {
          v19 = TpAllocWork(&v37, sub_14000BC10, 0LL, &dword_14001FC80);
          v15 = v19;
          if ( v19 >= 0 )
          {
            v20 = 0;
            v34 = 0;
            while ( v20 < dword_14001F028 )
            {
              TpPostWork(v37);
              if ( (unsigned int)dword_14001F028 > 1 && !v20 )
              {
                v45 = 1;
                v46 = v44;
                v47 = 2;
                do
                {
                  v21 = sub_140002D0C();
                  sub_1400037AC(v21, 2LL, 0LL, v44);
                  v22 = sub_140002D0C();
                  v23 = (void *)sub_1400042C4(v22, &v45);
                  sub_14000436C(v44);
                }
                while ( !v23 );
                v24 = sub_14000474C(v23);
                v25 = v24;
                if ( v24 < 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Failed to locate core GUI process.");
                  v51 = v25;
                  goto LABEL_41;
                }
                sub_1400046B4(v23);
              }
              v34 = ++v20;
            }
            sub_14000BA14(0LL, v49);
            v26 = NtWaitForMultipleObjects(1u, ProcessHandle, WaitAny, 0, 0LL);
            if ( v26 )
            {
              RtlInitUnicodeString(&DestinationString, L"Unexpected error code from NtWaitForMultipleObjects");
              v48[0] = v26;
              InformationProcess = 0;
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, L"Master Subsystem Process");
              InformationProcess = NtQueryInformationProcess(ProcessHandle[0], ProcessBasicInformation, v48, 0x30u, 0LL);
              v26 = v48[0];
            }
            if ( InformationProcess < 0 )
              v51 = -1073741823LL;
            else
              v51 = v26;
LABEL_41:
            sub_140012B6C(&Parameters, 1u, 4u);
            JUMPOUT(0x14000C5F2LL);
          }
          RtlInitUnicodeString(&DestinationString, L"Thread pool work object allocation.");
          dword_14001FCF8 = 407;
          dword_14001FCFC = v15;
          v27 = (__int64 (__fastcall *)(_QWORD))TpAllocWork;
        }
      }
    }
    qword_14001FD00 = (__int64)v27;
LABEL_30:
    v51 = v15;
    goto LABEL_41;
  }
  sub_140001914((unsigned int)a1, a2, v32);
  return 0LL;
}
