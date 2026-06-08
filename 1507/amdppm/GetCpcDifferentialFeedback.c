/*
 * XREFs of GetCpcDifferentialFeedback @ 0x1C0002CB0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C0004A60 (ReadGenAddr.c)
 */

__int64 __fastcall GetCpcDifferentialFeedback(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  __int64 v6; // rdx
  __int64 result; // rax

  *a3 = ReadGenAddr(a1 + 140, a2);
  result = ReadGenAddr(a1 + 152, v6);
  *a4 = result;
  return result;
}
