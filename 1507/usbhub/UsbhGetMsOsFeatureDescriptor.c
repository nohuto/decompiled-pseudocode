/*
 * XREFs of UsbhGetMsOsFeatureDescriptor @ 0x1C003FFAC
 * Callers:
 *     UsbhGetMsOsContainerID @ 0x1C0029BB8 (UsbhGetMsOsContainerID.c)
 *     UsbhGetMsOsExtendedConfigDesc @ 0x1C003FD4C (UsbhGetMsOsExtendedConfigDesc.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C00401C4 (UsbhInstallMsOsExtendedProperties.c)
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001F6F0 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhGetMsOsFeatureDescriptor(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        _DWORD *a7)
{
  __int16 v7; // bp
  char v8; // di
  _DWORD *v10; // rax
  __int64 v11; // r9
  unsigned __int16 v12; // r8
  _DWORD *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  _BYTE v16[2]; // [rsp+40h] [rbp-18h] BYREF
  __int16 v17; // [rsp+42h] [rbp-16h]
  __int16 v18; // [rsp+44h] [rbp-14h]
  unsigned __int16 v19; // [rsp+46h] [rbp-12h]
  unsigned __int16 v20; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v20) = a3;
  v7 = a4;
  v8 = a2;
  v10 = PdoExt(a1, a2, a3, a4);
  v11 = a5;
  if ( !a5 )
    return 3221225485LL;
  v12 = a6;
  if ( !a6 )
    return 3221225485LL;
  v13 = a7;
  if ( a7 )
    *a7 = 0;
  v14 = *((_QWORD *)v10 + 147);
  v16[1] = *((_BYTE *)v10 + 1424);
  v19 = v12;
  v20 = v12;
  v16[0] = v8 & 3 | 0xC0;
  v17 = 0;
  v18 = v7;
  result = UsbhSyncSendCommandToDevice(v14, a1, v16, v11, &v20);
  if ( (int)result >= 0 )
  {
    if ( v13 )
      *v13 = v20;
  }
  return result;
}
