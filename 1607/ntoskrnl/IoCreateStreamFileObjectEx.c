/*
 * XREFs of IoCreateStreamFileObjectEx @ 0x14052E570
 * Callers:
 *     <none>
 * Callees:
 *     IoCreateStreamFileObjectEx2 @ 0x1403EE178 (IoCreateStreamFileObjectEx2.c)
 */

PFILE_OBJECT __stdcall IoCreateStreamFileObjectEx(
        PFILE_OBJECT FileObject,
        PDEVICE_OBJECT DeviceObject,
        PHANDLE FileHandle)
{
  _WORD v4[12]; // [rsp+30h] [rbp-18h] BYREF
  struct _FILE_OBJECT *v5; // [rsp+68h] [rbp+20h] BYREF

  *(_QWORD *)&v4[1] = 0LL;
  *(_DWORD *)&v4[5] = 0;
  v4[7] = 0;
  *(_DWORD *)v4 = 65552;
  IoCreateStreamFileObjectEx2((__int64)v4, (__int64)FileObject, (ULONG_PTR)DeviceObject, &v5, FileHandle);
  return v5;
}
