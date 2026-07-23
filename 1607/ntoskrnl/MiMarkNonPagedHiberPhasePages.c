/*
 * XREFs of MiMarkNonPagedHiberPhasePages @ 0x1403CB5A8
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x14000F720 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkNonPagedHiberPhasePages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  void *v12; // r10
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 <= a3 )
  {
    v6 = a2;
    do
    {
      v7 = MI_READ_PTE_LOCK_FREE(v6);
      if ( a4 )
      {
        if ( MiIsPfn((v7 >> 12) & 0xFFFFFFFFFLL) )
        {
          v9 = 512LL;
          if ( a4 > 1 )
          {
            v10 = a4 - 1;
            do
            {
              v9 <<= 9;
              --v10;
            }
            while ( v10 );
          }
          PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x6C64704Eu);
        }
      }
      else
      {
        v13 = v7;
        if ( (v7 & 1) != 0 )
        {
          v11 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v13);
          if ( MiIsPfn(v11)
            && (*(_WORD *)(48LL * (_QWORD)v12 - 0x58000000000LL + 32) > 1u
             || !*(_QWORD *)(48LL * (_QWORD)v12 - 0x58000000000LL)
             || (*(_BYTE *)(48LL * (_QWORD)v12 - 0x58000000000LL + 35) & 8) != 0) )
          {
            PoSetHiberRange(0LL, 0x14000u, v12, 1uLL, 0x7364704Eu);
          }
        }
      }
      v6 += 8LL;
    }
    while ( v6 <= a3 );
  }
}
