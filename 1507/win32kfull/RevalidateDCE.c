/*
 * XREFs of RevalidateDCE @ 0x1C000B430
 * Callers:
 *     DeleteHrgnClip @ 0x1C000B1D0 (DeleteHrgnClip.c)
 *     UpdateRedirectedDCE @ 0x1C000B310 (UpdateRedirectedDCE.c)
 *     ?RecalcDCVisRgn@@YAXPEAUHDC__@@@Z @ 0x1C023E9C4 (-RecalcDCVisRgn@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     SpbCheckDce @ 0x1C005E760 (SpbCheckDce.c)
 */

__int64 __fastcall RevalidateDCE(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int8 v6; // cl

  v1 = *(unsigned int *)(a1 + 64);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *(_QWORD *)(a1 + 24);
    if ( (int)v1 >= 0 )
    {
      v1 = (unsigned int)v1 & 0xFFFFFFE7;
      *(_DWORD *)(a1 + 64) = v1;
      if ( *(char *)(*(_QWORD *)(v3 + 152) + 84LL) >= 0
        || (*(_BYTE *)(v3 + 45) & 1) == 0 && (*(_BYTE *)(v4 + 55) & 2) != 0
        || (v6 = *(_BYTE *)(v4 + 55), ((v6 ^ *(_BYTE *)(v3 + 55)) & 0x10) != 0) )
      {
        if ( (*(_BYTE *)(v3 + 55) & 0x22) == 2 )
        {
          v1 = (unsigned int)v1 | 8;
          *(_DWORD *)(a1 + 64) = v1;
        }
        if ( (*(_BYTE *)(v3 + 55) & 4) != 0 )
          *(_DWORD *)(a1 + 64) |= 0x10u;
      }
      else if ( (v6 & 4) != 0 )
      {
        v1 = (unsigned int)v1 | 0x10;
        *(_DWORD *)(a1 + 64) = v1;
      }
    }
    *(_DWORD *)(a1 + 64) |= 0x2000u;
    return UserSetDCVisRgn(a1, v1, v3, v4);
  }
  else
  {
    SpbCheckDce(a1);
    return InvalidateDCE(a1);
  }
}
