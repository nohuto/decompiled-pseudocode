/*
 * XREFs of MiTrimSystemImagePages @ 0x14001A618
 * Callers:
 *     MiSetPagingOfDriver @ 0x14001A3D0 (MiSetPagingOfDriver.c)
 * Callees:
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MI_READ_PDE @ 0x14006DE04 (MI_READ_PDE.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiTrimSystemImagePages(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 *i; // r14
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = a1; (unsigned __int64)i <= a2; ++i )
  {
    v5 = MI_READ_PTE_LOCK_FREE(i);
    if ( (v5 & 1) == 0 && (v5 & 0x400) != 0 )
    {
      v6 = v5 & 0xFFFFFFFFFFFFFBFEuLL | 1;
      v12 = v6;
      v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v12) - 0x58000000000LL;
      if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
      {
        v8 = (*(_QWORD *)(v7 + 8) << 16) | 0x400LL;
        if ( *(__int64 *)(v7 + 8) >= 0 )
          v8 = (*(_QWORD *)(v7 + 8) << 16) | 0x600LL;
      }
      else
      {
        v8 = v6 & 0xFFFFFFFFFFFFF81EuLL | (32 * ((*(_DWORD *)(v7 + 16) >> 5) & 0x1F | 0x40LL));
      }
      *i = v8;
      if ( (unsigned int)MiPteInShadowRange(i) )
        MiWritePteShadow(i, v8);
      v9 = 0LL;
      MiLockPageAtDpcInline(v7);
      *(_BYTE *)(v7 + 35) &= ~8u;
      if ( (v6 & 0x42) != 0 )
        v9 = MiCaptureDirtyBitToPfn(v7);
      if ( (*(_QWORD *)(v7 + 40) & 0x200000000000000LL) != 0 )
      {
        v12 = MI_READ_PDE((((unsigned __int64)i >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = MI_GET_PAGE_FRAME_FROM_PTE(&v12);
      }
      else
      {
        v10 = -1LL;
      }
      *(_BYTE *)(v7 + 35) = *(_BYTE *)(v7 + 35) & 0xF8 | 2;
      MiDecrementShareCount(v7);
      if ( v10 != -1 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = 48 * v10 - 0x58000000000LL;
        MiLockPageAtDpcInline(v7);
        MiDecrementShareCount(v7);
      }
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v9 )
        MiReleasePageFileInfo(&MiSystemPartition, v9, 1LL);
      ++v2;
    }
  }
  return v2;
}
