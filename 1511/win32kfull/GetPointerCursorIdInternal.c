/*
 * XREFs of GetPointerCursorIdInternal @ 0x1C01E11A0
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C021B390 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F8E08 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01FC678 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall GetPointerCursorIdInternal(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned __int64 ThreadPointerData; // rax
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v6; // edx

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 960), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData && (NodeById = FindNodeById(*(_WORD *)(ThreadPointerData + 16), 0, 0)) != 0LL )
  {
    *a3 = *((unsigned __int16 *)NodeById + 17);
    return (unsigned int)(v6 + 1);
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
