/*
 * XREFs of DT_DrawStr @ 0x1C0247168
 * Callers:
 *     DT_DrawJustifiedLine @ 0x1C02470A8 (DT_DrawJustifiedLine.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     GreGetLayout @ 0x1C005D99C (GreGetLayout.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     xxxClientLpkDrawTextEx @ 0x1C020DA2C (xxxClientLpkDrawTextEx.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024728C (DT_GetExtentMinusPrefixes.c)
 */

__int64 __fastcall DT_DrawStr(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9)
{
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax
  int v18; // [rsp+20h] [rbp-48h]

  if ( (GreGetLayout(a1) & 1) != 0 )
    --a2;
  if ( *(_DWORD *)(a8 + 60) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
    result = CALL_LPK(ThreadWin32Thread);
    if ( (_DWORD)result )
      return xxxClientLpkDrawTextEx(a1, a2, a3, a4, a5, a6, a7, a8, 1, a9);
  }
  else
  {
    if ( a6 )
    {
      v18 = a5;
      (*(void (__fastcall **)(HDC, _QWORD, _QWORD, WCHAR *))(a8 + 48))(a1, a2, a3, a4);
    }
    return (unsigned int)DT_GetExtentMinusPrefixes(a1, a4, a5, a7, v18, a8, a9) - *(_DWORD *)(a8 + 56);
  }
  return result;
}
