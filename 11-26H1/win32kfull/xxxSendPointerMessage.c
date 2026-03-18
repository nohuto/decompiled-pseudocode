/*
 * XREFs of xxxSendPointerMessage @ 0x140136FB4
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1401370F0 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     xxxSendPointerMessageWorker @ 0x140137038 (xxxSendPointerMessageWorker.c)
 */

__int64 __fastcall xxxSendPointerMessage(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  struct tagTHREADPOINTERDATA *ThreadPointerData; // rax
  __int64 v10; // r8
  int v12; // ecx

  if ( *(_QWORD *)(a1 + 1232) )
  {
    v12 = 5;
  }
  else
  {
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 1208), a2);
    if ( ThreadPointerData )
    {
      if ( (*((_DWORD *)ThreadPointerData + 12) & 8) == 0 )
      {
        v10 = *((_QWORD *)ThreadPointerData + 3);
        if ( v10 )
          return xxxSendPointerMessageWorker(a3, a4, v10, a5, a6, a7);
      }
    }
    v12 = 87;
  }
  UserSetLastError(v12);
  return 0LL;
}
