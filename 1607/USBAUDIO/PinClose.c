/*
 * XREFs of PinClose @ 0x1C00157F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 *     PinRemovePinFromList @ 0x1C0002194 (PinRemovePinFromList.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007440 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PinClose(_QWORD *a1)
{
  __int64 v1; // rbx
  unsigned int v3; // ebx

  v1 = a1[2];
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x11u,
      (__int64)&WPP_89771fce86223ed4814147843477e0f4_Traceguids,
      a1);
  --*(_DWORD *)(*(_QWORD *)(v1 + 24) + 140LL);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)(*(_QWORD *)(v1 + 128) + 128LL) + 8LL))(a1);
  PinRemovePinFromList(a1);
  return v3;
}
