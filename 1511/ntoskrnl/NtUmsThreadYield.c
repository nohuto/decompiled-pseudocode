/*
 * XREFs of NtUmsThreadYield @ 0x14061BA2C
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x1401CC4F0 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x14061BA0C (KiUmsExceptionFilter.c)
 */

NTSTATUS __cdecl NtUmsThreadYield(PVOID SchedulerParam)
{
  __int64 v1; // r8
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rax
  NTSTATUS v4; // ebx
  _DWORD *Object; // rsi
  __int64 v7; // rdi
  __int64 v8; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = CurrentThread;
  v4 = 0;
  if ( !CurrentThread )
    v3 = KeGetCurrentThread();
  if ( (v3->Header.Reserved1 & 0x40) == 0 )
    return -1073741637;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = *(_QWORD *)Object;
  v8 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v7, (__int64)SchedulerParam, v1) )
  {
    Object[20] |= 1u;
  }
  else
  {
    v4 = -1073740004;
    *(_QWORD *)(v7 + 1272) = v8;
  }
  return v4;
}
