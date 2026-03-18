/*
 * XREFs of ?CleanupTPFrameList@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C022E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022F968 (-FreeTPFrame@@YAXPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z @ 0x1C022FA4C (-GetEarliestTPFrame@PointerFrameList@@YAPEAUtagPOINTERINPUTFRAME@@PEAI@Z.c)
 */

void __fastcall CleanupTPFrameList(struct tagPOINTERINPUTFRAME *a1, unsigned int *a2)
{
  const struct tagPOINTERINPUTFRAME *EarliestTPFrame; // rax

  while ( 1 )
  {
    EarliestTPFrame = PointerFrameList::GetEarliestTPFrame(0LL, a2);
    if ( !EarliestTPFrame )
      break;
    FreeTPFrame(EarliestTPFrame);
  }
}
