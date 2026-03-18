/*
 * XREFs of ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01C0990
 * Callers:
 *     ?_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z @ 0x1C021F888 (-_AdjustFrameHwnd@Edgy@@YAXPEBUtagPOINTERINPUTFRAME@@PEAUHWND__@@@Z.c)
 * Callees:
 *     GetInputDelegate @ 0x1C005804C (GetInputDelegate.c)
 *     ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C01C0F84 (-InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C01C13C0 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C01C16E0 (-ReferencePreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C01C1BBC (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C1E84 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 */

void __fastcall EndQFrameNodeDeferment(
        struct tagPOINTERQFRAME *a1,
        struct tagPOINTERINFONODE *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  struct tagPOINTERINPUTFRAME *v5; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  const struct tagPOINTERINPUTFRAME *v8; // rbx
  __int64 v9; // r11
  struct tagPOINTERINFONODE *v10; // r11

  v5 = ReferencePreviousFrameByDeviceInt(a3);
  *(_DWORD *)(v6 + 4) &= ~0x100u;
  *((_DWORD *)a3 + 18) &= ~4u;
  *((_QWORD *)a1 + 1) = v7;
  v8 = v5;
  InitializeQFrameCoalesceState(a1, v5 != 0LL);
  if ( GetInputDelegate(
         *(_QWORD *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)(v9 + 80) + gSharedInfo[1]),
         4096) )
  {
    *(_DWORD *)v10 |= 0x100000u;
  }
  ProcessQFrameNode(a1, v8, v10);
  TryCoalesceQFrame(a3, v8, a1);
  if ( v8 )
    UnreferenceFrameInt(v8);
}
