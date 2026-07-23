/*
 * XREFs of CmpSetupLoggingState @ 0x14055D640
 * Callers:
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpSetupLoggingState(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  LOBYTE(v2) = *a2 & 5;
  if ( (_BYTE)v2 == 1 )
  {
    *(_BYTE *)(a1 + 174) = 0;
    v3 = *a2;
    if ( (*a2 & 2) != 0 )
    {
      if ( (v3 & 0x38) == 0x20 )
      {
        *(_DWORD *)(a1 + 148) = 5;
        *(_WORD *)(a1 + 172) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 148) = 4;
        *(_WORD *)(a1 + 172) = 256;
      }
      *(_DWORD *)(a1 + 164) = a2[3];
      *(_DWORD *)(a1 + 152) = a2[2];
      v2 = a2[3];
      *(_QWORD *)(a1 + 156) = v2;
    }
    else
    {
      *(_DWORD *)(a1 + 148) = (v3 >> 3) & 7;
      *(_WORD *)(a1 + 172) = 257;
      *(_DWORD *)(a1 + 164) = a2[3];
      *(_DWORD *)(a1 + 152) = a2[2];
      *(_DWORD *)(a1 + 156) = a2[3];
      v2 = a2[4];
      *(_DWORD *)(a1 + 160) = v2;
    }
  }
  return v2;
}
