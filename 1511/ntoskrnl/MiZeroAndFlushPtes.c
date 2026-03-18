/*
 * XREFs of MiZeroAndFlushPtes @ 0x1400C097C
 * Callers:
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmUnmapIoSpace @ 0x1400C07D0 (MmUnmapIoSpace.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDereferenceIoPages @ 0x1400C1300 (MiDereferenceIoPages.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiZeroAndFlushPtes(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  _KPROCESS *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r12
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  __int64 v21; // r14
  _QWORD *v22; // rbx
  _QWORD v23[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v24; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v25; // [rsp+3Ch] [rbp-CCh]
  __int64 v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h]
  _QWORD v29[32]; // [rsp+F8h] [rbp-10h] BYREF

  v2 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = MI_READ_PTE_LOCK_FREE(v4);
  if ( v5 )
  {
    v7 = 0LL;
    v8 = a2;
    v26 = 20LL;
    v24 = 0;
    v25 = 0;
    v27 = 0LL;
    v28 = 0LL;
    if ( (v5 & 0x80u) != 0LL )
    {
      v8 = a2 & 0x1FF;
      v9 = v4 + 8 * (a2 >> 9);
      while ( v4 < v9 )
      {
        v23[0] = MI_READ_PTE_LOCK_FREE(v4);
        v10 = MI_READ_PTE_LOCK_FREE(v23);
        *(_QWORD *)v4 = 0LL;
        v11 = (v10 >> 12) & 0xFFFFFFFFFLL;
        if ( (unsigned int)MiPteInShadowRange(v4) )
          MiWritePteShadow(v4, 0LL);
        MiInsertTbFlushEntry((__int64)&v24, (__int64)(v4 << 25) >> 16 << 25 >> 16, 1LL, 1);
        if ( !MI_IS_PFN(v11) )
        {
          if ( (_DWORD)v7 && (v12 = v29[2 * (unsigned int)(v7 - 1) + 1], v12 == v11) )
          {
            v29[2 * (unsigned int)(v7 - 1) + 1] = v12 + 512;
          }
          else
          {
            v13 = 2LL * (unsigned int)v7;
            v7 = (unsigned int)(v7 + 1);
            v29[v13] = v11;
            v29[v13 + 1] = v11 + 512;
            if ( (_DWORD)v7 == 16 )
            {
              MiFlushTbList((__int64)&v24, v6);
              v14 = v29;
              v15 = 16LL;
              do
              {
                MiDereferenceIoPages(1LL, *v14);
                v14 += 2;
                --v15;
              }
              while ( v15 );
              v7 = 0LL;
            }
          }
        }
        v4 += 8LL;
      }
      v2 = (__int64)(v4 << 25) >> 16;
    }
    for ( ; v8; --v8 )
    {
      v23[0] = MI_READ_PTE_LOCK_FREE(v2);
      v16 = MI_GET_PAGE_FRAME_FROM_PTE(v23);
      *(_QWORD *)v2 = 0LL;
      v17 = v16;
      if ( (unsigned int)MiPteInShadowRange(v2) )
        MiWritePteShadow(v2, 0LL);
      MiInsertTbFlushEntry((__int64)&v24, v2 << 25 >> 16, 1LL, 0);
      if ( !MI_IS_PFN(v17) )
      {
        if ( (_DWORD)v7 && (v18 = v29[2 * (unsigned int)(v7 - 1) + 1], v18 == v17) )
        {
          v29[2 * (unsigned int)(v7 - 1) + 1] = v18 + 1;
        }
        else
        {
          v19 = 2LL * (unsigned int)v7;
          v7 = (unsigned int)(v7 + 1);
          v29[v19] = v17;
          v29[v19 + 1] = v17 + 1;
          if ( (_DWORD)v7 == 16 )
          {
            MiFlushTbList((__int64)&v24, v6);
            v20 = v29;
            v21 = 16LL;
            do
            {
              MiDereferenceIoPages(1LL, *v20);
              v20 += 2;
              --v21;
            }
            while ( v21 );
            v7 = 0LL;
          }
        }
      }
      v2 += 8LL;
    }
    MiFlushTbList((__int64)&v24, v6);
    if ( v7 )
    {
      v22 = v29;
      do
      {
        MiDereferenceIoPages(1LL, *v22);
        v22 += 2;
        --v7;
      }
      while ( v7 );
    }
  }
}
