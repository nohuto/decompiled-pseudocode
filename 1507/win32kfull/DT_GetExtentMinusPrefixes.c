/*
 * XREFs of DT_GetExtentMinusPrefixes @ 0x1C024AFBC
 * Callers:
 *     DT_DrawStr @ 0x1C024AE98 (DT_DrawStr.c)
 *     NeedsEndEllipsis @ 0x1C024B614 (NeedsEndEllipsis.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreGetTextExtentW @ 0x1C00FA610 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0126A38 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C01382E8 (GetPrefixCount.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0214D78 (xxxClientLpkDrawTextEx.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(HDC a1, __m128i *a2, unsigned int a3, int a4, int a5, __int64 a6, int a7)
{
  __int64 ThreadWin32Thread; // r14
  __int64 v12; // r8
  struct tagSIZE v14; // [rsp+58h] [rbp-40h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v14.cx = 0;
  v14.cy = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v15 = ThreadWin32Thread;
  GetPrefixCount(a2->m128i_i16, a3, 0LL, 0);
  if ( *(_DWORD *)(a6 + 60) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, (const WCHAR *)a2, a3, 0, a4, v12, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, (const WCHAR *)a2, a3, &v14);
  else
    GreGetTextExtentW(a1, a2, a3, &v14, 1);
  return (unsigned int)v14.cx;
}
