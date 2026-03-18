/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x14039F8D8
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, __int64 *a2, unsigned __int64 a3, int a4)
{
  __int64 *v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  unsigned __int64 v9; // rax
  void *v10; // r10
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int64)a2 <= a3 )
  {
    v6 = a2;
    do
    {
      v7 = MI_READ_PTE_LOCK_FREE(v6);
      if ( a4 )
      {
        if ( MI_IS_PFN((v7 >> 12) & 0xFFFFFFFFFLL) )
          PoSetHiberRange(0LL, 0x14000u, v8, 0x200uLL, 0x6C64704Eu);
      }
      else
      {
        v12 = v7;
        if ( (v7 & 1) != 0 )
        {
          v9 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12);
          if ( MI_IS_PFN(v9) )
          {
            v11 = 48LL * (_QWORD)v10 - 0x58000000000LL;
            if ( *(_WORD *)(v11 + 32) > 1u || !*(_QWORD *)v11 || (*(_BYTE *)(v11 + 35) & 8) != 0 )
              PoSetHiberRange(0LL, 0x14000u, v10, 1uLL, 0x7364704Eu);
          }
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= a3 );
  }
}
