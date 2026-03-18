/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0037320
 * Callers:
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x1C0016160 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00163D0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C005FDC0 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvGetDisplayDriverParameters @ 0x1C0061030 (DrvGetDisplayDriverParameters.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0064CA0 (DrvUpdateDisplayDriverParameters.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x1C00680E8 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0068F38 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006902C (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x1C0069AC0 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     ?DrvAddMirrorDriversToRemoteList@@YAHXZ @ 0x1C0087894 (-DrvAddMirrorDriversToRemoteList@@YAHXZ.c)
 *     DrvSetPruneFlag @ 0x1C00C9A64 (DrvSetPruneFlag.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0037A4C (PALLOCMEM2.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00541D4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0074044 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00794F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
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
  __int64 v7; // rbx
  __int64 v10; // r14
  __int64 v12; // rcx
  _QWORD *v13; // rax
  BOOL v14; // esi
  WCHAR *v15; // rcx
  __int64 v16; // rcx
  NTSTATUS v17; // ebx
  const WCHAR *v18; // rdx
  _WORD *v19; // rsi
  wchar_t *v20; // r15
  __int64 v21; // r13
  int v22; // ebx
  __int64 v23; // rax
  int v25; // eax
  int v26; // ecx
  const WCHAR *v27; // rdx
  const WCHAR *v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  wchar_t *v41; // rax
  wchar_t *v42; // rdi
  NTSTATUS v43; // eax
  int v44; // r12d
  __int64 v45; // rcx
  signed int Length; // esi
  unsigned __int16 *v47; // rbx
  const unsigned __int16 *v48; // r8
  unsigned __int16 *i; // rcx
  _WORD *v50; // rsi
  int v51; // ecx
  wchar_t *v52; // rsi
  wchar_t *v53; // r13
  wchar_t *v54; // rbx
  __int64 v55; // rcx
  __int64 v56; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR *v58; // [rsp+48h] [rbp-B8h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v60; // [rsp+60h] [rbp-A0h]
  size_t Size; // [rsp+68h] [rbp-98h]
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-90h] BYREF
  wchar_t *Str1; // [rsp+80h] [rbp-80h]
  void *KeyHandle; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  ULONG v66[2]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t *v67; // [rsp+C8h] [rbp-38h]
  unsigned __int16 *v68; // [rsp+D0h] [rbp-30h]
  HANDLE v69; // [rsp+D8h] [rbp-28h] BYREF
  ULONG ResultLength; // [rsp+E0h] [rbp-20h] BYREF
  size_t v71; // [rsp+E8h] [rbp-18h]
  unsigned int *v72; // [rsp+F0h] [rbp-10h]
  NTSTATUS *v73; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v74[160]; // [rsp+100h] [rbp+0h] BYREF

  v7 = a2;
  v72 = a3;
  v60 = a2;
  v73 = a6;
  Handle = 0LL;
  v10 = 0LL;
  v67 = a4;
  memset(v74, 0, sizeof(v74));
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12);
  v13[3] = a1;
  v13[4] = v7;
  v13[5] = a3;
  v13[6] = a7;
  WdLogEvent5_WdTrace(v13);
  if ( a4 && !a5 )
  {
    v17 = -1073741811;
    v15 = 0LL;
  }
  else
  {
    if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu
      && Object
      && (PVOID)PsGetCurrentProcess(65533LL) != gpepCSRSS
      && !(unsigned int)UserIsCurrentProcessDwm()
      && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
    {
      v29 = 2LL;
      v30 = v74;
      do
      {
        v31 = *((_OWORD *)a1 + 1);
        *(_OWORD *)v30 = *(_OWORD *)a1;
        v32 = *((_OWORD *)a1 + 2);
        *((_OWORD *)v30 + 1) = v31;
        v33 = *((_OWORD *)a1 + 3);
        *((_OWORD *)v30 + 2) = v32;
        v34 = *((_OWORD *)a1 + 4);
        *((_OWORD *)v30 + 3) = v33;
        v35 = *((_OWORD *)a1 + 5);
        *((_OWORD *)v30 + 4) = v34;
        v36 = *((_OWORD *)a1 + 6);
        *((_OWORD *)v30 + 5) = v35;
        v37 = *((_OWORD *)a1 + 7);
        a1 += 64;
        *((_OWORD *)v30 + 6) = v36;
        v30 += 64;
        *((_OWORD *)v30 - 1) = v37;
        --v29;
      }
      while ( v29 );
      v38 = *((_OWORD *)a1 + 1);
      *(_OWORD *)v30 = *(_OWORD *)a1;
      v39 = *((_OWORD *)a1 + 2);
      *((_OWORD *)v30 + 1) = v38;
      v40 = *((_OWORD *)a1 + 3);
      a1 = v74;
      *((_OWORD *)v30 + 2) = v39;
      *((_OWORD *)v30 + 3) = v40;
      StringCchCopyW(v74, 0x20uLL, Dest);
      *(_DWORD *)&v74[80] &= ~0x4000000u;
    }
    v14 = (a1[80] & 8) != 0;
    v58 = (WCHAR *)PALLOCMEM2(0x200uLL);
    v15 = v58;
    if ( v58 )
    {
      if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v14 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
        goto LABEL_7;
      }
      if ( (unsigned int)(v7 - 1) > 1 )
      {
        DestinationString.Buffer = v58;
        *(_DWORD *)&DestinationString.Length = 33423360;
        RtlAppendUnicodeToString(
          &DestinationString,
          L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
        v28 = L"vgastub";
        if ( qword_1C011BC58 )
          v28 = qword_1C011BC58;
        RtlAppendUnicodeToString(&DestinationString, v28);
LABEL_7:
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( v17 >= 0 )
        {
          v10 = PALLOCMEM2(0x400uLL);
          if ( !v10 )
          {
            v17 = -1073741670;
            goto LABEL_24;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || (v18 = L"\\Device\\Video0", v14) )
            v18 = a1;
          RtlInitUnicodeString(&DestinationString, v18);
          v17 = ZwQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValueFullInformation,
                  (PVOID)v10,
                  0x200u,
                  &ResultLength);
          if ( v17 >= 0 )
          {
            v19 = (_WORD *)(v10 + *(unsigned int *)(v10 + 8));
            if ( v60 == 3 )
            {
              if ( a4 )
              {
                v25 = StringCchCopyNW(a4, a5, (const unsigned __int16 *)(v10 + *(unsigned int *)(v10 + 8)), 0x7FuLL);
                if ( (int)(v25 + 0x80000000) >= 0 )
                {
                  v26 = v17;
                  if ( v25 != -2147024774 )
                    v26 = -1073741811;
                  v17 = v26;
                }
              }
              ZwClose(KeyHandle);
              goto LABEL_24;
            }
            while ( *v19 )
            {
              *v19 = toupper((unsigned __int16)*v19);
              ++v19;
            }
            v20 = wcsstr((const wchar_t *)(v10 + *(unsigned int *)(v10 + 8)), L"\\CONTROL\\");
            if ( !v20 )
              v20 = wcsstr((const wchar_t *)(v10 + *(unsigned int *)(v10 + 8)), L"\\SERVICES");
            v21 = -1LL;
            if ( v67 )
            {
              Str1 = v67;
              v44 = a5 - 1;
              v45 = -1LL;
              if ( a5 - 1 > 0x1F )
                v44 = 31;
              do
                ++v45;
              while ( *(_WORD *)(v10 + *(unsigned int *)(v10 + 8) + 2 * v45) );
              Length = 102;
              *(_QWORD *)v66 = (int)v45;
              if ( (unsigned __int64)(2LL * (int)v45 + 12) > 0x66 )
                Length = 2 * v45 + 12;
              v68 = (unsigned __int16 *)PALLOCMEM2((unsigned int)Length);
              v47 = v68;
              if ( v68 )
              {
                Size = Length;
                memset(v68, 0, Length);
                v48 = (const unsigned __int16 *)(v10 + *(unsigned int *)(v10 + 8));
                v71 = Size >> 1;
                StringCchCopyW(v47, Size >> 1, v48);
                for ( i = &v47[*(_QWORD *)v66 - 1]; i > v47; --i )
                {
                  if ( *i == 92 )
                    goto LABEL_75;
                }
                if ( *i != 92 )
                  goto LABEL_76;
LABEL_75:
                StringCchCopyW(i + 1, v71 - *(_QWORD *)v66, L"Video");
                RtlInitUnicodeString(&DestinationString, v47);
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = 0LL;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = &DestinationString;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&v69, 0x20019u, &ObjectAttributes) >= 0 )
                {
                  RtlInitUnicodeString(&DestinationString, L"Service");
                  memset(v47, 0, Size);
                  if ( ZwQueryValueKey(v69, &DestinationString, KeyValueFullInformation, v47, Length, v66) >= 0 )
                  {
                    v50 = (unsigned __int16 *)((char *)v47 + *((unsigned int *)v47 + 2));
                    if ( *v50 )
                    {
                      do
                      {
                        *v50 = toupper((unsigned __int16)*v50);
                        ++v50;
                      }
                      while ( *v50 );
                      v47 = v68;
                    }
                    v51 = v44;
                    v52 = (unsigned __int16 *)((char *)v47 + *((unsigned int *)v47 + 2));
                    LODWORD(Size) = v44;
                    if ( v44 )
                    {
                      v53 = Str1;
                      v54 = Str1;
                      do
                      {
                        --v44;
                        if ( !*v52 )
                          break;
                        *v53 = *v52++;
                        Str1 = ++v53;
                        if ( v44 == v51 - 3 )
                        {
                          if ( !_wcsnicmp(v54, L"VGA", 3uLL) )
                            break;
                          v51 = Size;
                        }
                      }
                      while ( v44 );
                      v21 = -1LL;
                    }
                  }
                  ZwClose(v69);
                }
LABEL_76:
                Win32FreePool();
              }
              *Str1 = 0;
            }
            if ( v72 )
            {
              v55 = -1LL;
              do
                ++v55;
              while ( v20[v55] );
              do
                ++v21;
              while ( v20[v21] );
              StringCchPrintfW(
                &v20[v21],
                512 - ((unsigned int)(((__int64)v20 - v10) >> 1) >> 1) - (unsigned int)v55,
                L"\\Mon%08X",
                *v72);
            }
            *(_DWORD *)&Destination.Length = 33423360;
            Destination.Buffer = (PWSTR)(v10 + 512);
            RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
            v22 = v60;
            if ( (unsigned int)(v60 - 1) <= 1 )
            {
              v27 = L"\\Hardware Profiles\\UnitedVideo";
              if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
                v27 = L"\\Hardware Profiles\\Current\\System\\CurrentControlSet";
              RtlAppendUnicodeToString(&Destination, v27);
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( v22 == 2 )
            {
              v17 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
              if ( v17 < 0 )
                goto LABEL_102;
              while ( 1 )
              {
                v41 = wcschr(v20 + 1, 0x5Cu);
                v42 = v41;
                if ( v41 )
                  *v41 = 0;
                RtlAppendUnicodeToString(&Destination, v20);
                if ( Handle )
                  ZwClose(Handle);
                v43 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, 0, 0LL);
                v17 = v43;
                if ( v43 < 0 )
                  break;
                if ( !v42 )
                  goto LABEL_63;
                *v42 = 92;
                v20 = v42;
              }
              Handle = 0LL;
LABEL_63:
              if ( v43 < 0 )
LABEL_102:
                Handle = 0LL;
            }
            else
            {
              RtlAppendUnicodeToString(&Destination, v20);
              v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
              if ( v17 < 0 )
                v17 = -1073741438;
            }
          }
          ZwClose(KeyHandle);
          if ( v17 >= 0 )
          {
LABEL_24:
            v15 = v58;
            goto LABEL_25;
          }
        }
        v56 = WdLogNewEntry5_WdTrace(v16);
        *(_QWORD *)(v56 + 24) = v17;
        WdLogEvent5_WdTrace(v56);
        goto LABEL_24;
      }
      v17 = -1073741766;
    }
    else
    {
      v17 = -1073741670;
    }
  }
LABEL_25:
  if ( v73 )
    *v73 = v17;
  if ( v15 )
    Win32FreePool();
  if ( v10 )
    Win32FreePool();
  v23 = WdLogNewEntry5_WdTrace(v15);
  *(_QWORD *)(v23 + 24) = v17;
  WdLogEvent5_WdTrace(v23);
  return Handle;
}
