/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C00328A8
 * Callers:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C0020D10 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0021838 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0060040 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0060740 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00639D0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0064878 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006496C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C00652A0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C006C948 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00BC528 (DrvSetPruneFlag.c)
 * Callees:
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C000BDD8 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C007EF20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C007EF98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int *a3,
        char *a4,
        unsigned int a5,
        NTSTATUS *a6,
        unsigned __int16 a7)
{
  __int64 v7; // rbx
  unsigned __int16 *v9; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  BOOL v16; // esi
  WCHAR *v17; // rcx
  __int64 v18; // rcx
  NTSTATUS v19; // ebx
  const WCHAR *v20; // rdx
  _WORD *v21; // rsi
  wchar_t *v22; // r15
  __int64 v23; // r13
  int v24; // ebx
  __int64 v25; // rax
  int v27; // eax
  int v28; // ecx
  const WCHAR *v29; // rdx
  wchar_t *v30; // rax
  wchar_t *v31; // rdi
  NTSTATUS v32; // eax
  const WCHAR *v33; // rdx
  int v34; // r12d
  __int64 v35; // rcx
  signed int Length; // esi
  unsigned __int16 *v37; // rbx
  const unsigned __int16 *v38; // r8
  unsigned __int16 *i; // rcx
  __int64 CurrentProcess; // rax
  const char *ProcessImageFileName; // rax
  __int64 v42; // rcx
  unsigned __int16 *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  _WORD *v54; // rsi
  int v55; // ecx
  wchar_t *v56; // rsi
  wchar_t *v57; // r13
  wchar_t *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v62; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v64; // [rsp+60h] [rbp-A0h]
  size_t Size; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *Str1; // [rsp+80h] [rbp-80h]
  void *KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  wchar_t *v70; // [rsp+C0h] [rbp-40h]
  HANDLE v71; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int16 *v72; // [rsp+D0h] [rbp-30h]
  ULONG v73[2]; // [rsp+D8h] [rbp-28h] BYREF
  NTSTATUS *v74; // [rsp+E0h] [rbp-20h]
  ULONG ResultLength; // [rsp+E8h] [rbp-18h] BYREF
  size_t v76; // [rsp+F0h] [rbp-10h]
  unsigned int *v77; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v78[160]; // [rsp+100h] [rbp+0h] BYREF

  v7 = (int)a2;
  v77 = a3;
  v9 = a1;
  v70 = (wchar_t *)a4;
  v64 = a2;
  v74 = a6;
  Handle = 0LL;
  v11 = 0LL;
  memset(v78, 0, sizeof(v78));
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3);
  v12[3] = v9;
  v12[4] = v7;
  v12[5] = a3;
  v12[6] = a7;
  WdLogEvent5_WdTrace(v12);
  if ( a4 && !a5 )
  {
    v19 = -1073741811;
    v17 = 0LL;
    goto LABEL_24;
  }
  if ( dword_1C0102080 )
  {
    if ( (*((_DWORD *)v9 + 40) & 4) != 0 )
    {
      CurrentProcess = PsGetCurrentProcess(v14, v13);
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(CurrentProcess);
      if ( ProcessImageFileName )
      {
        if ( !_stricmp(ProcessImageFileName, "rdvgm.exe") )
        {
          v42 = 2LL;
          v43 = v78;
          do
          {
            v44 = *((_OWORD *)v9 + 1);
            *(_OWORD *)v43 = *(_OWORD *)v9;
            v45 = *((_OWORD *)v9 + 2);
            *((_OWORD *)v43 + 1) = v44;
            v46 = *((_OWORD *)v9 + 3);
            *((_OWORD *)v43 + 2) = v45;
            v47 = *((_OWORD *)v9 + 4);
            *((_OWORD *)v43 + 3) = v46;
            v48 = *((_OWORD *)v9 + 5);
            *((_OWORD *)v43 + 4) = v47;
            v49 = *((_OWORD *)v9 + 6);
            *((_OWORD *)v43 + 5) = v48;
            v50 = *((_OWORD *)v9 + 7);
            v9 += 64;
            *((_OWORD *)v43 + 6) = v49;
            v43 += 64;
            *((_OWORD *)v43 - 1) = v50;
            --v42;
          }
          while ( v42 );
          v51 = *((_OWORD *)v9 + 1);
          *(_OWORD *)v43 = *(_OWORD *)v9;
          v52 = *((_OWORD *)v9 + 2);
          *((_OWORD *)v43 + 1) = v51;
          v53 = *((_OWORD *)v9 + 3);
          v9 = v78;
          *((_OWORD *)v43 + 2) = v52;
          *((_OWORD *)v43 + 3) = v53;
          StringCchCopyW(v78, 0x20uLL, Dest);
          *(_DWORD *)&v78[80] &= ~0x4000000u;
        }
      }
    }
  }
  v16 = (v9[80] & 8) != 0;
  v62 = (WCHAR *)PALLOCMEM2(0x200uLL);
  v17 = v62;
  if ( v62 )
  {
    if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v16 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
      goto LABEL_6;
    }
    if ( (unsigned int)(v7 - 1) > 1 )
    {
      DestinationString.Buffer = v62;
      *(_DWORD *)&DestinationString.Length = 33423360;
      RtlAppendUnicodeToString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
      v33 = L"vgastub";
      if ( qword_1C0102068 )
        v33 = qword_1C0102068;
      RtlAppendUnicodeToString(&DestinationString, v33);
LABEL_6:
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v19 >= 0 )
      {
        v11 = PALLOCMEM2(0x400uLL);
        if ( !v11 )
        {
          v19 = -1073741670;
          goto LABEL_23;
        }
        if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || (v20 = L"\\Device\\Video0", v16) )
          v20 = v9;
        RtlInitUnicodeString(&DestinationString, v20);
        v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, (PVOID)v11, 0x200u, &ResultLength);
        if ( v19 >= 0 )
        {
          v21 = (_WORD *)(v11 + *(unsigned int *)(v11 + 8));
          if ( v64 == 3 )
          {
            if ( a4 )
            {
              v27 = StringCchCopyNW(a4, a5, (char *)(v11 + *(unsigned int *)(v11 + 8)), 0x7FuLL);
              if ( (int)(v27 + 0x80000000) >= 0 )
              {
                v28 = v19;
                if ( v27 != -2147024774 )
                  v28 = -1073741811;
                v19 = v28;
              }
            }
            ZwClose(KeyHandle);
            goto LABEL_23;
          }
          while ( *v21 )
          {
            *v21 = toupper((unsigned __int16)*v21);
            ++v21;
          }
          v22 = wcsstr((const wchar_t *)(v11 + *(unsigned int *)(v11 + 8)), L"\\CONTROL\\");
          if ( !v22 )
            v22 = wcsstr((const wchar_t *)(v11 + *(unsigned int *)(v11 + 8)), L"\\SERVICES");
          v23 = -1LL;
          if ( v70 )
          {
            Str1 = v70;
            v34 = a5 - 1;
            v35 = -1LL;
            if ( a5 - 1 > 0x1F )
              v34 = 31;
            do
              ++v35;
            while ( *(_WORD *)(v11 + *(unsigned int *)(v11 + 8) + 2 * v35) );
            Length = 102;
            *(_QWORD *)v73 = (int)v35;
            if ( (unsigned __int64)(2LL * (int)v35 + 12) > 0x66 )
              Length = 2 * v35 + 12;
            v72 = (unsigned __int16 *)PALLOCMEM2((unsigned int)Length);
            v37 = v72;
            if ( v72 )
            {
              Size = Length;
              memset(v72, 0, Length);
              v38 = (const unsigned __int16 *)(v11 + *(unsigned int *)(v11 + 8));
              v76 = Size >> 1;
              StringCchCopyW(v37, Size >> 1, v38);
              for ( i = &v37[*(_QWORD *)v73 - 1]; i > v37; --i )
              {
                if ( *i == 92 )
                  goto LABEL_69;
              }
              if ( *i != 92 )
                goto LABEL_70;
LABEL_69:
              StringCchCopyW(i + 1, v76 - *(_QWORD *)v73, L"Video");
              RtlInitUnicodeString(&DestinationString, v37);
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 576;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( ZwOpenKey(&v71, 0x20019u, &ObjectAttributes) >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"Service");
                memset(v37, 0, Size);
                if ( ZwQueryValueKey(v71, &DestinationString, KeyValueFullInformation, v37, Length, v73) >= 0 )
                {
                  v54 = (unsigned __int16 *)((char *)v37 + *((unsigned int *)v37 + 2));
                  if ( *v54 )
                  {
                    do
                    {
                      *v54 = toupper((unsigned __int16)*v54);
                      ++v54;
                    }
                    while ( *v54 );
                    v37 = v72;
                  }
                  v55 = v34;
                  v56 = (unsigned __int16 *)((char *)v37 + *((unsigned int *)v37 + 2));
                  LODWORD(Size) = v34;
                  if ( v34 )
                  {
                    v57 = Str1;
                    v58 = Str1;
                    do
                    {
                      --v34;
                      if ( !*v56 )
                        break;
                      *v57 = *v56++;
                      Str1 = ++v57;
                      if ( v34 == v55 - 3 )
                      {
                        if ( !_wcsnicmp(v58, L"VGA", 3uLL) )
                          break;
                        v55 = Size;
                      }
                    }
                    while ( v34 );
                    v37 = v72;
                    v23 = -1LL;
                  }
                }
                ZwClose(v71);
              }
LABEL_70:
              Win32FreePool(v37);
            }
            *Str1 = 0;
          }
          if ( v77 )
          {
            v59 = -1LL;
            do
              ++v59;
            while ( v22[v59] );
            do
              ++v23;
            while ( v22[v23] );
            StringCchPrintfW(
              &v22[v23],
              512 - ((unsigned int)(((__int64)v22 - v11) >> 1) >> 1) - (unsigned int)v59,
              L"\\Mon%08X",
              *v77);
          }
          *(_DWORD *)&Destination.Length = 33423360;
          Destination.Buffer = (PWSTR)(v11 + 512);
          RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
          v24 = v64;
          if ( (unsigned int)(v64 - 1) <= 1 )
          {
            v29 = L"\\Hardware Profiles\\UnitedVideo";
            if ( (*((_DWORD *)v9 + 40) & 0x800000) == 0 )
              v29 = L"\\Hardware Profiles\\Current\\System\\CurrentControlSet";
            RtlAppendUnicodeToString(&Destination, v29);
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( v24 == 2 )
          {
            v19 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
            if ( v19 < 0 )
              goto LABEL_101;
            while ( 1 )
            {
              v30 = wcschr(v22 + 1, 0x5Cu);
              v31 = v30;
              if ( v30 )
                *v30 = 0;
              RtlAppendUnicodeToString(&Destination, v22);
              if ( Handle )
                ZwClose(Handle);
              v32 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
              v19 = v32;
              if ( v32 < 0 )
                break;
              if ( !v31 )
                goto LABEL_50;
              *v31 = 92;
              v22 = v31;
            }
            Handle = 0LL;
LABEL_50:
            if ( v32 < 0 )
LABEL_101:
              Handle = 0LL;
          }
          else
          {
            RtlAppendUnicodeToString(&Destination, v22);
            v19 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v19 < 0 )
              v19 = -1073741438;
          }
        }
        ZwClose(KeyHandle);
        if ( v19 >= 0 )
        {
LABEL_23:
          v17 = v62;
          goto LABEL_24;
        }
      }
      v60 = WdLogNewEntry5_WdTrace(v18, v13, v15);
      *(_QWORD *)(v60 + 24) = v19;
      WdLogEvent5_WdTrace(v60);
      goto LABEL_23;
    }
    v19 = -1073741766;
  }
  else
  {
    v19 = -1073741670;
  }
LABEL_24:
  if ( v74 )
    *v74 = v19;
  if ( v17 )
    Win32FreePool(v17);
  if ( v11 )
    Win32FreePool(v11);
  v25 = WdLogNewEntry5_WdTrace(v17, v13, v15);
  *(_QWORD *)(v25 + 24) = v19;
  WdLogEvent5_WdTrace(v25);
  return Handle;
}
