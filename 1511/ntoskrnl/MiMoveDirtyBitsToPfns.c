/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x14005E3A0
 * Callers:
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 * Callees:
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     MiCapturePageFileInfoInline @ 0x1400E1BBC (MiCapturePageFileInfoInline.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, _KPROCESS *a2, unsigned __int8 a3)
{
  _KPROCESS *v4; // r15
  _KPROCESS *v5; // r14
  __int64 NextPageTable; // rax
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdi
  unsigned int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 *v16; // r11
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // r9
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v30; // [rsp+4Ch] [rbp-BCh]
  __int64 v31; // [rsp+50h] [rbp-B8h]
  __int64 v32; // [rsp+58h] [rbp-B0h]
  _QWORD Base[21]; // [rsp+60h] [rbp-A8h] BYREF

  v31 = 20LL;
  v29 = 1;
  v30 = 0;
  v4 = a2;
  v32 = 0LL;
  LODWORD(v5) = a1;
  Base[0] = 0LL;
  if ( a1 <= (unsigned __int64)a2 )
  {
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable((_DWORD)v5, (_DWORD)v4, 0, a3, 5, (__int64)&v27);
      v7 = NextPageTable;
      if ( !NextPageTable )
        goto LABEL_42;
      v8 = MI_READ_PTE_LOCK_FREE(NextPageTable);
      v28 = v8;
      v9 = v8;
      if ( (v8 & 1) != 0 && (v8 & 0x42) != 0 )
        break;
LABEL_41:
      v5 = (_KPROCESS *)(v7 + 8);
      if ( v5 > v4 )
        goto LABEL_42;
    }
    v10 = MI_READ_PTE_LOCK_FREE(&v28);
    v11 = v9 & 0xFFFFFFFFFFFFFFBDuLL;
    *(_QWORD *)v7 = v11;
    v12 = 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v7) )
      MiWritePteShadow(v7, v11);
    v13 = HIDWORD(v31);
    v14 = 1LL;
    v15 = v7 << 25 >> 16;
    if ( HIDWORD(v31) )
    {
      v16 = &Base[HIDWORD(v31) - 1];
      v17 = *v16;
      if ( (*v16 & 0x800) == 0 )
      {
        v18 = *v16 & 0x7FF;
        v19 = v18 + 1;
        if ( (v17 & 0xFFFFFFFFFFFFF000uLL) + ((v18 + 1) << 12) == v15 && v19 > v18 && v19 <= 0x7FF )
        {
LABEL_12:
          ++v32;
          *v16 = v17 ^ ((unsigned __int16)v17 ^ (unsigned __int16)(v17 + 1)) & 0x7FF;
LABEL_30:
          v26 = 0;
          v24 = 0LL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v26);
            while ( (*(_QWORD *)(v12 + 24) & 0x8000000000000000uLL) != 0 );
          }
          a2 = (_KPROCESS *)*(unsigned __int8 *)(v12 + 34);
          v25 = 0LL;
          if ( ((unsigned __int8)a2 & 0x10) == 0 )
          {
            if ( (*(_DWORD *)(v12 + 16) & 0x400LL) == 0 && ((unsigned __int8)a2 & 8) == 0 )
              v25 = MiCapturePageFileInfoInline(v12 + 16, 1LL, 0LL);
            *(_BYTE *)(v12 + 34) |= 0x10u;
            if ( v25 )
              v24 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v12 + 40)) >> 8) & 0x3FF);
          }
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v25 )
            MiReleasePageFileInfo(v24, v25, 1LL);
          goto LABEL_41;
        }
        if ( (v17 & 0x800) == 0 && (v17 & 0xFFFFFFFFFFFFF000uLL) == v15 + 4096 )
        {
          v20 = *v16 & 0x7FF;
          if ( v20 + 1 >= v20 && v20 + 1 <= 0x7FF )
          {
            v21 = 4096LL;
            if ( (v17 & 0x800) != 0 )
              v21 = 0x200000LL;
            v17 -= v21;
            goto LABEL_12;
          }
        }
      }
    }
    if ( HIDWORD(v31) < (unsigned int)v31 )
    {
      while ( 1 )
      {
        v22 = 2048LL;
        if ( (unsigned __int64)(v14 - 1) <= 0x7FF )
          v22 = v14;
        v14 -= v22;
        v23 = v15 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v22 - 1) & 0x7FF;
        v15 += v22 << 12;
        Base[v13] = v23;
        v32 += v22;
        v13 = HIDWORD(v31) + 1;
        HIDWORD(v31) = v13;
        if ( v13 == (_DWORD)v31 )
        {
          qsort(Base, v13, 8uLL, MiTbFlushSort);
          MiCompressTbFlushList(&v29);
          v13 = HIDWORD(v31);
          if ( HIDWORD(v31) == (_DWORD)v31 )
            break;
        }
        if ( !v14 )
          goto LABEL_30;
      }
      if ( v14 )
      {
        HIBYTE(v30) = 1;
        v32 = HIDWORD(v31);
      }
    }
    else
    {
      HIBYTE(v30) = 1;
    }
    goto LABEL_30;
  }
LABEL_42:
  MiFlushTbList((__int64)&v29, a2);
}
