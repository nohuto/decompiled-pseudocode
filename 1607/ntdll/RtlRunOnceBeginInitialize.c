/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180042420
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180042338 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800522E4 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1800F8670 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180088248 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
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
  {
LABEL_3:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return v6;
  }
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
    if ( (Value & 3) != 3 )
      goto LABEL_3;
    return v8 != 0 ? -1073741584 : 259;
  }
  return -1073741823;
}
