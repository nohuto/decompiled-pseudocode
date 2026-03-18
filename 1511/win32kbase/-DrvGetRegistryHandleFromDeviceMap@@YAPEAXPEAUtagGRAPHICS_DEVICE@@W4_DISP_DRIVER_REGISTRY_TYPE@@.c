/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430
 * Callers:
 *     DrvUpdateGraphicsDeviceList @ 0x1C001E650 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C001F8A0 (DrvEnumDisplayDevices.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C002139C (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0053820 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00568A8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00576F4 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00577E8 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00592A0 (DrvGetDisplayDriverParameters.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00718F0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C007CFA0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C00864FC (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00BDD64 (DrvSetPruneFlag.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0020C1C (PALLOCMEM2.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0062E24 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0068CE4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0077E00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        NTSTATUS *a6,
        unsigned __int16 a7)
{
  __int64 v8; // r13
  unsigned __int16 *v9; // r15
  int v11; // r14d
  WCHAR *v12; // rsi
  WCHAR *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // rbx
  WCHAR *v22; // rax
  NTSTATUS v23; // edi
  WCHAR *v24; // rax
  const WCHAR *v25; // rdx
  _WORD *v26; // rbx
  wchar_t *v27; // rbx
  __int64 v28; // rdi
  wchar_t *v29; // r14
  __int64 v30; // rax
  int v32; // eax
  const WCHAR *v33; // rdx
  const WCHAR *v34; // rdx
  unsigned __int16 *v35; // rax
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  wchar_t *v48; // rax
  NTSTATUS v49; // eax
  __int64 v50; // rcx
  int v51; // r12d
  signed int Length; // r14d
  void *v53; // rax
  unsigned __int16 *v54; // r15
  unsigned __int16 *v55; // rcx
  _WORD *i; // r14
  int v57; // r13d
  wchar_t *v58; // r14
  wchar_t *v59; // rcx
  wchar_t *v60; // r15
  __int64 v61; // rcx
  __int64 v63; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR *v66; // [rsp+58h] [rbp-A8h]
  wchar_t *Str1; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING Destination; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int16 *v69; // [rsp+78h] [rbp-88h]
  void *KeyHandle; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+88h] [rbp-78h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v73; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 *v74; // [rsp+C8h] [rbp-38h]
  ULONG v75[2]; // [rsp+D0h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v77; // [rsp+E0h] [rbp-20h]
  NTSTATUS *v78; // [rsp+E8h] [rbp-18h]
  void *v79; // [rsp+F0h] [rbp-10h]
  unsigned __int16 v80[160]; // [rsp+100h] [rbp+0h] BYREF

  v8 = a2;
  v9 = a1;
  v78 = a6;
  v77 = a3;
  v74 = a1;
  v69 = a4;
  v71 = a2;
  v11 = 0;
  Handle = 0LL;
  v12 = 0LL;
  memset(v80, 0, sizeof(v80));
  v13 = 0LL;
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(a1);
  v14[6] = a7;
  v14[3] = v9;
  v14[4] = v8;
  v14[5] = a3;
  WdLogEvent5_WdTrace(v14);
  if ( a4 && !a5 )
  {
    v23 = -1073741811;
    goto LABEL_32;
  }
  CurrentProcess = PsGetCurrentProcess(v16, v15);
  ProcessImageFileName = PsGetProcessImageFileName(CurrentProcess);
  v20 = (unsigned __int16)gProtocolType;
  v21 = (const char *)ProcessImageFileName;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
  {
    if ( Object )
    {
      LOWORD(v20) = gProtocolType - 1;
      if ( (PVOID)PsGetCurrentProcess(v20, v19) != gpepCSRSS
        && !(unsigned int)UserIsCurrentProcessDwm()
        && v21
        && _stricmp(v21, "rdpshell.exe")
        && _stricmp(v21, "rdpclip.exe")
        && (*((_DWORD *)v9 + 40) & 0x4000000) != 0 )
      {
        v35 = v80;
        v36 = 2LL;
        do
        {
          v35 += 64;
          v37 = *(_OWORD *)v9;
          v38 = *((_OWORD *)v9 + 1);
          v9 += 64;
          *((_OWORD *)v35 - 8) = v37;
          v39 = *((_OWORD *)v9 - 6);
          *((_OWORD *)v35 - 7) = v38;
          v40 = *((_OWORD *)v9 - 5);
          *((_OWORD *)v35 - 6) = v39;
          v41 = *((_OWORD *)v9 - 4);
          *((_OWORD *)v35 - 5) = v40;
          v42 = *((_OWORD *)v9 - 3);
          *((_OWORD *)v35 - 4) = v41;
          v43 = *((_OWORD *)v9 - 2);
          *((_OWORD *)v35 - 3) = v42;
          v44 = *((_OWORD *)v9 - 1);
          *((_OWORD *)v35 - 2) = v43;
          *((_OWORD *)v35 - 1) = v44;
          --v36;
        }
        while ( v36 );
        v45 = *((_OWORD *)v9 + 1);
        *(_OWORD *)v35 = *(_OWORD *)v9;
        v46 = *((_OWORD *)v9 + 2);
        *((_OWORD *)v35 + 1) = v45;
        v47 = *((_OWORD *)v9 + 3);
        v9 = v80;
        *((_OWORD *)v35 + 2) = v46;
        v74 = v80;
        *((_OWORD *)v35 + 3) = v47;
        StringCchCopyW(v80, 0x20uLL, Dest);
        *(_DWORD *)&v80[80] &= ~0x4000000u;
      }
    }
  }
  if ( (*((_DWORD *)v9 + 40) & 8) != 0 )
    v11 = 1;
  v22 = (WCHAR *)Win32AllocPool(512LL, 1886221383LL);
  v66 = v22;
  v13 = v22;
  if ( v22 )
    memset(v22, 0, 0x200uLL);
  if ( !v13 )
  {
    v23 = -1073741670;
    goto LABEL_32;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v11 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
  }
  else
  {
    if ( (unsigned int)(v8 - 1) <= 1 )
    {
      v23 = -1073741766;
      goto LABEL_32;
    }
    DestinationString.Buffer = v13;
    *(_DWORD *)&DestinationString.Length = 33423360;
    RtlAppendUnicodeToString(
      &DestinationString,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
    v34 = qword_1C0104858;
    if ( !qword_1C0104858 )
      v34 = L"vgastub";
    RtlAppendUnicodeToString(&DestinationString, v34);
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v23 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v23 < 0 )
    goto LABEL_114;
  v24 = (WCHAR *)Win32AllocPool(1024LL, 1886221383LL);
  v12 = v24;
  if ( v24 )
    memset(v24, 0, 0x400uLL);
  if ( !v12 )
  {
    v23 = -1073741670;
    goto LABEL_32;
  }
  if ( (*((_DWORD *)v9 + 40) & 0x4000000) == 0 || v11 )
    v25 = v9;
  else
    v25 = L"\\Device\\Video0";
  RtlInitUnicodeString(&DestinationString, v25);
  v23 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v12, 0x200u, &ResultLength);
  if ( v23 < 0 )
  {
LABEL_31:
    ZwClose(KeyHandle);
    if ( v23 >= 0 )
      goto LABEL_32;
LABEL_114:
    v63 = WdLogNewEntry5_WdTrace(v16);
    *(_QWORD *)(v63 + 24) = v23;
    WdLogEvent5_WdTrace(v63);
    goto LABEL_32;
  }
  v26 = (WCHAR *)((char *)v12 + *((unsigned int *)v12 + 2));
  if ( (_DWORD)v8 != 3 )
  {
    for ( ; *v26; ++v26 )
      *v26 = toupper((unsigned __int16)*v26);
    v27 = wcsstr((WCHAR *)((char *)v12 + *((unsigned int *)v12 + 2)), L"\\CONTROL\\");
    if ( !v27 )
      v27 = wcsstr((WCHAR *)((char *)v12 + *((unsigned int *)v12 + 2)), L"\\SERVICES");
    v28 = -1LL;
    if ( !v69 )
    {
      v29 = 0LL;
LABEL_25:
      if ( v77 )
      {
        v61 = -1LL;
        do
          ++v61;
        while ( v27[v61] );
        while ( v27[++v28] != 0 )
          ;
        StringCchPrintfW(&v27[v28], 512 - ((unsigned int)(v27 - v12) >> 1) - (unsigned int)v61, L"\\Mon%08X", *v77);
      }
      *(_DWORD *)&Destination.Length = 33423360;
      Destination.Buffer = v12 + 256;
      RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
      if ( (unsigned int)(v8 - 1) <= 1 )
      {
        if ( (*((_DWORD *)v9 + 40) & 0x800000) != 0 )
          v33 = L"\\Hardware Profiles\\UnitedVideo";
        else
          v33 = L"\\Hardware Profiles\\Current\\System\\CurrentControlSet";
        RtlAppendUnicodeToString(&Destination, v33);
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &Destination;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( (_DWORD)v8 == 2 )
      {
        v23 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
        if ( v23 < 0 )
          goto LABEL_113;
        while ( 1 )
        {
          v48 = wcschr(v27 + 1, 0x5Cu);
          v29 = v48;
          if ( v48 )
            *v48 = 0;
          RtlAppendUnicodeToString(&Destination, v27);
          if ( Handle )
            ZwClose(Handle);
          v49 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
          v23 = v49;
          if ( v49 < 0 )
            break;
          if ( !v29 )
            goto LABEL_75;
          *v29 = 92;
          v27 = v29;
        }
        v29 = 0LL;
        Handle = 0LL;
LABEL_75:
        if ( v49 < 0 )
LABEL_113:
          Handle = v29;
      }
      else
      {
        RtlAppendUnicodeToString(&Destination, v27);
        v23 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
        if ( v23 < 0 )
          v23 = -1073741438;
      }
      v13 = v66;
      goto LABEL_31;
    }
    v50 = -1LL;
    Str1 = v69;
    v51 = a5 - 1;
    if ( a5 - 1 > 0x1F )
      v51 = 31;
    do
      ++v50;
    while ( *(WCHAR *)((char *)&v12[v50] + *((unsigned int *)v12 + 2)) );
    *(_QWORD *)v75 = (int)v50;
    if ( (unsigned __int64)(2LL * (int)v50 + 12) <= 0x66 )
      Length = 102;
    else
      Length = 2 * v50 + 12;
    v53 = (void *)PALLOCMEM2((unsigned int)Length);
    v79 = v53;
    v54 = (unsigned __int16 *)v53;
    if ( !v53 )
    {
LABEL_89:
      v29 = 0LL;
      v9 = v74;
      *Str1 = 0;
      goto LABEL_25;
    }
    memset(v53, 0, Length);
    StringCchCopyW(v54, (unsigned __int64)Length >> 1, (WCHAR *)((char *)v12 + *((unsigned int *)v12 + 2)));
    v55 = &v54[*(_QWORD *)v75 - 1];
    if ( v55 <= v54 )
    {
LABEL_95:
      if ( *v55 != 92 )
      {
LABEL_88:
        Win32FreePool();
        LODWORD(v8) = v71;
        goto LABEL_89;
      }
    }
    else
    {
      while ( *v55 != 92 )
      {
        if ( --v55 <= v54 )
          goto LABEL_95;
      }
    }
    StringCchCopyW(v55 + 1, ((unsigned __int64)Length >> 1) - *(_QWORD *)v75, L"Video");
    RtlInitUnicodeString(&DestinationString, v54);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v73, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Service");
      memset(v54, 0, Length);
      if ( ZwQueryValueKey(v73, &DestinationString, KeyValueFullInformation, v54, Length, v75) >= 0 )
      {
        for ( i = (unsigned __int16 *)((char *)v54 + *((unsigned int *)v54 + 2)); *i; ++i )
          *i = toupper((unsigned __int16)*i);
        v57 = v51;
        v58 = (unsigned __int16 *)((char *)v54 + *((unsigned int *)v54 + 2));
        if ( v51 )
        {
          v59 = Str1;
          v60 = Str1;
          do
          {
            --v51;
            if ( !*v58 )
              break;
            *v59 = *v58++;
            Str1 = ++v59;
            if ( v51 == v57 - 3 )
            {
              if ( !_wcsnicmp(v60, L"VGA", 3uLL) )
                break;
              v59 = Str1;
            }
          }
          while ( v51 );
        }
      }
      ZwClose(v73);
    }
    goto LABEL_88;
  }
  if ( v69 )
  {
    v32 = StringCchCopyNW(v69, a5, (WCHAR *)((char *)v12 + *((unsigned int *)v12 + 2)), 0x7FuLL);
    if ( (int)(v32 + 0x80000000) >= 0 && v32 != -2147024774 )
      v23 = -1073741811;
  }
  ZwClose(KeyHandle);
  v13 = v66;
LABEL_32:
  if ( v78 )
    *v78 = v23;
  if ( v13 && (int)IsWin32FreePoolImplSupported_0() >= 0 )
    Win32FreePoolImpl_0();
  if ( v12 && (int)IsWin32FreePoolImplSupported_0() >= 0 )
    Win32FreePoolImpl_0();
  v30 = WdLogNewEntry5_WdTrace(v16);
  *(_QWORD *)(v30 + 24) = v23;
  WdLogEvent5_WdTrace(v30);
  return Handle;
}
