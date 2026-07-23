/*
 * XREFs of IovInitializeTimer @ 0x14070103C
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall IovInitializeTimer(ULONG_PTR BugCheckParameter2)
{
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeBugCheckEx(0xC9u, 0xAuLL, BugCheckParameter2, 0LL, 0LL);
  return pXdvIoInitializeTimer();
}
