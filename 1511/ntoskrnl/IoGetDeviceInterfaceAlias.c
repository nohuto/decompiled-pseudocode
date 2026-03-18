/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1404E377C
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1404E35C4 (PiCMGetDeviceInterfaceAlias.c)
 *     VerifierIoGetDeviceInterfaceAlias @ 0x1406C075C (VerifierIoGetDeviceInterfaceAlias.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     _CmValidateDeviceInterfaceName @ 0x14043AD30 (_CmValidateDeviceInterfaceName.c)
 *     _PnpGetObjectProperty @ 0x14043CBB0 (_PnpGetObjectProperty.c)
 *     PnpUnicodeStringToWstrFree @ 0x14043F59C (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x140440730 (PiPnpRtlApplyMandatoryFilters.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140442160 (_CmOpenDeviceInterfaceRegKey.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     _PnpStringFromGuid @ 0x14045C050 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E5254 (_CmGetDeviceInterfaceName.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1404E6310 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1404E6394 (_CmGetDeviceInterfaceReferenceString.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rsi
  void *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  WCHAR *v18; // rdi
  char v19; // r12
  __int64 v20; // r9
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  int IsServiceSession; // [rsp+20h] [rbp-E0h]
  int IsServiceSessiona; // [rsp+20h] [rbp-E0h]
  char v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+61h] [rbp-9Fh] BYREF
  unsigned int v29; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v30; // [rsp+68h] [rbp-98h] BYREF
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v34[8]; // [rsp+88h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-70h] BYREF
  wchar_t v36[40]; // [rsp+B0h] [rbp-50h] BYREF

  v27 = 0;
  *(_QWORD *)v31 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
    goto LABEL_25;
  }
  v9 = PnpUnicodeStringToWstr(v31, 0LL, &SymbolicLinkName->Length);
  v8 = *(void **)v31;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( CmValidateDeviceInterfaceName(v10, *(__int64 *)v31) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_29;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 3, 0LL, &SubjectContext, &v27);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !v27 )
      {
        ObjectProperty = -1073741790;
        goto LABEL_29;
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
          v14 = *(_QWORD *)v31;
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
          {
LABEL_24:
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v8 = *(void **)v31;
LABEL_25:
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            goto LABEL_29;
          }
          if ( v32 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_24;
          }
          v29 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v7, 128LL, &v29);
            if ( ObjectProperty != -1073741789 )
              goto LABEL_14;
            ExFreePoolWithTag(v7, 0);
            v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x20207050u);
            if ( v7 )
            {
              ObjectProperty = CmGetDeviceInterfaceReferenceString(v22, v14, v7, v29, &v29);
LABEL_14:
              if ( ObjectProperty == -1073741772 )
              {
                ObjectProperty = 0;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, &v28);
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              v30 = 512;
              v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
              if ( v18 )
              {
                v19 = v28;
                LOBYTE(IsServiceSession) = v28;
                ObjectProperty = CmGetDeviceInterfaceName(v17, v36, v6, v7, IsServiceSession, v18, 512, &v30);
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
                v23 = v30;
                v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v30, 0x20207050u);
                if ( v18 )
                {
                  LOBYTE(IsServiceSessiona) = v19;
                  ObjectProperty = CmGetDeviceInterfaceName(v24, v36, v6, v7, IsServiceSessiona, v18, v23, &v30);
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
