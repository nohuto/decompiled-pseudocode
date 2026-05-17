/*
 * XREFs of RtlpRunOnceWaitForInit @ 0x180088258
 * Callers:
 *     RtlpSubSegmentInitialize @ 0x180027270 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlRunOnceBeginInitialize @ 0x180042430 (RtlRunOnceBeginInitialize.c)
 * Callees:
 *     NtWaitForKeyedEvent @ 0x1800A9BD0 (NtWaitForKeyedEvent.c)
 */

signed __int64 __fastcall RtlpRunOnceWaitForInit(signed __int64 a1, volatile signed __int64 *a2)
{
  bool v3; // zf
  signed __int64 v4; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  do
  {
    v6 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = _InterlockedCompareExchange64(a2, (signed __int64)&v6 + 1, a1);
    v3 = a1 == v4;
    a1 = v4;
    if ( v3 )
    {
      NtWaitForKeyedEvent(0LL, &v6, 0LL, 0LL);
      a1 = *a2;
    }
  }
  while ( (a1 & 3) == 1 );
  return a1;
}
