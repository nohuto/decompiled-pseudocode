/*
 * XREFs of HUBDSM_IsMsOs20DescriptorSupported @ 0x1C0019B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_IsMsOs20DescriptorSupported(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_BYTE *)(v1 + 2448) & 1) == 0 )
    return 4061LL;
  result = 4089LL;
  if ( !*(_WORD *)(v1 + 2468) )
    return 4061LL;
  return result;
}
