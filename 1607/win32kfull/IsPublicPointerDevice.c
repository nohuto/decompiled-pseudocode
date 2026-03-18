/*
 * XREFs of IsPublicPointerDevice @ 0x1C00E2ED4
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 316) )
    return *(_DWORD *)(*(_QWORD *)(a1 + 480) + 24LL) != 7;
  return result;
}
