/*
 * XREFs of xxxSendMinRectMessages @ 0x1C00F95D8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00F94A0 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0227678 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, struct _LARGE_STRING *a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  void *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v14[3]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v15; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, (__int64)a2, 0xAu);
    v2 = 1;
  }
  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( *(_QWORD *)(v5 + 248) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 416LL), v14, UserDereferenceObject);
    v6 = *(void **)(gptiCurrent + 416LL);
    if ( v6 )
      ObfReferenceObject(v6);
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(unsigned int **)(v5 + 248);
      if ( v9 && !v9[3] )
      {
        if ( v7 < *v9 )
        {
          if ( *(_QWORD *)&v9[4 * v7 + 6] == v8 )
            ++v7;
          if ( v7 < *v9 )
          {
            _mm_lfence();
            v8 = *(_QWORD *)&v9[4 * v7 + 6];
            goto LABEL_19;
          }
        }
        v7 = 0;
      }
      v8 = 0LL;
LABEL_19:
      if ( !v8 )
      {
        PopAndFreeW32ThreadLock((__int64)v14);
        return v2;
      }
      v13[0] = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = v13;
      ++*(_DWORD *)(v8 + 8);
      v13[1] = v8;
      if ( xxxSendTransformableMessageTimeout((struct tagWND *)v8, 0x8Bu, v4, a2, 0, 100, &v15, 1, 0) )
        v2 = 1;
      ThreadUnlock1(v11, v10);
    }
  }
  return v2;
}
