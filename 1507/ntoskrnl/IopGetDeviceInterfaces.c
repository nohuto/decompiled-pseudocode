/*
 * XREFs of IopGetDeviceInterfaces @ 0x140457F6C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     IoGetDeviceInterfaces @ 0x140457D34 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x140457DA8 (PiCMGetDeviceInterfaceList.c)
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1406798D0 (IopOpenSystemVariableDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14043F154 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140458398 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1404583D8 (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1404587AC (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
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
  __int64 v28; // rax
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  _WORD *PoolWithTag; // rax
  WCHAR *v33; // rax
  int v34; // ebx
  unsigned int v35; // r14d
  int dwFlags; // [rsp+28h] [rbp-D8h]
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh]
  char cchDest_6; // [rsp+66h] [rbp-9Ah] BYREF
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  WCHAR *v44; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+94h] [rbp-6Ch]
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  HANDLE v49; // [rsp+A0h] [rbp-60h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-50h] BYREF
  size_t pcchRemaining; // [rsp+B8h] [rbp-48h] BYREF
  void *v53; // [rsp+C0h] [rbp-40h] BYREF
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
  cchDest_5 = a4;
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
  v46 = 0;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v58);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_90;
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
    goto LABEL_33;
  }
  if ( v16 >= 0 )
  {
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0x400uLL,
                       (int)v58,
                       4,
                       (__int64)Handle,
                       dwFlags,
                       (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                       (__int64)&v42,
                       &P,
                       &v48,
                       0);
    MatchingFilteredDeviceInterfaceList = ObjectProperty;
    if ( ObjectProperty < 0 || (_DWORD)v42 != 18 )
    {
      if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      {
        if ( ObjectProperty >= 0 )
          MatchingFilteredDeviceInterfaceList = -1073741823;
        goto LABEL_32;
      }
      v19 = P;
      goto LABEL_8;
    }
    v19 = P;
    v9 = 1;
    if ( (int)CmOpenDeviceInterfaceRegKey(
                *(__int64 **)&PiPnpRtlCtx,
                (__int64)P,
                0x30u,
                v18,
                131097,
                0,
                (__int64)&v49,
                0LL) < 0 )
    {
      v9 = 0;
LABEL_73:
      ExFreePoolWithTag(v19, 0);
      v19 = 0LL;
      P = 0LL;
      goto LABEL_9;
    }
    if ( String1 )
    {
      HIDWORD(v42) = 400;
      v33 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
      v44 = v33;
      v10 = v33;
      if ( !v33 )
      {
        MatchingFilteredDeviceInterfaceList = -1073741670;
        goto LABEL_31;
      }
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v19,
                  3u,
                  (__int64)v49,
                  0LL,
                  (__int64)&DEVPKEY_Device_InstanceId,
                  (__int64)&v42,
                  (__int64)v33,
                  SHIDWORD(v42),
                  (__int64)&v42 + 4,
                  0) < 0
        || (_DWORD)v42 != 18
        || RtlInitUnicodeStringEx(&DestinationString, v10) < 0
        || !RtlEqualUnicodeString(String1, &DestinationString, 1u) )
      {
        goto LABEL_71;
      }
    }
    if ( (v47 & 1) == 0 )
    {
      v9 = 0;
      HIDWORD(v42) = 1;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)v19,
                  3u,
                  (__int64)v49,
                  0LL,
                  (__int64)&DEVPKEY_DeviceInterface_Enabled,
                  (__int64)&v42,
                  (__int64)&cchDest_6,
                  1,
                  (__int64)&v42 + 4,
                  0) < 0
        || v42 != 0x100000011LL )
      {
        goto LABEL_72;
      }
      if ( cchDest_6 != -1 )
      {
LABEL_71:
        v9 = 0;
        goto LABEL_72;
      }
      v9 = 1;
    }
    cchDest_4 = 0;
    SeCaptureSubjectContext(&v57);
    v34 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 3, (__int64)v49, &v57, &cchDest_4);
    SeReleaseSubjectContext(&v57);
    if ( v34 < 0 || !cchDest_4 )
      goto LABEL_71;
LABEL_72:
    ZwClose(v49);
    if ( !v9 )
      goto LABEL_73;
LABEL_8:
    LODWORD(v8) = v48;
LABEL_9:
    if ( String1 )
    {
      MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v53, 0LL, &String1->Length);
      if ( MatchingFilteredDeviceInterfaceList < 0 )
        goto LABEL_31;
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
      v35 = (unsigned int)v8 >> 1;
      if ( v35 >= 0x1000 )
      {
        v21 = v35 + 1;
        cchDest = v35 + 1;
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
      v46 = cchDest;
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
                                              (unsigned int)v58,
                                              (_DWORD)v53,
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
      goto LABEL_30;
    if ( !cchDest )
    {
      cchDest = 1;
      if ( !v46 )
      {
        ExFreePoolWithTag(v11, 0);
        v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u);
        if ( !v11 )
        {
          MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_30:
          v10 = v44;
LABEL_31:
          v6 = (_DWORD *)v43;
LABEL_32:
          v7 = String1;
          goto LABEL_33;
        }
      }
      *v11 = 0;
    }
    if ( !cchDest_5 )
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
    goto LABEL_30;
  }
LABEL_33:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v29 = KeGetCurrentThread();
  v30 = v29->KernelApcDisable + 1;
  v29->KernelApcDisable = v30;
  if ( !v30
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
    && !v29->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v54 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_39;
  }
  v8 = P;
LABEL_90:
  *v54 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_39:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v53, (__int64)v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
