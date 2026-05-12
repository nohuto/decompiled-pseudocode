/*
 * XREFs of RaidAdapterMiniportProcessServiceRequest @ 0x1C00275AC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C00020D8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDD @ 0x1C002B114 (WPP_SF_qqDD.c)
 */

__int64 __fastcall RaidAdapterMiniportProcessServiceRequest(__int64 a1, IRP *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int LowPart; // ebp

  v4 = -1073741637;
  v5 = a1 + 296;
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 232);
    if ( v6 )
    {
      if ( !*(_BYTE *)(a1 + 4450) && (*(_BYTE *)(v5 + 248) & 4) != 0 && *(_QWORD *)(v6 + 144) )
      {
        a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        (*(void (__fastcall **)(__int64))(v6 + 144))(*(_QWORD *)(v5 + 240) + 16LL);
        v4 = 259;
      }
    }
  }
  if ( v4 != 259 )
  {
    LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    v4 = RaidCompleteRequestEx(a2, 0, v4);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256));
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_qqDD(
        WPP_GLOBAL_Control->AttachedDevice,
        32LL,
        &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
        a1,
        a2,
        LowPart,
        v4);
    }
  }
  return v4;
}
