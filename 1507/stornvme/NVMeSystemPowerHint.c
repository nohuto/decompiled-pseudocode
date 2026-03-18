/*
 * XREFs of NVMeSystemPowerHint @ 0x1C0005A8C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001B80 (NVMeHwAdapterControl.c)
 * Callees:
 *     <none>
 */

void __fastcall NVMeSystemPowerHint(_DWORD *a1, _DWORD *a2)
{
  __int64 v4; // r9
  int v5; // eax
  bool v6; // zf
  _DWORD *v7; // rdx

  if ( a2[1] >= 0x10u && *a2 )
  {
    StorPortDebugPrint(3LL, "StorNVMe - POWER: System Power Hint - Level: %u, Latency: %ums\n", a2[2], a2[3]);
    v4 = 0xFFFFFFFFLL;
    a1[281] = a2[2];
    if ( a2[2] == 1 )
      v5 = a1[21];
    else
      v5 = a1[20];
    if ( v5 == -1 )
      v5 = a2[3];
    v6 = a1[15] == 5;
    a1[282] = v5;
    if ( v6 )
    {
      v7 = a1;
      if ( a2[2] != 1 )
      {
        v4 = (unsigned int)a1[18];
LABEL_14:
        StorPortExtendedFunction(57LL, v7, 0LL, v4);
        return;
      }
    }
    else
    {
      if ( (a1[278] & 0x10) == 0 )
        return;
      v7 = a1;
      if ( a2[2] != 1 )
        goto LABEL_14;
    }
    v4 = (unsigned int)a1[19];
    goto LABEL_14;
  }
}
