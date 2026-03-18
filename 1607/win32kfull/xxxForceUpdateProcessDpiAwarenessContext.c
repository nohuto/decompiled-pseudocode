/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01DD3C0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // r15
  __int64 v5; // r9
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  struct tagBWL *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 *i; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[3]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v22;
  ++*((_DWORD *)a1 + 2);
  v22[1] = a1;
  *(_DWORD *)(v4 + 280) = a2;
  GreIncrementDisplaySettingsUniqueness(a1, a2);
  v6 = *(_QWORD **)(v4 + 632);
  if ( v6 )
  {
    PushW32ThreadLock(*(_QWORD *)(v4 + 632), v24, UserDereferenceObject, v5);
    ObfReferenceObject(v6);
  }
  xxxForceUpdateWindowTreeDpiAwarenessContext(a1, v2, 1);
  if ( v6 )
    v11 = (_QWORD *)v6[2];
  else
    v11 = 0LL;
  while ( v11 )
  {
    v12 = BuildHwndList(*(_QWORD *)(v11[1] + 16LL), (struct tagWND *)1, 0LL);
    if ( v12 )
    {
      PushW32ThreadLock((__int64)v11, v23, UserDereferenceObject, v10);
      ObfReferenceObject(v11);
      for ( i = (unsigned __int64 *)((char *)v12 + 32); *i != 1; ++i )
      {
        LOBYTE(v13) = 1;
        v17 = HMValidateHandleNoSecure(*i, v13, v14, v15);
        if ( v17 && *(_QWORD *)(*(_QWORD *)(v17 + 16) + 376LL) == v4 )
          xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v17, v2, 1);
      }
      FreeHwndList(v12);
      v11 = (_QWORD *)v11[2];
      PopAndFreeW32ThreadLock((__int64)v23, v18, v19, v20);
    }
  }
  if ( v6 )
    PopAndFreeW32ThreadLock((__int64)v24, v7, v9, v10);
  return ThreadUnlock1(v8, v7);
}
