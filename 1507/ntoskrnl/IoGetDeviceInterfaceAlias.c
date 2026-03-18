/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x14055E874
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x14055E6C0 (PiCMGetDeviceInterfaceAlias.c)
 *     VerifierIoGetDeviceInterfaceAlias @ 0x140741F50 (VerifierIoGetDeviceInterfaceAlias.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _CmValidateDeviceInterfaceName @ 0x140436820 (_CmValidateDeviceInterfaceName.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     _PnpGetObjectProperty @ 0x140438FD0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14043EC3C (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14043F154 (_CmOpenDeviceInterfaceRegKey.c)
 *     _PnpStringFromGuid @ 0x140440494 (_PnpStringFromGuid.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     _CmGetDeviceInterfaceName @ 0x140459864 (_CmGetDeviceInterfaceName.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x14055EBD4 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14055EC58 (_CmGetDeviceInterfaceReferenceString.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rdi
  __int64 v8; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rcx
  size_t v15; // rcx
  wchar_t *v16; // rsi
  char v17; // r12
  __int64 v18; // r9
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax
  __int64 v22; // rcx
  unsigned int v23; // ebx
  size_t v24; // rcx
  size_t v25; // [rsp+30h] [rbp-D0h]
  size_t v26; // [rsp+30h] [rbp-D0h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[8]; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  WCHAR v36[40]; // [rsp+B0h] [rbp-50h] BYREF

  v27 = 0;
  *(_QWORD *)v31 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
LABEL_26:
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    goto LABEL_30;
  }
  ObjectProperty = PnpUnicodeStringToWstr(v31, 0LL, &SymbolicLinkName->Length);
  if ( ObjectProperty >= 0 )
  {
    if ( CmValidateDeviceInterfaceName(v8, *(__int64 *)v31) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_30;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(__int64 *)v31,
                       3,
                       0LL,
                       &SubjectContext,
                       &v27);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v27 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_30;
      }
      ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v36);
      if ( ObjectProperty >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v12 = *(_QWORD *)v31;
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(__int64 *)v31,
                             3u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             (__int64)&v32,
                             (__int64)PoolWithTag,
                             400,
                             (__int64)v34,
                             0);
          if ( ObjectProperty < 0 )
            goto LABEL_24;
          if ( v32 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_24;
          }
          v29 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            ObjectProperty = CmGetDeviceInterfaceReferenceString(v13, v12, v7, 128LL, &v29);
            if ( ObjectProperty == -1073741789 )
            {
              ExFreePoolWithTag(v7, 0);
              v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x20207050u);
              if ( !v7 )
                goto LABEL_33;
              ObjectProperty = CmGetDeviceInterfaceReferenceString(v22, v12, v7, v29, &v29);
            }
            if ( ObjectProperty == -1073741772 )
            {
              ObjectProperty = 0;
              ExFreePoolWithTag(v7, 0);
              v7 = 0LL;
            }
            if ( ObjectProperty < 0 )
              goto LABEL_24;
            ObjectProperty = CmGetDeviceInterfacePathFormat(v14, v12, &v28);
            if ( ObjectProperty < 0 )
              goto LABEL_24;
            v30 = 512;
            v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
            if ( v16 )
            {
              v17 = v28;
              LODWORD(v25) = 512;
              ObjectProperty = CmGetDeviceInterfaceName(
                                 v15,
                                 v36,
                                 (const wchar_t *)v6,
                                 (const wchar_t *)v7,
                                 v28,
                                 v16,
                                 v25,
                                 &v30);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_20:
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v16);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       *(__int64 **)&PiPnpRtlCtx,
                                       (__int64)v16,
                                       0x30u,
                                       v18,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty < 0 )
                      RtlFreeAnsiString(AliasSymbolicLinkName);
                    else
                      ZwClose(Handle);
                  }
                }
                goto LABEL_24;
              }
              ExFreePoolWithTag(v16, 0);
              v23 = v30;
              v16 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v30, 0x20207050u);
              if ( v16 )
              {
                LODWORD(v26) = v23;
                ObjectProperty = CmGetDeviceInterfaceName(
                                   v24,
                                   v36,
                                   (const wchar_t *)v6,
                                   (const wchar_t *)v7,
                                   v17,
                                   v16,
                                   v26,
                                   &v30);
                goto LABEL_20;
              }
              ObjectProperty = -1073741670;
LABEL_24:
              ExReleaseResourceLite(&PnpRegistryDeviceResource);
              v19 = KeGetCurrentThread();
              v20 = v19->KernelApcDisable + 1;
              v19->KernelApcDisable = v20;
              if ( !v20
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
                && !v19->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              goto LABEL_26;
            }
          }
        }
LABEL_33:
        ObjectProperty = -1073741670;
        goto LABEL_24;
      }
    }
  }
LABEL_30:
  PnpUnicodeStringToWstrFree(*(void **)v31, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
