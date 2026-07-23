/*
 * XREFs of FsRtlNotifyVolumeEvent @ 0x14052A180
 * Callers:
 *     RawCleanup @ 0x1403ED17C (RawCleanup.c)
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     FsRtlNotifyVolumeEventEx @ 0x1403F00F8 (FsRtlNotifyVolumeEventEx.c)
 */

NTSTATUS __stdcall FsRtlNotifyVolumeEvent(PFILE_OBJECT FileObject, ULONG EventCode)
{
  struct _TARGET_DEVICE_CUSTOM_NOTIFICATION Event; // [rsp+20h] [rbp-38h] BYREF

  Event.FileObject = 0LL;
  Event.NameBufferOffset = -1;
  *(_DWORD *)&Event.Version = 2359297;
  return FsRtlNotifyVolumeEventEx(FileObject, EventCode, &Event);
}
