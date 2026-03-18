/*
 * XREFs of ?RequestDeviceChangeHelper@@YAPEAUDEVICEINFO@@PEAU1@@Z @ 0x1C01DE184
 * Callers:
 *     RequestDeviceChange @ 0x1C01E0174 (RequestDeviceChange.c)
 * Callees:
 *     FreeDeviceInfo @ 0x1C01D9AE0 (FreeDeviceInfo.c)
 */

struct DEVICEINFO *__fastcall RequestDeviceChangeHelper(struct DEVICEINFO *a1)
{
  struct DEVICEINFO *v1; // rbx

  v1 = a1;
  EnterDeviceInfoListCrit_(a1);
  *((_WORD *)v1 + 33) &= ~0x100u;
  if ( (*((_WORD *)v1 + 33) & 0x4080) == 0x80 )
  {
    FreeDeviceInfo((__int64)v1);
    return 0LL;
  }
  return v1;
}
