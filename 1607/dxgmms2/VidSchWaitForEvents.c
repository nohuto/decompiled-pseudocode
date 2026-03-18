/*
 * XREFs of VidSchWaitForEvents @ 0x1C0001E3C
 * Callers:
 *     VidSchSwitchFromContext @ 0x1C0040B10 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C0040FC0 (VidSchSwitchFromDevice.c)
 *     VidSchiSwitchNodeFromContext @ 0x1C0041180 (VidSchiSwitchNodeFromContext.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0042284 (VidSchWaitForCompletionEvent.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C000A130 (VidSchIsTDRPending.c)
 *     VidSchiCheckHwProgress @ 0x1C0043C50 (VidSchiCheckHwProgress.c)
 */

__int64 __fastcall VidSchWaitForEvents(__int64 a1, ULONG a2, PVOID *a3, union _LARGE_INTEGER *a4, BOOLEAN a5)
{
  union _LARGE_INTEGER *Timeout; // r12
  bool v9; // bp
  char v10; // si
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v13; // rdx
  BOOLEAN Alertable; // si
  unsigned int v15; // edi
  char v17; // bp
  NTSTATUS v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rax
  __int64 v21; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-30h] BYREF
  char v23; // [rsp+80h] [rbp+8h] BYREF

  Timeout = a4;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 136) )
  {
    v17 = 0;
    if ( !a4 )
    {
      Timeout = (union _LARGE_INTEGER *)&v21;
      v17 = 1;
      v21 = -(__int64)((10000000 * (unsigned __int64)g_TdrConfig[1]) >> 1);
    }
    v23 = 0;
    do
    {
      v18 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, 0, Timeout, 0LL);
      v19 = v18;
      if ( !v17 || v18 != 258 )
        return v19;
    }
    while ( (unsigned int)VidSchiCheckHwProgress(a1, &v23) );
    if ( !(unsigned __int8)VidSchIsTDRPending(a1) )
      return v19;
    v15 = 0;
    if ( !a2 )
      return v19;
    while ( !KeReadStateEvent((PRKEVENT)*a3) )
    {
      ++v15;
      ++a3;
      if ( v15 >= a2 )
        return v19;
    }
    return v15;
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 944) != 0;
    v10 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
    v11 = *(_DWORD *)(a1 + 40);
    v12 = 0LL;
    if ( v11 )
    {
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 8 * v12 + 2968);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 2280) )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_6;
      }
      v10 = 1;
    }
LABEL_6:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( v9 || v10 )
    {
      if ( *(_BYTE *)(a1 + 924) )
      {
        *(_QWORD *)(a1 + 1536) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(a1 + 1504), 0, 1u);
      }
    }
    Alertable = a5;
    while ( 1 )
    {
      v15 = KeWaitForMultipleObjects(a2, a3, WaitAny, Executive, 0, Alertable, Timeout, 0LL);
      if ( Alertable )
      {
        if ( PsIsThreadTerminating(KeGetCurrentThread()) )
          break;
      }
      if ( v15 != 257 )
        return v15;
    }
    v20 = WdLogNewEntry5_WdWarning();
    WdLogEvent5_WdWarning(v20);
    return 3221226166LL;
  }
}
