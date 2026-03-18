/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C006EAF0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C006E6A0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C006E790 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C006E970 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C0082E80 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     AllocThreadBufferWithTag @ 0x1C006EB30 (AllocThreadBufferWithTag.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(__int64 a1)
{
  __int64 v1; // rdx

  if ( (unsigned int)a1 > 0x1000 )
    return AllocThreadBufferWithTag(a1, 1886213191LL, 0LL);
  v1 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL);
  if ( !v1 )
    return AllocThreadBufferWithTag(a1, 1886213191LL, 0LL);
  return v1;
}
