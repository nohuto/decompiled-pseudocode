/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C02053DC (xxxUpdateThreadsWindows.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0202448 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]

  xxxRedrawHungWindow(a1, (__int64)a2);
  if ( (*((_BYTE *)a1 + 55) & 2) != 0 )
  {
    v5 = *((_QWORD *)a1 + 12);
    v7 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v7;
    v6 = 0LL;
    v8 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v8 = v5;
        ++*(_DWORD *)(v5 + 8);
        if ( v6 )
          HMUnlockObject(v6);
        xxxUpdateOtherThreadsWindows((struct tagWND *)v5, a2);
        v5 = *(_QWORD *)(v5 + 72);
        if ( !v5 )
          break;
        v6 = v8;
      }
    }
    ThreadUnlock1(v6, v4);
  }
}
