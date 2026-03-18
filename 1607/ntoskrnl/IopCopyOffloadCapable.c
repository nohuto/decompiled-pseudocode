/*
 * XREFs of IopCopyOffloadCapable @ 0x1404EF33C
 * Callers:
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 * Callees:
 *     IoGetAttachedDevice @ 0x14002DEC0 (IoGetAttachedDevice.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     FsRtlGetSupportedFeatures @ 0x1400B4A28 (FsRtlGetSupportedFeatures.c)
 */

__int64 __fastcall IopCopyOffloadCapable(struct _FILE_OBJECT *a1, int a2)
{
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  if ( (a1->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(a1->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(a1);
  result = FsRtlGetSupportedFeatures((__int64)AttachedDevice, &v5);
  if ( (int)result >= 0 )
  {
    if ( a2 == 606820 )
    {
      if ( (v5 & 1) == 0 )
        return 3221267105LL;
    }
    else if ( (v5 & 2) == 0 )
    {
      return 3221267106LL;
    }
  }
  return result;
}
