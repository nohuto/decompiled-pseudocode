/*
 * XREFs of PiCMDeleteDevice @ 0x140646B3C
 * Callers:
 *     PiCMHandleIoctl @ 0x1404FC77C (PiCMHandleIoctl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400C39C0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140138C28 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x14015C0E0 (ZwPlugPlayControl.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x1403F4C50 (_CmIsRootEnumeratedDevice.c)
 *     PpDeviceRegistration @ 0x1404C7C74 (PpDeviceRegistration.c)
 *     _CmIsRootDevice @ 0x1404CFC28 (_CmIsRootDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x1404F6100 (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBasicResultData @ 0x1404F7090 (PiCMReturnBasicResultData.c)
 *     _CmGetDeviceStatus @ 0x1404F78AC (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404F8E1C (PiCMCaptureObjectInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1404F921C (PiCMReleaseObjectInputData.c)
 *     _CmValidateDeviceName @ 0x1404FD9C0 (_CmValidateDeviceName.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     PiQueueDeviceRequest @ 0x14064B2F4 (PiQueueDeviceRequest.c)
 *     _CmDeleteDevice @ 0x1406D7CC0 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        __int64 a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  const WCHAR *v17; // rdi
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r8d
  unsigned int v24; // [rsp+38h] [rbp-59h]
  PVOID P; // [rsp+48h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-41h] BYREF
  char v27[4]; // [rsp+60h] [rbp-31h] BYREF
  int v28; // [rsp+64h] [rbp-2Dh]
  int v29; // [rsp+68h] [rbp-29h]
  PCWSTR SourceString; // [rsp+70h] [rbp-21h]
  int v31; // [rsp+7Ch] [rbp-15h]
  int v32; // [rsp+80h] [rbp-11h]
  int v33; // [rsp+88h] [rbp-9h] BYREF
  int v34; // [rsp+8Ch] [rbp-5h] BYREF
  UNICODE_STRING v35; // [rsp+90h] [rbp-1h] BYREF
  _BYTE Buffer[40]; // [rsp+A0h] [rbp+Fh] BYREF

  v6 = (_DWORD *)a6;
  P = 0LL;
  *(_DWORD *)a6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v27);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v12 = SourceString;
      if ( !SourceString || v28 || v29 != 1 || v31 || !a3 || a4 < 8 )
        goto LABEL_28;
      inited = CmValidateDeviceName(v10, SourceString);
      if ( inited < 0 )
        goto LABEL_29;
      if ( CmIsRootDevice(v12) )
      {
LABEL_28:
        inited = -1073741811;
        goto LABEL_29;
      }
      inited = PiPnpRtlBeginOperation((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, v12, 0, &a6, &v34, &v33, v24) >= 0 && (a6 & 2) != 0 )
        {
          if ( (a6 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_29;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_29;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_29;
          memset(Buffer, 0, sizeof(Buffer));
          v17 = SourceString;
          if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Buffer, SourceString) >= 0 )
          {
            *(_DWORD *)&Buffer[16] = 1;
            *(_DWORD *)&Buffer[20] = 0x40000;
            ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u);
          }
        }
        else
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_29;
          PpDevNodeLockTree(3);
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0LL, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v19, v20, v21);
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_29;
          v17 = SourceString;
          if ( CmIsRootEnumeratedDevice(SourceString)
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest((unsigned int)&DestinationString, 8, v22, 1, 0LL);
          }
        }
        if ( RtlInitUnicodeStringEx(&v35, v17) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v35.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_29:
    v9 = PiCMReturnBasicResultData(inited, v32, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v27);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v9;
}
