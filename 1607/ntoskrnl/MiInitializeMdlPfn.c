/*
 * XREFs of MiInitializeMdlPfn @ 0x140104CA0
 * Callers:
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 * Callees:
 *     MiAbortCombineScan @ 0x14001D390 (MiAbortCombineScan.c)
 */

char __fastcall MiInitializeMdlPfn(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  int v7; // edi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax

  if ( (a2 & 0x100) != 0 )
  {
    LOBYTE(v9) = 0;
    *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    *(_WORD *)(a1 + 32) = 2;
    *(_QWORD *)(a1 + 24) = v5;
    v6 = 0xFFFFF68000000000uLL;
    if ( (a2 & 0x80000200) != 0 )
      v6 = 0LL;
    *(_QWORD *)(a1 + 8) = v6;
    v7 = a2 & 0x80000000;
    if ( (a2 & 0x80000000) != 0 )
      v8 = v5 & 0xBFFFFFFFFFFFFFFFuLL;
    else
      v8 = v5 | 0x4000000000000000LL;
    *(_QWORD *)(a1 + 24) = v8;
    if ( (a2 & 0x200) != 0 )
    {
      MiAbortCombineScan(a1, a2, a3, a4);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
      _InterlockedIncrement64(&qword_140326AE0);
    }
    LOBYTE(v9) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
    *(_BYTE *)(a1 + 34) = v9;
    if ( v7 )
    {
      v9 = *(_QWORD *)(a1 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0x40000000000000LL;
      *(_QWORD *)(a1 + 40) = v9;
    }
  }
  return v9;
}
