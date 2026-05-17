/*
 * XREFs of LdrpLogEtwEvent @ 0x1800D1538
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x18000CA78 (LdrpLogDllStateEx2.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A34 (LdrpApplyFileNameRedirection.c)
 *     LdrpLogDllState @ 0x180015E20 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180016680 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x1800188C4 (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3DC (LdrpFindLoadedDllByName.c)
 *     LdrpMapDllNtFileName @ 0x18002D3AC (LdrpMapDllNtFileName.c)
 *     LdrpAcquireLoaderLock @ 0x18002D51C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D55C (LdrpReleaseLoaderLock.c)
 *     LdrpMapImage @ 0x18002F44C (LdrpMapImage.c)
 *     LdrpTryAcquireLoaderLock @ 0x18004E7A4 (LdrpTryAcquireLoaderLock.c)
 *     RtlpWaitOnCriticalSection @ 0x18006674C (RtlpWaitOnCriticalSection.c)
 *     _LdrpInitialize @ 0x1800787B4 (_LdrpInitialize.c)
 *     LdrpLogError @ 0x180086114 (LdrpLogError.c)
 *     LdrpProcessInitializationComplete @ 0x180087C20 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800D1190 (LdrpEventAddUnicodeString.c)
 */

_BYTE *__fastcall LdrpLogEtwEvent(
        __int16 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *result; // rax
  _DWORD v13[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE v14[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = v14;
  v7 = 0;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 <= 0x214
    || (result = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7 + 42), (v6 = result) != 0LL) )
  {
    *((_WORD *)v6 + 3) = a1;
    if ( a2 != -1 )
    {
      *((_QWORD *)v6 + 4) = a2;
      if ( a4 != -1 )
      {
        v6[40] = a3;
        v6[41] = a4;
        if ( v7 )
        {
          LdrpEventAddUnicodeString((__int64)a5, (_WORD *)v6 + 21, v7, v13);
          if ( a6 )
            LdrpEventAddUnicodeString((__int64)a6, &v6[v13[0] + 42], v7 - v13[0], v13);
          NtTraceEvent();
        }
      }
    }
    result = v14;
    if ( v14 != v6 )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v6);
  }
  return result;
}
