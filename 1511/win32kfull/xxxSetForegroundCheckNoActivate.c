/*
 * XREFs of xxxSetForegroundCheckNoActivate @ 0x1C01D3018
 * Callers:
 *     ?xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FAFF4 (-xxxProcessPointerPrimaryDown@@YAHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     GetMessageWindow @ 0x1C007AA6C (GetMessageWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
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
  if ( (unsigned int)IsCompositionInputWindow(a1)
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
    v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v9;
    v9[1] = CompositionInputWindowUIOwner;
    ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
  }
  v7 = xxxSetForegroundWindow2((LARGE_INTEGER *)CompositionInputWindowUIOwner, 0LL, 0, 0);
  if ( v2 == 1 )
    ThreadUnlock1(v6, v5);
  return v7;
}
