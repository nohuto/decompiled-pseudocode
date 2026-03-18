/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x1407E9120
 * Callers:
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14017F650 (ZwOpenFile.c)
 *     PopReleasePolicyLock @ 0x1403EB86C (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1403EB8DC (PopAcquirePolicyLock.c)
 *     PopConnectedStandbyComplianceChecks @ 0x1406B316C (PopConnectedStandbyComplianceChecks.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  char v3; // al
  HANDLE FileHandle; // [rsp+50h] [rbp-29h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-21h] BYREF
  __int64 v6; // [rsp+60h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  _DWORD InputBuffer[4]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 OutputBuffer; // [rsp+B8h] [rbp+3Fh] BYREF
  int v11; // [rsp+C0h] [rbp+47h]

  if ( PopPlatformAoAc )
  {
    Buffer = IoArcBootDeviceName.Buffer;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    v6 = 0x100000000LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u) >= 0 )
    {
      *(_QWORD *)&InputBuffer[1] = 0LL;
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      OutputBuffer = 0LL;
      v11 = 0;
      InputBuffer[0] = 7;
      if ( ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             InputBuffer,
             0xCu,
             &OutputBuffer,
             0xCu) >= 0 )
        BYTE5(v6) = (_BYTE)v11 == 0;
    }
    PopPdcCsDeviceNotification((__int64)&Buffer, v0, v1, v2);
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock();
    if ( PopEnforceDisconnectedStandby || (v3 = PopConnectedStandbyComplianceChecks(), byte_14032E537 = 1, !v3) )
      byte_14032E537 = 0;
    PopReleasePolicyLock();
  }
}
