/*
 * XREFs of PiProcessClearDeviceProblem @ 0x14058C2C8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 * Callees:
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PnpRestartDeviceNode @ 0x14058C398 (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14058C4FC (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessClearDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  _DWORD *v3; // rdi
  int v4; // edx
  int v5; // r9d
  int v6; // r10d
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  P = 0LL;
  v3 = *(_DWORD **)(*(_QWORD *)(v1 + 312) + 40LL);
  v4 = v3[75];
  if ( ((v4 - 769) & 0xFFFFFFEE) != 0 || v4 == 785 )
  {
    if ( (unsigned int)(v4 - 787) <= 1 )
      return (unsigned int)-1073741738;
  }
  else
  {
    v5 = v3[99];
    if ( (v5 & 0x6000) != 0 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      if ( v6 == 1 && (unsigned int)PipIsProblemReadonly(v3, (unsigned int)v3[101]) )
      {
        return (unsigned int)-1073741584;
      }
      else if ( v6 != 3 || (v5 & 0x2000) != 0 && v3[101] == 47 )
      {
        PiPnpRtlBeginOperation((__int64 **)&P);
        PipClearDevNodeFlags((__int64)v3, 0x4000);
        PipClearDevNodeProblem((__int64)v3);
        if ( v3[75] != 769 )
          PnpRestartDeviceNode(v3);
        if ( P )
          PiPnpRtlEndOperation((char *)P);
      }
      else
      {
        return (unsigned int)-1073741808;
      }
    }
  }
  return v2;
}
