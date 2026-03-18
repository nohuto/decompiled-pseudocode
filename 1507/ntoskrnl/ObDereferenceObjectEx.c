/*
 * XREFs of ObDereferenceObjectEx @ 0x14000C4C0
 * Callers:
 *     PspClearProcessThreadCidRefs @ 0x140420C64 (PspClearProcessThreadCidRefs.c)
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectEx(ULONG_PTR BugCheckParameter2, int a2)
{
  volatile signed __int64 *v2; // rdi
  __int64 v3; // rbp
  signed __int64 BugCheckParameter4; // rbx

  v2 = (volatile signed __int64 *)(BugCheckParameter2 - 48);
  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v2);
  BugCheckParameter4 = _InterlockedExchangeAdd64(v2, -(int)v3) - v3;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v2);
  }
  return BugCheckParameter4;
}
