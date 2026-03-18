/*
 * XREFs of PopConsoleSessionActiveInput @ 0x1405644F0
 * Callers:
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopSessionConnected @ 0x140582F38 (PopSessionConnected.c)
 *     PopLazySensorActiveInput @ 0x1406BCB94 (PopLazySensorActiveInput.c)
 * Callees:
 *     PopUpdateTimeouts @ 0x14055DE64 (PopUpdateTimeouts.c)
 *     PopRemoteSessionActiveInput @ 0x140564564 (PopRemoteSessionActiveInput.c)
 */

__int64 __fastcall PopConsoleSessionActiveInput(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v4; // esi
  int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  int v10; // [rsp+54h] [rbp+1Ch]
  unsigned int v11; // [rsp+58h] [rbp+20h] BYREF
  int v12; // [rsp+5Ch] [rbp+24h]

  v12 = 0;
  v4 = a2;
  v10 = 0;
  v5 = a1;
  PopRemoteSessionActiveInput(a1, a2, a3);
  v6 = *a3;
  v11 = a3[1];
  v7 = v11;
  v9 = v6;
  byte_14032D364 = v6 != 0;
  dword_14032D358 = v4;
  result = PopUpdateTimeouts(v5, &v11, &v9);
  *a3 = v6;
  a3[1] = v7;
  return result;
}
