/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x1407A57F0
 * Callers:
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiLockAndDecrementShareCount @ 0x140075E7C (MiLockAndDecrementShareCount.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140084674 (DbgLoadImageSymbolsUnicode.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeReservePrivilegedPages @ 0x1401D1EDC (KeReservePrivilegedPages.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiProcessLoadConfigForDriver @ 0x1404830E8 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     LdrRelocateImage @ 0x1405545D4 (LdrRelocateImage.c)
 *     MiInitializeSystemImagePage @ 0x1407A5EBC (MiInitializeSystemImagePage.c)
 *     MiUpdateThunks @ 0x1407A5F40 (MiUpdateThunks.c)
 *     MiReturnDriverLoadPages @ 0x1407D106C (MiReturnDriverLoadPages.c)
 */

void __fastcall MiReloadBootLoadedDrivers(__int64 a1, _KPROCESS *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rsi
  PIMAGE_NT_HEADERS v8; // r12
  unsigned int VirtualAddress; // ecx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r14
  unsigned int v12; // edi
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // r12
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rax
  char v20; // r9
  ULONG_PTR v21; // rsi
  __int64 v22; // rcx
  __int128 *v23; // rsi
  _KPROCESS *v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // rcx
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  ULONG v36; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v37; // [rsp+30h] [rbp-D0h]
  unsigned int v38; // [rsp+34h] [rbp-CCh]
  unsigned __int64 v39; // [rsp+38h] [rbp-C8h]
  __int64 v40; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v43; // [rsp+58h] [rbp-A8h]
  __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR DriverPage; // [rsp+70h] [rbp-90h]
  PIMAGE_NT_HEADERS v46; // [rsp+78h] [rbp-88h]
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int128 *v48; // [rsp+88h] [rbp-78h]
  __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v54; // [rsp+B4h] [rbp-4Ch]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]

  v50 = a1;
  v55 = 20LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v47 = v4;
  if ( v4 != a1 + 16 )
  {
    do
    {
      v6 = 0;
      v38 = 0;
      if ( (MiFlags & 0x4000) != 0 )
      {
        if ( (MiFlags & 0x20000) != 0 )
          v6 = 2;
        v38 = v6;
      }
      v7 = *(_QWORD *)(v4 + 48);
      v41 = v7;
      v8 = RtlImageNtHeader((PVOID)v7);
      a2 = (_KPROCESS *)PsNtosImageBase;
      a3 = ((unsigned __int64)*(unsigned int *)(v4 + 64) + 4095) >> 12;
      v46 = v8;
      v39 = a3;
      if ( PsNtosImageBase != *(PVOID *)(v4 + 48) )
      {
        MiProcessLoadConfigForDriver(v4);
        a2 = (_KPROCESS *)PsNtosImageBase;
        a3 = v39;
      }
      if ( (v8->FileHeader.Characteristics & 1) != 0 || v8->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_63;
      VirtualAddress = v8->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v8->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(v4 + 64) )
          goto LABEL_63;
        v5 |= 2u;
      }
      else
      {
        v5 &= ~2u;
      }
      v10 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v42 = (unsigned int)a3;
      v51 = v10;
      v52 = v10 + 8LL * (unsigned int)a3;
      if ( (_KPROCESS *)v7 == a2 || (PVOID)v7 == PsHalImageBase )
        goto LABEL_63;
      v8->OptionalHeader.ImageBase = v7;
      v11 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_DWORD *)(v4 + 104) & 0x800000) != 0 )
      {
        v12 = v5 & 0xFFFFFFFB;
      }
      else
      {
        v12 = v5 | 4;
        DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), v7, 0xFFFFFFFFLL);
        v13 = (__int64)MiUseLargeDriverPage(0LL, v39, (const void *)v7, (const UNICODE_STRING *)(v4 + 88));
        if ( v13 )
        {
          v5 = v12 | 1;
          goto LABEL_43;
        }
        a3 = v39;
      }
      v5 = v12 & 0xFFFFFFFE;
      if ( ((v5 >> 2) & 1) != 0 )
      {
        v14 = MiReserveDriverPtes(0, a3);
        v11 = v14;
        if ( !v14 )
          goto LABEL_65;
        a2 = (_KPROCESS *)0xFFFFF68000000000LL;
        v13 = (__int64)(v14 << 25) >> 16;
        v49 = v13;
      }
      else
      {
        v13 = v7;
        v49 = v7;
        a2 = (_KPROCESS *)0xFFFFF68000000000LL;
      }
      if ( v11 < v11 + 8 * v42 )
      {
        v15 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - v11 - 0x98000000000LL;
        v16 = v11 + 8 * v42;
        do
        {
          DriverPage = MiAllocateDriverPage();
          v44 = MI_READ_PTE_LOCK_FREE(v15 + v11);
          v17 = v44;
          v43 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v44);
          v19 = 48 * v43 - 0x58000000000LL;
          v48 = (__int128 *)v19;
          if ( ((v5 >> 2) & 1) != 0 )
          {
            v27 = MiInitializeSystemImagePage(v18, v11, (*(_DWORD *)(v19 + 16) >> 5) & 0x1F);
            v44 = v27;
            MiCopyPage(DriverPage, v43, 0LL, 1);
            *(_QWORD *)v11 = v27;
            if ( MiPteInShadowRange(v11) )
              MiWritePteShadow(v28, v27);
          }
          else
          {
            v40 = 48 * v18 - 0x58000000000LL;
            v37 = MiLockPageInline(v19);
            MiLockNestedPageAtDpcInline(v40);
            MiCopyPfnEntry(v40, v48);
            v20 = 4;
            if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) != 0 )
              v20 = 6;
            MiCopyPage(DriverPage, v43, 0LL, v20);
            v21 = (v17 ^ (DriverPage << 12)) & 0xFFFFFFFFF000LL ^ v17;
            v44 = v21;
            *(_QWORD *)v11 = v21;
            if ( MiPteInShadowRange(v11) )
              MiWritePteShadow(v22, v21);
            _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v23 = v48;
            *((_QWORD *)v48 + 3) |= 0x4000000000000000uLL;
            MiInsertTbFlushEntry((__int64)&v53, (__int64)(v11 << 25) >> 16, 1LL, 0);
            MiFlushTbList((__int64)&v53, v24, v25, v26);
            if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) == 0 && ((*((_QWORD *)v23 + 5) >> 54) & 7) == 3 )
              MiClearPfnImageVerified((__int64)v23, 0xCu);
            MiDecrementShareCount((__int64)v23);
            _InterlockedAnd64((volatile signed __int64 *)v23 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v37);
          }
          v11 += 8LL;
        }
        while ( v11 < v16 );
        v4 = v47;
        v13 = v49;
        v10 = v51;
      }
      v7 = v41;
      v11 -= 8 * v42;
LABEL_43:
      if ( (v5 & 4) == 0 )
      {
        v6 = v38;
LABEL_61:
        if ( (v5 & 1) != 0 )
        {
          MiReturnResidentAvailable(v42);
          MiReturnCommit((__int64)MiSystemPartition, v42);
        }
LABEL_63:
        if ( v6 )
          KeReservePrivilegedPages(v7, v39, v6);
        goto LABEL_65;
      }
      v46 = (PIMAGE_NT_HEADERS)((char *)v46 + v13 - v7);
      if ( (v5 & 2) == 0 || (v5 & 1) != 0 || (LdrRelocateImage((PVOID)v13, (PCCH)a2, a3, a4, v36) & 0x80000000) == 0 )
      {
        v29 = *(unsigned int *)(v4 + 64);
        v30 = v50;
        *(_QWORD *)(v4 + 48) = v13;
        MiUpdateThunks(v30, v7, v13, v29);
        *(_DWORD *)(v4 + 104) |= 0x1000000u;
        *(_QWORD *)(v4 + 56) = v13 + v46->OptionalHeader.AddressOfEntryPoint;
        *(_DWORD *)(v4 + 64) = (_DWORD)v39 << 12;
        if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v4 + 88), (PVOID)v13) == 1 )
          *(_DWORD *)(v4 + 104) |= 0x100000u;
        v31 = v52;
        if ( v10 < v52 )
        {
          do
          {
            MiInsertTbFlushEntry((__int64)&v53, (__int64)(v10 << 25) >> 16, 1LL, 0);
            v32 = 48 * (*(_QWORD *)(MI_GET_PFN_FROM_PTE(v10) + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            *(_QWORD *)v10 = 0LL;
            if ( MiPteInShadowRange(v10) )
              MiWritePteShadow(v33, 0LL);
            MiLockAndDecrementShareCount(v34, 1);
            MiLockAndDecrementShareCount(v32, 0);
            if ( (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            {
              v35 = (__int64)(*(_QWORD *)(v32 + 8) << 25) >> 16 << 25 >> 16;
              MiReturnSystemVa(v35, v35 + 0x200000, 3, (__int64)&v53);
            }
            v10 += 8LL;
          }
          while ( v10 < v31 );
          v4 = v47;
          v7 = v41;
        }
        v6 = v38;
        if ( (MiFlags & 0x4000) != 0 && (MiFlags & 0x20000) != 0 )
          v6 = v38 | 1;
        goto LABEL_61;
      }
      MiReturnDriverLoadPages(v11, v11 + 8 * v42 - 8);
      MiReleaseDriverPtes(0, v11, v39);
LABEL_65:
      v4 = *(_QWORD *)v4;
      v47 = v4;
    }
    while ( v4 != v50 + 16 );
  }
  MiFlushTbList((__int64)&v53, a2, a3, a4);
}
