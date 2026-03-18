/*
 * XREFs of IopPowerDispatch @ 0x1401163CC
 * Callers:
 *     <none>
 * Callees:
 *     PoSetPowerState @ 0x140124AE0 (PoSetPowerState.c)
 */

__int64 __fastcall IopPowerDispatch(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edx
  unsigned int v6; // ebx
  _DWORD *v8; // rcx
  int v9; // eax

  v4 = *(_QWORD *)(a2 + 184);
  if ( !*(_BYTE *)(v4 + 1) )
    goto LABEL_8;
  if ( *(_BYTE *)(v4 + 1) == 1 )
  {
    v8 = *(_DWORD **)(v4 + 8);
    v9 = PoPowerSequence;
    *v8 = PoPowerSequence;
    v8[1] = v9;
    v8[2] = v9;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(v4 + 1) != 2 )
  {
    if ( *(_BYTE *)(v4 + 1) == 3 )
      goto LABEL_5;
LABEL_8:
    v6 = *(_DWORD *)(a2 + 48);
    goto LABEL_6;
  }
  v5 = *(_DWORD *)(v4 + 16);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      PoSetPowerState(DeviceObject, DevicePowerState, *(POWER_STATE *)(v4 + 24));
      goto LABEL_5;
    }
    goto LABEL_8;
  }
LABEL_5:
  v6 = 0;
  *(_DWORD *)(a2 + 48) = 0;
LABEL_6:
  pIofCompleteRequest(a2, 0LL);
  return v6;
}
