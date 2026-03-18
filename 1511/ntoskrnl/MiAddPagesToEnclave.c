/*
 * XREFs of MiAddPagesToEnclave @ 0x140628AE0
 * Callers:
 *     MiCommitEnclavePages @ 0x140628FF8 (MiCommitEnclavePages.c)
 * Callees:
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiCreatePteCopyList @ 0x1400BFE3C (MiCreatePteCopyList.c)
 *     MiReleasePteCopyList @ 0x1400BFE9C (MiReleasePteCopyList.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x1401DFD10 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1401DFDA8 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1401DFE5C (MiReturnEnclavePage.c)
 *     MiGetPageForEnclave @ 0x140629DA8 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x14069EC48 (KeAddEnclavePage.c)
 */

__int64 __fastcall MiAddPagesToEnclave(__int64 a1, _QWORD *a2, unsigned __int64 a3, unsigned __int64 a4, int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  __int64 result; // rax
  ULONG_PTR v11; // rax
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned __int64 ValidKernelPte; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  int v17; // edi
  unsigned __int8 v18; // cl
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 PageForEnclave; // r12
  __int64 v22; // rcx
  __int64 v23; // r12
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  BOOL v26; // [rsp+30h] [rbp-68h]
  _BYTE v27[4]; // [rsp+34h] [rbp-64h] BYREF
  __int64 PteFromCopyList; // [rsp+38h] [rbp-60h]
  __int64 v29; // [rsp+40h] [rbp-58h]
  unsigned int v30[20]; // [rsp+48h] [rbp-50h] BYREF
  int v31; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 80);
  v7 = a3;
  v8 = ((__int64)(a4 - a3) >> 3) + 1;
  if ( v5 >= v8 || (result = MiReserveEnclavePages(a1, a2, v8 - v5), (int)result >= 0) )
  {
    v11 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, a3);
    v13 = v11;
    if ( v11 )
    {
      ValidKernelPte = MiMakeValidKernelPte(qword_1402FF250, 1, v11, v12);
      *(_QWORD *)v13 = ValidKernelPte;
      v15 = ValidKernelPte;
      v26 = MiPteInShadowRange(v13);
      if ( v26 )
        MiWritePteShadow(v13, v15);
      v16 = v13 << 25 >> 16;
      v29 = v16;
      if ( v8 > 0x14 )
        v8 = 20LL;
      MiCreatePteCopyList(v8 + 1, v8 + 1, (unsigned __int64)v30);
      if ( v30[1] )
      {
        v18 = 49;
        if ( (a5 & 4) != 0 )
          v18 = 51;
        if ( (a5 & 2) != 0 )
          v18 |= 4u;
        if ( (*(_DWORD *)(a1 + 88) & 1) != 0 )
          v18 |= 0x40u;
        v19 = (__int64)(*(_QWORD *)(a1 + 64) << 25) >> 16;
        v20 = (__int64)(v7 << 25) >> 16;
        if ( v7 > a4 )
        {
LABEL_27:
          v17 = 0;
        }
        else
        {
          v31 = v18;
          while ( 1 )
          {
            PageForEnclave = MiGetPageForEnclave(a1, a2);
            PteFromCopyList = (__int64)MiGetPteFromCopyList(v30, PageForEnclave, -1LL);
            v17 = KeAddEnclavePage(v19, v16, PteFromCopyList << 25 >> 16, v20, v31, (__int64)v27);
            v22 = PteFromCopyList;
            *(_QWORD *)PteFromCopyList = 0LL;
            if ( MiPteInShadowRange(v22) )
              MiWritePteShadow(PteFromCopyList, 0LL);
            if ( v17 < 0 )
              break;
            MiInitializeEnclavePfn(PageForEnclave, v7, a5);
            v23 = 16 * (PageForEnclave & 0xFFFFFFFFFLL);
            v24 = MmProtectToPteMask[a5] & 0xFFFFFFFFFFFFFF7FuLL;
            v25 = v24 | ((v23 | HIBYTE(word_1402FE760) & 1) << 8) | 0x25;
            if ( (a5 & 4) != 0 )
              v25 = v24 | ((v23 | HIBYTE(word_1402FE760) & 1) << 8) | 0x67;
            *(_QWORD *)v7 = v25;
            if ( MiPteInShadowRange(v7) )
              MiWritePteShadow(v7, v25);
            LODWORD(v16) = v29;
            LODWORD(v20) = v20 + 4096;
            v7 += 8LL;
            if ( v7 > a4 )
              goto LABEL_27;
          }
          MiReturnEnclavePage(PageForEnclave);
          if ( v17 == -1073740657 )
            v17 = -1073741823;
        }
      }
      else
      {
        v17 = -1073741670;
      }
      MiReleasePteCopyList((__int64)v30);
      *(_QWORD *)v13 = 0LL;
      if ( v26 )
        MiWritePteShadow(v13, 0LL);
      MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v13, 1u);
      return (unsigned int)v17;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
