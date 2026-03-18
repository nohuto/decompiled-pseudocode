/*
 * XREFs of ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C00BE700
 * Callers:
 *     EtwTraceTrappedAppContainerRender @ 0x1C0019010 (EtwTraceTrappedAppContainerRender.c)
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

MALLOCOBJ *__fastcall MALLOCOBJ::MALLOCOBJ(MALLOCOBJ *this)
{
  void *v2; // rax

  *(_QWORD *)this = 0LL;
  v2 = PALLOCMEM2(0x100uLL, 1886221383LL, 1);
  *(_QWORD *)this = v2;
  if ( !v2 )
    EngSetLastError(8u);
  return this;
}
