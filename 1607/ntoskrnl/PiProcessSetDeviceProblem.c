/*
 * XREFs of PiProcessSetDeviceProblem @ 0x140649ADC
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     PipIsProblemReadonly @ 0x14062E304 (PipIsProblemReadonly.c)
 */

__int64 __fastcall PiProcessSetDeviceProblem(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // r14d
  int v5; // eax
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // r9d
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD **)(a1 + 32);
  P = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 787) <= 1 )
  {
    v4 = -1073741738;
  }
  else
  {
    v4 = 0;
    PiPnpRtlBeginOperation((__int64 **)&P);
    v5 = v2[5];
    v6 = (v5 & 0x40000) != 0;
    if ( (v5 & 0x100) != 0 )
      v6 |= 4u;
    v7 = 0;
    if ( (v5 & 0x8000) != 0 )
      v7 = 0x4000;
    if ( (v5 & 0x400) != 0 )
      v7 |= 0x2000u;
    v8 = v2[6];
    if ( v8 == 14 )
    {
      if ( ((*(_DWORD *)(v3 + 300) - 770) & 0xFFFFFFEF) != 0 )
        v7 &= ~0x2000u;
      v6 |= 4u;
    }
    if ( (v7 & 0x6000) == 0 )
      goto LABEL_18;
    if ( ((*(_DWORD *)(v3 + 300) - 770) & 0xFFFFFFEF) == 0
      && ((v7 & 0x4000) != 0 || v8 < 0x37 && !(unsigned int)PipIsProblemReadonly(v3, v8)) )
    {
      PipSetDevNodeProblem(v3, v8, v2[8]);
LABEL_18:
      PipSetDevNodeFlags(v3, v7);
      PipSetDevNodeUserFlags(v3, v6);
      goto LABEL_21;
    }
    v4 = -1073741584;
  }
LABEL_21:
  if ( (v2[7] & 1) != 0 )
    ExFreePoolWithTag(v2, 0x55706E50u);
  if ( P )
    PiPnpRtlEndOperation((char *)P);
  return v4;
}
