/*
 * XREFs of IopGetDeviceInterfaces @ 0x1404D9968
 * Callers:
 *     ExpHwidProcessInterface @ 0x1404BE6E8 (ExpHwidProcessInterface.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     IoGetDeviceInterfaces @ 0x1404D8C7C (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404D8EBC (PiCMGetDeviceInterfaceList.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x140628E70 (IopOpenSystemVariableDevice.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404D946C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404D9D6C (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404D9DAC (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  PCUNICODE_STRING v7; // r13
  PVOID v8; // r14
  char v9; // si
  WCHAR *v10; // r12
  _WORD *v11; // rdi
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int ObjectProperty; // eax
  int v18; // r9d
  PVOID v19; // r15
  PVOID v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  NTSTRSAFE_PWSTR v23; // r14
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r8
  _WORD *i; // rsi
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _WORD *PoolWithTag; // rax
  WCHAR *v34; // rax
  int v35; // ebx
  unsigned int v36; // r14d
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  WCHAR *v44; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+94h] [rbp-6Ch]
  unsigned int v48; // [rsp+98h] [rbp-68h]
  HANDLE v49; // [rsp+A0h] [rbp-60h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp-58h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v54; // [rsp+C8h] [rbp-38h]
  _QWORD v55[5]; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v57; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v58[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v47 = a3;
  v54 = a5;
  v8 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v43 = (__int64)a6;
  P = 0LL;
  v11 = 0LL;
  v53 = 0LL;
  Handle = 0LL;
  v49 = 0LL;
  v44 = 0LL;
  cchDest = 0;
  v48 = 0;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v58);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_86;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v58, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    cchDest = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x20207050u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_32;
  }
  if ( v16 >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0x400uLL,
                       (__int64)Handle,
                       0LL,
                       (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                       (__int64)&v42,
                       (__int64)&P,
                       (__int64)&v46,
                       0);
    MatchingFilteredDeviceInterfaceList = ObjectProperty;
    if ( ObjectProperty < 0 || (_DWORD)v42 != 18 )
    {
      if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      {
        if ( ObjectProperty >= 0 )
          MatchingFilteredDeviceInterfaceList = -1073741823;
        goto LABEL_31;
      }
      v19 = P;
      goto LABEL_8;
    }
    v19 = P;
    v9 = 1;
    if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v18, 131097, 0, (__int64)&v49, 0LL) < 0 )
    {
      v9 = 0;
LABEL_70:
      ExFreePoolWithTag(v19, 0);
      v19 = 0LL;
      P = 0LL;
      goto LABEL_9;
    }
    if ( String1 )
    {
      HIDWORD(v42) = 400;
      v34 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
      v44 = v34;
      v10 = v34;
      if ( !v34 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_30;
      }
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v19,
                  3,
                  (_DWORD)v49,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v42,
                  (__int64)v34,
                  HIDWORD(v42),
                  (__int64)&v42 + 4,
                  0) < 0
        || (_DWORD)v42 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v10) < 0
        || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      {
        goto LABEL_68;
      }
    }
    if ( (v47 & 1) == 0 )
    {
      v9 = 0;
      HIDWORD(v42) = 1;
      if ( (int)PnpGetObjectProperty(
                  PiPnpRtlCtx,
                  (_DWORD)v19,
                  3,
                  (_DWORD)v49,
                  0LL,
                  (__int64)&DEVPKEY_DeviceInterface_Enabled,
                  (__int64)&v42,
                  (__int64)&cchDest_5,
                  1,
                  (__int64)&v42 + 4,
                  0) < 0
        || v42 != 0x100000011LL )
      {
        goto LABEL_69;
      }
      if ( cchDest_5 != -1 )
      {
LABEL_68:
        v9 = 0;
        goto LABEL_69;
      }
      v9 = 1;
    }
    cchDest_4 = 0;
    SeCaptureSubjectContext(&v57);
    v35 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v19, 3, (int)v49, (BOOLEAN)&v57, (__int64)&cchDest_4);
    SeReleaseSubjectContext(&v57);
    if ( v35 < 0 || !cchDest_4 )
      goto LABEL_68;
LABEL_69:
    ZwClose(v49);
    if ( !v9 )
      goto LABEL_70;
LABEL_8:
    LODWORD(v8) = v46;
LABEL_9:
    if ( String1 )
    {
      MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v53, 0LL, String1);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_30;
    }
    memset(v55, 0, sizeof(v55));
    v20 = (PVOID)v55[0];
    if ( v9 )
      v20 = v19;
    v55[0] = v20;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v55[1]);
    v21 = 4096;
    cchDest = 4096;
    if ( v9 )
    {
      v36 = (unsigned int)v8 >> 1;
      if ( v36 >= 0x1000 )
      {
        v21 = v36 + 1;
        cchDest = v36 + 1;
      }
    }
    MatchingFilteredDeviceInterfaceList = -1073741789;
    v22 = 0;
    while ( v22 < 5 )
    {
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        v21 = cchDest;
      }
      v11 = ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x20207050u);
      if ( !v11 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        break;
      }
      v48 = cchDest;
      if ( v9 )
      {
        MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(
                                                v11,
                                                cchDest,
                                                (NTSTRSAFE_PCWSTR)v19,
                                                &ppszDestEnd,
                                                &pcchRemaining,
                                                0x800u);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          break;
        if ( !pcchRemaining )
        {
          MatchingFilteredDeviceInterfaceList = -1073741823;
          break;
        }
        v24 = pcchRemaining - 1;
        v23 = ppszDestEnd + 1;
        --pcchRemaining;
        ++ppszDestEnd;
      }
      else
      {
        v23 = v11;
        ppszDestEnd = v11;
        v24 = cchDest;
        pcchRemaining = cchDest;
      }
      MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                              *(__int64 *)&PiPnpRtlCtx,
                                              (__int64)v58,
                                              v53,
                                              (v47 & 1) == 0,
                                              (__int64)IopDeviceInterfaceFilterCallback,
                                              (__int64)v55,
                                              (__int64)v23,
                                              v24,
                                              (__int64)&cchDest,
                                              0);
      ++v22;
      v21 = v23 - v11 + cchDest;
      cchDest = v21;
      if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
        break;
    }
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v55[1]);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_29;
    if ( !cchDest )
    {
      cchDest = 1;
      if ( !v48 )
      {
        ExFreePoolWithTag(v11, 0);
        v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
        if ( !v11 )
        {
          MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_29:
          v10 = v44;
LABEL_30:
          v6 = (_DWORD *)v43;
LABEL_31:
          v7 = String1;
          goto LABEL_32;
        }
      }
      *v11 = 0;
    }
    if ( !cchDest_6 )
    {
      for ( i = v11; *i; i += v28 + 1 )
      {
        LOBYTE(v26) = 1;
        MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v25, i, v26);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          break;
        v28 = -1LL;
        do
          ++v28;
        while ( i[v28] );
      }
    }
    goto LABEL_29;
  }
LABEL_32:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v54 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_36;
  }
  v8 = P;
LABEL_86:
  *v54 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v53, v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
