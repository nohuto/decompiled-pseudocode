/*
 * XREFs of PiCMCreateDevice @ 0x140691B70
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140008670 (RtlStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmOpenDeviceRegKey @ 0x14043C350 (_CmOpenDeviceRegKey.c)
 *     _CmGetDeviceRegProp @ 0x14043C46C (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     PiCMReturnBufferResultData @ 0x140441124 (PiCMReturnBufferResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     _CmCreateDevice @ 0x14054ED28 (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegDeleteValue @ 0x140564078 (_PnpCtxRegDeleteValue.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140691420 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
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
  unsigned int v32; // [rsp+38h] [rbp-99h]
  _BYTE v33[4]; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-75h] BYREF
  int v35; // [rsp+60h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-69h] BYREF
  int v37; // [rsp+70h] [rbp-61h] BYREF
  int v38; // [rsp+74h] [rbp-5Dh] BYREF
  int v39; // [rsp+78h] [rbp-59h] BYREF
  HANDLE v40; // [rsp+80h] [rbp-51h] BYREF
  int v41; // [rsp+88h] [rbp-49h] BYREF
  size_t pcchLength; // [rsp+90h] [rbp-41h] BYREF
  PVOID v43; // [rsp+98h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-31h] BYREF
  char v45[4]; // [rsp+B0h] [rbp-21h] BYREF
  int v46; // [rsp+B4h] [rbp-1Dh]
  PVOID P; // [rsp+B8h] [rbp-19h]
  unsigned int v48; // [rsp+C0h] [rbp-11h]
  PVOID v49; // [rsp+C8h] [rbp-9h]
  unsigned int v50; // [rsp+D0h] [rbp-1h]
  int v51; // [rsp+D4h] [rbp+3h]
  int v52; // [rsp+D8h] [rbp+7h] BYREF
  int v53; // [rsp+DCh] [rbp+Bh] BYREF
  _DWORD v54[14]; // [rsp+E0h] [rbp+Fh] BYREF

  v6 = a4;
  v37 = 0;
  v7 = a3;
  v38 = 0;
  *a6 = 0;
  PoolWithTag = 0LL;
  Handle = 0LL;
  v9 = 0;
  v43 = 0LL;
  v10 = 0LL;
  pcchLength = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, v45);
  if ( DeviceInputData < 0 )
    goto LABEL_19;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_12;
  }
  v13 = (const wchar_t *)P;
  if ( !P || v48 < 2 || !v49 || v50 < 2 )
  {
    inited = -1073741811;
    goto LABEL_35;
  }
  if ( !v7 || v6 < 0x14 || (v14 = v46, (v46 & 0xFFFFFFF0) != 0) || (v18 = (v46 & 2) != 0, !CmIsRootDevice((PCWSTR)v49)) )
  {
    inited = -1073741811;
    goto LABEL_12;
  }
  inited = PiPnpRtlBeginOperation((__int64 **)&v43);
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
          v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, PoolWithTag, 2 * v9, v51, v7, v6, a6);
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
      v33[0] = 0;
      inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131078, &v40, v33, 0);
      if ( inited < 0 )
        goto LABEL_12;
      if ( !v33[0] )
      {
        inited = -1073741771;
        ZwClose(v40);
        goto LABEL_12;
      }
      v41 = 1;
      inited = PnpCtxRegSetValue(v21, v40, L"Phantom", 4u, &v41, 4u);
      ZwClose(v40);
      goto LABEL_34;
    }
LABEL_47:
    inited = -1073741771;
    goto LABEL_12;
  }
  if ( Handle )
  {
    DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, PoolWithTag, (__int64)Handle, v54, &v53, &v52, v32);
    if ( DeviceStatus >= 0 )
      goto LABEL_47;
    if ( DeviceStatus == -1073741810 )
      PiPnpRtlEnsureObjectCached(v23, PoolWithTag);
  }
  else
  {
    v33[0] = 0;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)PoolWithTag, 131103, &Handle, v33, 0);
    if ( inited < 0 )
      goto LABEL_12;
    if ( !v33[0] )
      goto LABEL_47;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
  if ( inited >= 0 )
  {
    v34 = 4;
    v35 = 0;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)PoolWithTag,
                      (__int64)Handle,
                      11,
                      (__int64)&v35,
                      (__int64)&v37,
                      (__int64)&v34);
    v26 = v37;
    if ( DeviceRegProp < 0 )
      v26 = 0;
    v37 = v26;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&DestinationString.Length, v25, &v38);
    v28 = v38;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v28 = 0;
    if ( (v37 & 0x12) != 0 || (v28 & 2) != 0 )
    {
      inited = -1073741808;
      goto LABEL_12;
    }
    inited = PiInitializeDevice(&DestinationString);
    if ( inited >= 0 )
    {
      v34 = 4;
      if ( (int)PnpCtxRegQueryValue(v29, Handle, (__int64)L"Phantom", (__int64)&v35, (__int64)&v39, (__int64)&v34) < 0
        || v35 != 4
        || (v31 = v39, v34 != 4) )
      {
        v31 = 0;
      }
      if ( v31 )
        PnpCtxRegDeleteValue(v30, Handle, L"Phantom");
      if ( (v46 & 8) != 0 )
      {
        v34 = 512;
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
                    (__int64)&v35,
                    (__int64)v10,
                    (__int64)&v34) >= 0
          && v35 == 1
          && v34 <= 0x200
          && *v10 )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
          if ( inited < 0 )
            goto LABEL_12;
          inited = PpDeviceRegistration((__int64)&DestinationString, 1, 0LL, 0);
        }
      }
      goto LABEL_34;
    }
  }
LABEL_12:
  v15 = PiCMReturnBufferResultData(inited, 2 * v9, 0, 0LL, 0, v51, a3, a4, a6);
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
  if ( v49 && PreviousMode )
    ExFreePoolWithTag(v49, 0);
  if ( v43 )
    PiPnpRtlEndOperation((char *)v43);
  return (unsigned int)DeviceInputData;
}
