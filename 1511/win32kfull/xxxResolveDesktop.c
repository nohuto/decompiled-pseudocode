/*
 * XREFs of xxxResolveDesktop @ 0x1C01207C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00CEC44 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C00CF780 (MapDesktop.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C011FF84 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _OpenDesktop @ 0x1C0120630 (_OpenDesktop.c)
 *     ?SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z @ 0x1C0121068 (-SafeCopyUnicodeString@@YAXPEAU_UNICODE_STRING@@QEAU1@@Z.c)
 *     _UserTestForWinStaAccess @ 0x1C01210E0 (_UserTestForWinStaAccess.c)
 *     _OpenWindowStation @ 0x1C01212E8 (_OpenWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C0121340 (xxxCreateDesktopEx.c)
 *     xxxConnectService @ 0x1C0150634 (xxxConnectService.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v13; // r8
  __int64 v14; // r9
  PVOID *v15; // r15
  HANDLE v16; // rax
  int v17; // r8d
  int v18; // r13d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  struct _UNICODE_STRING *v28; // r14
  __int64 v29; // rdx
  NTSTATUS Desktop; // eax
  UNICODE_STRING v31; // xmm1
  __int16 v32; // cx
  unsigned __int64 v33; // xmm0_8
  _WORD *i; // rdx
  PVOID v35; // rdx
  ULONG v36; // eax
  NTSTATUS v37; // eax
  PVOID v38; // r14
  PVOID *Object; // [rsp+20h] [rbp-3B8h]
  PVOID BaseAddress; // [rsp+40h] [rbp-398h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-390h] BYREF
  HANDLE SourceHandle; // [rsp+50h] [rbp-388h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-380h]
  int v44; // [rsp+5Ch] [rbp-37Ch]
  int v45; // [rsp+60h] [rbp-378h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-370h] BYREF
  int v47; // [rsp+78h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+80h] [rbp-358h] BYREF
  _QWORD *v49; // [rsp+88h] [rbp-350h]
  PVOID v50; // [rsp+90h] [rbp-348h] BYREF
  HANDLE *v51; // [rsp+98h] [rbp-340h]
  PUNICODE_STRING v52; // [rsp+A0h] [rbp-338h]
  PVOID v53; // [rsp+A8h] [rbp-330h] BYREF
  HANDLE SourceProcessHandle; // [rsp+B0h] [rbp-328h]
  void *TargetHandle; // [rsp+B8h] [rbp-320h] BYREF
  UNICODE_STRING Source; // [rsp+C0h] [rbp-318h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-308h] BYREF
  HANDLE *v58; // [rsp+E0h] [rbp-2F8h]
  _DWORD v59[2]; // [rsp+E8h] [rbp-2F0h] BYREF
  PVOID v60[3]; // [rsp+F0h] [rbp-2E8h] BYREF
  int v61; // [rsp+108h] [rbp-2D0h] BYREF
  PVOID v62; // [rsp+110h] [rbp-2C8h]
  PVOID v63; // [rsp+118h] [rbp-2C0h]
  int v64; // [rsp+120h] [rbp-2B8h]
  int v65; // [rsp+124h] [rbp-2B4h]
  WCHAR SourceString[36]; // [rsp+138h] [rbp-2A0h] BYREF
  char v67; // [rsp+180h] [rbp-258h] BYREF

  v44 = a4;
  v51 = a3;
  SourceProcessHandle = a1;
  v50 = a1;
  v58 = a3;
  v49 = a5;
  v6 = 0;
  v45 = 0;
  Destination.Length = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  v52 = 0LL;
  BaseAddress = 0LL;
  *a3 = 0LL;
  *a5 = 0LL;
  result = ObReferenceObjectByHandle(a1, 0x400u, (POBJECT_TYPE)PsProcessType, 1, &v53, 0LL);
  v8 = result;
  if ( result >= 0 )
  {
    TargetHandle = 0LL;
    Handle = 0LL;
    SourceHandle = 0LL;
    *(_DWORD *)&Destination.Length = 34209792;
    Destination.Buffer = (PWSTR)&v67;
    v9 = v53;
    ProcessWin32Process = PsGetProcessWin32Process(v53);
    v15 = (PVOID *)ProcessWin32Process;
    v60[1] = (PVOID)ProcessWin32Process;
    if ( ProcessWin32Process )
    {
      if ( (*(_DWORD *)(ProcessWin32Process + 12) & 0x1000) != 0 )
      {
        ObfDereferenceObject(v9);
        return -1073741790;
      }
      if ( *(_QWORD *)(ProcessWin32Process + 648) && *(_QWORD *)(ProcessWin32Process + 368) )
      {
        if ( v9 == (PVOID)PsGetCurrentProcess(v12, v11, v13, v14) )
        {
          Handle = v15[81];
          SourceHandle = v15[46];
        }
        else
        {
          v8 = ObOpenObjectByPointer(v15[80], 0, 0LL, 0x2000000u, ExWindowStationObjectType, 1, &Handle);
          if ( v8 >= 0 )
          {
            v8 = ObOpenObjectByPointer(v15[39], 0, 0LL, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 1, &SourceHandle);
            if ( v8 < 0 )
            {
              ObCloseHandle(Handle, 1);
              Handle = 0LL;
            }
          }
          if ( v8 < 0 )
          {
            v36 = RtlNtStatusToDosError(v8);
            UserSetLastError(v36);
          }
        }
        ObfDereferenceObject(v9);
        *v51 = Handle;
        v16 = SourceHandle;
        if ( SourceHandle )
          v8 = 0;
        goto LABEL_10;
      }
    }
    if ( a2 && a2->Length )
    {
      v31 = *a2;
      Source = v31;
      v32 = (unsigned __int16)_mm_cvtsi128_si32((__m128i)v31) >> 1;
      v33 = _mm_srli_si128((__m128i)v31, 8).m128i_u64[0];
      for ( i = (_WORD *)v33; v32; --v32 )
      {
        if ( *i == 92 )
          break;
        ++i;
      }
      v17 = 0;
      v43 = 0;
      if ( v32 )
      {
        DestinationString.Buffer = i + 1;
        DestinationString.MaximumLength = 2 * (v32 - 1);
        DestinationString.Length = DestinationString.MaximumLength;
        Source.Length = 2 * ((__int64)((__int64)i - v33) >> 1);
        v18 = 0;
        v47 = 0;
        RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
        RtlAppendUnicodeToString(&Destination, L"\\");
        RtlAppendUnicodeStringToString(&Destination, &Source);
        v8 = UserTestForWinStaAccess(&Destination);
        if ( v8 < 0 )
          goto LABEL_49;
        v17 = 0;
LABEL_17:
        v19 = v44;
        if ( v17 )
          v19 = 0;
        v44 = v19;
        if ( !grpWinStaList )
          goto LABEL_33;
        if ( v18 )
        {
          RtlInitUnicodeString(&Source, L"WinSta0");
          RtlAppendUnicodeToString(&Destination, szWindowStationDirectory);
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( (int)UserTestForWinStaAccess(&Destination) < 0 )
          {
            v45 = 0;
            GetProcessLuid(0LL, v59);
            LODWORD(Object) = v59[0];
            RtlStringCchPrintfW(SourceString, 29LL, L"Service-0x%x-%x$", v59[1], Object);
            RtlInitUnicodeString(&Source, SourceString);
          }
          else
          {
            v45 = 1;
            v6 = 1;
          }
          if ( (unsigned __int8)ObFindHandleForObject(v9, 0LL, ExWindowStationObjectType, 0LL, &Handle)
            && v9 != (PVOID)PsGetCurrentProcess(v21, v20, v22, v23) )
          {
            v37 = ZwDuplicateObject(SourceProcessHandle, Handle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u);
            v8 = v37;
            if ( v37 < 0 )
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
                v52 = (PUNICODE_STRING)((char *)BaseAddress + 48);
                v60[2] = (char *)BaseAddress + 48;
                if ( v8 >= 0 )
                {
                  SafeCopyUnicodeString((PUNICODE_STRING)BaseAddress + 3, &Destination);
                  *(_DWORD *)BaseAddress = 48;
                  *((_QWORD *)BaseAddress + 1) = 0LL;
                  *((_DWORD *)BaseAddress + 6) = 64;
                  *((_QWORD *)BaseAddress + 2) = v52;
                  *((_QWORD *)BaseAddress + 4) = 0LL;
                  *((_QWORD *)BaseAddress + 5) = 0LL;
                  if ( v44 )
                    *((_DWORD *)BaseAddress + 6) |= 2u;
                  Handle = (HANDLE)OpenWindowStation(BaseAddress, 0x2000000LL);
                }
              }
              if ( !gbRemoteSession && v8 >= 0 && !Handle && !v6 && v18 )
              {
                v8 = xxxConnectService(&Destination, &SourceHandle, v51);
                if ( BaseAddress )
                  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
                ObfDereferenceObject(v9);
                if ( v8 < 0 )
                  return v8;
                goto LABEL_52;
              }
              v17 = v43;
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
                *v51 = Handle;
LABEL_52:
                v16 = SourceHandle;
LABEL_10:
                *v49 = v16;
                return v8;
              }
              if ( !v17 || !(unsigned __int8)ObFindHandleForObject(v9, 0LL, ExDesktopObjectType, 0LL, &SourceHandle) )
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
                    v28 = v52;
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
                    v28 = (struct _UNICODE_STRING *)((char *)BaseAddress + 48);
                  }
                  if ( v8 >= 0 )
                  {
                    SafeCopyUnicodeString(v28, &Destination);
                    *(_DWORD *)BaseAddress = 48;
                    *((_QWORD *)BaseAddress + 1) = Handle;
                    v29 = v43;
                    *((_DWORD *)BaseAddress + 6) = (v43 != 0 ? 0x80 : 0) | 0x40;
                    *((_QWORD *)BaseAddress + 2) = v28;
                    *((_QWORD *)BaseAddress + 4) = 0LL;
                    *((_QWORD *)BaseAddress + 5) = 0LL;
                    if ( v44 )
                      *((_DWORD *)BaseAddress + 6) |= 2u;
                    if ( (_DWORD)v29 )
                      Desktop = xxxCreateDesktopEx((_DWORD)BaseAddress, 0, 0x2000000, 0, (__int64)&SourceHandle, 0);
                    else
                      Desktop = OpenDesktop((__int64)BaseAddress, v29, 0LL, 0x2000000, &SourceHandle);
                    v8 = Desktop;
                  }
                  goto LABEL_47;
                }
                goto LABEL_49;
              }
              if ( v9 != (PVOID)PsGetCurrentProcess(v25, v24, v26, v27) )
              {
                v8 = ZwDuplicateObject(SourceProcessHandle, SourceHandle, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &v50, 0, 0, 2u);
                if ( v8 < 0 )
                {
LABEL_98:
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                  goto LABEL_37;
                }
                SourceHandle = v50;
              }
              if ( !SourceHandle || !v15 )
                goto LABEL_37;
              v8 = ObReferenceObjectByHandle(SourceHandle, 0, (POBJECT_TYPE)ExDesktopObjectType, 0, &v50, 0LL);
              if ( v8 >= 0 )
              {
                v61 = 1;
                v62 = v9;
                v38 = v50;
                v63 = v50;
                v64 = 0;
                v65 = 1;
                v8 = MapDesktop((__int64)&v61);
                if ( v8 < 0 )
                {
                  CloseProtectedHandle(SourceHandle, 1);
                  SourceHandle = 0LL;
                }
                ObfDereferenceObject(v38);
                goto LABEL_37;
              }
              goto LABEL_98;
            }
            Handle = TargetHandle;
          }
        }
        if ( Handle )
        {
          v8 = ObReferenceObjectByHandle(Handle, 0, ExWindowStationObjectType, 0, v60, 0LL);
          if ( v8 >= 0 )
          {
            v35 = v60[0];
            if ( (((unsigned __int8)~*((_BYTE *)v60[0] + 32) >> 2) & 1) != v6 )
            {
              if ( TargetHandle )
              {
                CloseProtectedHandle(Handle, 1);
                v35 = v60[0];
              }
              Handle = 0LL;
            }
            ObfDereferenceObject(v35);
          }
        }
        goto LABEL_25;
      }
      DestinationString = v31;
    }
    else
    {
      RtlInitUnicodeString(&DestinationString, L"Default");
      v17 = 1;
      v43 = 1;
    }
    v18 = 1;
    v47 = 1;
    goto LABEL_17;
  }
  return result;
}
