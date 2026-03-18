/*
 * XREFs of MiInitializeMdlPfn @ 0x1400BCE40
 * Callers:
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiInitializeDynamicPfns @ 0x1401D1AA4 (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rax

  if ( (a2 & 0x100) != 0 )
  {
    LOBYTE(v6) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v3 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(a1 + 32) = 2;
    v4 = v3 | 1;
    *(_QWORD *)(a1 + 24) = v4;
    *(_QWORD *)(a1 + 8) = -(__int64)((a2 & 0x80000200) == 0) & 0xFFFFF68000000000uLL;
    if ( a2 < 0 )
      v5 = v4 & 0xBFFFFFFFFFFFFFFFuLL;
    else
      v5 = v4 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v5;
    if ( (a2 & 0x200) != 0 )
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
    LOBYTE(v6) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v6;
    if ( a2 < 0 )
    {
      v6 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v6;
    }
  }
  return v6;
}
