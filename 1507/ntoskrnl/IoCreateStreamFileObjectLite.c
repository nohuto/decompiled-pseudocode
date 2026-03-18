/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x14040E470
 * Callers:
 *     RawMountVolume @ 0x14040E7F4 (RawMountVolume.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x14040E4B0 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  _WORD v3[12]; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v4; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&v3[1] = 0LL;
  *(_DWORD *)&v3[5] = 0;
  v3[7] = 0;
  *(_DWORD *)v3 = 196624;
  IoCreateStreamFileObjectEx2((unsigned int)v3, (_DWORD)FileObject, (_DWORD)DeviceObject, (unsigned int)&v4, 0LL);
  return v4;
}
