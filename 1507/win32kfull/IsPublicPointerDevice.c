/*
 * XREFs of IsPublicPointerDevice @ 0x1C0145C6C
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01453D0 (Win32kRIMDevChangeCallback.c)
 *     ProcessDeviceChanges @ 0x1C01DFB10 (ProcessDeviceChanges.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPublicPointerDevice(__int64 a1)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 316) )
    return *(_DWORD *)(*(_QWORD *)(a1 + 416) + 24LL) != 8;
  return result;
}
