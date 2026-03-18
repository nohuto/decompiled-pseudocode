/*
 * XREFs of _GetDC @ 0x1C0077E80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v5; // rcx

  if ( a1 )
  {
    v3 = 0x10000LL;
    return GetDCEx(a1, 0LL, v3);
  }
  v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 408);
  if ( v5 )
  {
    v3 = 3LL;
    a1 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL);
    return GetDCEx(a1, 0LL, v3);
  }
  return 0LL;
}
