/*
 * XREFs of ?HidDeviceStartStop@@YAXXZ @ 0x1C00E1F58
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00E1818 (_RegisterRawInputDevices.c)
 *     FreeProcessHidTable @ 0x1C0129430 (FreeProcessHidTable.c)
 * Callees:
 *     <none>
 */

void __fastcall HidDeviceStartStop(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx

  v1 = aDeviceTemplate[153];
  if ( v1 )
  {
    v2 = *(_QWORD *)(v1 + 32);
    if ( v2 == PsGetCurrentProcess(a1) )
      RIMDirectStartStopDeviceRead(aDeviceTemplate[152]);
    else
      KeSetEvent((PRKEVENT)aDeviceTemplate[185], 1, 0);
  }
}
