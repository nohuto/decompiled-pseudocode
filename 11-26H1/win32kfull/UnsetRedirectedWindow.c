/*
 * XREFs of UnsetRedirectedWindow @ 0x1400A3250
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1400421A8 (zzzUpdateLayeredWindow.c)
 *     CleanupWindowRedirection @ 0x1400A2EF0 (CleanupWindowRedirection.c)
 *     UnsetLayeredWindow @ 0x1400A2F94 (UnsetLayeredWindow.c)
 *     xxxPrintWindow @ 0x14011CB78 (xxxPrintWindow.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     UserRecreateRedirectionBitmap @ 0x1402A4470 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     DeleteOldRedirectionBitmap @ 0x1400189F4 (DeleteOldRedirectionBitmap.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 *     GetRedirectionBitmap @ 0x1400429A0 (GetRedirectionBitmap.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     GreAccNotifyWindow @ 0x1400A4A2C (GreAccNotifyWindow.c)
 *     HintSpriteShape @ 0x1400A5198 (HintSpriteShape.c)
 *     UnredirectDCEs @ 0x14012E3C8 (UnredirectDCEs.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1401EDA58 (DeleteOrSetRedirectionBitmap.c)
 */

__int64 __fastcall UnsetRedirectedWindow(struct tagWND *a1, __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 UserSessionState; // rax
  __int64 v6; // rdx
  __int64 Prop; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 RedirectionBitmap; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // rsi

  v2 = a2;
  v3 = 1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  Prop = GetProp((__int64)a1, *(unsigned __int16 *)(UserSessionState + 41398), 1u);
  *(_DWORD *)(Prop + 32) &= ~v2;
  if ( (v2 & 1) != 0 )
  {
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 26) & 0x20) == 0 )
    {
      v9 = W32GetUserSessionState(v8, v6);
      v3 = HintSpriteShape(*(HDEV *)(*(_QWORD *)(v9 + 56968) + 40LL), a1);
    }
  }
  if ( !*(_DWORD *)(Prop + 32) )
  {
    SetOrClrWF(0, a1, 0xB20u, 1);
    DeleteOldRedirectionBitmap((__int64)a1);
    RedirectionBitmap = GetRedirectionBitmap((__int64)a1, v11);
    UnredirectDCEs(a1);
    if ( RedirectionBitmap )
    {
      v15 = W32GetUserSessionState(v14, v13);
      GetProp((__int64)a1, *(unsigned __int16 *)(v15 + 41398), 1u);
      v18 = W32GetUserSessionState(v17, v16);
      v19 = (__int64 *)InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(v18 + 41398), 1u);
      v20 = v19;
      if ( v19 )
      {
        v21 = *v19;
        DeleteMaybeSpecialRgn(v19[5]);
        Win32FreePool(v20);
        if ( v21 )
          GreAccNotifyWindow(v21, 0LL);
      }
      v3 = 1;
      DeleteOrSetRedirectionBitmap(a1, RedirectionBitmap, 0LL);
    }
  }
  return v3;
}
