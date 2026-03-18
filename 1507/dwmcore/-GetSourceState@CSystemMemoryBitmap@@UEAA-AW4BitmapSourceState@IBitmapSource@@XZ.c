/*
 * XREFs of ?GetSourceState@CSystemMemoryBitmap@@UEAA?AW4BitmapSourceState@IBitmapSource@@XZ @ 0x18000EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetSourceState(__int64 a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_QWORD *)(a1 + 248) )
    return 2LL;
  return result;
}
