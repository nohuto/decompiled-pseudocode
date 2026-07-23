/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x14074AF5C
 * Callers:
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 * Callees:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140002318 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140002740 (DbgLoadImageSymbolsUnicode.c)
 *     MiLockAndDecrementShareCount @ 0x140005934 (MiLockAndDecrementShareCount.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiProcessLoadConfigForDriver @ 0x1403CC914 (MiProcessLoadConfigForDriver.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 *     MiReleaseDriverPtes @ 0x1404A6BE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     LdrRelocateImage @ 0x14052097C (LdrRelocateImage.c)
 *     MiInitializeSystemImagePage @ 0x14074B5A8 (MiInitializeSystemImagePage.c)
 *     MiUpdateThunks @ 0x14074B648 (MiUpdateThunks.c)
 *     MiReturnDriverLoadPages @ 0x140784C40 (MiReturnDriverLoadPages.c)
 */

void __fastcall MiReloadBootLoadedDrivers(__int64 a1, _KPROCESS *a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  PIMAGE_NT_HEADERS v4; // rax
  ULONG v5; // r8d
  ULONG v6; // r9d
  PIMAGE_NT_HEADERS v7; // r12
  unsigned int VirtualAddress; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r15
  unsigned int v13; // edi
  __int64 v14; // r12
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int8 v21; // r9
  __int64 v22; // rsi
  __int64 v23; // rsi
  _KPROCESS *v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r11
  ULONG v35; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v36; // [rsp+30h] [rbp-D0h]
  ULONG_PTR DriverPage; // [rsp+38h] [rbp-C8h]
  unsigned int v38; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+50h] [rbp-B0h]
  ULONG_PTR v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  PIMAGE_NT_HEADERS v44; // [rsp+70h] [rbp-90h]
  char *v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  __int64 v47; // [rsp+80h] [rbp-80h]
  __int64 v48; // [rsp+88h] [rbp-78h]
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  unsigned __int64 v51; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52; // [rsp+A8h] [rbp-58h]
  int v53; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v54; // [rsp+B4h] [rbp-4Ch]
  __int64 v55; // [rsp+B8h] [rbp-48h]
  __int64 v56; // [rsp+C0h] [rbp-40h]
  __int64 v57; // [rsp+C8h] [rbp-38h]

  v48 = a1;
  v55 = 20LL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v53 = 0;
  v54 = 0;
  v56 = 0LL;
  v57 = 0LL;
  v42 = v2;
  if ( v2 != a1 + 16 )
  {
    while ( 1 )
    {
      v4 = RtlImageNtHeader(*(PVOID *)(v2 + 48));
      a2 = (_KPROCESS *)PsNtosImageBase;
      v7 = v4;
      v44 = v4;
      if ( PsNtosImageBase != *(PVOID *)(v2 + 48) )
      {
        MiProcessLoadConfigForDriver(v2);
        a2 = (_KPROCESS *)PsNtosImageBase;
      }
      if ( (v7->FileHeader.Characteristics & 1) != 0 || v7->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_55;
      VirtualAddress = v7->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v7->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(v2 + 64) )
          goto LABEL_55;
        v3 |= 2u;
      }
      else
      {
        v3 &= ~2u;
      }
      v39 = *(_QWORD *)(v2 + 48);
      v9 = v39;
      v10 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v11 = ((unsigned __int64)*(unsigned int *)(v2 + 64) + 4095) >> 12;
      v40 = (unsigned int)v11;
      v51 = v10;
      v49 = v11;
      v52 = v10 + 8LL * (unsigned int)v11;
      if ( (_KPROCESS *)v39 == a2 || (PVOID)v39 == PsHalImageBase )
        goto LABEL_55;
      v7->OptionalHeader.ImageBase = v39;
      v12 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_DWORD *)(v2 + 104) & 0x800000) != 0 )
        break;
      v13 = v3 | 4;
      DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v2 + 88), v39, 0xFFFFFFFFLL);
      LODWORD(v11) = v49;
      v14 = (__int64)MiUseLargeDriverPage(0LL, v49, (const void *)v39, (const UNICODE_STRING *)(v2 + 88));
      if ( !v14 )
      {
        v9 = v39;
        goto LABEL_17;
      }
      v3 = v13 | 1;
      v38 = v3;
LABEL_39:
      if ( (v3 & 4) == 0 )
        goto LABEL_53;
      v45 = (char *)v44 + v14 - v39;
      if ( (v3 & 2) == 0 || (v3 & 1) != 0 || (LdrRelocateImage((PVOID)v14, (PCCH)a2, v5, v6, v35) & 0x80000000) == 0 )
      {
        v26 = *(unsigned int *)(v2 + 64);
        v27 = v48;
        *(_QWORD *)(v2 + 48) = v14;
        MiUpdateThunks(v27, v39, v14, v26);
        *(_DWORD *)(v2 + 104) |= 0x1000000u;
        v28 = v14 + *((unsigned int *)v45 + 10);
        *(_DWORD *)(v2 + 64) = (_DWORD)v11 << 12;
        *(_QWORD *)(v2 + 56) = v28;
        if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v2 + 88), (PVOID)v14) == 1 )
          *(_DWORD *)(v2 + 104) |= 0x100000u;
        v29 = v52;
        if ( v10 < v52 )
        {
          do
          {
            MiInsertTbFlushEntry((__int64)&v53, (__int64)(v10 << 25) >> 16, 1LL, 0);
            v30 = MI_GET_PFN_FROM_PTE(v10);
            v31 = *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFLL;
            *(_QWORD *)v10 = 0LL;
            v32 = 48 * v31 - 0x58000000000LL;
            if ( MiPteInShadowRange(v10) )
              MiWritePteShadow(v10, 0LL);
            MiLockAndDecrementShareCount(v30, 1);
            MiLockAndDecrementShareCount(v32, 0);
            if ( (*(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            {
              v33 = (__int64)(*(_QWORD *)(v32 + 8) << 25) >> 16 << 25 >> 16;
              MiReturnSystemVa(v33, v33 + 0x200000, 3, (__int64)&v53);
            }
            v10 += 8LL;
          }
          while ( v10 < v29 );
          v3 = v38;
          v2 = v42;
        }
LABEL_53:
        if ( (v3 & 1) != 0 )
        {
          MiReturnResidentAvailable(v40);
          _InterlockedExchangeAdd64(&qword_1402FF548, v34);
          MiReturnCommit((__int64)MiSystemPartition, v34);
        }
        goto LABEL_55;
      }
      MiReturnDriverLoadPages(v12, v12 + 8 * v40 - 8);
      MiReleaseDriverPtes(0, v12, v11);
LABEL_55:
      v2 = *(_QWORD *)v2;
      v42 = v2;
      if ( v2 == v48 + 16 )
        goto LABEL_56;
    }
    v13 = v3 & 0xFFFFFFFB;
LABEL_17:
    v3 = v13 & 0xFFFFFFFE;
    v38 = v3;
    if ( ((v3 >> 2) & 1) != 0 )
    {
      v15 = MiReserveDriverPtes(0, v11);
      v12 = v15;
      if ( !v15 )
        goto LABEL_55;
      v9 = v39;
      v14 = (__int64)(v15 << 25) >> 16;
    }
    else
    {
      v14 = v9;
    }
    v47 = v14;
    if ( v12 < v12 + 8 * v40 )
    {
      v16 = v12 + 8 * v40;
      v17 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - v12 - 0x98000000000LL;
      do
      {
        DriverPage = MiAllocateDriverPage();
        v46 = MI_READ_PTE_LOCK_FREE((__int64 *)(v17 + v12));
        v18 = v46;
        v41 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v46) >> 12) & 0xFFFFFFFFFLL;
        v50 = 48 * v41 - 0x58000000000LL;
        if ( ((v3 >> 2) & 1) != 0 )
        {
          v25 = MiInitializeSystemImagePage(DriverPage, v12, (*(_DWORD *)(48 * v41 - 0x58000000000LL + 16) >> 5) & 0x1F);
          v46 = v25;
          MiCopyPage(DriverPage, v41, 0LL, 1u);
          *(_QWORD *)v12 = v25;
          if ( MiPteInShadowRange(v12) )
            MiWritePteShadow(v12, v25);
        }
        else
        {
          v43 = 48 * DriverPage - 0x58000000000LL;
          v36 = MiLockPageInline(48 * v41 - 0x58000000000LL);
          MiLockNestedPageAtDpcInline(v43, v19, v20);
          MiCopyPfnEntry(v43, v50);
          v21 = 4;
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x80000) != 0 )
            v21 = 6;
          MiCopyPage(DriverPage, v41, 0LL, v21);
          v22 = (v18 ^ (DriverPage << 12)) & 0xFFFFFFFFF000LL ^ v18;
          v46 = v22;
          *(_QWORD *)v12 = v22;
          if ( MiPteInShadowRange(v12) )
            MiWritePteShadow(v12, v22);
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v23 = v50;
          *(_QWORD *)(v50 + 24) |= 0x4000000000000000uLL;
          MiInsertTbFlushEntry((__int64)&v53, (__int64)(v12 << 25) >> 16, 1LL, 0);
          MiFlushTbList((__int64)&v53, v24);
          if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x80000) == 0 && ((*(_QWORD *)(v23 + 40) >> 54) & 7) == 3 )
            MiClearPfnImageVerified(v23, 0xCu);
          MiDecrementShareCount(v23);
          _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v36);
        }
        v12 += 8LL;
      }
      while ( v12 < v16 );
      v2 = v42;
      v14 = v47;
      v10 = v51;
    }
    LODWORD(v11) = v49;
    v12 -= 8 * v40;
    goto LABEL_39;
  }
LABEL_56:
  MiFlushTbList((__int64)&v53, a2);
}
