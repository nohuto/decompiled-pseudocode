/*
 * XREFs of ?bDelete@EWNDOBJ@@QEAAHXZ @ 0x1C027C280
 * Callers:
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0010EEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

__int64 __fastcall EWNDOBJ::bDelete(EWNDOBJ *this)
{
  REGION *v2; // rcx

  if ( (*((_DWORD *)this + 46) & 0x10000000) != 0 )
    GreDeleteSemaphore(*((_QWORD *)this + 25));
  v2 = (REGION *)*((_QWORD *)this + 24);
  if ( v2 )
    REGION::vDeleteREGION(v2);
  RGNOBJ::vDeleteRGNOBJ((EWNDOBJ *)((char *)this + 56));
  return 1LL;
}
