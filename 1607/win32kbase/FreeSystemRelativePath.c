/*
 * XREFs of FreeSystemRelativePath @ 0x1C006C950
 * Callers:
 *     ldevLoadDriver @ 0x1C006C3D0 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C006C610 (ldevLoadImage.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

__int64 __fastcall FreeSystemRelativePath(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    result = Win32FreePool();
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
  return result;
}
