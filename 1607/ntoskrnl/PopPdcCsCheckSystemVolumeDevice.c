/*
 * XREFs of PopPdcCsCheckSystemVolumeDevice @ 0x1407BD360
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenFile @ 0x14015A850 (ZwOpenFile.c)
 *     PopAcquirePolicyLock @ 0x1403C87E0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x1403C8828 (PopReleasePolicyLock.c)
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 *     PopNetIsDisconnectStandbyActive @ 0x1406737E4 (PopNetIsDisconnectStandbyActive.c)
 */

void PopPdcCsCheckSystemVolumeDevice()
{
  int v0; // [rsp+50h] [rbp-39h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-31h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp-29h] BYREF
  __int64 v3; // [rsp+68h] [rbp-21h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-19h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-9h] BYREF
  _DWORD InputBuffer[4]; // [rsp+B0h] [rbp+27h] BYREF
  __int64 OutputBuffer; // [rsp+C0h] [rbp+37h] BYREF
  int v8; // [rsp+C8h] [rbp+3Fh]

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
    PopNetIsDisconnectStandbyActive(&v0);
    byte_140303EB7 = (unsigned int)(v0 - 3) > 1;
    PopReleasePolicyLock();
  }
}
