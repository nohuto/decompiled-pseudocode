/*
 * XREFs of xxxResolveDesktop @ 0x1402A52F0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _UserTestForWinStaAccess @ 0x14005C23C (_UserTestForWinStaAccess.c)
 *     _OpenDesktop @ 0x14018ACD8 (_OpenDesktop.c)
 *     CloseProtectedHandle @ 0x14018B5B0 (CloseProtectedHandle.c)
 *     xxxConnectService @ 0x14018B600 (xxxConnectService.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1401E8D50 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _OpenWindowStation @ 0x1401F7BD8 (_OpenWindowStation.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1402015F4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  BOOL v6; // r15d
  NTSTATUS result; // eax
  NTSTATUS ProcessLuid; // edi
  PVOID v9; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  HANDLE v14; // rax
  __int64 UserSessionState; // r10
  UNICODE_STRING v16; // xmm1
  __int16 v17; // cx
  PWSTR Buffer; // r8
  PWSTR i; // rdx
  int v20; // eax
  int v21; // r13d
  int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  HANDLE v26; // rcx
  PVOID v27; // rcx
  __int64 v28; // rcx
  HANDLE v29; // r14
  struct _UNICODE_STRING *v30; // r14
  __int64 v31; // rdx
  NTSTATUS v32; // eax
  PVOID *Object; // [rsp+20h] [rbp-3C8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-3A8h] BYREF
  HANDLE SourceHandle; // [rsp+48h] [rbp-3A0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-398h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-390h]
  int v38; // [rsp+5Ch] [rbp-38Ch]
  struct _UNICODE_STRING Destination; // [rsp+60h] [rbp-388h] BYREF
  int v40; // [rsp+70h] [rbp-378h]
  int v41; // [rsp+74h] [rbp-374h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-370h] BYREF
  HANDLE SourceProcessHandle; // [rsp+80h] [rbp-368h] BYREF
  HANDLE *v44; // [rsp+88h] [rbp-360h]
  _QWORD *v45; // [rsp+90h] [rbp-358h]
  PVOID v46; // [rsp+98h] [rbp-350h] BYREF
  void *v47; // [rsp+A0h] [rbp-348h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-340h]
  struct _UNICODE_STRING *v49; // [rsp+B0h] [rbp-338h]
  int v50; // [rsp+B8h] [rbp-330h]
  __int64 v51; // [rsp+C0h] [rbp-328h] BYREF
  void *TargetHandle; // [rsp+C8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+D0h] [rbp-318h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-308h] BYREF
  PVOID v55[4]; // [rsp+F0h] [rbp-2F8h] BYREF
  _QWORD v56[5]; // [rsp+110h] [rbp-2D8h] BYREF
  int v57; // [rsp+138h] [rbp-2B0h]
  int v58; // [rsp+13Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+150h] [rbp-298h] BYREF
  char v60; // [rsp+190h] [rbp-258h] BYREF

  v38 = a4;
  v44 = a3;
  SourceProcessHandle = a1;
  v55[3] = a1;
  v55[2] = a3;
  v45 = a5;
  v6 = 0;
  v40 = 0;
  DestinationString = 0LL;
  Source = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v49 = 0LL;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  v55[0] = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, v55, 0LL);
  ProcessLuid = result;
  v9 = v55[0];
  v55[1] = v55[0];
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    SourceHandle = 0LL;
    Handle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v60;
    ProcessWin32Process = PsGetProcessWin32Process(v55[0]);
    v13 = ProcessWin32Process;
    v47 = (void *)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      v12 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL);
      v13 = v12 & ProcessWin32Process;
      v47 = (void *)(v12 & ProcessWin32Process);
    }
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(v13 + 664) && *(_QWORD *)(v13 + 384) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12) )
        {
          SourceHandle = *(HANDLE *)(v13 + 664);
          Handle = *(HANDLE *)(v13 + 384);
        }
        else
        {
          ProcessLuid = ObOpenObjectByPointer(
                          *(PVOID *)(v13 + 656),
                          0,
                          0LL,
                          0x2000000u,
                          ExWindowStationObjectType,
                          1,
                          &SourceHandle);
          if ( ProcessLuid >= 0 )
          {
            ProcessLuid = ObOpenObjectByPointer(
                            *(PVOID *)(v13 + 344),
                            0,
                            0LL,
                            0x2000000u,
                            (POBJECT_TYPE)ExDesktopObjectType,
                            1,
                            &Handle);
            if ( ProcessLuid < 0 )
            {
              ObCloseHandle(SourceHandle, 1);
              SourceHandle = 0LL;
            }
          }
          if ( ProcessLuid < 0 )
            SetLastNtError(ProcessLuid);
        }
        ObfDereferenceObject(v9);
        *v44 = SourceHandle;
        v14 = Handle;
        if ( Handle )
          ProcessLuid = 0;
        goto LABEL_102;
      }
    }
    UserSessionState = W32GetUserSessionState(v12, v11);
    v48 = UserSessionState;
    if ( a2 && a2->Length )
    {
      v16 = *a2;
      Source = v16;
      v17 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v16) >> 1;
      Buffer = a2->Buffer;
      for ( i = Buffer; v17; --v17 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v20 = 0;
      v37 = 0;
      if ( !v17 )
      {
        DestinationString = v16;
        v21 = 1;
        v41 = 1;
        goto LABEL_29;
      }
      DestinationString.Buffer = i + 1;
      DestinationString.MaximumLength = 2 * v17 - 2;
      DestinationString.Length = DestinationString.MaximumLength;
      Source.Length = 2 * (i - Buffer);
      v21 = 0;
      v41 = 0;
      RtlAppendUnicodeToString(&Destination, (PCWSTR)(UserSessionState + 63600));
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &Source);
      ProcessLuid = UserTestForWinStaAccess(&Destination, 1);
      if ( ProcessLuid < 0 )
        goto LABEL_98;
      v20 = 0;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v20 = 1;
      v37 = 1;
      v21 = 1;
      v41 = 1;
    }
    UserSessionState = v48;
LABEL_29:
    v22 = 0;
    if ( !v20 )
      v22 = v38;
    v38 = v22;
    v50 = v22;
    if ( !*(_QWORD *)(UserSessionState + 63512) )
      goto LABEL_69;
    if ( !v21 )
      goto LABEL_46;
    RtlInitUnicodeString(&Source, L"WinSta0");
    RtlAppendUnicodeToString(&Destination, (PCWSTR)(v48 + 63600));
    RtlAppendUnicodeToString(&Destination, L"\\");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    if ( *(_DWORD *)(W32GetUserSessionState(v24, v23) + 68604) )
    {
      v6 = UserTestForWinStaAccess(&Destination, 1) >= 0;
    }
    else if ( UserTestForWinStaAccess(&Destination, v38) >= 0 )
    {
      v6 = 1;
      v40 = 1;
      goto LABEL_38;
    }
    v40 = v6;
    if ( !v6 )
    {
      v51 = 0LL;
      ProcessLuid = GetProcessLuid(0LL, &v51);
      if ( ProcessLuid < 0 )
        goto LABEL_98;
      LODWORD(Object) = v51;
      RtlStringCchPrintfW(SourceString, 29LL, L"Service-0x%x-%x$", HIDWORD(v51), Object);
      RtlInitUnicodeString(&Source, SourceString);
    }
LABEL_38:
    if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &SourceHandle)
      && v9 != (PVOID)PsGetCurrentProcess(v25) )
    {
      ProcessLuid = ZwDuplicateObject(
                      SourceProcessHandle,
                      SourceHandle,
                      (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                      &TargetHandle,
                      0,
                      0,
                      2u);
      if ( ProcessLuid < 0 )
      {
        SourceHandle = 0LL;
LABEL_53:
        if ( ProcessLuid >= 0 && !SourceHandle )
        {
          Destination.Length = 0;
          RtlAppendUnicodeToString(&Destination, (PCWSTR)(v48 + 63600));
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          RegionSize = 586LL;
          ProcessLuid = ZwAllocateVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          &BaseAddress,
                          0LL,
                          &RegionSize,
                          0x1000u,
                          4u);
          v49 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
          v46 = (char *)BaseAddress + 48;
          if ( ProcessLuid >= 0 )
          {
            SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
            *(_DWORD *)BaseAddress = 48;
            *((_QWORD *)BaseAddress + 1) = 0LL;
            *((_DWORD *)BaseAddress + 6) = 64;
            *((_QWORD *)BaseAddress + 2) = v49;
            *((_QWORD *)BaseAddress + 4) = 0LL;
            *((_QWORD *)BaseAddress + 5) = 0LL;
            if ( v38 )
              *((_DWORD *)BaseAddress + 6) |= 2u;
            SourceHandle = (HANDLE)OpenWindowStation((__int64)BaseAddress, 0x2000000u);
          }
        }
        if ( !*(_DWORD *)(W32GetUserSessionState(v26, i) + 68604) && ProcessLuid >= 0 && !SourceHandle && !v6 && v21 )
        {
          ProcessLuid = xxxConnectService((__int64)&Destination, &Handle, v44);
          if ( BaseAddress )
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          ObfDereferenceObject(v9);
          if ( ProcessLuid < 0 )
            return ProcessLuid;
          goto LABEL_101;
        }
        v20 = v37;
LABEL_69:
        if ( !SourceHandle )
        {
          ProcessLuid = -1073741823;
          goto LABEL_98;
        }
        if ( Handle )
        {
LABEL_98:
          if ( BaseAddress )
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
          ObfDereferenceObject(v9);
          *v44 = SourceHandle;
LABEL_101:
          v14 = Handle;
LABEL_102:
          *v45 = v14;
          return ProcessLuid;
        }
        if ( !v20 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &Handle) )
        {
LABEL_83:
          if ( ProcessLuid < 0 )
          {
LABEL_95:
            if ( !Handle )
            {
              ObCloseHandle(SourceHandle, 1);
              SourceHandle = 0LL;
            }
            goto LABEL_98;
          }
          if ( !Handle )
          {
            RtlCopyUnicodeString(&Destination, &DestinationString);
            if ( BaseAddress )
            {
              v30 = v49;
            }
            else
            {
              RegionSize = 586LL;
              ProcessLuid = ZwAllocateVirtualMemory(
                              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                              &BaseAddress,
                              0LL,
                              &RegionSize,
                              0x1000u,
                              4u);
              v30 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
            }
            if ( ProcessLuid >= 0 )
            {
              SafeCopyUnicodeString(v30, &Destination);
              *(_DWORD *)BaseAddress = 48;
              *((_QWORD *)BaseAddress + 1) = SourceHandle;
              v31 = v37;
              *((_DWORD *)BaseAddress + 6) = (v37 << 7) | 0x40;
              *((_QWORD *)BaseAddress + 2) = v30;
              *((_QWORD *)BaseAddress + 4) = 0LL;
              *((_QWORD *)BaseAddress + 5) = 0LL;
              if ( v38 )
                *((_DWORD *)BaseAddress + 6) |= 2u;
              if ( (_DWORD)v31 )
                v32 = xxxCreateDesktopEx((__int64)BaseAddress, 0, 0x2000000, 0, &Handle, 0);
              else
                v32 = OpenDesktop((struct _OBJECT_ATTRIBUTES *)BaseAddress, v31, 0LL, 0x2000000, &Handle);
              ProcessLuid = v32;
            }
            goto LABEL_95;
          }
          goto LABEL_98;
        }
        if ( v9 != (PVOID)PsGetCurrentProcess(v28) )
        {
          v47 = 0LL;
          ProcessLuid = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v47, 0, 0, 2u);
          if ( ProcessLuid < 0 )
          {
LABEL_82:
            CloseProtectedHandle(Handle, 1);
            Handle = 0LL;
            goto LABEL_83;
          }
          Handle = v47;
        }
        if ( !Handle || !v13 )
          goto LABEL_83;
        SourceProcessHandle = 0LL;
        ProcessLuid = ObReferenceObjectByHandle(
                        Handle,
                        0,
                        (POBJECT_TYPE)ExDesktopObjectType,
                        0,
                        &SourceProcessHandle,
                        0LL);
        if ( ProcessLuid >= 0 )
        {
          v56[0] = 0LL;
          v56[1] = 0LL;
          v56[2] = 1LL;
          v56[3] = v9;
          v29 = SourceProcessHandle;
          v56[4] = SourceProcessHandle;
          v57 = 0;
          v58 = 1;
          ProcessLuid = MapDesktop((__int64)v56);
          if ( ProcessLuid < 0 )
          {
            CloseProtectedHandle(Handle, 1);
            Handle = 0LL;
          }
          ObfDereferenceObject(v29);
          goto LABEL_83;
        }
        goto LABEL_82;
      }
      SourceHandle = TargetHandle;
    }
LABEL_46:
    v26 = SourceHandle;
    if ( SourceHandle )
    {
      v46 = 0LL;
      ProcessLuid = ObReferenceObjectByHandle(SourceHandle, 0, ExWindowStationObjectType, 0, &v46, 0LL);
      if ( ProcessLuid >= 0 )
      {
        v27 = v46;
        if ( (((*((_DWORD *)v46 + 8) >> 2) & 1) == 0) != v6 )
        {
          if ( TargetHandle )
          {
            CloseProtectedHandle(SourceHandle, 1);
            v27 = v46;
          }
          SourceHandle = 0LL;
        }
        ObfDereferenceObject(v27);
      }
    }
    goto LABEL_53;
  }
  return result;
}
