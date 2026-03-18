/*
 * XREFs of xxxSetForegroundCheckNoActivate @ 0x1C01D13A0
 * Callers:
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAB54 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     GetMessageWindow @ 0x1C005CD50 (GetMessageWindow.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxSetForegroundCheckNoActivate(struct tagWND *a1)
{
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v2; // edi
  struct tagWND *v3; // rcx
  __int64 TopLevelWindow; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  CompositionInputWindowUIOwner = a1;
  v2 = 0;
  if ( IsCompositionInputWindow(a1)
    && *((_QWORD *)CompositionInputWindowUIOwner + 11) == GetMessageWindow((__int64)CompositionInputWindowUIOwner) )
  {
    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v3);
    v2 = 1;
  }
  if ( CompositionInputWindowUIOwner == (struct tagWND *)GetDesktopWindow((__int64)CompositionInputWindowUIOwner) )
    return 0LL;
  TopLevelWindow = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
  if ( !TopLevelWindow
    || (*(_BYTE *)(TopLevelWindow + 51) & 8) != 0
    || (*((_BYTE *)CompositionInputWindowUIOwner + 289) & 0x10) != 0 )
  {
    return 0LL;
  }
  if ( v2 == 1 )
  {
    v9[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v9;
    v9[1] = CompositionInputWindowUIOwner;
    ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
  }
  v7 = xxxSetForegroundWindow2(CompositionInputWindowUIOwner, 0LL, 0LL, 0);
  if ( v2 == 1 )
    ThreadUnlock1(v6, v5);
  return v7;
}
