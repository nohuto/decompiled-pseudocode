/*
 * XREFs of UsbhSendMsOs20AltEnumCommand @ 0x1C004064C
 * Callers:
 *     UsbhSetupDevice @ 0x1C0005420 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001C5D4 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhSendMsOs20AltEnumCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rsi
  char v8; // r8
  __int64 v9; // rcx
  int v10; // r10d
  _BYTE v12[4]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+44h] [rbp-24h]
  __int16 v14; // [rsp+80h] [rbp+18h] BYREF

  v7 = PdoExt(a2, a2, a3, a4);
  v8 = *(_BYTE *)(a3 + 7);
  v12[1] = *(_BYTE *)(a3 + 6);
  v9 = *((_QWORD *)v7 + 147);
  v12[3] = v8;
  v12[0] = 64;
  v12[2] = 0;
  v13 = 8;
  v14 = 0;
  v10 = UsbhSyncSendCommandToDevice(v9, a2, v12, 0LL, &v14);
  if ( v10 >= 0 )
    v7[353] |= 0x40000000u;
  else
    Log(a1, 4, 1095053873, 0LL, 0LL);
  return (unsigned int)v10;
}
