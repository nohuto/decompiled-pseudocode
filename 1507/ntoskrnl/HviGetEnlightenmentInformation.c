/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1402683B0
 * Callers:
 *     HvlpDetermineEnlightenments @ 0x1401EE7C4 (HvlpDetermineEnlightenments.c)
 *     HvlQueryDetailInfo @ 0x1406703D4 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14016F450 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetEnlightenmentInformation(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
