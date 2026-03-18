/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x1403F18E8
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

void __fastcall MiMarkHiberNotCachedPages(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 *v6; // rdi
  unsigned __int64 PteShadow; // rbx
  unsigned __int64 v8; // rbx
  ULONG_PTR v9; // r9

  if ( (unsigned __int64)a2 <= a3 )
  {
    v6 = a2;
    while ( 1 )
    {
      PteShadow = *v6;
      if ( a4 )
        break;
      if ( (PteShadow & 1) != 0 )
      {
        if ( byte_14034EBA8 == 1 )
        {
          if ( (PteShadow & 0x10) != 0 || (PteShadow & 8) != 0 )
          {
LABEL_16:
            if ( MiPteInShadowRange((__int64)v6) )
              PteShadow = MiReadPteShadow((__int64)v6, PteShadow);
            v8 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
            if ( !MI_IS_PFN(v8) )
              goto LABEL_21;
            v9 = 1LL;
LABEL_20:
            PoSetHiberRange(0LL, 0x14000u, (PVOID)v8, v9, 0x636E6D4Du);
            goto LABEL_21;
          }
        }
        else if ( (PteShadow & 0x18) == 0x10 )
        {
          goto LABEL_16;
        }
        if ( (PteShadow & 0x10) != 0 )
          goto LABEL_16;
      }
LABEL_21:
      if ( (unsigned __int64)++v6 > a3 )
        return;
    }
    if ( MiPteInShadowRange((__int64)v6) )
      PteShadow = MiReadPteShadow((__int64)v6, PteShadow);
    v8 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
    if ( !MI_IS_PFN(v8) || (*(_BYTE *)(48 * v8 - 0x58000000000LL + 34) & 0x40) != 0 )
      goto LABEL_21;
    v9 = 512LL;
    goto LABEL_20;
  }
}
