/*
 * XREFs of RtlRunOnceComplete @ 0x18002AAD0
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180027260 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpHeapGenerateRandomValue32 @ 0x180042338 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800522E4 (RtlpHpPerHeapStackTraceCleanup.c)
 * Callees:
 *     NtReleaseKeyedEvent @ 0x1800A8F70 (NtReleaseKeyedEvent.c)
 */

NTSTATUS __cdecl RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v5; // r8
  char v6; // al
  unsigned __int64 Value; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // r10
  _QWORD *v11; // r10
  _QWORD *v13; // rbx
  char v14; // [rsp+38h] [rbp+10h]

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v5 = (v14 ^ ((~(_BYTE)Flags & 2) != 0)) & 1;
  v6 = (v5 ^ v14 ^ (2 * ((~(_BYTE)Flags & 4) != 0))) & 2 ^ v5 ^ v14;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v6 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v8 = RunOnce->Value & 3;
  v9 = (unsigned __int64)Context ^ ((unsigned __int8)Context ^ v6 & 2) & 3;
  if ( v8 == 1 )
  {
    if ( (v6 & 1) != 0 )
    {
      v10 = _InterlockedExchange64((volatile __int64 *)RunOnce, v9);
      if ( (v10 & 3) == 1 )
      {
        v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v11 )
        {
          do
          {
            v13 = (_QWORD *)*v11;
            NtReleaseKeyedEvent(0LL, v11, 0, 0LL);
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
  if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, Value) )
    return 0;
  return -1073741771;
}
