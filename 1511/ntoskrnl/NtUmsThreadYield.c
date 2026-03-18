/*
 * XREFs of NtUmsThreadYield @ 0x14061BA2C
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x1401CC4F0 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x14061BA0C (KiUmsExceptionFilter.c)
 */

__int64 __fastcall NtUmsThreadYield(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v4; // rax
  unsigned int v5; // ebx
  _DWORD *Object; // rsi
  __int64 v8; // rdi
  __int64 v9; // r14

  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread;
  v5 = 0;
  if ( !CurrentThread )
    v4 = KeGetCurrentThread();
  if ( (v4->Header.Reserved1 & 0x40) == 0 )
    return 3221225659LL;
  Object = CurrentThread->WaitBlock[3].Object;
  v8 = *(_QWORD *)Object;
  v9 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v8, a1, a3) )
  {
    Object[20] |= 1u;
  }
  else
  {
    v5 = -1073740004;
    *(_QWORD *)(v8 + 1272) = v9;
  }
  return v5;
}
