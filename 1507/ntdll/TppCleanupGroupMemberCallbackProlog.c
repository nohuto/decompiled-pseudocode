/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18003C274
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x18003C414 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x1800782D0 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlActivateActivationContextUnsafeFast @ 0x180021D00 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x18003BD90 (TpCallbackMayRunLong.c)
 *     RtlSetThreadSubProcessTag @ 0x18003C310 (RtlSetThreadSubProcessTag.c)
 */

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  struct _TEB *result; // rax

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 160) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(_QWORD *)(a2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 80) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  result = NtCurrentTeb();
  result->ActivityId = *(_GUID *)(a2 + 112);
  return result;
}
