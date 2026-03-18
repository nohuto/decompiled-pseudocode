/*
 * XREFs of ?_AddQToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagQ@@@Z @ 0x1C00BC7B4
 * Callers:
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C00BC868 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z @ 0x1C00BC6F0 (-_AddMListToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagMLIST@@@Z.c)
 *     ?_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z @ 0x1C00BC770 (-_AddMemoryBlockToList@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAX@Z.c)
 *     ?_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z @ 0x1C00BC798 (-_AddMemoryBlockToLiveTriageDump@@YAEPEAUtagWIN32_TRIAGE_DATA@@PEAXK@Z.c)
 *     ?_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z @ 0x1C00BC868 (-_AddThreadInfoToLiveTriageDump@@YAXPEAUtagWIN32_TRIAGE_DATA@@PEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall _AddQToLiveTriageDump(struct tagWIN32_TRIAGE_DATA *a1, struct tagQ *a2)
{
  if ( _AddMemoryBlockToList(a1, a2) && _AddMemoryBlockToLiveTriageDump(a1, a2) )
  {
    _AddMListToLiveTriageDump(a1, a2);
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 4));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 7));
    _AddThreadInfoToLiveTriageDump(a1, *((struct tagTHREADINFO **)a2 + 8));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 9));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 10));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 11));
    _AddMemoryBlockToLiveTriageDump(a1, *((void **)a2 + 12));
  }
}
