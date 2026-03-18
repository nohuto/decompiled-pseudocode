/*
 * XREFs of DT_GetExtentMinusPrefixes @ 0x1C024728C
 * Callers:
 *     DT_DrawStr @ 0x1C0247168 (DT_DrawStr.c)
 *     NeedsEndEllipsis @ 0x1C02478DC (NeedsEndEllipsis.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9374 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00B9920 (GetPrefixCount.c)
 *     GreGetTextExtentW @ 0x1C0123640 (GreGetTextExtentW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 */

__int64 __fastcall DT_GetExtentMinusPrefixes(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  int v7; // r15d
  unsigned int v8; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 ThreadWin32Thread; // r14
  __int64 v15; // r8
  struct tagSIZE v17; // [rsp+58h] [rbp-40h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]

  v7 = a4;
  v8 = a3;
  v17.cx = 0;
  v17.cy = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2, a3, a4);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v18 = ThreadWin32Thread;
  GetPrefixCount((__int16 *)a2, v8, 0LL, 0);
  if ( *(_DWORD *)(a6 + 60) && (unsigned int)CALL_LPK(ThreadWin32Thread) )
    return xxxClientLpkDrawTextEx(a1, 0, 0, a2, v8, 0, v7, v15, 1, a7);
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
    xxxClientGetTextExtentPointW(a1, a2, v8, &v17);
  else
    GreGetTextExtentW(a1, a2, v8, &v17, 1);
  return (unsigned int)v17.cx;
}
