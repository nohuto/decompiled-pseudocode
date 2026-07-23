/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x14052E804
 * Callers:
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14052E8F0 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 *     PopGetLockConsoleTimeout @ 0x14052EEFC (PopGetLockConsoleTimeout.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(unsigned int a1, int a2, _DWORD *a3)
{
  int v6; // eax
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]
  int v10; // [rsp+48h] [rbp+20h] BYREF
  int v11; // [rsp+4Ch] [rbp+24h]

  v8 = 0;
  v9 = 256;
  v11 = 0;
  byte_140302404 = 0;
  PopGetLockConsoleTimeout();
  dword_1403023F8 = a2;
  PopSetSessionUserStatus(a1, 2LL);
  v6 = qword_1403023EC;
  *a3 = 0;
  v10 = v6;
  a3[1] = v6;
  return PopUpdateTimeouts(a1, &v10, &v8);
}
