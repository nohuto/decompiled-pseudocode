/*
 * XREFs of xxxResolveDesktop @ 0x1C00D93C0
 * Callers:
 *     <none>
 * Callees:
 *     MapDesktop @ 0x1C009A3E0 (MapDesktop.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C00D9150 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00D9C68 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00D9CE0 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00D9EE8 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     CloseProtectedHandle @ 0x1C00DCB44 (CloseProtectedHandle.c)
 *     xxxConnectService @ 0x1C00EB590 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r14d
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  PVOID v9; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rcx
  PVOID *v12; // r15
  HANDLE v13; // rax
  int v14; // r8d
  int v15; // r13d
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct _UNICODE_STRING *v19; // r14
  __int64 v20; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v22; // xmm1
  __int16 v23; // cx
  unsigned __int64 v24; // xmm0_8
  _WORD *i; // rdx
  PVOID v26; // rdx
  ULONG v27; // eax
  NTSTATUS v28; // eax
  PVOID v29; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v34; // [rsp+58h] [rbp-380h]
  int v35; // [rsp+5Ch] [rbp-37Ch]
  int v36; // [rsp+60h] [rbp-378h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-370h] BYREF
  int v38; // [rsp+78h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-358h] BYREF
  HANDLE *v40; // [rsp+88h] [rbp-350h]
  _QWORD *v41; // [rsp+90h] [rbp-348h]
  PVOID v42; // [rsp+98h] [rbp-340h] BYREF
  PUNICODE_STRING v43; // [rsp+A0h] [rbp-338h]
  void *TargetHandle; // [rsp+A8h] [rbp-330h] BYREF
  HANDLE SourceProcessHandle; // [rsp+B0h] [rbp-328h]
  PVOID v46; // [rsp+B8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-318h] BYREF
  _DWORD v48[2]; // [rsp+D0h] [rbp-308h] BYREF
  PVOID v49[3]; // [rsp+D8h] [rbp-300h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-2E8h] BYREF
  char *v51; // [rsp+100h] [rbp-2D8h]
  __int64 v52; // [rsp+108h] [rbp-2D0h]
  int v53; // [rsp+110h] [rbp-2C8h] BYREF
  PVOID v54; // [rsp+118h] [rbp-2C0h]
  PVOID v55; // [rsp+120h] [rbp-2B8h]
  int v56; // [rsp+128h] [rbp-2B0h]
  int v57; // [rsp+12Ch] [rbp-2ACh]
  WCHAR SourceString[32]; // [rsp+140h] [rbp-298h] BYREF
  char v59; // [rsp+180h] [rbp-258h] BYREF

  v35 = a4;
  v40 = a3;
  SourceProcessHandle = a1;
  v42 = a1;
  v49[1] = a3;
  v41 = a5;
  v6 = 0;
  v36 = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v43 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v46, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v59;
    v9 = v46;
    ProcessWin32Process = PsGetProcessWin32Process(v46);
    v12 = (PVOID *)ProcessWin32Process;
    v52 = ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 640) && *(_QWORD *)(ProcessWin32Process + 360) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v11) )
        {
          Handle = v12[80];
          SourceHandle = v12[45];
        }
        else
        {
          v8 = ObOpenObjectByPointer(v12[79], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( v8 >= 0 )
          {
            v8 = ObOpenObjectByPointer(v12[38], 0, 0LL, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 1, &SourceHandle);
            if ( v8 < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( v8 < 0 )
          {
            v27 = RtlNtStatusToDosError(v8);
            UserSetLastError(v27);
          }
        }
        ObfDereferenceObject(v9);
        *v40 = Handle;
        v13 = SourceHandle;
        if ( SourceHandle )
          v8 = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v22 = *a2;
      Source = v22;
      v23 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v22) >> 1;
      v24 = _mm_srli_si128((__m128i)v22, 8).m128i_u64[0];
      for ( i = (_WORD *)v24; v23; --v23 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v14 = 0;
      v34 = 0;
      if ( v23 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * (v23 - 1);
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v24) >> 1);
        v15 = 0;
        v38 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        v8 = UserTestForWinStaAccess(&Destination);
        if ( v8 < 0 )
          goto LABEL_49;
        v14 = 0;
LABEL_17:
        v16 = v35;
        if ( v14 )
          v16 = 0;
        v35 = v16;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v15 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v36 = 0;
            GetProcessLuid(0LL, v48);
            LODWORD(Object) = v48[0];
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", v48[1], Object);
            RtlInitUnicodeString(&Source, SourceString);
          }
          else
          {
            v36 = 1;
            v6 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v17) )
          {
            v28 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            v8 = v28;
            if ( v28 < 0 )
            {
              Handle = 0LL;
LABEL_25:
              if ( v8 >= 0 && !Handle )
              {
                Destination.Length = 0;
                RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
                RtlAppendUnicodeToString(&Destination, L"\\");
                RtlAppendUnicodeStringToString(&Destination, &Source);
                RegionSize = 586LL;
                v8 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
                v43 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v51 = (char *)BaseAddress + 48;
                if ( v8 >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v43;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v35 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && v8 >= 0 && !Handle && !v6 && v15 )
              {
                v8 = xxxConnectService(&Destination, &SourceHandle, v40);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( v8 < 0 )
                  return v8;
                goto LABEL_52;
              }
              v14 = v34;
LABEL_33:
              if ( !Handle )
              {
                v8 = -1073741823;
                goto LABEL_49;
              }
              if ( SourceHandle )
              {
LABEL_49:
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                *v40 = Handle;
LABEL_52:
                v13 = SourceHandle;
LABEL_10:
                *v41 = v13;
                return v8;
              }
              if ( !v14 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
              {
LABEL_37:
                if ( v8 < 0 )
                {
LABEL_47:
                  if ( !SourceHandle )
                  {
                    ObCloseHandle(Handle, 1);
                    Handle = 0LL;
                  }
                  goto LABEL_49;
                }
                if ( !SourceHandle )
                {
                  RtlCopyUnicodeString(&Destination, &DestinationString);
                  if ( BaseAddress )
                  {
                    v19 = v43;
                  }
                  else
                  {
                    RegionSize = 586LL;
                    v8 = ZwAllocateVirtualMemory(
                           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                           &BaseAddress,
                           0LL,
                           &RegionSize,
                           0x1000u,
                           4u);
                    v19 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( v8 >= 0 )
                  {
                    SafeCopyUnicodeString(v19, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v20 = v34;
                    *((_DWORD *)BaseAddress + 6) = (v34 != 0 ? 0x80 : 0) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v19;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v35 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v20 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop(
                                  (struct _OBJECT_ATTRIBUTES *)BaseAddress,
                                  v20,
                                  0LL,
                                  0x2000000,
                                  &SourceHandle);
                    v8 = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v18) )
              {
                v8 = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v42, 0, 0, 2u);
                if ( v8 < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v42;
              }
              if ( !SourceHandle || !v12 )
                goto LABEL_37;
              v8 = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v42, 0LL);
              if ( v8 >= 0 )
              {
                v53 = 1;
                v54 = v9;
                v29 = v42;
                v55 = v42;
                v56 = 0;
                v57 = 1;
                v8 = MapDesktop((__int64)&v53);
                if ( v8 < 0 )
                {
                  CloseProtectedHandle(SourceHandle);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v29);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v49, 0LL);
          if ( v8 >= 0 )
          {
            v26 = v49[0];
            if ( (((unsigned __int8)~*((_BYTE *)v49[0] + 32) >> 2) & 1) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle);
                v26 = v49[0];
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v26);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v22;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v14 = 1;
      v34 = 1;
    }
    v15 = 1;
    v38 = 1;
    goto LABEL_17;
  }
  return result;
}
