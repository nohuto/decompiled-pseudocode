/*
 * XREFs of _GetDC @ 0x1C0015140
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetDC(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // rcx

  if ( a1 )
  {
    v1 = 0x10000LL;
    return GetDCEx(a1, 0LL, v1);
  }
  v3 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 416);
  if ( v3 )
  {
    v1 = 3LL;
    a1 = *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16LL);
    return GetDCEx(a1, 0LL, v1);
  }
  return 0LL;
}
