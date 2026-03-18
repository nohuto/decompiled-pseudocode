/*
 * XREFs of UsbhResetPortData @ 0x1C0054DEC
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0042EE0 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0053984 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C0004888 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhGetPortData @ 0x1C000AEF0 (UsbhGetPortData.c)
 *     UsbhDerefPdo @ 0x1C000B104 (UsbhDerefPdo.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 */

void __fastcall UsbhResetPortData(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *v8; // rax
  __int64 PortData; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax

  Log(a1, 256, 1919968372, a2, a3);
  v8 = PdoExt(a2, v5, v6, v7);
  PortData = UsbhGetPortData(a1, *((_WORD *)v8 + 710));
  if ( PortData )
  {
    *(_QWORD *)(PortData + 392) = 0LL;
    _InterlockedExchange((volatile __int32 *)(PortData + 428), 0);
    v13 = PdoExt(a2, v10, v11, v12);
    v13[354] &= ~8u;
    UsbhSignalSyncDeviceResetPdo(a1, a2, -1073741810);
    UsbhDerefPdo(a1, a2, 0LL, 0x4C415443u);
  }
}
