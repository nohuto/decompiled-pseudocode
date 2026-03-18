/*
 * XREFs of xxxResolveDesktop @ 0x1C00DB260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C007D3C0 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C007EF40 (MapDesktop.c)
 *     _OpenDesktop @ 0x1C00DAFEC (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C00DBB08 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C00DBB80 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C00DBD88 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     xxxConnectService @ 0x1C015A9D0 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxResolveDesktop(void *a1, UNICODE_STRING *a2, HANDLE *a3, int a4, _QWORD *a5)
{
  int v6; // r14d
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  PVOID v9; // r12
  __int64 ProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  PVOID *v13; // r15
  HANDLE v14; // rax
  int v15; // r8d
  int v16; // r13d
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct _UNICODE_STRING *v22; // r14
  __int64 v23; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v25; // xmm1
  __int16 v26; // cx
  unsigned __int64 v27; // xmm0_8
  _WORD *i; // rdx
  PVOID v29; // rdx
  ULONG v30; // eax
  NTSTATUS v31; // eax
  PVOID v32; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v37; // [rsp+58h] [rbp-380h]
  int v38; // [rsp+5Ch] [rbp-37Ch]
  int v39; // [rsp+60h] [rbp-378h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-370h] BYREF
  int v41; // [rsp+78h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-358h] BYREF
  _QWORD *v43; // [rsp+88h] [rbp-350h]
  PVOID v44; // [rsp+90h] [rbp-348h] BYREF
  HANDLE *v45; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v46; // [rsp+A0h] [rbp-338h]
  PVOID v47; // [rsp+A8h] [rbp-330h] BYREF
  HANDLE SourceProcessHandle; // [rsp+B0h] [rbp-328h]
  void *TargetHandle; // [rsp+B8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-318h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-308h] BYREF
  HANDLE *v52; // [rsp+E0h] [rbp-2F8h]
  _DWORD v53[2]; // [rsp+E8h] [rbp-2F0h] BYREF
  PVOID v54[3]; // [rsp+F0h] [rbp-2E8h] BYREF
  int v55; // [rsp+108h] [rbp-2D0h] BYREF
  PVOID v56; // [rsp+110h] [rbp-2C8h]
  PVOID v57; // [rsp+118h] [rbp-2C0h]
  int v58; // [rsp+120h] [rbp-2B8h]
  int v59; // [rsp+124h] [rbp-2B4h]
  WCHAR SourceString[36]; // [rsp+138h] [rbp-2A0h] BYREF
  char v61; // [rsp+180h] [rbp-258h] BYREF

  v38 = a4;
  v45 = a3;
  SourceProcessHandle = a1;
  v44 = a1;
  v52 = a3;
  v43 = a5;
  v6 = 0;
  v39 = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v46 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v47, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v61;
    v9 = v47;
    ProcessWin32Process = PsGetProcessWin32Process(v47);
    v13 = (PVOID *)ProcessWin32Process;
    v54[1] = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 648) && *(_QWORD *)(ProcessWin32Process + 368) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11) )
        {
          Handle = v13[81];
          SourceHandle = v13[46];
        }
        else
        {
          v8 = ObOpenObjectByPointer(v13[80], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( v8 >= 0 )
          {
            v8 = ObOpenObjectByPointer(v13[39], 0, 0LL, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 1, &SourceHandle);
            if ( v8 < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( v8 < 0 )
          {
            v30 = RtlNtStatusToDosError(v8);
            UserSetLastError(v30);
          }
        }
        ObfDereferenceObject(v9);
        *v45 = Handle;
        v14 = SourceHandle;
        if ( SourceHandle )
          v8 = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v25 = *a2;
      Source = v25;
      v26 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v25) >> 1;
      v27 = _mm_srli_si128((__m128i)v25, 8).m128i_u64[0];
      for ( i = (_WORD *)v27; v26; --v26 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v15 = 0;
      v37 = 0;
      if ( v26 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * (v26 - 1);
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v27) >> 1);
        v16 = 0;
        v41 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        v8 = UserTestForWinStaAccess(&Destination);
        if ( v8 < 0 )
          goto LABEL_49;
        v15 = 0;
LABEL_17:
        v17 = v38;
        if ( v15 )
          v17 = 0;
        v38 = v17;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v16 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v39 = 0;
            GetProcessLuid(0LL, v53);
            LODWORD(Object) = v53[0];
            RtlStringCchPrintfW(SourceString, 0x1DuLL, L"Service-0x%x-%x$", v53[1], Object);
            RtlInitUnicodeString(&Source, SourceString);
          }
          else
          {
            v39 = 1;
            v6 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v19, v18) )
          {
            v31 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            v8 = v31;
            if ( v31 < 0 )
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
                v46 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v54[2] = (char *)BaseAddress + 48;
                if ( v8 >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v46;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v38 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && v8 >= 0 && !Handle && !v6 && v16 )
              {
                v8 = xxxConnectService(&Destination, &SourceHandle, v45);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( v8 < 0 )
                  return v8;
                goto LABEL_52;
              }
              v15 = v37;
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
                *v45 = Handle;
LABEL_52:
                v14 = SourceHandle;
LABEL_10:
                *v43 = v14;
                return v8;
              }
              if ( !v15 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
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
                    v22 = v46;
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
                    v22 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( v8 >= 0 )
                  {
                    SafeCopyUnicodeString(v22, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v23 = v37;
                    *((_DWORD *)BaseAddress + 6) = (v37 != 0 ? 0x80 : 0) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v22;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v38 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v23 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop(
                                  (struct _OBJECT_ATTRIBUTES *)BaseAddress,
                                  v23,
                                  0LL,
                                  0x2000000,
                                  &SourceHandle);
                    v8 = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v21, v20) )
              {
                v8 = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v44, 0, 0, 2u);
                if ( v8 < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v44;
              }
              if ( !SourceHandle || !v13 )
                goto LABEL_37;
              v8 = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v44, 0LL);
              if ( v8 >= 0 )
              {
                v55 = 1;
                v56 = v9;
                v32 = v44;
                v57 = v44;
                v58 = 0;
                v59 = 1;
                v8 = MapDesktop((__int64)&v55);
                if ( v8 < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v32);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v54, 0LL);
          if ( v8 >= 0 )
          {
            v29 = v54[0];
            if ( (((unsigned __int8)~*((_BYTE *)v54[0] + 32) >> 2) & 1) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v29 = v54[0];
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v29);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v25;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v15 = 1;
      v37 = 1;
    }
    v16 = 1;
    v41 = 1;
    goto LABEL_17;
  }
  return result;
}
