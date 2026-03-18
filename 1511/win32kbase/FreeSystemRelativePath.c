/*
 * XREFs of FreeSystemRelativePath @ 0x1C005C980
 * Callers:
 *     ldevLoadDriver @ 0x1C005C400 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C005C640 (ldevLoadImage.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
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
