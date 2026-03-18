/*
 * XREFs of IncDec @ 0x1C0018880
 * Callers:
 *     <none>
 * Callees:
 *     ReadObject @ 0x1C0016CF8 (ReadObject.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 */

__int64 __fastcall IncDec(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = PushPost(a1, (unsigned int)ProcessIncDec, *(_DWORD *)(a2[7] + 8LL), a2[10], a2[11]);
  if ( !(_DWORD)result )
    return ReadObject(a1, a2[10], a2[11]);
  return result;
}
