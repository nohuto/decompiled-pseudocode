/*
 * XREFs of RaidUnitSendPoFxPowerControlToMiniport @ 0x1C00313DC
 * Callers:
 *     StorPortUnitPowerControl @ 0x1C0032030 (StorPortUnitPowerControl.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C00110A8 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x1C0011128 (RaCallMiniportUnitControl.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall RaidUnitSendPoFxPowerControlToMiniport(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  unsigned int v11; // ebx
  __int64 v12; // rcx
  _DWORD v14[15]; // [rsp+24h] [rbp-44h] BYREF

  v11 = -1073741637;
  if ( RaidIsUnitControlSupported(a1, 8) )
  {
    memset(v14, 0, sizeof(v14));
    v12 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)&v14[1] = a1 + 80;
    *(_QWORD *)&v14[11] = a5;
    *(_QWORD *)&v14[7] = a6;
    *(_QWORD *)&v14[13] = a7;
    v14[0] = 64;
    *(_QWORD *)&v14[3] = a2;
    *(_QWORD *)&v14[9] = a3;
    *(_QWORD *)&v14[5] = a4;
    return (unsigned int)RaCallMiniportUnitControl(v12 + 296);
  }
  else if ( a7 )
  {
    *a7 = 0LL;
  }
  return v11;
}
