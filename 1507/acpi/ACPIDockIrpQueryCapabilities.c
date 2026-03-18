/*
 * XREFs of ACPIDockIrpQueryCapabilities @ 0x1C0078520
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001538 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsNamedChildPresent @ 0x1C000D680 (AMLIIsNamedChildPresent.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1C006A528 (ACPISystemPowerQueryDeviceCapabilities.c)
 */

__int64 __fastcall ACPIDockIrpQueryCapabilities(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rbp
  __int64 v4; // rdi
  __m128i *SecurityContext; // rbx
  unsigned int DeviceCapabilities; // edi
  __int64 v7; // rdi

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(DeviceExtension + 176);
  SecurityContext = (__m128i *)a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( v4 )
  {
    v7 = *(_QWORD *)(v4 + 704);
    SecurityContext->m128i_i32[1] |= 0x1F0u;
    if ( AMLIIsNamedChildPresent(v7, 810173791) )
      SecurityContext->m128i_i32[1] |= 8u;
    if ( AMLIIsNamedChildPresent(v7, 826951007)
      || AMLIIsNamedChildPresent(v7, 843728223)
      || AMLIIsNamedChildPresent(v7, 860505439)
      || AMLIIsNamedChildPresent(v7, 877282655) )
    {
      SecurityContext->m128i_i32[1] |= 0x10000u;
    }
    DeviceCapabilities = ACPISystemPowerQueryDeviceCapabilities((_QWORD *)DeviceExtension, SecurityContext);
    SecurityContext[1].m128i_i32[2] = 4;
    SecurityContext[1].m128i_i32[3] = 4;
    SecurityContext[2].m128i_i32[0] = 4;
    *(__m128i *)(DeviceExtension + 452) = *SecurityContext;
    *(_QWORD *)(DeviceExtension + 468) = SecurityContext[1].m128i_i64[0];
    *(_DWORD *)(DeviceExtension + 476) = SecurityContext[1].m128i_i32[2];
  }
  else
  {
    DeviceCapabilities = -1073741823;
  }
  a2->IoStatus.Status = DeviceCapabilities;
  IofCompleteRequest(a2, 0);
  return DeviceCapabilities;
}
