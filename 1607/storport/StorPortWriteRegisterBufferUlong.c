/*
 * XREFs of StorPortWriteRegisterBufferUlong @ 0x1C002E540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall StorPortWriteRegisterBufferUlong(__int64 a1, _DWORD *a2, _DWORD *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  __int64 i; // rcx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = a4; i; --i )
    *a2++ = *a3++;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return result;
}
