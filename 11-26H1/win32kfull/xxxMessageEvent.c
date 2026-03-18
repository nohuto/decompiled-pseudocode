/*
 * XREFs of xxxMessageEvent @ 0x1402EFAA8
 * Callers:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxDDETrackPostHook @ 0x14026E294 (xxxDDETrackPostHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxCsEvent @ 0x1402EF878 (xxxCsEvent.c)
 */

_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rax
  __int64 ThreadId; // rax
  __int64 v14; // rcx
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (_DWORD *)Win32AllocPoolWithQuotaZInit(120LL, 946107221LL);
  v11 = result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v12 = *a1;
    else
      v12 = 0LL;
    *((_QWORD *)v11 + 2) = v12;
    v11[6] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ThreadId = HMValidateHandleNoSecure(a3, 1);
    if ( ThreadId )
      ThreadId = (__int64)PsGetThreadId(**(PETHREAD **)(ThreadId + 16));
    *((_QWORD *)v11 + 4) = ThreadId;
    v11[10] = a2;
    *((_QWORD *)v11 + 6) = a3;
    *((_QWORD *)v11 + 7) = a4;
    if ( a6 )
    {
      v15 = *(_OWORD *)(a6 + 16);
      *((_OWORD *)v11 + 4) = *(_OWORD *)a6;
      v16 = *(_OWORD *)(a6 + 32);
      *((_OWORD *)v11 + 5) = v15;
      *(_QWORD *)&v15 = *(_QWORD *)(a6 + 48);
      *((_OWORD *)v11 + 6) = v16;
      *((_QWORD *)v11 + 14) = v15;
    }
    PtiCurrent(v14);
    v18 = PtiCurrent(v17);
    v19[0] = *((_QWORD *)v18 + 47);
    *((_QWORD *)v18 + 47) = v19;
    v19[2] = Win32FreePool;
    v19[1] = v11;
    xxxCsEvent(v11, 0x70u);
    return (_DWORD *)PopAndFreeW32ThreadLock((__int64)v19);
  }
  return result;
}
