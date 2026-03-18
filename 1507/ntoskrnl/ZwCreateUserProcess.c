/*
 * XREFs of ZwCreateUserProcess @ 0x140180730
 * Callers:
 *     RtlpCreateUserProcess @ 0x1407BC7DC (RtlpCreateUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreateUserProcess(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
