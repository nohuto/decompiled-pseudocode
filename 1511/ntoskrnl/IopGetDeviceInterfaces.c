/*
 * XREFs of IopGetDeviceInterfaces @ 0x1404DD828
 * Callers:
 *     sub_140495DD4 @ 0x140495DD4 (sub_140495DD4.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     IoGetDeviceInterfaces @ 0x1404DD560 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404DD618 (PiCMGetDeviceInterfaceList.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1405FED88 (IopOpenSystemVariableDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x14040F490 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1404DDC2C (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404DDC6C (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404DE928 (_CmGetMatchingFilteredDeviceInterfaceList.c)
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
  __int64 v18; // r9
  PVOID v19; // r15
  PVOID v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  NTSTRSAFE_PWSTR v23; // r14
  unsigned int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // r8
  _WORD *i; // rsi
  __int64 v29; // rax
  _WORD *PoolWithTag; // rax
  WCHAR *v31; // rax
  int v32; // ebx
  unsigned int v33; // r14d
  int dwFlags; // [rsp+28h] [rbp-D8h]
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh]
  char cchDest_6; // [rsp+66h] [rbp-9Ah] BYREF
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  WCHAR *v42; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v44; // [rsp+90h] [rbp-70h]
  int v45; // [rsp+94h] [rbp-6Ch]
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v47; // [rsp+A0h] [rbp-60h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  size_t pcchRemaining; // [rsp+B8h] [rbp-48h] BYREF
  void *v51; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v52; // [rsp+C8h] [rbp-38h]
  _QWORD v53[5]; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v55; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v56[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v45 = a3;
  v52 = a5;
  v8 = 0LL;
  cchDest_5 = a4;
  v9 = 0;
  *a5 = 0LL;
  v10 = 0LL;
  v41 = (__int64)a6;
  P = 0LL;
  v11 = 0LL;
  v51 = 0LL;
  Handle = 0LL;
  v47 = 0LL;
  v42 = 0LL;
  cchDest = 0;
  v44 = 0;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v56);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_87;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v56, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
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
    goto LABEL_28;
  }
  if ( v16 >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0x400uLL,
                       (__int64)v56,
                       4u,
                       (__int64)Handle,
                       dwFlags,
                       (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                       (__int64)&v40,
                       &P,
                       &v46,
                       0);
    MatchingFilteredDeviceInterfaceList = ObjectProperty;
    if ( ObjectProperty < 0 || (_DWORD)v40 != 18 )
    {
      if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      {
        if ( ObjectProperty >= 0 )
          MatchingFilteredDeviceInterfaceList = -1073741823;
        goto LABEL_27;
      }
      v19 = P;
      goto LABEL_8;
    }
    v19 = P;
    v9 = 1;
    if ( (int)CmOpenDeviceInterfaceRegKey(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)P,
                0x30u,
                v18,
                131097,
                0,
                (__int64)&v47,
                0LL) < 0 )
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
      HIDWORD(v40) = 400;
      v31 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
      v42 = v31;
      v10 = v31;
      if ( !v31 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_26;
      }
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v19,
                  3u,
                  (__int64)v47,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v40,
                  (__int64)v31,
                  SHIDWORD(v40),
                  (__int64)&v40 + 4,
                  0) < 0
        || (_DWORD)v40 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v10) < 0
        || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      {
        goto LABEL_68;
      }
    }
    if ( (v45 & 1) == 0 )
    {
      v9 = 0;
      HIDWORD(v40) = 1;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v19,
                  3u,
                  (__int64)v47,
                  0LL,
                  (__int64)&DEVPKEY_DeviceInterface_Enabled,
                  (__int64)&v40,
                  (__int64)&cchDest_6,
                  1,
                  (__int64)&v40 + 4,
                  0) < 0
        || v40 != 0x100000011LL )
      {
        goto LABEL_69;
      }
      if ( cchDest_6 != -1 )
      {
LABEL_68:
        v9 = 0;
        goto LABEL_69;
      }
      v9 = 1;
    }
    cchDest_4 = 0;
    SeCaptureSubjectContext(&v55);
    v32 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 3, (__int64)v47, &v55, &cchDest_4);
    SeReleaseSubjectContext(&v55);
    if ( v32 < 0 || !cchDest_4 )
      goto LABEL_68;
LABEL_69:
    ZwClose(v47);
    if ( !v9 )
      goto LABEL_70;
LABEL_8:
    LODWORD(v8) = v46;
LABEL_9:
    if ( String1 )
    {
      MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v51, 0LL, &String1->Length);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_26;
    }
    memset(v53, 0, sizeof(v53));
    v20 = (PVOID)v53[0];
    if ( v9 )
      v20 = v19;
    v53[0] = v20;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v53[1]);
    v21 = 4096;
    cchDest = 4096;
    if ( v9 )
    {
      v33 = (unsigned int)v8 >> 1;
      if ( v33 >= 0x1000 )
      {
        v21 = v33 + 1;
        cchDest = v33 + 1;
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
      v44 = cchDest;
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
                                              PiPnpRtlCtx,
                                              (unsigned int)v56,
                                              (_DWORD)v51,
                                              (v45 & 1) == 0,
                                              (__int64)IopDeviceInterfaceFilterCallback,
                                              (__int64)v53,
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
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v53[1]);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_25;
    if ( !cchDest )
    {
      cchDest = 1;
      if ( !v44 )
      {
        ExFreePoolWithTag(v11, 0);
        v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
        if ( !v11 )
        {
          MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_25:
          v10 = v42;
LABEL_26:
          v6 = (_DWORD *)v41;
LABEL_27:
          v7 = String1;
          goto LABEL_28;
        }
      }
      *v11 = 0;
    }
    if ( !cchDest_5 )
    {
      for ( i = v11; *i; i += v29 + 1 )
      {
        LOBYTE(v26) = 1;
        MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v25, i, v26);
        if ( MatchingFilteredDeviceInterfaceList < 0 )
          break;
        v29 = -1LL;
        do
          ++v29;
        while ( i[v29] );
      }
    }
    goto LABEL_25;
  }
LABEL_28:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v52 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_32;
  }
  v8 = P;
LABEL_87:
  *v52 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v51, (__int64)v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
