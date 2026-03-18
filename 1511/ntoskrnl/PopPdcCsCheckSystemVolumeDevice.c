/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x1407662E0
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     PopAcquirePolicyLock @ 0x14039C560 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x14039CE60 (PopReleasePolicyLock.c)
 *     PopConnectedStandbyComplianceChecks @ 0x140633B50 (PopConnectedStandbyComplianceChecks.c)
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  char v0; // al
  HANDLE FileHandle; // [rsp+50h] [rbp-29h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-21h] BYREF
  __int64 v3; // [rsp+60h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-1h] BYREF
  _DWORD InputBuffer[4]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 OutputBuffer; // [rsp+B8h] [rbp+3Fh] BYREF
  int v8; // [rsp+C0h] [rbp+47h]

  if ( PopPlatformAoAc )
  {
    Buffer = IoArcBootDeviceName.Buffer;
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = &IoArcBootDeviceName;
    v3 = 0x100000000LL;
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
      v8 = 0;
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
        BYTE5(v3) = (_BYTE)v8 == 0;
    }
    PopPdcCsDeviceNotification((__int64)&Buffer);
    if ( FileHandle )
      ZwClose(FileHandle);
    PopAcquirePolicyLock();
    if ( PopEnforceDisconnectedStandby || (v0 = PopConnectedStandbyComplianceChecks(), byte_1402DDF77 = 1, !v0) )
      byte_1402DDF77 = 0;
    PopReleasePolicyLock();
  }
}
