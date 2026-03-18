/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C01541F8
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01CF26C (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v6 = 0;
  while ( v4 && v6 >= 0 )
  {
    v7 = *a2;
    v8 = 0LL;
    while ( v7 != a2 )
    {
      if ( (_QWORD *)v7[5] == v4 )
      {
        v8 = (__int64)v7;
        break;
      }
      v7 = (_QWORD *)*v7;
    }
    if ( v8 )
    {
      v10 = (_QWORD *)*v7;
      v11 = (_QWORD *)v7[1];
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v11 != v7 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      PushW32ThreadLock(v8, v20, (__int64)DeleteMonitorsAndWindowsSnapShot, a4);
      PushW32ThreadLock((__int64)v4, v19, UserDereferenceObject, v12);
      ObfReferenceObject(v4);
      v6 = xxxRestoreMonitorsAndWindowsRects(v8, v4);
      PopAndFreeW32ThreadLock((__int64)v19, v13, v14, v15);
      PopAndFreeAlwaysW32ThreadLock((__int64)v20, v16, v17, v18);
    }
    v4 = (_QWORD *)v4[2];
  }
  return (unsigned int)v6;
}
