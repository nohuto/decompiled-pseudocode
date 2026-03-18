/*
 * XREFs of ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C022FBFC
 * Callers:
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C022F540 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     ?SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z @ 0x1C0230724 (-SetupNewQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@PEAPEAU1@_KH@Z.c)
 *     ?SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z @ 0x1C0230784 (-SetupQFrame@@YAPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINPUTFRAME@@_KH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeQFrameCoalesceState(struct tagPOINTERQFRAME *a1, int a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  v2 = *((_DWORD *)a1 + 5) & 0xFFFFFFFA | 1;
  *((_DWORD *)a1 + 5) = v2;
  if ( a2 )
  {
    v3 = v2 | 2;
    *((_DWORD *)a1 + 6) = 1;
  }
  else
  {
    v3 = v2 & 0xFFFFFFFD;
    *((_DWORD *)a1 + 6) = 10;
  }
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 5) = v3;
}
