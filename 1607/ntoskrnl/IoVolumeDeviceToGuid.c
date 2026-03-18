/*
 * XREFs of IoVolumeDeviceToGuid @ 0x14052CFCC
 * Callers:
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     FsRtlVolumeDeviceToCorrelationId @ 0x14052C794 (FsRtlVolumeDeviceToCorrelationId.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1404FB370 (RtlGUIDFromString.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D04C (IoVolumeDeviceToGuidPath.c)
 */

__int64 __fastcall IoVolumeDeviceToGuid(struct _DEVICE_OBJECT *a1, GUID *a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-10h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  result = IoVolumeDeviceToGuidPath(a1);
  if ( (int)result >= 0 )
  {
    GuidString.Length = -20;
    GuidString.MaximumLength = -20;
    GuidString.Buffer = (wchar_t *)20;
    v4 = RtlGUIDFromString(&GuidString, a2);
    ExFreePoolWithTag(0LL, 0);
    return v4;
  }
  return result;
}
