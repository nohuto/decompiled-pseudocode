/*
 * XREFs of SetClearAssociatedNativeObjectNoLock @ 0x1C000577C
 * Callers:
 *     CreateNativeNameSpaceObject @ 0x1C0005530 (CreateNativeNameSpaceObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetClearAssociatedNativeObjectNoLock(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 136) = a2;
  if ( a2 )
  {
    result = 1024LL;
    *(_WORD *)(a1 + 64) |= 0x400u;
  }
  else
  {
    result = 64511LL;
    *(_WORD *)(a1 + 64) &= ~0x400u;
  }
  return result;
}
