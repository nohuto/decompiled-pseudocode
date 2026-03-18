/*
 * XREFs of ObDereferenceObjectEx @ 0x140074E7C
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     PspClearProcessThreadCidRefs @ 0x14045ED5C (PspClearProcessThreadCidRefs.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
