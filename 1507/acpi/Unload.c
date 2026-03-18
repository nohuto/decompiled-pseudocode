/*
 * XREFs of Unload @ 0x1C00477B0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C0013180 (ValidateArgTypes.c)
 *     PushPost @ 0x1C00188D0 (PushPost.c)
 */

__int64 __fastcall Unload(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = ValidateArgTypes(*(_QWORD *)(a2 + 80), 1, (__int64)"H");
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
    if ( v5 )
      return PushPost(a1, (__int64)ParseUnload, v5, 0LL, *(_QWORD *)(a2 + 88));
  }
  return result;
}
