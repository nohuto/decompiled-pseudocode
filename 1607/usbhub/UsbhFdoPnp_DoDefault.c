/*
 * XREFs of UsbhFdoPnp_DoDefault @ 0x1C0018DA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_DoDefault(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  __int64 MinorFunction; // r9
  __int64 v6; // rcx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL, 0LL, a4);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), v4, a4);
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  if ( (UsbhLogMask & 2) != 0 )
  {
    v6 = *(_QWORD *)(v4 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
    *(_DWORD *)v6 = 1717912678;
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_QWORD *)(v6 + 16) = MinorFunction;
    *(_QWORD *)(v6 + 24) = a2;
  }
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
