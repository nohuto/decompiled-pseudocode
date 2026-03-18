/*
 * XREFs of IoGetRelatedTargetDevice @ 0x14049188C
 * Callers:
 *     FsRtlNotifyVolumeEventEx @ 0x1404917BC (FsRtlNotifyVolumeEventEx.c)
 *     NtSetVolumeInformationFile @ 0x1404EA818 (NtSetVolumeInformationFile.c)
 *     NtGetDevicePowerState @ 0x1406382F0 (NtGetDevicePowerState.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x14001AC00 (PnpGetRelatedTargetDevice.c)
 */

__int64 __fastcall IoGetRelatedTargetDevice(struct _FILE_OBJECT *a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  result = PnpGetRelatedTargetDevice(a1, &v4);
  if ( (int)result >= 0 )
  {
    if ( v4 )
      *a2 = *(_QWORD *)(v4 + 32);
  }
  return result;
}
