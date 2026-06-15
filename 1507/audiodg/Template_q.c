/*
 * XREFs of Template_q @ 0x1400273C4
 * Callers:
 *     ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014944 (-PostMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140014B24 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 */

__int64 __fastcall Template_q(__int64 a1, __int64 a2, int a3)
{
  int *v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+60h] [rbp+18h] BYREF

  v7 = a3;
  v4 = &v7;
  v6 = 0;
  v5 = 4;
  return ((__int64 (__fastcall *)(REGHANDLE, __int64, __int64, int **))EtwEventWrite)(
           Microsoft_Windows_AudioHandle,
           a2,
           1LL,
           &v4);
}
