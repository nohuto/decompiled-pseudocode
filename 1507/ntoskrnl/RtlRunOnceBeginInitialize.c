/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x14050B6DC
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14050B5E8 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x1406CF988 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __stdcall RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v6; // ebx
  int v8; // edi
  signed __int64 v9; // rtt

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Ptr = (signed __int64)RunOnce->Ptr;
  v6 = 0;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
    goto LABEL_3;
  if ( (Flags & 1) == 0 )
  {
    v8 = ((unsigned __int8)~(_BYTE)Flags >> 1) & 1;
    while ( 1 )
    {
      while ( (Ptr & 3) == 0 )
      {
        v9 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, (v8 != 0 ? 1 : 3) & 3, Ptr);
        if ( v9 == Ptr )
          return 259;
      }
      if ( (Ptr & 3) != 1 )
        break;
      if ( !v8 )
        return -1073741584;
      Ptr = RtlpRunOnceWaitForInit(Ptr, RunOnce);
    }
    if ( Ptr == 3 )
      return v8 != 0 ? -1073741584 : 259;
LABEL_3:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return v6;
  }
  return -1073741823;
}
