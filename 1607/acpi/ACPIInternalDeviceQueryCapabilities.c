/*
 * XREFs of ACPIInternalDeviceQueryCapabilities @ 0x1C008F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C0087A18 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIInternalDeviceQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbx
  __int64 SecurityContext; // r8
  int v5; // edx
  int v6; // ecx
  int DeviceCapabilities; // edi
  __int64 v9; // rdx
  const char *v10; // rcx
  const char *v11; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (__int64)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  *(_DWORD *)(SecurityContext + 4) ^= (*(_DWORD *)(SecurityContext + 4) ^ ((*(_QWORD *)(DeviceExtension + 568) != 0LL) << 6)) & 0x40;
  v5 = *(_DWORD *)(SecurityContext + 4) ^ (*(_DWORD *)(SecurityContext + 4) ^ (((*(_DWORD *)(DeviceExtension + 8) >> 17) & 1) << 8)) & 0x100 | 0x80;
  *(_DWORD *)(SecurityContext + 4) = v5;
  v6 = v5 ^ ((unsigned __int16)v5 ^ (((*(_QWORD *)(DeviceExtension + 8) & 0x40000000000000LL) == 0) << 14)) & 0x4000;
  *(_DWORD *)(SecurityContext + 4) = v6;
  *(_DWORD *)(SecurityContext + 4) = v6 ^ (v6 ^ (((*(_DWORD *)(DeviceExtension + 8) >> 29) & 1) << 17)) & 0x20000;
  DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)DeviceExtension, SecurityContext);
  if ( DeviceCapabilities < 0 )
  {
    v9 = *(_QWORD *)(DeviceExtension + 8);
    v10 = (const char *)qword_1C0090C20;
    v11 = (const char *)qword_1C0090C20;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(DeviceExtension + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(DeviceExtension + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xAu,
      (__int64)&WPP_fc25509b988e364002300aed6e2838b0_Traceguids,
      DeviceCapabilities,
      DeviceExtension,
      v10,
      v11);
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DeviceCapabilities;
}
