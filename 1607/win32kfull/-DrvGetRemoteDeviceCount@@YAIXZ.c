/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01541C8
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 *     DxgkEngGetRemoteDeviceCount @ 0x1C0260FF0 (DxgkEngGetRemoteDeviceCount.c)
 * Callees:
 *     <none>
 */

__int64 DrvGetRemoteDeviceCount(void)
{
  unsigned int v0; // r8d
  struct tagGRAPHICS_DEVICE *i; // rdx

  v0 = 0;
  for ( i = gpGraphicsDeviceList; i; i = (struct tagGRAPHICS_DEVICE *)*((_QWORD *)i + 16) )
  {
    if ( (*((_DWORD *)i + 40) & 0x4000000) != 0 )
      ++v0;
  }
  return v0;
}
