/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1404E3D54
 * Callers:
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1404616A8 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1404E1C98 (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140026DEC (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400CFF6C (PnpDeviceCompletionRequestDestroy.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x1404D8694 (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x140538988 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // r8d
  __int64 v6; // rdx
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 774 || v3 == 779 )
    {
      v4 = *(_QWORD *)(v2 + 32);
      v5 = 0;
      v6 = v4;
      if ( v4 )
      {
        do
        {
          v7 = *(_DWORD *)(v6 + 52);
          v6 = *(_QWORD *)(v6 + 24);
          v5 |= v7 & 0x40000;
        }
        while ( v6 );
        if ( v5 )
        {
          do
          {
            *(_DWORD *)(v4 + 52) |= v5;
            v4 = *(_QWORD *)(v4 + 24);
          }
          while ( v4 );
        }
      }
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 781 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy((volatile signed __int32 *)a1);
  return *(unsigned int *)(v2 + 392);
}
