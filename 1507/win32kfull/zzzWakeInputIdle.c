/*
 * XREFs of zzzWakeInputIdle @ 0x1C006B920
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C00679D0 (xxxDesktopThreadWaiter.c)
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C006B340 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0090590 (zzzCalcStartCursorHide.c)
 */

__int64 __fastcall zzzWakeInputIdle(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a1 + 448) &= ~0x2000u;
  v3 = CurrentProcessWin32Process;
  if ( (*(_DWORD *)(a1 + 448) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 544) + 24LL) )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 24LL);
      v8 = *(struct _KEVENT **)(v7 + 32);
      if ( v8 )
      {
        if ( v8 != (struct _KEVENT *)-1LL )
        {
          KeSetEvent(v8, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 24LL) + 32LL));
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 544) + 24LL) + 32LL) = -1LL;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 32) = -1LL;
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 384);
    if ( !*(_QWORD *)(v4 + 304) )
      *(_QWORD *)(v4 + 304) = a1;
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 384) + 304LL) == a1 )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v5 = *(struct _KEVENT **)(v3 + 16);
      if ( !v5 )
      {
LABEL_6:
        *(_QWORD *)(v3 + 16) = -1LL;
        goto LABEL_7;
      }
      if ( v5 != (struct _KEVENT *)-1LL )
      {
        KeSetEvent(v5, 1, 0);
        ObfDereferenceObject(*(PVOID *)(v3 + 16));
        goto LABEL_6;
      }
    }
  }
LABEL_7:
  result = *(unsigned int *)(v3 + 12);
  if ( (result & 4) != 0 )
  {
    *(_DWORD *)(v3 + 12) = result & 0xFFFFFFFB;
    return zzzCalcStartCursorHide(0LL, 0LL);
  }
  return result;
}
