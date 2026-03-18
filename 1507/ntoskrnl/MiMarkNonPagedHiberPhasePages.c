/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x1403F2448
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

void __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 *v6; // rbx
  unsigned __int64 PteShadow; // rdi
  BOOL v8; // eax
  void *v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( (unsigned __int64)a2 <= a3 )
  {
    v6 = a2;
    do
    {
      PteShadow = *v6;
      v8 = MiPteInShadowRange((__int64)v6);
      if ( a4 )
      {
        if ( v8 )
          PteShadow = MiReadPteShadow((__int64)v6, PteShadow);
        v9 = (void *)((PteShadow >> 12) & 0xFFFFFFFFFLL);
        if ( MI_IS_PFN((unsigned __int64)v9) )
          PoSetHiberRange(0LL, 0x14000u, v9, 0x200uLL, 0x6C64704Eu);
      }
      else
      {
        if ( v8 )
          PteShadow = MiReadPteShadow((__int64)v6, PteShadow);
        v12 = PteShadow;
        if ( (PteShadow & 1) != 0 )
        {
          if ( MiPteInShadowRange((__int64)&v12) )
            PteShadow = MiReadPteShadow((__int64)&v12, PteShadow);
          v10 = (PteShadow >> 12) & 0xFFFFFFFFFLL;
          if ( MI_IS_PFN(v10) )
          {
            v11 = 48 * v10 - 0x58000000000LL;
            if ( *(_WORD *)(v11 + 32) > 1u || !*(_QWORD *)v11 || (*(_BYTE *)(v11 + 35) & 8) != 0 )
              PoSetHiberRange(0LL, 0x14000u, (PVOID)v10, 1uLL, 0x7364704Eu);
          }
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= a3 );
  }
}
