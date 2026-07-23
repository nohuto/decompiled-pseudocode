/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x140529090
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x140528EE0 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     _PnpStringFromGuid @ 0x1404CB360 (_PnpStringFromGuid.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1404DCF14 (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmValidateDeviceInterfaceName @ 0x1404DF4B0 (_CmValidateDeviceInterfaceName.c)
 *     _PnpGetObjectProperty @ 0x1404E1740 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     _CmGetDeviceInterfaceName @ 0x140512634 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1405293D0 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140529454 (_CmGetDeviceInterfaceReferenceString.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rsi
  wchar_t *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  size_t v17; // rcx
  wchar_t *v18; // rdi
  char v19; // r12
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  unsigned int v26; // ebx
  size_t v27; // rcx
  size_t v28; // [rsp+30h] [rbp-D0h]
  size_t v29; // [rsp+30h] [rbp-D0h]
  char v30; // [rsp+60h] [rbp-A0h] BYREF
  char v31; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v32; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34[2]; // [rsp+70h] [rbp-90h] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v36[4]; // [rsp+7Ch] [rbp-84h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  WCHAR v39[40]; // [rsp+B0h] [rbp-50h] BYREF

  v30 = 0;
  *(_QWORD *)v34 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
    goto LABEL_25;
  }
  v9 = PnpUnicodeStringToWstr(v34, 0LL, &SymbolicLinkName->Length);
  v8 = *(wchar_t **)v34;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( CmValidateDeviceInterfaceName(v10, *(__int64 *)v34) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_29;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, v8, 3, 0LL, &SubjectContext, &v30);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v30 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_29;
      }
      ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v39);
      if ( ObjectProperty >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = *(_QWORD *)v34;
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(__int64 *)v34,
                             3u,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             (__int64)&v35,
                             (__int64)PoolWithTag,
                             400,
                             (__int64)v36,
                             0);
          if ( ObjectProperty < 0 )
          {
LABEL_24:
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
            v8 = *(wchar_t **)v34;
LABEL_25:
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            goto LABEL_29;
          }
          if ( v35 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_24;
          }
          v32 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v7, 128LL, &v32);
            if ( ObjectProperty != -1073741789 )
              goto LABEL_14;
            ExFreePoolWithTag(v7, 0);
            v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v32, 0x20207050u);
            if ( v7 )
            {
              ObjectProperty = CmGetDeviceInterfaceReferenceString(v25, v14, v7, v32, &v32);
LABEL_14:
              if ( ObjectProperty == -1073741772 )
              {
                ObjectProperty = 0;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, &v31);
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              v33 = 512;
              v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
              if ( v18 )
              {
                v19 = v31;
                LODWORD(v28) = 512;
                ObjectProperty = CmGetDeviceInterfaceName(
                                   v17,
                                   v39,
                                   (const wchar_t *)v6,
                                   (const wchar_t *)v7,
                                   v31,
                                   v18,
                                   v28,
                                   &v33);
                if ( ObjectProperty != -1073741789 )
                {
LABEL_20:
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                    if ( ObjectProperty >= 0 )
                    {
                      ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         (__int64)v18,
                                         0x30u,
                                         v20,
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
                ExFreePoolWithTag(v18, 0);
                v26 = v33;
                v18 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v33, 0x20207050u);
                if ( v18 )
                {
                  LODWORD(v29) = v26;
                  ObjectProperty = CmGetDeviceInterfaceName(
                                     v27,
                                     v39,
                                     (const wchar_t *)v6,
                                     (const wchar_t *)v7,
                                     v19,
                                     v18,
                                     v29,
                                     &v33);
                  goto LABEL_20;
                }
              }
            }
          }
        }
        ObjectProperty = -1073741670;
        goto LABEL_24;
      }
    }
  }
LABEL_29:
  PnpUnicodeStringToWstrFree(v8, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
