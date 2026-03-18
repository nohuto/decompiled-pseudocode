/*
 * XREFs of ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0026A70
 * Callers:
 *     ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C0025C74 (-bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z.c)
 *     ?vSetRendering@DC@@QEAAXXZ @ 0x1C002C870 (-vSetRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bRedirectionBitmap(SURFACE *this)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( *((_QWORD *)this + 31) || (*((_DWORD *)this + 29) & 1) != 0 )
    return 1;
  return v1;
}
