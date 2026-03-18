/*
 * XREFs of CallMonitor @ 0x1C00689F0
 * Callers:
 *     NtGdiGetCertificate @ 0x1C0067550 (NtGdiGetCertificate.c)
 *     ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0067E88 (-GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0067F60 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0067FE4 (-SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0068068 (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C006812C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 *     GetCertificateLengthAndMonitorPDO @ 0x1C0068970 (GetCertificateLengthAndMonitorPDO.c)
 *     ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C0104 (-Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 *     ?GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C00C029C (-GetCOPPCompatibleInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_COPP_COMPATIBLE_GET_INF.c)
 * Callees:
 *     <none>
 */

int __fastcall CallMonitor(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  IRP *v10; // rax
  int v11; // ebx
  int result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          1u,
          &Object,
          &IoStatusBlock);
  v11 = 0;
  if ( !v10 )
    return -1073741823;
  result = IofCallDriver(DeviceObject, v10);
  if ( result != 259 )
  {
    if ( result < 0 )
      return result;
    goto LABEL_4;
  }
  if ( KeWaitForSingleObject(&Object, UserRequest, 0, 0, 0LL) )
    return -1073741823;
LABEL_4:
  if ( IoStatusBlock.Status < 0 )
    return IoStatusBlock.Status;
  return v11;
}
