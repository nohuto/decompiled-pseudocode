/*
 * XREFs of _GetDC @ 0x1C007C640
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDC(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = 0x10000;
    return GetDCEx(a1, 0LL, v1);
  }
  v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408);
  if ( v3 )
  {
    v1 = 3;
    a1 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return 0LL;
}
