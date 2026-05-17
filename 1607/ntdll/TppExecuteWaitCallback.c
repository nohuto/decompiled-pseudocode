/*
 * XREFs of TppExecuteWaitCallback @ 0x18003AD54
 * Callers:
 *     TppWaitCompletion @ 0x18003AC60 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x180087BC0 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B404 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  __int64 v7; // rsi
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  if ( (_DWORD)a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v7 = *(_QWORD *)(a2 + 136);
  if ( !v7 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v10, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a2 + 80))(a1, *(_QWORD *)(a2 + 88), a2, v4);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v10);
  }
  if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 136), a3, a4) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v7;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL, v9);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}
