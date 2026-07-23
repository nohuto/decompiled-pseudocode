/*
 * XREFs of MiClearPageFileHash @ 0x14011454C
 * Callers:
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiClearPageFileHash(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // r14
  unsigned __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  _SLIST_ENTRY *v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 216);
  if ( v3 )
  {
    v4 = v3 + 4LL * a2;
    v5 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = MI_READ_PTE_LOCK_FREE(v5);
    v10 = v6;
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)v4 = 1;
      v8 = (_SLIST_ENTRY *)MI_GET_PFN_FROM_PTE(&v10);
      v9 = (unsigned int)v8[1].Next | ((((unsigned __int64)v8[1].Next >> 32) - 1) << 32);
      v10 = v9;
      v8[1].Next = (_SLIST_ENTRY *)v9;
      if ( (unsigned int)MiPteInShadowRange(&v8[1]) )
        MiWritePteShadow(&v8[1], v9);
      if ( (v9 & 0xFFFFFFFF00000000uLL) == 0 )
      {
        --*(_DWORD *)(a1 + 208);
        *v5 = 0LL;
        if ( (unsigned int)MiPteInShadowRange(v5) )
          MiWritePteShadow(v5, 0LL);
        KeFlushSingleTb(v4, 0, 1u);
        RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v8);
      }
    }
    else
    {
      v7 = (unsigned int)v6 | ((HIDWORD(v6) - 1) << 32);
      v10 = v7;
      *v5 = v7;
      if ( (unsigned int)MiPteInShadowRange(v5) )
        MiWritePteShadow(v5, v7);
    }
  }
}
