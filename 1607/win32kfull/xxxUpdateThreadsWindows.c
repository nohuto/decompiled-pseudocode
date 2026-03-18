/*
 * XREFs of xxxUpdateThreadsWindows @ 0x1C02053DC
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C00650AC (xxxSetLayeredWindow.c)
 *     xxxDrawDragRectEx @ 0x1C0202F18 (xxxDrawDragRectEx.c)
 *     xxxUpdateWindows @ 0x1C0226A10 (xxxUpdateWindows.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C005E728 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateThreadsWindows(__int64 a1, __int64 a2, HRGN a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v6 = a2;
  v8 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v8;
  v9 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      v9 = v6;
      ++*(_DWORD *)(v6 + 8);
      if ( v4 )
        HMUnlockObject(v4);
      if ( *(_QWORD *)(v6 + 16) == a1 )
        xxxInternalUpdateWindow((struct tagWND *)v6, 1u);
      else
        xxxUpdateOtherThreadsWindows((struct tagWND *)v6, a3);
      v6 = *(_QWORD *)(v6 + 72);
      if ( !v6 )
        break;
      v4 = v9;
    }
  }
  return ThreadUnlock1(v4, a2);
}
