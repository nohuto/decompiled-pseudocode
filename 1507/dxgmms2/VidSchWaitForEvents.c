/*
 * XREFs of VidSchWaitForEvents @ 0x1C001D6E0
 * Callers:
 *     VidSchSwitchFromContext @ 0x1C0079660 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00797A0 (VidSchSwitchFromDevice.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C007A380 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiIsMmIoFlipPending @ 0x1C00052AC (VidSchiIsMmIoFlipPending.c)
 *     VidSchiCheckHwProgress @ 0x1C0032B80 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(
        struct _VIDSCH_GLOBAL *a1,
        ULONG Count,
        PVOID Object[],
        PLARGE_INTEGER Timeout,
        BOOLEAN a5)
{
  union _LARGE_INTEGER *v5; // r12
  bool v9; // bl
  char IsMmIoFlipPending; // al
  BOOLEAN Alertable; // si
  unsigned int v12; // ebx
  __int64 v14; // rax
  char v15; // bl
  NTSTATUS v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v5 = Timeout;
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)a1 + 16) )
  {
    v15 = 0;
    if ( !Timeout )
    {
      v5 = (union _LARGE_INTEGER *)&v18;
      v15 = 1;
      v18 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    do
    {
      v16 = KeWaitForMultipleObjects(Count, Object, WaitAny, Executive, 0, 0, v5, 0LL);
      v17 = v16;
      if ( !v15 || v16 != 258 )
        return v17;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1) );
    if ( !*((_DWORD *)a1 + 620) )
      return v17;
    v12 = 0;
    if ( !Count )
      return v17;
    while ( !KeReadStateEvent((PRKEVENT)*Object) )
    {
      ++v12;
      ++Object;
      if ( v12 >= Count )
        return v17;
    }
    return v12;
  }
  else
  {
    v9 = *((_DWORD *)a1 + 225) != 0;
    IsMmIoFlipPending = VidSchiIsMmIoFlipPending((__int64)a1);
    if ( v9 || IsMmIoFlipPending )
    {
      if ( *((_BYTE *)a1 + 884) )
      {
        *((_QWORD *)a1 + 187) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)a1 + 61, 0, 1u);
      }
    }
    Alertable = a5;
    while ( 1 )
    {
      v12 = KeWaitForMultipleObjects(Count, Object, WaitAny, Executive, 0, Alertable, v5, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v12 != 257 )
        return v12;
    }
    v14 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v14);
    return 3221226166LL;
  }
}
