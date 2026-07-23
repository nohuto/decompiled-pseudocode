/*
 * XREFs of IoStartIoRateControl @ 0x1400B4A9C
 * Callers:
 *     PspIoRateEntryActivate @ 0x1404D4244 (PspIoRateEntryActivate.c)
 * Callees:
 *     IopIoRateStartRateControl @ 0x1400B4B80 (IopIoRateStartRateControl.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall IoStartIoRateControl(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v5; // zf
  _QWORD v7[16]; // [rsp+40h] [rbp-41h] BYREF

  v7[0] = *(_QWORD *)a1;
  v5 = (*(_BYTE *)(a1 + 36) & 2) == 0;
  v7[3] = *(_QWORD *)(a1 + 16);
  v7[6] = *(_QWORD *)(a1 + 48);
  v7[9] = *(_QWORD *)(a1 + 96);
  v7[12] = *(_QWORD *)(a1 + 120);
  v7[1] = *(_QWORD *)(a1 + 8);
  v7[4] = *(_QWORD *)(a1 + 56);
  v7[7] = *(_QWORD *)(a1 + 64);
  v7[10] = *(_QWORD *)(a1 + 104);
  v7[13] = *(_QWORD *)(a1 + 128);
  v7[2] = *(_QWORD *)(a1 + 72);
  v7[5] = *(_QWORD *)(a1 + 80);
  v7[8] = *(_QWORD *)(a1 + 88);
  v7[11] = *(_QWORD *)(a1 + 112);
  v7[14] = *(_QWORD *)(a1 + 136);
  return IopIoRateStartRateControl((unsigned int)v7, a5, !v5, a2, a3, a4, a5);
}
