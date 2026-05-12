/*
 * XREFs of RaidSqmRecordPassthroughData @ 0x1C002A354
 * Callers:
 *     RaidAdapterPassThrough @ 0x1C005E0BC (RaidAdapterPassThrough.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSqmRecordPassthroughData(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // cl

  result = *(_QWORD *)(a1 + 24);
  if ( ((*(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) - 315460) & 0xFFFFFFFB) != 0 )
    v2 = *(_BYTE *)(result + 36);
  else
    v2 = *(_BYTE *)(result + 56);
  g_RaidSqmPassthroughCdbs[(unsigned __int64)v2 >> 5] |= 1 << (v2 & 0x1F);
  return result;
}
