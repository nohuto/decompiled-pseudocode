/*
 * XREFs of StorPortWriteRegisterBufferUchar @ 0x1C002A860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall StorPortWriteRegisterBufferUchar(__int64 a1, void *a2, const void *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  qmemcpy(a2, a3, a4);
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
