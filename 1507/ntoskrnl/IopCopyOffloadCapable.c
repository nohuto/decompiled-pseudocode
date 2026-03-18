/*
 * XREFs of IopCopyOffloadCapable @ 0x14055A658
 * Callers:
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     FsRtlGetSupportedFeatures @ 0x140130828 (FsRtlGetSupportedFeatures.c)
 */

__int64 __fastcall IopCopyOffloadCapable(struct _FILE_OBJECT *a1, int a2)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 result; // rax
  unsigned int v5; // ecx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  if ( (a1->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(a1->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(a1);
  result = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v6);
  v5 = result;
  if ( (int)result >= 0 )
  {
    if ( a2 == 606820 )
    {
      if ( (v6 & 1) == 0 )
        return (unsigned int)-1073700191;
    }
    else if ( (v6 & 2) == 0 )
    {
      return (unsigned int)-1073700190;
    }
    return v5;
  }
  return result;
}
