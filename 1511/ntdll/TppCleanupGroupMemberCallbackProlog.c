/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x180009F20
 * Callers:
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     TppJobpExecuteCallback @ 0x180083F20 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlSetThreadSubProcessTag @ 0x180009FC0 (RtlSetThreadSubProcessTag.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800151C0 (RtlActivateActivationContextUnsafeFast.c)
 *     TpCallbackMayRunLong @ 0x180072830 (TpCallbackMayRunLong.c)
 */

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(_DWORD *Instance, __int64 a2)
{
  void *v4; // rcx
  struct _TEB *result; // rax

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)Instance = 72LL;
    Instance[2] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_QWORD *)(a2 + 96));
    *((_BYTE *)Instance + 76) |= 1u;
  }
  Instance[36] |= 0x240u;
  *((_QWORD *)Instance + 23) = a2;
  if ( (*(_DWORD *)(a2 + 160) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v4 = *(void **)(a2 + 104);
  if ( v4 )
  {
    *((_QWORD *)Instance + 10) = v4;
    RtlSetThreadSubProcessTag(v4);
  }
  result = NtCurrentTeb();
  result->ActivityId = *(_GUID *)(a2 + 112);
  return result;
}
