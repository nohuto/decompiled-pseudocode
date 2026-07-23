/*
 * XREFs of LdrpLogEtwEvent @ 0x1800D15F8
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x18000CA68 (LdrpLogDllStateEx2.c)
 *     LdrpApplyFileNameRedirection @ 0x180015A24 (LdrpApplyFileNameRedirection.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpCallInitRoutine @ 0x1800188B4 (LdrpCallInitRoutine.c)
 *     LdrpFindLoadedDllByName @ 0x18001A3CC (LdrpFindLoadedDllByName.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpTryAcquireLoaderLock @ 0x18004E794 (LdrpTryAcquireLoaderLock.c)
 *     RtlpWaitOnCriticalSection @ 0x18006673C (RtlpWaitOnCriticalSection.c)
 *     _LdrpInitialize @ 0x1800787A4 (_LdrpInitialize.c)
 *     LdrpLogError @ 0x180086104 (LdrpLogError.c)
 *     LdrpProcessInitializationComplete @ 0x180087C10 (LdrpProcessInitializationComplete.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800D1250 (LdrpEventAddUnicodeString.c)
 */

int __fastcall LdrpLogEtwEvent(
        __int16 a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // ebx
  _BYTE *Heap; // rax
  _DWORD v14[3]; // [rsp+24h] [rbp-284h] BYREF
  _BYTE Fields[576]; // [rsp+30h] [rbp-278h] BYREF

  v6 = Fields;
  v7 = 0;
  if ( a5 )
  {
    v7 = *a5 + 2;
    if ( a6 )
      v7 += *a6 + 2;
  }
  if ( v7 <= 0x214 || (Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v7 + 42), (v6 = Heap) != 0LL) )
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
          LdrpEventAddUnicodeString((__int64)a5, (_WORD *)v6 + 21, v7, v14);
          if ( a6 )
            LdrpEventAddUnicodeString((__int64)a6, &v6[v14[0] + 42], v7 - v14[0], v14);
          NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v7 + 10, v6);
        }
      }
    }
    Heap = Fields;
    if ( Fields != v6 )
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return (int)Heap;
}
