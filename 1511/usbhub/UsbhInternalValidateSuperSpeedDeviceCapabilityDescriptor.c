/*
 * XREFs of UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor @ 0x1C0052AE4
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00526A0 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 */

char __fastcall UsbhInternalValidateSuperSpeedDeviceCapabilityDescriptor(__int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // r10
  unsigned __int8 *v4; // r11
  char result; // al
  unsigned __int8 v6; // cl
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // cl
  unsigned __int16 v9; // cx
  char v10; // r10

  v3 = 0LL;
  v4 = a2;
  result = 1;
  if ( *a2 == 10 )
  {
    v6 = a2[3];
    if ( (v6 & 0xFD) != 0 )
    {
      Log(a1, 256, 1448301362, v6, 0LL);
      result = v3;
    }
    if ( *((_WORD *)v4 + 2) == (_WORD)v3 )
    {
      Log(a1, 256, 1448301363, 0LL, v3);
      result = v3;
    }
    v7 = v4[6];
    if ( (v7 & 0xF0) != 0 )
    {
      Log(a1, 256, 1448301364, v7, v3);
      result = v3;
    }
    if ( v4[6] == (_BYTE)v3 )
    {
      Log(a1, 256, 1448301365, 0LL, v3);
      result = v3;
    }
    v8 = v4[7];
    if ( v8 >= 0xBu )
    {
      Log(a1, 256, 1448301366, v8, v3);
      result = v3;
    }
    v9 = *((_WORD *)v4 + 4);
    if ( v9 >= 0x800u )
    {
      Log(a1, 256, 1448301367, v9, v3);
      return v10;
    }
  }
  else
  {
    Log(a1, 256, 1448301361, *a2, 0LL);
    return 0;
  }
  return result;
}
