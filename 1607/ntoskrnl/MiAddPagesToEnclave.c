/*
 * XREFs of MiAddPagesToEnclave @ 0x14065E2D0
 * Callers:
 *     MiCommitEnclavePages @ 0x14065E818 (MiCommitEnclavePages.c)
 * Callees:
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiReleasePteCopyList @ 0x140104DB4 (MiReleasePteCopyList.c)
 *     MiCreatePteCopyList @ 0x140104EF8 (MiCreatePteCopyList.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiInitializeEnclavePfn @ 0x1401F03C8 (MiInitializeEnclavePfn.c)
 *     MiReserveEnclavePages @ 0x1401F0464 (MiReserveEnclavePages.c)
 *     MiReturnEnclavePage @ 0x1401F0518 (MiReturnEnclavePage.c)
 *     MiGetPageForEnclave @ 0x14065F5F8 (MiGetPageForEnclave.c)
 *     KeAddEnclavePage @ 0x1406E5CDC (KeAddEnclavePage.c)
 */

__int64 __fastcall MiAddPagesToEnclave(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned int a5)
{
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // edi
  unsigned __int8 v15; // cl
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rbp
  int v19; // eax
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  ULONG_PTR v22; // rdi
  __int64 v23; // rdi
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  BOOL v28; // [rsp+30h] [rbp-78h]
  _BYTE v29[4]; // [rsp+34h] [rbp-74h] BYREF
  __int64 v30; // [rsp+38h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-68h]
  unsigned __int64 PteFromCopyList; // [rsp+48h] [rbp-60h]
  unsigned int v33[22]; // [rsp+50h] [rbp-58h] BYREF
  int v34; // [rsp+B0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 80);
  v6 = a3;
  v8 = ((__int64)(a4 - a3) >> 3) + 1;
  if ( v5 >= v8 || (result = MiReserveEnclavePages(a1, a2, v8 - v5), (int)result >= 0) )
  {
    v10 = (_QWORD *)MiReservePtes((__int64)&qword_1403278B0, 1uLL, a3);
    v11 = (unsigned __int64)v10;
    if ( v10 )
    {
      *v10 = MiMakeValidKernelPte(qword_1403276E0, 1, (unsigned __int64)v10);
      v28 = MiPteInShadowRange(v11);
      if ( v28 )
        MiWritePteShadow(v13, v12);
      v30 = 0LL;
      if ( v8 > 0x14 )
        v8 = 20LL;
      MiCreatePteCopyList(v8 + 1, v8 + 1, (unsigned __int64)v33);
      if ( v33[1] )
      {
        v15 = 49;
        if ( (a5 & 4) != 0 )
          v15 = 51;
        if ( (a5 & 2) != 0 )
          v15 |= 4u;
        if ( (*(_DWORD *)(a1 + 88) & 1) != 0 )
          v15 |= 0x40u;
        v16 = v30;
        v17 = (__int64)(*(_QWORD *)(a1 + 64) << 25) >> 16;
        v18 = (__int64)((v6 << 25) - v30) >> 16;
        if ( v6 > a4 )
        {
LABEL_27:
          v14 = 0;
        }
        else
        {
          v34 = v15;
          while ( 1 )
          {
            BugCheckParameter2 = MiGetPageForEnclave(a1, a2);
            PteFromCopyList = (unsigned __int64)MiGetPteFromCopyList(v33, BugCheckParameter2, -1LL);
            v19 = KeAddEnclavePage(
                    v17,
                    (__int64)(v11 << 25) >> 16,
                    (__int64)((PteFromCopyList << 25) - v16) >> 16,
                    v18,
                    v34,
                    (__int64)v29);
            v20 = PteFromCopyList;
            v14 = v19;
            *(_QWORD *)PteFromCopyList = 0LL;
            if ( MiPteInShadowRange(v20) )
              MiWritePteShadow(v21, 0LL);
            if ( v14 < 0 )
              break;
            v22 = BugCheckParameter2;
            MiInitializeEnclavePfn(BugCheckParameter2, v6, a5);
            v23 = 16 * (v22 & 0xFFFFFFFFFLL);
            v24 = MmProtectToPteMask[a5] & 0xFFFFFFFFFFFFFF7FuLL;
            v25 = v24 | ((v23 | HIBYTE(word_140326AE8) & 1) << 8) | 0x25;
            if ( (a5 & 4) != 0 )
              v25 = v24 | ((v23 | HIBYTE(word_140326AE8) & 1) << 8) | 0x67;
            *(_QWORD *)v6 = v25;
            if ( MiPteInShadowRange(v6) )
              MiWritePteShadow(v27, v26);
            v16 = v30;
            LODWORD(v18) = v18 + 4096;
            v6 += 8LL;
            if ( v6 > a4 )
              goto LABEL_27;
          }
          MiReturnEnclavePage(BugCheckParameter2);
          if ( v14 == -1073740657 )
            v14 = -1073741823;
        }
      }
      else
      {
        v14 = -1073741670;
      }
      MiReleasePteCopyList((__int64)v33);
      *(_QWORD *)v11 = 0LL;
      if ( v28 )
        MiWritePteShadow(v11, 0LL);
      MiReleasePtes((__int64)&qword_1403278B0, v11, 1u);
      return (unsigned int)v14;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
