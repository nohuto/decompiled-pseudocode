/*
 * XREFs of PiCMCreateDevice @ 0x140611DAC
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14008FB20 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140090110 (RtlStringCchCopyExW.c)
 *     RtlStringCchLengthW @ 0x140090A3C (RtlStringCchLengthW.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PpDeviceRegistration @ 0x1403B91E8 (PpDeviceRegistration.c)
 *     PiCMReturnBufferResultData @ 0x14043AC34 (PiCMReturnBufferResultData.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043AFD0 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x14043BC80 (_CmValidateDeviceName.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     _CmGetDeviceStatus @ 0x14045BF1C (_CmGetDeviceStatus.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1404B1458 (_CmIsRootDevice.c)
 *     _PnpCtxRegDeleteValue @ 0x1404EBE98 (_PnpCtxRegDeleteValue.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404EFB98 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _CmCreateDevice @ 0x1404F0DA8 (_CmCreateDevice.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140604BD0 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x14061165C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 */

__int64 __fastcall PiCMCreateDevice(ULONG64 a1, unsigned int a2, _DWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // esi
  _DWORD *v7; // r12
  wchar_t *PoolWithTag; // rdi
  int v9; // r14d
  _WORD *v10; // r13
  int DeviceInputData; // ebx
  signed int inited; // ebx
  const wchar_t *v13; // r15
  char v14; // r12
  int v15; // eax
  char PreviousMode; // di
  bool v18; // si
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rcx
  int DeviceStatus; // eax
  __int64 v23; // rcx
  int DeviceRegProp; // eax
  __int64 v25; // rdx
  int v26; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v28; // dl
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // [rsp+38h] [rbp-99h]
  _BYTE v34[4]; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-75h] BYREF
  int v36; // [rsp+60h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-69h] BYREF
  int v38; // [rsp+70h] [rbp-61h] BYREF
  int v39; // [rsp+74h] [rbp-5Dh] BYREF
  int v40; // [rsp+78h] [rbp-59h] BYREF
  HANDLE v41; // [rsp+80h] [rbp-51h] BYREF
  int v42; // [rsp+88h] [rbp-49h] BYREF
  size_t pcchLength; // [rsp+90h] [rbp-41h] BYREF
  PVOID v44; // [rsp+98h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-31h] BYREF
  char v46[4]; // [rsp+B0h] [rbp-21h] BYREF
  int v47; // [rsp+B4h] [rbp-1Dh]
  PVOID P; // [rsp+B8h] [rbp-19h]
  unsigned int v49; // [rsp+C0h] [rbp-11h]
  PVOID v50; // [rsp+C8h] [rbp-9h]
  unsigned int v51; // [rsp+D0h] [rbp-1h]
  int v52; // [rsp+D4h] [rbp+3h]
  int v53; // [rsp+D8h] [rbp+7h] BYREF
  int v54; // [rsp+DCh] [rbp+Bh] BYREF
  _DWORD v55[14]; // [rsp+E0h] [rbp+Fh] BYREF

  v6 = a4;
  v38 = 0;
  v7 = a3;
  v39 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Handle = 0LL;
  v9 = 0;
  v44 = 0LL;
  v10 = 0LL;
  pcchLength = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, v46);
  if ( DeviceInputData < 0 )
    goto LABEL_19;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_12;
  }
  v13 = (const wchar_t *)P;
  if ( !P || v49 < 2 || !v50 || v51 < 2 )
  {
    inited = -1073741811;
    goto LABEL_35;
  }
  if ( !v7 || v6 < 0x14 || (v14 = v47, (v47 & 0xFFFFFFF0) != 0) || (v18 = (v47 & 2) != 0, !CmIsRootDevice((PCWSTR)v50)) )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  inited = PiPnpRtlBeginOperation((__int64 **)&v44);
  if ( inited < 0 )
    goto LABEL_12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x34706E50u);
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  v20 = v14 & 4;
  if ( v20 )
  {
    inited = PiCMGenerateDeviceInstance(v13);
    if ( v18 )
    {
LABEL_34:
      v6 = a4;
      v7 = a3;
LABEL_35:
      if ( inited >= 0 )
      {
        inited = RtlStringCchLengthW(PoolWithTag, 0xC8uLL, &pcchLength);
        if ( inited < 0 )
        {
          v9 = 0;
        }
        else
        {
          v9 = pcchLength + 1;
          if ( (unsigned __int64)v6 - 20 < 2 * (pcchLength + 1) )
            inited = -1073741789;
        }
        if ( inited >= 0 )
        {
          v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, PoolWithTag, 2 * v9, v52, v7, v6, a6);
          goto LABEL_13;
        }
      }
      goto LABEL_12;
    }
  }
  else
  {
    inited = CmValidateDeviceName(v19, v13);
  }
  if ( inited < 0 )
    goto LABEL_12;
  if ( !v20 )
  {
    inited = RtlStringCchCopyExW(PoolWithTag, 0xC8uLL, v13, 0LL, 0LL, 0x800u);
    if ( inited < 0 )
      goto LABEL_12;
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
    goto LABEL_34;
  if ( v18 )
  {
    if ( !Handle )
    {
      v34[0] = 0;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v41, v34, 0);
      if ( inited < 0 )
        goto LABEL_12;
      if ( !v34[0] )
      {
        inited = -1073741771;
        ZwClose(v41);
        goto LABEL_12;
      }
      v42 = 1;
      inited = PnpCtxRegSetValue(v21, v41, (__int64)L"Phantom", 4LL, (__int64)&v42, 4u);
      ZwClose(v41);
      goto LABEL_34;
    }
LABEL_47:
    inited = -1073741771;
    goto LABEL_12;
  }
  if ( Handle )
  {
    DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, PoolWithTag, (__int64)Handle, v55, &v54, &v53, v33);
    if ( DeviceStatus >= 0 )
      goto LABEL_47;
    if ( DeviceStatus == -1073741810 )
      PiPnpRtlEnsureObjectCached(v23, PoolWithTag);
  }
  else
  {
    v34[0] = 0;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &Handle, v34, 0);
    if ( inited < 0 )
      goto LABEL_12;
    if ( !v34[0] )
      goto LABEL_47;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( inited >= 0 )
  {
    v35 = 4;
    v36 = 0;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)PoolWithTag,
                      (__int64)Handle,
                      11,
                      (__int64)&v36,
                      (__int64)&v38,
                      (__int64)&v35);
    v26 = v38;
    if ( DeviceRegProp < 0 )
      v26 = 0;
    v38 = v26;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&DestinationString.Length, v25, &v39);
    v28 = v39;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v28 = 0;
    if ( (v38 & 0x12) != 0 || (v28 & 2) != 0 )
    {
      inited = -1073741808;
      goto LABEL_12;
    }
    inited = PiInitializeDevice(&DestinationString);
    if ( inited >= 0 )
    {
      v35 = 4;
      if ( (int)PnpCtxRegQueryValue(v29, Handle, L"Phantom", &v36, &v40, &v35) < 0 || v36 != 4 || (v31 = v40, v35 != 4) )
        v31 = 0;
      if ( v31 )
        PnpCtxRegDeleteValue(v30, Handle, L"Phantom");
      if ( (v47 & 8) != 0 )
      {
        v35 = 512;
        v10 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x34706E50u);
        if ( !v10 )
        {
          inited = -1073741670;
          goto LABEL_12;
        }
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)PoolWithTag,
                    (__int64)Handle,
                    5,
                    (__int64)&v36,
                    (__int64)v10,
                    (__int64)&v35) >= 0
          && v36 == 1
          && v35 <= 0x200
          && *v10 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
          if ( inited < 0 )
            goto LABEL_12;
          LOBYTE(v32) = 1;
          inited = PpDeviceRegistration((__int64)&DestinationString, v32, 0LL, 0);
        }
      }
      goto LABEL_34;
    }
  }
LABEL_12:
  v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, v52, a3, a4, a6);
LABEL_13:
  DeviceInputData = v15;
  if ( Handle )
    ZwClose(Handle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x34706E50u);
LABEL_19:
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( P && PreviousMode )
    ExFreePoolWithTag(P, 0);
  if ( v50 && PreviousMode )
    ExFreePoolWithTag(v50, 0);
  if ( v44 )
    PiPnpRtlEndOperation((char *)v44);
  return (unsigned int)DeviceInputData;
}
