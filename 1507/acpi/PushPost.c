/*
 * XREFs of PushPost @ 0x1C00188D0
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     IncDec @ 0x1C0018880 (IncDec.c)
 *     NestAsyncEvalObject @ 0x1C0046F48 (NestAsyncEvalObject.c)
 *     Unload @ 0x1C00477B0 (Unload.c)
 *     Divide @ 0x1C0047D40 (Divide.c)
 *     LoadTable @ 0x1C0048080 (LoadTable.c)
 *     Wait @ 0x1C0049870 (Wait.c)
 * Callees:
 *     PushFrame @ 0x1C0013EA4 (PushFrame.c)
 */

__int64 __fastcall PushPost(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  result = PushFrame(a1, 1414745936, 0x38u, a2, v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32) = a3;
    *(_QWORD *)(v8 + 40) = a4;
    *(_QWORD *)(v8 + 48) = a5;
  }
  return result;
}
