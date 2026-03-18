/*
 * XREFs of NtGdiGetRegionData @ 0x1C00533E0
 * Callers:
 *     <none>
 * Callees:
 *     EngSetLastError @ 0x1C0013020 (EngSetLastError.c)
 *     FreeTmpBuffer @ 0x1C00534E0 (FreeTmpBuffer.c)
 *     AllocFreeTmpBuffer @ 0x1C0053560 (AllocFreeTmpBuffer.c)
 *     GreGetRegionData @ 0x1C0084E70 (GreGetRegionData.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtGdiGetRegionData(HRGN a1, unsigned int a2, volatile void *a3)
{
  unsigned int v5; // esi
  _BYTE *v6; // rbx
  unsigned int RegionData; // eax
  _BYTE v9[432]; // [rsp+30h] [rbp-1E8h] BYREF

  v5 = 0;
  v6 = 0LL;
  if ( !a3 )
    goto LABEL_5;
  if ( a2 > 0x1B0 )
  {
    if ( a2 <= 0x2710000 )
      v6 = (_BYTE *)AllocFreeTmpBuffer(a2);
  }
  else
  {
    v6 = v9;
  }
  if ( !v6 )
  {
    EngSetLastError(0x57u);
  }
  else
  {
LABEL_5:
    RegionData = GreGetRegionData(a1);
    v5 = RegionData;
    if ( a3 && RegionData )
    {
      ProbeForWrite(a3, RegionData, 4u);
      memmove((void *)a3, v6, v5);
    }
  }
  if ( v6 && v6 != v9 )
    FreeTmpBuffer(v6);
  return v5;
}
