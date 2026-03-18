/*
 * XREFs of NVMeSystemPowerHint @ 0x1C00086F0
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0002A40 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

void __fastcall NVMeSystemPowerHint(_DWORD *a1, _DWORD *a2)
{
  int v4; // eax
  bool v5; // zf
  _DWORD *v6; // rdx

  if ( a2[1] >= 0x10u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: System Power Hint - Level: %u, Latency: %ums\n", a2[2], a2[3]);
    a1[283] = a2[2];
    if ( a2[2] == 1 )
    {
      v4 = a1[21];
      if ( v4 == -1 )
        v4 = a2[3];
    }
    else
    {
      v4 = a1[20];
      if ( v4 == -1 )
        v4 = a1[285];
    }
    v5 = a1[15] == 5;
    a1[284] = v4;
    if ( v5 )
    {
      v6 = a1;
    }
    else
    {
      if ( (a1[280] & 0x10) == 0 )
        return;
      v6 = a1;
    }
    StorPortExtendedFunction(57LL, v6, 0LL);
  }
}
