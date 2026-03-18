/*
 * XREFs of IsPublicPointerDevice @ 0x1C0095E60
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C0094F50 (Win32kRIMDevChangeCallback.c)
 *     ProcessDeviceChanges @ 0x1C01E0120 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 308) )
    return *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL) != 8;
  return result;
}
