/*
 * XREFs of KiSetVirtualMitigationControl @ 0x1401D9CE4
 * Callers:
 *     KiRestoreFeatureBits @ 0x1401147A0 (KiRestoreFeatureBits.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1401D8F28 (KeOptimizeSpecCtrlSettings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetVirtualMitigationControl(__int64 a1)
{
  _BOOL8 v1; // r8
  unsigned __int64 result; // rax

  v1 = 0LL;
  if ( (KeFeatureBits2 & 0x20000000) != 0 )
  {
    result = __readmsr(0x50000001u);
    if ( (result & 1) != 0 )
    {
      if ( (dword_1403AA26C & 0x800000) != 0 )
        v1 = (*(_BYTE *)(a1 + 11578) & 0x18) == 8;
      result = v1 | __readmsr(0x50000002u) & 0xFFFFFFFFFFFFFFFEuLL;
      __writemsr(0x50000002u, result);
    }
  }
  return result;
}
