/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x1403F2B90
 * Callers:
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x1403F1CBC (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1403F47CC (PnpDeviceCompletionProcessCompletedRequests.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14000842C (PoFxIdleDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400088EC (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1400B457C (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x140488D1C (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x1404C8128 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 774 || v3 == 779 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1,
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
