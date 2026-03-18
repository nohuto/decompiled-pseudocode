/*
 * XREFs of ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C00BFB48
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C0026180 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GdiProcessCallout @ 0x1C0059660 (GdiProcessCallout.c)
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C005BF2C (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C00857B0 (EngAllocUserMemEx.c)
 *     EngFreeUserMem @ 0x1C0085980 (EngFreeUserMem.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00C039C (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     EngSecureMem @ 0x1C00CADE0 (EngSecureMem.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00CCF24 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ?EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z @ 0x1C00B4300 (-EvaluateFeature@@YAXPEBUreg_FeatureDescriptor@@@Z.c)
 */

_BOOL8 __fastcall EvaluateCurrentState(const struct reg_FeatureDescriptor *a1)
{
  EvaluateFeature(a1);
  return **(_DWORD **)a1 != 1;
}
