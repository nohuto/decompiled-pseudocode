/*
 * XREFs of ?RequestSyncDeviceChange@@YAPEAUDEVICEINFO@@PEAU1@GH@Z @ 0x1C01DE1C8
 * Callers:
 *     CreateDeviceInfo @ 0x1C01DE948 (CreateDeviceInfo.c)
 * Callees:
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 */

struct DEVICEINFO *__fastcall RequestSyncDeviceChange(struct DEVICEINFO *a1)
{
  *((_WORD *)a1 + 33) = 8193;
  ProcessDeviceChanges(*((unsigned __int8 *)a1 + 48));
  *((_WORD *)a1 + 33) &= ~0x2000u;
  if ( (*((_WORD *)a1 + 33) & 0x80u) == 0 )
    return a1;
  FreeDeviceInfo((__int64)a1);
  return 0LL;
}
