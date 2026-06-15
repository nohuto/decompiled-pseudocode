/*
 * XREFs of ?CreateStream@CAudioDeviceGraph@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140031560
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x140004C4C (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z @ 0x14000C5C0 (-SetLoopbackConstriction@CPipeInstance@@QEAAJW4EAudioConstriction@@@Z.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14000FE28 (-CreateStreamInstance@CPipeInstance@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUSYSTEM_AUDIO_S.c)
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140013FC0 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14003034C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z @ 0x1400311D8 (-CreateMode@CAudioDeviceGraph@@AEAAJPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAVCPipeInstance@@@Z.c)
 *     ?DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z @ 0x140031BA8 (-DestroyModePipe@CAudioDeviceGraph@@AEAAXPEAVCPipeInstance@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDeviceGraph::CreateStream(
        CAudioDeviceGraph *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  CAudioDeviceGraph *v7; // r15
  struct CPipeInstance *v8; // r12
  int StreamInstance; // ebx
  _WORD *v10; // rax
  bool v11; // zf
  struct CPipeInstance *v12; // r9
  CPipeInstance *v13; // r14
  signed int LastError; // eax
  _UNKNOWN **v15; // rcx
  HANDLE CurrentProcess; // rax
  signed int v17; // eax
  HANDLE v18; // rax
  char *v19; // r14
  HANDLE v20; // rax
  HANDLE v21; // rax
  ATL::CAtlException *v23; // rbx
  struct SYSTEM_AUDIO_STREAM *dwDesiredAccess; // [rsp+20h] [rbp-B8h]
  char *hTargetProcessHandle; // [rsp+40h] [rbp-98h]
  int hTargetProcessHandlea; // [rsp+40h] [rbp-98h]
  CPipeInstance *v27; // [rsp+48h] [rbp-90h] BYREF
  struct CPipeInstance *v28; // [rsp+50h] [rbp-88h] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-80h] BYREF
  HANDLE hSourceHandle; // [rsp+60h] [rbp-78h] BYREF
  char *v31; // [rsp+68h] [rbp-70h]
  HANDLE v32; // [rsp+70h] [rbp-68h] BYREF
  HANDLE hObject; // [rsp+78h] [rbp-60h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-58h] BYREF
  char v35; // [rsp+88h] [rbp-50h]
  __int64 v36; // [rsp+90h] [rbp-48h] BYREF
  ATL::CAtlException *v37[3]; // [rsp+98h] [rbp-40h] BYREF

  v37[1] = (ATL::CAtlException *)-2LL;
  v7 = this;
  v27 = 0LL;
  v8 = 0LL;
  v28 = 0LL;
  TargetHandle = 0LL;
  hSourceHandle = 0LL;
  hTargetProcessHandle = 0LL;
  hObject = 0LL;
  v32 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 232));
  if ( *((_DWORD *)v7 + 56) )
  {
    StreamInstance = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v7 + 15) + 64LL))(
                       *((_QWORD *)v7 + 15),
                       &v36);
    if ( StreamInstance < 0 )
      goto LABEL_75;
    if ( v36 > 0 )
    {
      StreamInstance = -2005139376;
      goto LABEL_75;
    }
    StreamInstance = ValidateStreamDescriptor(a2);
    if ( StreamInstance < 0 )
      goto LABEL_75;
    if ( a3 )
    {
      if ( *(_DWORD *)a3 <= 2u )
      {
        if ( *((_DWORD *)a3 + 2) < 0x12u )
          goto LABEL_11;
        v10 = (_WORD *)*((_QWORD *)a3 + 2);
        if ( !v10 )
          goto LABEL_13;
        if ( *v10 == 0xFFFE && *((_DWORD *)a3 + 2) < 0x28u )
        {
LABEL_11:
          StreamInstance = -2147024809;
          goto LABEL_75;
        }
        StreamInstance = 0;
      }
      else
      {
        StreamInstance = -2147024809;
      }
      if ( StreamInstance < 0 )
        goto LABEL_75;
    }
    if ( *((_DWORD *)v7 + 27) )
      v11 = *(_DWORD *)a2 == 1;
    else
      v11 = (*(_DWORD *)a2 & 0xFFFFFFFD) == 0;
    if ( !v11 )
      goto LABEL_11;
    if ( a4 && a5 )
    {
      if ( a3 )
      {
        StreamInstance = CAudioDeviceGraph::CreateMode(v7, a3, &v28);
        v8 = v28;
        if ( StreamInstance < 0 )
        {
LABEL_72:
          if ( v8 )
          {
            v11 = (*((_DWORD *)v8 + 56))-- == 1;
            if ( v11 )
              CAudioDeviceGraph::DestroyModePipe(v7, v8);
          }
          goto LABEL_75;
        }
      }
      if ( *(_DWORD *)a2 == 2 || (v12 = v8) == 0LL )
        v12 = (struct CPipeInstance *)*((_QWORD *)v7 + 16);
      StreamInstance = CPipeInstance::CreateStreamPipeInstance(
                         *((struct IUnknown **)v7 + 14),
                         *((struct IUnknown **)v7 + 41),
                         a2,
                         v12,
                         dwDesiredAccess,
                         &v27);
      v13 = v27;
      if ( StreamInstance < 0 )
        goto LABEL_70;
      StreamInstance = CPipeInstance::Initialize(v27);
      if ( StreamInstance < 0 )
        goto LABEL_70;
      StreamInstance = CPipeInstance::ConnectAPOs(v13, a4);
      if ( StreamInstance < 0 )
        goto LABEL_70;
      *((_QWORD *)a2 + 4) = v13;
      *((_DWORD *)a2 + 2) = 0;
      StreamInstance = CoImpersonateClient();
      if ( StreamInstance < 0 )
        goto LABEL_70;
      hTargetProcessHandle = (char *)OpenProcess(0x40u, 0, *((_DWORD *)a2 + 4));
      v31 = hTargetProcessHandle;
      if ( !hTargetProcessHandle )
      {
        LastError = GetLastError();
        if ( LastError == 5 )
        {
          v15 = (_UNKNOWN **)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
          {
            if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_D(
                *((_QWORD *)WPP_GLOBAL_Control + 2),
                0x2Du,
                (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
                5);
              v15 = (_UNKNOWN **)WPP_GLOBAL_Control;
            }
            if ( v15 != &WPP_GLOBAL_Control && (*((_DWORD *)v15 + 7) & 0x20000) != 0 && *((_BYTE *)v15 + 25) >= 4u )
              WPP_SF_((__int64)v15[2], 0x2Eu, (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids);
          }
          *((_DWORD *)a2 + 2) = 1;
        }
        else if ( LastError > 0 )
        {
          StreamInstance = (unsigned __int16)LastError | 0x80070000;
        }
        else
        {
          StreamInstance = LastError;
        }
      }
      CoRevertToSelf();
      if ( StreamInstance < 0
        || (StreamInstance = CPipeInstance::CreateStreamInstance(v13, a2, a5), StreamInstance < 0)
        || (StreamInstance = CPipeInstance::AddConnectionsAndActivateAPOs(v13), StreamInstance < 0)
        || (StreamInstance = CPipeInstance::SetLoopbackConstriction(v13, *((_DWORD *)v7 + 20)), StreamInstance < 0) )
      {
LABEL_70:
        if ( v13 )
          CPipeInstance::`scalar deleting destructor'((LPVOID *)v13);
        goto LABEL_72;
      }
      if ( *((_DWORD *)a2 + 2) )
      {
        *((_QWORD *)a5 + 3) = 0LL;
        *((_QWORD *)a5 + 4) = 0LL;
      }
      else
      {
        CurrentProcess = GetCurrentProcess();
        if ( !DuplicateHandle(CurrentProcess, *((HANDLE *)a5 + 3), hTargetProcessHandle, &TargetHandle, 0, 0, 2u)
          || (*((_QWORD *)a5 + 3) = TargetHandle,
              v18 = GetCurrentProcess(),
              !DuplicateHandle(v18, *((HANDLE *)a5 + 4), hTargetProcessHandle, &hSourceHandle, 0, 0, 2u)) )
        {
          v17 = GetLastError();
          StreamInstance = v17;
          if ( v17 > 0 )
            StreamInstance = (unsigned __int16)v17 | 0x80070000;
          goto LABEL_68;
        }
        *((_QWORD *)a5 + 4) = hSourceHandle;
      }
      ATL::CCritSecLock::CCritSecLock(
        (ATL::CCritSecLock *)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)((char *)v7 + 184));
      StreamInstance = 0;
      try
      {
        ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
          (struct ATL::CAtlPlex **)v7 + 17,
          &v27);
      }
      catch ( ATL::CAtlException *v37 )
      {
        v23 = v37[0];
        if ( *(_DWORD *)v37[0] == -1073741571 )
          _resetstkoflw();
        hTargetProcessHandlea = *(_DWORD *)v23;
        StreamInstance = *(_DWORD *)v23;
        if ( hTargetProcessHandlea < 0 )
        {
          if ( v35 )
            LeaveCriticalSection(lpCriticalSection);
          v7 = this;
          v13 = v27;
          v8 = v28;
          hTargetProcessHandle = v31;
          goto LABEL_68;
        }
        v7 = this;
        v13 = v27;
        v8 = v28;
        hTargetProcessHandle = v31;
      }
      if ( v35 )
        LeaveCriticalSection(lpCriticalSection);
      *((_QWORD *)a5 + 5) = v13;
LABEL_68:
      if ( StreamInstance >= 0 )
      {
        v19 = hTargetProcessHandle;
        goto LABEL_86;
      }
      goto LABEL_70;
    }
LABEL_13:
    StreamInstance = -2147467261;
    goto LABEL_75;
  }
  StreamInstance = -2005139437;
LABEL_75:
  if ( TargetHandle )
  {
    v20 = GetCurrentProcess();
    v19 = hTargetProcessHandle;
    if ( DuplicateHandle(hTargetProcessHandle, TargetHandle, v20, &hObject, 0, 0, 1u) )
    {
      if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        CloseHandle(hObject);
        hObject = 0LL;
      }
      *((_QWORD *)a5 + 3) = 0LL;
    }
  }
  else
  {
    v19 = hTargetProcessHandle;
  }
  if ( hSourceHandle )
  {
    v21 = GetCurrentProcess();
    if ( DuplicateHandle(v19, hSourceHandle, v21, &v32, 0, 0, 1u) )
    {
      if ( (char *)v32 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
      {
        CloseHandle(v32);
        v32 = 0LL;
      }
      *((_QWORD *)a5 + 4) = 0LL;
    }
  }
LABEL_86:
  if ( (unsigned __int64)(v19 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v19);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 232));
  if ( StreamInstance < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Fu,
      (__int64)&WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      StreamInstance);
  }
  return (unsigned int)StreamInstance;
}
