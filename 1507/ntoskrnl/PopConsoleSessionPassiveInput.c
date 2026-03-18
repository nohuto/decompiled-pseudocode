/*
 * XREFs of PopConsoleSessionPassiveInput @ 0x14055DA2C
 * Callers:
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14055DE64 (PopUpdateTimeouts.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopConsoleSessionPassiveInput(__int64 a1, int a2, _DWORD *a3)
{
  unsigned int v4; // edi
  int v5; // eax
  int v7; // [rsp+40h] [rbp+18h] BYREF
  int v8; // [rsp+44h] [rbp+1Ch]
  int v9; // [rsp+48h] [rbp+20h] BYREF
  int v10; // [rsp+4Ch] [rbp+24h]

  dword_14032D358 = a2;
  v7 = 0;
  v8 = 256;
  v4 = a1;
  v10 = 0;
  byte_14032D364 = 0;
  PopSetSessionUserStatus(a1, 2LL);
  v5 = qword_14032D34C;
  *a3 = 0;
  v9 = v5;
  a3[1] = v5;
  return PopUpdateTimeouts(v4, &v9, &v7);
}
