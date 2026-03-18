/*
 * XREFs of GetPointerCursorIdInternal @ 0x1C01D74F8
 * Callers:
 *     NtUserGetPointerCursorId @ 0x1C0214250 (NtUserGetPointerCursorId.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01EFFF4 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z @ 0x1C01F3918 (-FindNodeById@@YAPEAUtagINPUTPOINTERNODE@@GHH@Z.c)
 */

__int64 __fastcall GetPointerCursorIdInternal(__int64 a1, unsigned __int16 a2, _DWORD *a3)
{
  unsigned __int64 ThreadPointerData; // rax
  struct tagINPUTPOINTERNODE *NodeById; // rax
  int v6; // edx

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), a2, 0LL, 0LL, 0LL);
  if ( ThreadPointerData && (NodeById = FindNodeById(*(_WORD *)(ThreadPointerData + 16), 0, 0)) != 0LL )
  {
    *a3 = *((unsigned __int16 *)NodeById + 17);
    return (unsigned int)(v6 + 1);
  }
  else
  {
    UserSetLastError(87LL);
    return 0LL;
  }
}
