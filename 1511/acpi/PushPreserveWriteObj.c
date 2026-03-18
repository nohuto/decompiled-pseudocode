/*
 * XREFs of PushPreserveWriteObj @ 0x1C00462FC
 * Callers:
 *     AccessFieldData @ 0x1C0013530 (AccessFieldData.c)
 * Callees:
 *     PushFrame @ 0x1C0014DD4 (PushFrame.c)
 */

__int64 __fastcall PushPreserveWriteObj(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9[3]; // [rsp+30h] [rbp-18h] BYREF

  result = PushFrame(a1, 1330796368, 0x40u, (__int64)PreserveWriteObj, v9);
  if ( !(_DWORD)result )
  {
    v8 = v9[0];
    *(_QWORD *)(v9[0] + 32) = a2;
    *(_QWORD *)(v8 + 40) = a3;
    *(_QWORD *)(v8 + 48) = a4;
  }
  return result;
}
