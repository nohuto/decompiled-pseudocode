/*
 * XREFs of RtlSetThreadPoolStartFunc @ 0x1800771B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlSetThreadPoolStartFunc(__int64 (__fastcall *a1)(), __int64 (__fastcall *a2)())
{
  __int64 result; // rax

  RtlpStartThreadFunc = a1;
  result = 0LL;
  RtlpExitThreadFunc[0] = a2;
  return result;
}
