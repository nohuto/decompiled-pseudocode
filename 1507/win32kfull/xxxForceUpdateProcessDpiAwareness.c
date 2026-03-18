/*
 * XREFs of xxxForceUpdateProcessDpiAwareness @ 0x1C01E67A4
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 * Callees:
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E43C8 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwareness(__int64 a1, __int64 a2)
{
  int v2; // r14d
  __int64 v4; // rdi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  struct tagBWL *v9; // rbp
  unsigned __int64 *i; // rsi
  __int64 v11; // rax
  _QWORD v13[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL);
  v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v13;
  ++*(_DWORD *)(a1 + 8);
  v13[1] = a1;
  if ( (_DWORD)a2 == 2 )
  {
    v5 = *(_DWORD *)(v4 + 776) & 0xFFFF9FFF | 0x4000;
LABEL_5:
    *(_DWORD *)(v4 + 776) = v5;
    goto LABEL_7;
  }
  if ( (_DWORD)a2 == 1 )
  {
    v5 = *(_DWORD *)(v4 + 776) & 0xFFFF9FFF | 0x2000;
    goto LABEL_5;
  }
  *(_DWORD *)(v4 + 776) &= 0xFFFF9FFF;
LABEL_7:
  GreIncrementDisplaySettingsUniqueness(a1, a2);
  xxxForceUpdateWindowTreeDpiAwareness(a1, v2, 1);
  v8 = *(_QWORD **)(v4 + 640);
  if ( v8 )
    v8 = (_QWORD *)v8[2];
  while ( v8 )
  {
    v9 = BuildHwndList(*(_QWORD *)(v8[1] + 16LL), 1, 0LL);
    if ( v9 )
    {
      PushW32ThreadLock((__int64)v8, v14, (__int64)UserDereferenceObject);
      ObfReferenceObject(v8);
      for ( i = (unsigned __int64 *)((char *)v9 + 32); *i != 1; ++i )
      {
        v11 = HMValidateHandleNoSecure(*i, 1);
        if ( v11 && *(_QWORD *)(*(_QWORD *)(v11 + 16) + 384LL) == v4 )
          xxxForceUpdateWindowTreeDpiAwareness(v11, v2, 1);
      }
      FreeHwndList(v9);
      v8 = (_QWORD *)v8[2];
      PopAndFreeW32ThreadLock((__int64)v14);
    }
  }
  return ThreadUnlock1(v7, v6);
}
