/*
 * XREFs of ACPIInternalDeviceQueryCapabilities @ 0x1C0071350
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  _QWORD *DeviceExtension; // rax
  __m128i *SecurityContext; // r8
  int v5; // edx
  int v6; // ecx
  unsigned int DeviceCapabilities; // ebx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (__m128i *)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityContext->m128i_i32[1] ^= (SecurityContext->m128i_i32[1] ^ ((DeviceExtension[70] != 0LL) << 6)) & 0x40;
  v5 = SecurityContext->m128i_i32[1] ^ (SecurityContext->m128i_i32[1] ^ (((*(_DWORD *)DeviceExtension >> 17) & 1) << 8)) & 0x100 | 0x80;
  SecurityContext->m128i_i32[1] = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (((*DeviceExtension & 0x40000000000000LL) == 0) << 14)) & 0x4000;
  SecurityContext->m128i_i32[1] = v6;
  SecurityContext->m128i_i32[1] = v6 ^ (v6 ^ (((*(_DWORD *)DeviceExtension >> 29) & 1) << 17)) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities(DeviceExtension, SecurityContext);
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return DeviceCapabilities;
}
