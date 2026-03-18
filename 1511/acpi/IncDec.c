/*
 * XREFs of IncDec @ 0x1C0009FE0
 * Callers:
 *     <none>
 * Callees:
 *     PushPost @ 0x1C0009F80 (PushPost.c)
 *     ReadObject @ 0x1C000D298 (ReadObject.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushPost(a1, (int)ProcessIncDec, *(unsigned int *)(a2[7] + 8LL), a2[10], a2[11]);
  if ( !(_DWORD)result )
    return ReadObject(a1, a2[10], a2[11]);
  return result;
}
