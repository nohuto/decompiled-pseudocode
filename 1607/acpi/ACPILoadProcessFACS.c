/*
 * XREFs of ACPILoadProcessFACS @ 0x1C00A673C
 * Callers:
 *     ACPILoadProcessFADT @ 0x1C00A65F4 (ACPILoadProcessFADT.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0004BB0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0014508 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

__int64 ACPILoadProcessFACS()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  int v2; // edx
  __int64 v3; // rdi
  int v4; // edx

  v0 = 0;
  v1 = (*(__int64 (**)(void))(PmHalDispatchTable + 104))();
  v3 = v1;
  if ( !v1 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      13,
      (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids);
    return (unsigned int)-1072431079;
  }
  if ( *(_DWORD *)(v1 + 4) != 64 )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      6,
      14,
      (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
      v1);
    return (unsigned int)-1072431079;
  }
  LOBYTE(v2) = 2;
  WPP_RECORDER_SF_q(
    WPP_GLOBAL_Control->DeviceExtension,
    v2,
    6,
    15,
    (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
    v1);
  *((_QWORD *)AcpiInformation + 2) = v3;
  *((_QWORD *)AcpiInformation + 5) = v3 + 16;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v4,
    6,
    16,
    (__int64)&WPP_71c9c355fd613e34483cf3f827b845ba_Traceguids,
    *(_DWORD *)(v3 + 16));
  return v0;
}
