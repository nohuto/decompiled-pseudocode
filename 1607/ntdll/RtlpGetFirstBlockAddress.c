/*
 * XREFs of RtlpGetFirstBlockAddress @ 0x180001008
 * Callers:
 *     RtlpWalkLFHBlock @ 0x18004DBC8 (RtlpWalkLFHBlock.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800FC04C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpGetFirstBlockAddress(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 38) & 1) != 0 )
    return ((16 * (*(unsigned __int16 *)(a1 + 36) + 256LL)) & 0xFFFFFFFFFFFFF000uLL)
         - 16LL * *(unsigned __int16 *)(a1 + 36)
         + ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - 16;
  if ( (*(_BYTE *)(a1 + 38) & 2) != 0 )
    return ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) + 4096;
  return a2
       + ((unsigned __int16)a2 ^ (unsigned __int16)RtlpLFHKey ^ *(unsigned __int16 *)(a2 + 24) ^ (unsigned __int64)*(unsigned __int16 *)(**(_QWORD **)a1 + 24LL));
}
