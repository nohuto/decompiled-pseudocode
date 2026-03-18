/*
 * XREFs of KiTraceSetTimer @ 0x1401CADF8
 * Callers:
 *     KiResumeThread @ 0x140028CF8 (KiResumeThread.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     KiAdjustTimerDueTimes @ 0x140120638 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KiTraceSetTimer(__int64 a1, __int64 a2, char a3)
{
  ULONG v5; // ecx
  __int64 Prcb; // rax
  unsigned __int16 v8; // cx
  _QWORD v10[2]; // [rsp+30h] [rbp-40h] BYREF
  __int16 v11; // [rsp+40h] [rbp-30h]
  char v12; // [rsp+42h] [rbp-2Eh]
  char v13; // [rsp+43h] [rbp-2Dh]
  int v14; // [rsp+44h] [rbp-2Ch]
  char v15; // [rsp+48h] [rbp-28h]
  char v16; // [rsp+49h] [rbp-27h]
  __int16 v17; // [rsp+4Ah] [rbp-26h]
  _QWORD v18[2]; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(_DWORD *)(a1 + 56);
  v10[0] = *(_QWORD *)(a1 + 24);
  v14 = *(_DWORD *)(a1 + 60);
  v15 = *(_BYTE *)(a1 + 1) >> 2;
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  Prcb = KeGetPrcb(v5);
  v10[1] = a1;
  v11 = *(unsigned __int8 *)(Prcb + 1616);
  v12 = *(_BYTE *)(Prcb + 1617);
  v16 = 0;
  v13 = v15 != 0;
  v17 = 0;
  if ( a2 )
    v13 = (v15 != 0) | 2;
  if ( *(_DWORD *)(a1 + 60) )
  {
    v8 = 3922;
  }
  else
  {
    v8 = 3924;
    if ( !a3 )
      v8 = 3923;
  }
  v18[1] = 32LL;
  v18[0] = v10;
  return EtwTraceKernelEvent((int)v18, 1, 0x40020000u, v8, a3 != 0 ? 1538 : 8395522);
}
