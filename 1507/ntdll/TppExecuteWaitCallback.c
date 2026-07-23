/*
 * XREFs of TppExecuteWaitCallback @ 0x18000B324
 * Callers:
 *     TppExecuteWaitTimerCallback @ 0x18000B020 (TppExecuteWaitTimerCallback.c)
 *     TppWaitCompletion @ 0x18000B250 (TppWaitCompletion.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 */

__int64 __fastcall TppExecuteWaitCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 128);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(Instance);
LABEL_4:
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 136),
        a2 + 384,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v8, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, _QWORD))(a2 + 80))(
      Instance,
      *(_QWORD *)(a2 + 88),
      a2,
      a3);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 136),
        a2 + 384,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v8);
  }
  if ( LdrAddRefDll(0, *(PVOID *)(a2 + 128)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
