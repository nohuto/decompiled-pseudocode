/*
 * XREFs of PiProcessQueryDeviceState @ 0x1403F026C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14054619C (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxActivateDevice @ 0x140007BF4 (PoFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140007FA0 (PoFxIdleDevice.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     IopQueryDeviceState @ 0x1403F01FC (IopQueryDeviceState.c)
 *     PipClearDevNodeUserFlags @ 0x1403F03B8 (PipClearDevNodeUserFlags.c)
 *     PnpCheckForActiveDependencies @ 0x1403F371C (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemoval @ 0x140484BC8 (PnpRequestDeviceRemoval.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x140576B10 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140581AC0 (IopDecDisableableDepends.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // esi
  char v5; // di
  int v6; // eax
  PVOID v7; // rcx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v1 = Object[39];
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation(&P);
  PoFxActivateDevice(*(_QWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 704) |= 0x100u;
  v4 = IopQueryDeviceState((int)Object, &v10);
  if ( v4 < 0 )
  {
    v4 = 0;
    goto LABEL_14;
  }
  v5 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v3);
  else
    PipClearDevNodeUserFlags(v3);
  if ( (v5 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v3);
  else
    PipClearDevNodeUserFlags(v3);
  v6 = *(_DWORD *)(v3 + 400);
  if ( (v5 & 0x20) != 0 )
  {
    if ( (v6 & 8) == 0 )
    {
      PipSetDevNodeUserFlags(v3);
      IopIncDisableableDepends(v3);
    }
  }
  else if ( (v6 & 8) != 0 )
  {
    IopDecDisableableDepends(v3);
    PipClearDevNodeUserFlags(v3);
  }
  if ( ((v5 & 9) != 0 || (v5 & 0x14) == 4) && (unsigned __int8)PnpCheckForActiveDependencies(v3, 3LL) )
  {
    v9 = 51LL;
  }
  else if ( (v5 & 9) != 0 )
  {
    v9 = (v5 & 1) != 0 ? 29 : 24;
  }
  else
  {
    if ( (v5 & 0x10) != 0 )
    {
      PnpRequestDeviceAction(Object, 13, 0, (v5 & 4) != 0, 0LL, 0LL);
      goto LABEL_14;
    }
    if ( (v5 & 4) == 0 )
      goto LABEL_14;
    v9 = 43LL;
  }
  PnpRequestDeviceRemoval(v3, 0LL, v9, 0LL);
  v4 = -1073741823;
LABEL_14:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v7 = P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v4;
}
