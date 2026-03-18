/*
 * XREFs of xxxSendMinRectMessages @ 0x1C0120D8C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0120C50 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 *     xxxMinimizeHungWindow @ 0x1C0227630 (xxxMinimizeHungWindow.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 */

__int64 __fastcall xxxSendMinRectMessages(__int64 *a1, int *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rbx
  unsigned int *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD v18[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 )
    v6 = *a1;
  else
    v6 = 0LL;
  if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) != 0 )
  {
    xxxCallHook(5u, v6, a2, 0xAu);
    v4 = 1;
  }
  v7 = *(_QWORD *)(gptiCurrent + 416LL);
  if ( *(_QWORD *)(v7 + 232) )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 408LL), v19, UserDereferenceObject, a4);
    v11 = *(void **)(gptiCurrent + 408LL);
    if ( v11 )
      ObfReferenceObject(v11);
    v12 = 0;
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(unsigned int **)(v7 + 232);
      if ( v14 && !v14[3] )
      {
        v8 = *v14;
        if ( v12 < (unsigned int)v8 )
        {
          if ( *(_QWORD *)&v14[4 * v12 + 6] == v13 )
            ++v12;
          if ( v12 < (unsigned int)v8 )
          {
            _mm_lfence();
            v13 = *(_QWORD *)&v14[4 * v12 + 6];
            goto LABEL_19;
          }
        }
        v12 = 0;
      }
      v13 = 0LL;
LABEL_19:
      if ( !v13 )
      {
        PopAndFreeW32ThreadLock((__int64)v19, v8, v9, v10);
        return v4;
      }
      v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v18;
      ++*(_DWORD *)(v13 + 8);
      v18[1] = v13;
      if ( xxxSendTransformableMessageTimeout(
             (struct tagWND *)v13,
             139LL,
             v6,
             (__int64)a2,
             0,
             100,
             (__int64 *)&BugCheckParameter3,
             1,
             0) )
      {
        v4 = 1;
      }
      ThreadUnlock1(v16, v15);
    }
  }
  return v4;
}
