/*
 * XREFs of IncPaintCount @ 0x1C02250F0
 * Callers:
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 * Callees:
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 */

int __fastcall IncPaintCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  int result; // eax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 520);
  result = v2 + 1;
  *(_DWORD *)(v1 + 520) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    return SetWakeBit(v1, 32LL, v4);
  }
  return result;
}
