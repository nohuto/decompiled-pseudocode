/*
 * XREFs of TppExecuteWaitCallback @ 0x18003AD44
 * Callers:
 *     TppWaitCompletion @ 0x18003AC50 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x180087BB0 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     LdrAddRefDll @ 0x180039C10 (LdrAddRefDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B324 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B360 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B3F4 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180063E74 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(Instance);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(Instance);
LABEL_4:
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v9, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *((_QWORD *)Instance + 11) = *(_QWORD *)(a2 + 80);
    *((_QWORD *)Instance + 12) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64, _QWORD))(a2 + 80))(
      Instance,
      *(_QWORD *)(a2 + 88),
      a2,
      a3);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v9);
  }
  if ( LdrAddRefDll(0, *(PVOID *)(a2 + 136)) >= 0 )
  {
    *((_DWORD *)Instance + 36) |= 0x100u;
    *((_QWORD *)Instance + 21) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL, v8);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
