/*
 * XREFs of PushPost @ 0x1C0009F80
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     IncDec @ 0x1C0009FE0 (IncDec.c)
 *     NestAsyncEvalObject @ 0x1C0046868 (NestAsyncEvalObject.c)
 *     Unload @ 0x1C00470C0 (Unload.c)
 *     Divide @ 0x1C0047650 (Divide.c)
 *     LoadTable @ 0x1C0047990 (LoadTable.c)
 *     Wait @ 0x1C0049180 (Wait.c)
 * Callees:
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 */

__int64 __fastcall PushPost(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  result = PushFrame(a1, 1414745936, 56, a2, (__int64)v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32LL) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
