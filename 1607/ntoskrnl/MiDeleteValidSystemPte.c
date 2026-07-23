/*
 * XREFs of MiDeleteValidSystemPte @ 0x1400FE970
 * Callers:
 *     MiDeletePteRange @ 0x1400FE550 (MiDeletePteRange.c)
 *     MiDeleteSessionPdes @ 0x140126258 (MiDeleteSessionPdes.c)
 * Callees:
 *     MiIdentifyPfn @ 0x14000F810 (MiIdentifyPfn.c)
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiDeleteValidSystemPte(
        _QWORD *BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR a3,
        __int64 a4,
        __m128i **a5)
{
  __m128i *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // esi
  __int64 result; // rax
  ULONG_PTR v14; // rax
  ULONG_PTR BugCheckParameter4; // r10
  _QWORD v16[3]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-50h] BYREF

  v9 = (__m128i *)(48 * MI_GET_PAGE_FRAME_FROM_PTE(BugCheckParameter2) - 0x58000000000LL);
  if ( v9->m128i_i64[0] )
    MiTerminateWsle(a2, a3, v9->m128i_i64[0], 0);
  if ( (_QWORD *)(v9->m128i_i64[1] | 0x8000000000000000uLL) != BugCheckParameter2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2);
    KeBugCheckEx(0x1Au, 0x401uLL, (ULONG_PTR)BugCheckParameter2, v14, BugCheckParameter4);
  }
  if ( (*(_BYTE *)(a3 + 184) & 7) == 1 )
  {
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2968));
    _InterlockedDecrement64((volatile signed __int64 *)(a3 - 2960));
  }
  MiInsertTbFlushEntry(a4, a2 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  *BugCheckParameter2 = 0LL;
  if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2, v10) )
    MiWritePteShadow(v11, 0LL);
  if ( (BYTE4(PerfGlobalGroupMask) & 1) == 0 || a2 < 0xFFFFF68000000000uLL || (v12 = 1, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
    v12 = 0;
  MiLockPageAtDpcInline((__int64)v9);
  v9[1].m128i_i64[1] |= 0x4000000000000000uLL;
  if ( v12 )
  {
    memset(v16, 0, sizeof(v16));
    MiIdentifyPfn(v9, v16);
  }
  v9->m128i_i64[0] = (__int64)*a5;
  *a5 = v9;
  v9[2].m128i_i8[2] = v9[2].m128i_i8[2] & 0xF8 | 5;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64(&v9[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
  if ( v12 )
  {
    v17[1] = 24LL;
    v17[0] = v16;
    return EtwTraceKernelEvent((int)v17, 1, 0x20000001u, 631, 289413890);
  }
  return result;
}
