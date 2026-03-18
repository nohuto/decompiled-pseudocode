/*
 * XREFs of GetControllerMaxTransferSize @ 0x1C0004744
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C00048B0 (NVMeHwFindAdapter.c)
 *     FirmwareDownload @ 0x1C0008A50 (FirmwareDownload.c)
 *     NVMeGetLogPageFirmwareSlotCompletion @ 0x1C000A460 (NVMeGetLogPageFirmwareSlotCompletion.c)
 *     ProtocolCommandToNVMe @ 0x1C000AD38 (ProtocolCommandToNVMe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetControllerMaxTransferSize(_DWORD *a1)
{
  unsigned int v1; // edx
  __int64 result; // rax
  unsigned int v3; // edx

  v1 = a1[7];
  result = (unsigned int)a1[36];
  if ( v1 )
  {
    if ( v1 < (unsigned int)result )
      result = v1;
  }
  else if ( (unsigned int)result > 0x80000 )
  {
    result = 0x80000LL;
  }
  v3 = a1[12];
  if ( v3 )
  {
    if ( v3 < (unsigned int)result )
      return v3;
  }
  return result;
}
