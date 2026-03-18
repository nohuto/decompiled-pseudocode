/*
 * XREFs of UsbhResetPortData @ 0x1C0054F54
 * Callers:
 *     UsbhDeregisterPdo @ 0x1C0043100 (UsbhDeregisterPdo.c)
 *     UsbhDeletePdo @ 0x1C0053954 (UsbhDeletePdo.c)
 * Callees:
 *     UsbhSignalSyncDeviceResetPdo @ 0x1C00047A8 (UsbhSignalSyncDeviceResetPdo.c)
 *     UsbhGetPortData @ 0x1C000C150 (UsbhGetPortData.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDerefPdo @ 0x1C000F30C (UsbhDerefPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
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
