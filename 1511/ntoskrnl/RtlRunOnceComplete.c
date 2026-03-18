/*
 * XREFs of RtlRunOnceComplete @ 0x1404EB660
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14044897C (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

NTSTATUS __stdcall RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v5; // r8
  char v6; // al
  PVOID Ptr; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // rbx
  char v14; // [rsp+38h] [rbp+10h]

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v5 = (v14 ^ ((~(_BYTE)Flags & 2) != 0)) & 1;
  v6 = (v5 ^ v14 ^ (2 * ((~(_BYTE)Flags & 4) != 0))) & 2 ^ v5 ^ v14;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v6 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Ptr = RunOnce->Ptr;
  v8 = (__int64)RunOnce->Ptr & 3;
  v9 = (unsigned __int64)Context ^ ((unsigned __int8)Context ^ v6 & 2) & 3;
  if ( v8 == 1 )
  {
    if ( (v6 & 1) != 0 )
    {
      v10 = _InterlockedExchange64((volatile __int64 *)RunOnce, v9);
      if ( (v10 & 3) == 1 )
      {
        v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v11 )
        {
          do
          {
            v13 = *(_QWORD *)v11;
            KeSetEvent((PRKEVENT)(v11 + 8), 1, 0);
            v11 = v13;
          }
          while ( v13 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v8 != 3 )
    return -1073741823;
  if ( (v6 & 1) != 0 )
    return -1073741584;
  if ( Ptr == (PVOID)_InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, (signed __int64)Ptr) )
    return 0;
  return -1073741771;
}
