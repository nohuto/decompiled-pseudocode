/*
 * XREFs of UsbhEtwGetDeviceInfo @ 0x1C000D124
 * Callers:
 *     UsbhEtwLogDeviceDescription @ 0x1C000B4F0 (UsbhEtwLogDeviceDescription.c)
 *     UsbhEtwLogDeviceInformation @ 0x1C000B5F4 (UsbhEtwLogDeviceInformation.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000B6FC (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000D190 (UsbhEtwLogDeviceIrpEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UsbhEtwGetDeviceInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = *(_QWORD *)(a1 + 1152);
  *(_WORD *)(a2 + 8) = *(_WORD *)(a1 + 1400);
  *(_WORD *)(a2 + 10) = *(_WORD *)(a1 + 1402);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 2664);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 2668);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 2672);
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 2676);
  *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 2680);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a1 + 2684);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 2688);
  result = *(unsigned int *)(a1 + 1160);
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
