/*
 * XREFs of PiCMCreateDevice @ 0x1406462C8
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     KeEnterCriticalRegion @ 0x14000AA00 (KeEnterCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchLengthW @ 0x1400C2600 (RtlStringCchLengthW.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     _PnpCtxRegDeleteValue @ 0x1404D2EA8 (_PnpCtxRegDeleteValue.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _CmOpenDeviceRegKey @ 0x1404DFCC0 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x1404E0950 (_CmValidateDeviceName.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _CmIsRootDevice @ 0x14050CCF4 (_CmIsRootDevice.c)
 *     _CmCreateDevice @ 0x14050D534 (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14050EB84 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PpDeviceRegistration @ 0x14050F4A8 (PpDeviceRegistration.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062EA84 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140645B5C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  wchar_t *PoolWithTag; // rdi
  char v9; // si
  int v10; // r12d
  _WORD *v11; // r15
  int DeviceInputData; // ebx
  signed int inited; // ebx
  const wchar_t *v14; // r15
  char v15; // r13
  __int64 v16; // rcx
  unsigned int v17; // r8d
  int v18; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // di
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rcx
  bool v26; // zf
  int DeviceRegProp; // eax
  __int64 v28; // rdx
  int v29; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  unsigned __int8 v31; // cl
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  _BYTE v36[16]; // [rsp+58h] [rbp-89h] BYREF
  unsigned int v37; // [rsp+68h] [rbp-79h] BYREF
  int v38; // [rsp+6Ch] [rbp-75h] BYREF
  int v39; // [rsp+70h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-69h] BYREF
  int v41; // [rsp+80h] [rbp-61h] BYREF
  int v42; // [rsp+84h] [rbp-5Dh] BYREF
  int v43; // [rsp+88h] [rbp-59h] BYREF
  HANDLE v44; // [rsp+90h] [rbp-51h] BYREF
  size_t pcchLength; // [rsp+98h] [rbp-49h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-41h]
  PVOID P; // [rsp+A8h] [rbp-39h] BYREF
  UNICODE_STRING v48; // [rsp+B0h] [rbp-31h] BYREF
  char v49[4]; // [rsp+C0h] [rbp-21h] BYREF
  int v50; // [rsp+C4h] [rbp-1Dh]
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+C8h] [rbp-19h]
  unsigned int v52; // [rsp+D0h] [rbp-11h]
  PCWSTR SourceString; // [rsp+D8h] [rbp-9h]
  unsigned int v54; // [rsp+E0h] [rbp-1h]
  int v55; // [rsp+E4h] [rbp+3h]
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+7h] BYREF

  v38 = 0;
  v41 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  v9 = 0;
  Object = 0LL;
  v10 = 0;
  Handle = 0LL;
  v11 = 0LL;
  P = 0LL;
  pcchLength = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, v49);
  if ( DeviceInputData < 0 )
    goto LABEL_33;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_21;
  }
  v14 = pszSrc;
  if ( pszSrc && v52 >= 2 && SourceString && v54 >= 2 )
  {
    if ( !a3 || a4 < 0x14 || (v15 = v50, (v50 & 0xFFFFFFF0) != 0) )
    {
      inited = -1073741811;
      v11 = 0LL;
LABEL_21:
      v17 = a4;
      goto LABEL_22;
    }
    if ( !CmIsRootDevice(SourceString) )
    {
      inited = -1073741811;
LABEL_15:
      v11 = 0LL;
      v9 = 0;
      goto LABEL_21;
    }
    inited = PiPnpRtlBeginOperation((__int64 **)&P);
    if ( inited < 0 )
      goto LABEL_15;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
    if ( !PoolWithTag )
    {
      inited = -1073741670;
LABEL_19:
      v9 = 0;
      goto LABEL_20;
    }
    if ( (v15 & 4) != 0 )
    {
      inited = PiCMGenerateDeviceInstance(v14);
      if ( (v15 & 2) != 0 )
      {
LABEL_42:
        v9 = 0;
LABEL_43:
        v11 = 0LL;
        goto LABEL_44;
      }
    }
    else
    {
      inited = CmValidateDeviceName(v16, v14);
    }
    if ( inited < 0 )
    {
      v11 = 0LL;
      v9 = 0;
      goto LABEL_21;
    }
    if ( (v15 & 4) == 0 )
    {
      inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v14, 0LL, 0LL, 0x800u);
      if ( inited < 0 )
        goto LABEL_19;
    }
    inited = CmOpenDeviceRegKey(
               *(__int64 *)&PiPnpRtlCtx,
               (__int64)PoolWithTag,
               0x10u,
               0,
               131103,
               0,
               (__int64)&Handle,
               0LL);
    if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
      goto LABEL_42;
    if ( (v15 & 2) != 0 )
    {
      if ( Handle )
      {
        inited = -1073741771;
        goto LABEL_19;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      v36[0] = 0;
      v9 = 1;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v44, v36, 0);
      if ( inited < 0 )
        goto LABEL_20;
      if ( !v36[0] )
      {
        inited = -1073741771;
        ZwClose(v44);
        goto LABEL_20;
      }
      v42 = 1;
      inited = PnpCtxRegSetValue(v22, v44, L"Phantom", 4u, &v42, 4u);
      ZwClose(v44);
      if ( inited < 0 )
        goto LABEL_20;
      ExReleaseResourceLite(&PnpRegistryDeviceResource);
      KeLeaveCriticalRegion();
      v9 = 0;
      goto LABEL_43;
    }
    if ( Handle )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, PoolWithTag) >= 0 )
      {
        PpDevNodeLockTree(0);
        v23 = PnpDeviceObjectFromDeviceInstance((__int64)&DestinationString);
        Object = v23;
        if ( v23 )
          v24 = *(_QWORD *)(v23[39] + 40LL);
        else
          v24 = 0LL;
        PpDevNodeUnlockTree(0);
        if ( v24 )
        {
          v26 = (*(_DWORD *)(v24 + 396) & 0x10000) == 0;
          v9 = 0;
          goto LABEL_69;
        }
        PiPnpRtlEnsureObjectCached(v25, PoolWithTag);
      }
      v9 = 0;
      goto LABEL_73;
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v36[0] = 0;
    v9 = 1;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &Handle, v36, 0);
    if ( inited < 0 )
      goto LABEL_20;
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
    v26 = v36[0] == 0;
    v9 = 0;
LABEL_69:
    if ( v26 )
    {
      inited = -1073741771;
      goto LABEL_20;
    }
LABEL_73:
    inited = RtlInitUnicodeStringEx(&v48, PoolWithTag);
    if ( inited < 0 )
      goto LABEL_20;
    v37 = 4;
    v39 = 0;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)PoolWithTag,
                      (__int64)Handle,
                      11,
                      (__int64)&v39,
                      (__int64)&v38,
                      (__int64)&v37,
                      0);
    v29 = v38;
    if ( DeviceRegProp < 0 )
      v29 = 0;
    v38 = v29;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v48.Length, v28, &v41);
    v31 = v41;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v31 = 0;
    if ( (((unsigned __int8)v38 | v31) & 2) != 0 || (v38 & 0x10) != 0 )
    {
      inited = -1073741808;
      goto LABEL_20;
    }
    inited = PiInitializeDevice(&v48);
    if ( inited < 0 )
    {
LABEL_20:
      v11 = 0LL;
      goto LABEL_21;
    }
    v37 = 4;
    if ( (int)PnpCtxRegQueryValue(v32, Handle, L"Phantom", &v39, &v43, &v37) < 0 || v39 != 4 || (v34 = v43, v37 != 4) )
      v34 = 0;
    if ( v34 )
      PnpCtxRegDeleteValue(v33, Handle, L"Phantom");
    if ( (v15 & 8) != 0 )
    {
      v37 = 512;
      v11 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
      if ( !v11 )
      {
        inited = -1073741670;
        goto LABEL_21;
      }
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)PoolWithTag,
                  (__int64)Handle,
                  5,
                  (__int64)&v39,
                  (__int64)v11,
                  (__int64)&v37,
                  0) >= 0
        && v39 == 1
        && v37 <= 0x200
        && *v11 )
      {
        inited = RtlInitUnicodeStringEx(&v48, PoolWithTag);
        if ( inited < 0 )
          goto LABEL_21;
        LOBYTE(v35) = 1;
        inited = PpDeviceRegistration((__int64)&v48, v35, 0LL, 0);
        if ( inited >= 0 )
          goto LABEL_45;
      }
      goto LABEL_44;
    }
    goto LABEL_43;
  }
  inited = -1073741811;
  v11 = 0LL;
LABEL_44:
  if ( inited < 0 )
    goto LABEL_21;
LABEL_45:
  inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
  if ( inited < 0 )
  {
    v17 = a4;
    v10 = 0;
  }
  else
  {
    v17 = a4;
    v10 = pcchLength + 1;
    if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
      inited = -1073741789;
  }
  if ( inited >= 0 )
  {
    v18 = PiCMReturnBufferResultData(inited, 2 * v10, 0, PoolWithTag, 2 * v10, v55, a3, v17, a6);
    goto LABEL_23;
  }
LABEL_22:
  v18 = PiCMReturnBufferResultData(inited, 2 * v10, 0, 0LL, 0, v55, a3, v17, a6);
LABEL_23:
  DeviceInputData = v18;
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v9 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegion();
  }
LABEL_33:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( pszSrc )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, (void *)pszSrc);
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)DeviceInputData;
}
