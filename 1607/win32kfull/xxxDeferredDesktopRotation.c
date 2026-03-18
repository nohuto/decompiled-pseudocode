/*
 * XREFs of xxxDeferredDesktopRotation @ 0x1C01E58C0
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C010DB70 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 */

__int64 __fastcall xxxDeferredDesktopRotation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(_QWORD **)(gptiCurrent + 408LL);
  v5 = v4[1];
  if ( v5 && (*(_DWORD *)(v5 + 244) & 2) != 0 )
  {
    v6 = v4[32];
    v4[32] = 0LL;
    *(_DWORD *)(v5 + 244) &= ~2u;
    if ( v6 )
      PushW32ThreadLock(v6, v15, (__int64)Win32FreePool, a4);
    PushW32ThreadLock((__int64)v4, v14, UserDereferenceObject, a4);
    ObfReferenceObject(v4);
    xxxDesktopsRecalcAndBroadcastDisplayChange((__int64)v4, v6, *(_WORD *)(gpsi + 8676LL), 1u);
    PopAndFreeW32ThreadLock((__int64)v14, v7, v8, v9);
    if ( v6 )
      PopAndFreeAlwaysW32ThreadLock((__int64)v15, v10, v11, v12);
  }
  return 0LL;
}
