/*
 * XREFs of PlugPlayGetDeviceStatus @ 0x1404DB884
 * Callers:
 *     PiPnpRtlGetDeviceStatus @ 0x1404DB860 (PiPnpRtlGetDeviceStatus.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14062EDE4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 * Callees:
 *     ZwPlugPlayControl @ 0x14015C650 (ZwPlugPlayControl.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

NTSTATUS __fastcall PlugPlayGetDeviceStatus(__int128 *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  __int128 v9; // xmm0
  NTSTATUS result; // eax
  _OWORD Buffer[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( !a1 || !a2 || !a3 || !a4 )
    return -1073741811;
  memset(Buffer, 0, 0x28uLL);
  v9 = *a1;
  *(_QWORD *)&Buffer[1] = 0LL;
  DWORD2(Buffer[1]) = 0;
  LODWORD(Buffer[2]) = 0;
  HIDWORD(Buffer[1]) = a5;
  Buffer[0] = v9;
  result = ZwPlugPlayControl(PlugPlayControlDeviceStatus, Buffer, 0x28u);
  if ( result >= 0 )
  {
    *a2 = DWORD1(Buffer[1]);
    *a3 = DWORD2(Buffer[1]);
    *a4 = Buffer[2];
  }
  return result;
}
