/*
 * XREFs of VidSchiUpdateNodeRunningTime @ 0x1C0004950
 * Callers:
 *     VidSchiCheckPreemptionPolicy @ 0x1C0003AE8 (VidSchiCheckPreemptionPolicy.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0004BB0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiUpdateNodeRunningTime(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  __int128 v5; // xmm1
  _OWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v6[0] = a1;
  v7 = 0;
  DpSynchronizeExecution(*(_QWORD *)(v2 + 24), VidSchiUpdateNodeRunningTimeAtISR, v6, *(unsigned int *)(v2 + 32), &v7);
  if ( a2 )
  {
    v5 = v6[1];
    *a2 = v6[0];
    a2[1] = v5;
  }
  return v7;
}
