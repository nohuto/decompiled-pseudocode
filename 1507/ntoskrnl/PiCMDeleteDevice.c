/*
 * XREFs of PiCMDeleteDevice @ 0x1406923BC
 * Callers:
 *     PiCMHandleIoctl @ 0x140440C0C (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015260 (RtlInitUnicodeStringEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14015FDCC (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     ZwPlugPlayControl @ 0x140181390 (ZwPlugPlayControl.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _CmValidateDeviceName @ 0x14043D110 (_CmValidateDeviceName.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     _CmGetDeviceStatus @ 0x1404DCCB8 (_CmGetDeviceStatus.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x1404DD148 (PiCMReturnBasicResultData.c)
 *     _CmIsRootDevice @ 0x1404DEBD8 (_CmIsRootDevice.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     _CmIsRootEnumeratedDevice @ 0x1404E2280 (_CmIsRootEnumeratedDevice.c)
 *     PpDeviceRegistration @ 0x1404E660C (PpDeviceRegistration.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 *     _CmDeleteDevice @ 0x140712930 (_CmDeleteDevice.c)
 */

__int64 __fastcall PiCMDeleteDevice(ULONG64 a1, unsigned int a2, _QWORD *a3, unsigned int a4, int a5, __int64 a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  __int64 v10; // rcx
  int inited; // ebx
  const WCHAR *v12; // rdi
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  const WCHAR *v16; // rdi
  struct _KTHREAD *v17; // rax
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  __int64 v20; // r8
  unsigned int v22; // [rsp+38h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-49h] BYREF
  PVOID P; // [rsp+58h] [rbp-39h] BYREF
  char v25[4]; // [rsp+60h] [rbp-31h] BYREF
  int v26; // [rsp+64h] [rbp-2Dh]
  int v27; // [rsp+68h] [rbp-29h]
  PCWSTR SourceString; // [rsp+70h] [rbp-21h]
  int v29; // [rsp+7Ch] [rbp-15h]
  int v30; // [rsp+80h] [rbp-11h]
  int v31; // [rsp+88h] [rbp-9h] BYREF
  int v32; // [rsp+8Ch] [rbp-5h] BYREF
  UNICODE_STRING v33; // [rsp+90h] [rbp-1h] BYREF
  _BYTE Buffer[40]; // [rsp+A0h] [rbp+Fh] BYREF

  v6 = (_DWORD *)a6;
  P = 0LL;
  *(_DWORD *)a6 = 0;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, v25);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v12 = SourceString;
      if ( !SourceString || v26 || v27 != 1 || v29 || !a3 || a4 < 8 )
        goto LABEL_36;
      inited = CmValidateDeviceName(v10, SourceString);
      if ( inited < 0 )
        goto LABEL_37;
      if ( CmIsRootDevice(v12) )
      {
LABEL_36:
        inited = -1073741811;
        goto LABEL_37;
      }
      inited = PiPnpRtlBeginOperation((__int64 **)&P);
      if ( inited >= 0 )
      {
        if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v12, 0LL, &a6, &v32, &v31, v22) >= 0 && (a6 & 2) != 0 )
        {
          if ( (a6 & 0x2001) == 1 )
          {
            inited = -1073741808;
            goto LABEL_37;
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_37;
          PpDevNodeLockTree(3);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          v14 = KeGetCurrentThread();
          v15 = v14->KernelApcDisable + 1;
          v14->KernelApcDisable = v15;
          if ( !v15
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
            && !v14->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_37;
          memset(Buffer, 0, sizeof(Buffer));
          v16 = SourceString;
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
            goto LABEL_37;
          PpDevNodeLockTree(3);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
          PpDeviceRegistration((__int64)&DestinationString, 0, 0LL, 1);
          inited = CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString, 0LL);
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          v18 = KeGetCurrentThread();
          v19 = v18->KernelApcDisable + 1;
          v18->KernelApcDisable = v19;
          if ( !v19
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
            && !v18->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          PpDevNodeUnlockTree(3);
          if ( inited < 0 )
            goto LABEL_37;
          v16 = SourceString;
          if ( CmIsRootEnumeratedDevice(SourceString)
            && RtlInitUnicodeStringEx(&DestinationString, L"HTREE\\ROOT\\0") >= 0 )
          {
            PiQueueDeviceRequest((__int64)&DestinationString, 8LL, v20, 1LL, 0LL);
          }
        }
        if ( RtlInitUnicodeStringEx(&v33, v16) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&v33.Length);
      }
    }
    else
    {
      inited = -1073741790;
    }
LABEL_37:
    v9 = PiCMReturnBasicResultData(inited, v30, a3, a4, v6);
  }
  PiCMReleaseObjectInputData((__int64)v25);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return (unsigned int)v9;
}
