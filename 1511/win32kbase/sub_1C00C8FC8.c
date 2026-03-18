/*
 * XREFs of sub_1C00C8FC8 @ 0x1C00C8FC8
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C000CC50 (RawInputManagerObjectDelete.c)
 *     RIMReclaimHoldingFrame @ 0x1C00C97A8 (RIMReclaimHoldingFrame.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall sub_1C00C8FC8(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v1 = *(_QWORD *)(v1 + 16);
      Win32FreePool();
      result = Win32FreePool();
    }
    while ( v1 );
  }
  return result;
}
