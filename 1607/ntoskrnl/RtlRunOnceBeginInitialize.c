/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x14045BDA4
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14045BCD4 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x14068C1D4 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __stdcall RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v6; // ebx
  int v8; // edi
  unsigned __int64 v9; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Value = RunOnce->Value;
  v6 = 0;
  if ( (RunOnce->Value & 3) == 2 )
    goto LABEL_3;
  if ( (Flags & 1) == 0 )
  {
    v8 = ((unsigned __int8)~(_BYTE)Flags >> 1) & 1;
    while ( 1 )
    {
      while ( (Value & 3) == 0 )
      {
        v9 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, (v8 != 0 ? 1 : 3) & 3, Value);
        if ( v9 == Value )
          return 259;
      }
      if ( (Value & 3) != 1 )
        break;
      if ( !v8 )
        return -1073741584;
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    if ( (Value & 3) == 3 )
      return v8 != 0 ? -1073741584 : 259;
LABEL_3:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return v6;
  }
  return -1073741823;
}
