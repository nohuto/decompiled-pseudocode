/*
 * XREFs of PnpDuplicateUnicodeString @ 0x1401CF450
 * Callers:
 *     PiDevCfgAppendMultiSz @ 0x140632360 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140635AE4 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C23C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x14063C998 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140171280 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( !*(_QWORD *)(a2 + 8) )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    goto LABEL_5;
  }
  StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( StringRoutine )
  {
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
LABEL_5:
    *(_WORD *)a1 = *(_WORD *)a2;
    *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
    LOBYTE(StringRoutine) = 1;
  }
  return (char)StringRoutine;
}
