/*
 * XREFs of PiProcessClearDeviceProblem @ 0x140649820
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PipIsProblemReadonly @ 0x14062E304 (PipIsProblemReadonly.c)
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
      if ( v6 == 1 && (unsigned int)PipIsProblemReadonly((__int64)v3, v3[101]) )
      {
        return (unsigned int)-1073741584;
      }
      else if ( v6 != 3 || (v5 & 0x2000) != 0 && v3[101] == 47 )
      {
        PiPnpRtlBeginOperation((__int64 **)&P);
        PipClearDevNodeFlags((__int64)v3, 0x4000);
        PipClearDevNodeProblem((__int64)v3);
        if ( v3[75] != 769 )
          PnpRestartDeviceNode((__int64)v3);
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
