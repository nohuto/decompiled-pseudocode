/*
 * XREFs of IoCreateStreamFileObjectLite @ 0x1404918C0
 * Callers:
 *     RawMountVolume @ 0x140491570 (RawMountVolume.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x140491900 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectLite(PFILE_OBJECT FileObject, PDEVICE_OBJECT DeviceObject)
{
  _WORD v3[12]; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v4; // [rsp+60h] [rbp+18h] BYREF

  *(_QWORD *)&v3[1] = 0LL;
  *(_DWORD *)&v3[5] = 0;
  v3[7] = 0;
  *(_DWORD *)v3 = 196624;
  IoCreateStreamFileObjectEx2(v3, FileObject, DeviceObject, &v4, 0LL);
  return v4;
}
