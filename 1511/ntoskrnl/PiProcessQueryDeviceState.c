/*
 * XREFs of PiProcessQueryDeviceState @ 0x1404ECBB8
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14050B4B8 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxActivateDevice @ 0x14001AA10 (PoFxActivateDevice.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PoFxIdleDevice @ 0x1400DC378 (PoFxIdleDevice.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PnpCheckForActiveDependencies @ 0x140458A70 (PnpCheckForActiveDependencies.c)
 *     PnpRequestDeviceRemoval @ 0x14049EA8C (PnpRequestDeviceRemoval.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x1404ECD38 (IopQueryDeviceState.c)
 *     PipSetDevNodeUserFlags @ 0x14050AAD0 (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x140542230 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x14054B5C8 (IopDecDisableableDepends.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  int v4; // esi
  char v5; // di
  int v6; // eax
  char *v7; // rcx
  int v9; // r8d
  int v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+58h] [rbp+10h] BYREF

  v1 = Object[39];
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation((__int64 **)&P);
  PoFxActivateDevice(*(_QWORD *)(v3 + 32));
  *(_DWORD *)(v3 + 704) |= 0x100u;
  v4 = IopQueryDeviceState(Object, &v10);
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
  if ( ((v5 & 9) != 0 || (v5 & 0x14) == 4) && PnpCheckForActiveDependencies(v3, 3u) )
  {
    v9 = 51;
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
    v9 = 43;
  }
  PnpRequestDeviceRemoval(v3, 0, v9, 0);
  v4 = -1073741823;
LABEL_14:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v7 = (char *)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return (unsigned int)v4;
}
