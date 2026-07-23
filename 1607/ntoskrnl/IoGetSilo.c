/*
 * XREFs of IoGetSilo @ 0x140079FC8
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14007B5A0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetSilo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 7LL, 0LL, a4);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}
