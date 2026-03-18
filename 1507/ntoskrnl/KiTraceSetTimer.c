/*
 * XREFs of KiTraceSetTimer @ 0x1402099B0
 * Callers:
 *     KiResumeThread @ 0x14000E65C (KiResumeThread.c)
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140066890 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiAdjustTimerDueTimes @ 0x140154CC0 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void *__fastcall KiTraceSetTimer(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  unsigned __int16 v6; // cx
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v9; // [rsp+40h] [rbp-30h]
  char v10; // [rsp+42h] [rbp-2Eh]
  char v11; // [rsp+43h] [rbp-2Dh]
  int v12; // [rsp+44h] [rbp-2Ch]
  char v13; // [rsp+48h] [rbp-28h]
  char v14; // [rsp+49h] [rbp-27h]
  __int16 v15; // [rsp+4Ah] [rbp-26h]
  _QWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF

  v4 = *(unsigned int *)(a1 + 56);
  v8[0] = *(_QWORD *)(a1 + 24);
  v12 = *(_DWORD *)(a1 + 60);
  v13 = *(_BYTE *)(a1 + 1) >> 2;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  if ( (unsigned int)v4 >= (unsigned int)KeNumberProcessors_0 )
  {
    v5 = 0LL;
  }
  else
  {
    _mm_lfence();
    v5 = KiProcessorBlock[v4];
  }
  v8[1] = a1;
  v9 = *(unsigned __int8 *)(v5 + 1616);
  v10 = *(_BYTE *)(v5 + 1617);
  v14 = 0;
  v11 = v13 != 0;
  v15 = 0;
  if ( a2 )
    v11 = (v13 != 0) | 2;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v6 = 3922;
  }
  else
  {
    v6 = 3924;
    if ( !a3 )
      v6 = 3923;
  }
  v16[1] = 32LL;
  v16[0] = v8;
  return EtwTraceKernelEvent((int)v16, 1, 0x40020000u, v6, a3 != 0 ? 1538 : 8395522);
}
