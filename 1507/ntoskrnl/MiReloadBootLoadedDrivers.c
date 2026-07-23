/*
 * XREFs of MiReloadBootLoadedDrivers @ 0x1407CC4D4
 * Callers:
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiLockAndDecrementShareCount @ 0x1400EF4F4 (MiLockAndDecrementShareCount.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140153CBC (DbgLoadImageSymbolsUnicode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiProcessLoadConfigForDriver @ 0x140575BA0 (MiProcessLoadConfigForDriver.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     LdrRelocateImage @ 0x1405977B4 (LdrRelocateImage.c)
 *     MiInitializeSystemImagePage @ 0x1407CCC64 (MiInitializeSystemImagePage.c)
 *     MiUpdateThunks @ 0x1407CCE24 (MiUpdateThunks.c)
 *     MiReturnDriverLoadPages @ 0x1407FB4F0 (MiReturnDriverLoadPages.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall MiReloadBootLoadedDrivers(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r15
  unsigned int v3; // edi
  PIMAGE_NT_HEADERS v4; // rax
  __int64 v5; // r9
  PVOID v6; // rdx
  PIMAGE_NT_HEADERS v7; // rsi
  unsigned int VirtualAddress; // ecx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // r12
  unsigned int v14; // edi
  unsigned __int64 v15; // rdx
  char *v16; // rsi
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // r13
  __int64 DriverPage; // rax
  __int64 v21; // rsi
  ULONG_PTR v22; // r14
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r9
  __int64 v31; // r9
  __int64 v32; // rcx
  char *v33; // rax
  unsigned __int64 v34; // r12
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // r10
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rsi
  ULONG BugCheckParameter4; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v44; // [rsp+40h] [rbp-C8h]
  unsigned int v45; // [rsp+48h] [rbp-C0h]
  __int64 v46; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-A0h]
  PIMAGE_NT_HEADERS v50; // [rsp+70h] [rbp-98h]
  __int64 v51; // [rsp+78h] [rbp-90h]
  ULONG_PTR v52; // [rsp+80h] [rbp-88h]
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 *v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 CurrentIrql; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v57; // [rsp+A8h] [rbp-60h]
  unsigned __int64 *v58; // [rsp+B0h] [rbp-58h]
  unsigned __int64 v59; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v61; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v64; // [rsp+DCh] [rbp-2Ch]
  __int64 v65; // [rsp+E0h] [rbp-28h]
  __int64 v66; // [rsp+E8h] [rbp-20h]
  __int64 v67; // [rsp+F0h] [rbp-18h]

  v1 = 0;
  v55 = a1;
  v65 = 20LL;
  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v63 = 0;
  v64 = 0;
  v66 = 0LL;
  v67 = 0LL;
  v53 = v2;
  if ( v2 != a1 + 16 )
  {
    while ( 1 )
    {
      v4 = RtlImageNtHeader(*(PVOID *)(v2 + 48));
      v6 = PsNtosImageBase;
      v7 = v4;
      v50 = v4;
      if ( PsNtosImageBase != *(PVOID *)(v2 + 48) )
      {
        MiProcessLoadConfigForDriver(v2);
        v6 = PsNtosImageBase;
      }
      if ( (v7->FileHeader.Characteristics & 1) != 0 || v7->OptionalHeader.NumberOfRvaAndSizes <= 5 )
        goto LABEL_73;
      VirtualAddress = v7->OptionalHeader.DataDirectory[5].VirtualAddress;
      if ( VirtualAddress )
      {
        if ( v7->OptionalHeader.DataDirectory[5].Size + VirtualAddress > *(_DWORD *)(v2 + 64) )
          goto LABEL_73;
        v3 |= 2u;
      }
      else
      {
        v3 &= ~2u;
      }
      v9 = *(_QWORD *)(v2 + 48);
      v10 = 0xFFFFF68000000000uLL;
      v11 = ((unsigned __int64)*(unsigned int *)(v2 + 64) + 4095) >> 12;
      v12 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v61 = (unsigned int)v11;
      v48 = 8LL * (unsigned int)v11;
      v44 = v9;
      v60 = v12;
      v57 = v11;
      v59 = v12 + v48;
      if ( (PVOID)v9 == v6 || (PVOID)v9 == PsHalImageBase )
        goto LABEL_73;
      v7->OptionalHeader.ImageBase = v9;
      v13 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (*(_DWORD *)(v2 + 104) & 0x800000) != 0 )
        break;
      v14 = v3 | 4;
      DbgUnLoadImageSymbolsUnicode((PCUNICODE_STRING)(v2 + 88), v9, 0xFFFFFFFFLL);
      v16 = (char *)MiUseLargeDriverPage(0LL, v11, v44, (const UNICODE_STRING *)(v2 + 88));
      if ( !v16 )
      {
        v9 = v44;
        goto LABEL_17;
      }
      v3 = v14 | 1;
      v45 = v3;
LABEL_55:
      if ( (v3 & 4) == 0 )
        goto LABEL_71;
      v50 = (PIMAGE_NT_HEADERS)&v16[(_QWORD)v50 - v44];
      if ( (v3 & 2) == 0
        || (v3 & 1) != 0
        || (LdrRelocateImage(v16, (PCCH)v15, v10, v5, BugCheckParameter4) & 0x80000000) == 0 )
      {
        v31 = *(unsigned int *)(v2 + 64);
        v32 = v55;
        *(_QWORD *)(v2 + 48) = v16;
        MiUpdateThunks(v32, v44, v16, v31);
        *(_DWORD *)(v2 + 104) |= 0x1000000u;
        v33 = &v16[v50->OptionalHeader.AddressOfEntryPoint];
        *(_DWORD *)(v2 + 64) = (_DWORD)v11 << 12;
        *(_QWORD *)(v2 + 56) = v33;
        if ( (unsigned int)DbgLoadImageSymbolsUnicode((PCUNICODE_STRING)(v2 + 88), v16) == 1 )
          *(_DWORD *)(v2 + 104) |= 0x100000u;
        v34 = v59;
        if ( v12 < v59 )
        {
          do
          {
            MiInsertTbFlushEntry((__int64)&v63, (__int64)(v12 << 25) >> 16, 1LL, 0);
            PteShadow = *(_QWORD *)v12;
            v36 = v12 + 0x90482413000LL;
            v37 = 2040LL;
            if ( v12 + 0x90482413000LL <= 0x7F8 )
              PteShadow = MiReadPteShadow(v12, *(_QWORD *)v12);
            v38 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v39 = *(_QWORD *)(v38 + 40) & 0xFFFFFFFFFLL;
            *(_QWORD *)v12 = 0LL;
            v40 = 48 * v39 - 0x58000000000LL;
            if ( v36 <= v37 )
              MiWritePteShadow(v12, 0LL);
            MiLockAndDecrementShareCount(v38, 1);
            MiLockAndDecrementShareCount(v40, 0);
            if ( (*(_QWORD *)(v40 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            {
              v41 = (__int64)(*(_QWORD *)(v40 + 8) << 25) >> 16 << 25 >> 16;
              MiReturnSystemVa(v41, v41 + 0x200000, 3, (__int64)&v63);
            }
            v12 += 8LL;
          }
          while ( v12 < v34 );
          v3 = v45;
          v2 = v53;
        }
LABEL_71:
        if ( (v3 & 1) != 0 )
        {
          v42 = v61;
          MiReturnResidentAvailable(v61);
          _InterlockedExchangeAdd64(&qword_14034F9C8, v42);
          MiReturnCommit((__int64)MiSystemPartition, v42);
        }
        goto LABEL_73;
      }
      MiReturnDriverLoadPages(v13, v13 + v48 - 8);
      MiReleaseDriverPtes(0, v13, (unsigned int)v11, v30);
LABEL_73:
      v2 = *(_QWORD *)v2;
      v53 = v2;
      if ( v2 == v55 + 16 )
        goto LABEL_74;
    }
    v14 = v3 & 0xFFFFFFFB;
LABEL_17:
    v3 = v14 & 0xFFFFFFFE;
    v45 = v3;
    LODWORD(v49) = (v3 >> 2) & 1;
    if ( (_DWORD)v49 )
    {
      v17 = MiReserveDriverPtes(0, (unsigned int)v11, v10, v5);
      v13 = v17;
      if ( !v17 )
        goto LABEL_73;
      v9 = v44;
      v51 = (__int64)(v17 << 25) >> 16;
    }
    else
    {
      v51 = v9;
    }
    v18 = v48;
    v15 = v48 + v13;
    v62 = v48 + v13;
    if ( v13 < v48 + v13 )
    {
      v58 = &STACK[0x90482413050];
      v19 = (__int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v54 = v19;
      do
      {
        DriverPage = MiAllocateDriverPage();
        v21 = *v19;
        v22 = DriverPage;
        v23 = 2040LL;
        if ( (unsigned __int64)(v19 + 0x12090482600LL) <= 0x7F8 )
          v21 = MiReadPteShadow((__int64)v19, *v19);
        v24 = v21;
        v46 = v21;
        if ( (unsigned __int64)v58 <= v23 )
          v24 = MiReadPteShadow((__int64)&v46, v21);
        v52 = (v24 >> 12) & 0xFFFFFFFFFLL;
        v25 = 48 * v52 - 0x58000000000LL;
        if ( (_DWORD)v49 )
        {
          v46 = MiInitializeSystemImagePage(v22, v13, (*(_DWORD *)(v25 + 16) >> 5) & 0x1F);
          v29 = v46;
          MiCopyPage(v22, v52, 0LL, 1);
          *(_QWORD *)v13 = v29;
          if ( v13 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(v13, v29);
        }
        else
        {
          v26 = 48 * v22 - 0x58000000000LL;
          v47 = v26;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v1);
            }
            while ( (*(_QWORD *)(v25 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
            v26 = v47;
            v1 = 0;
          }
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v1 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v1);
                v26 = v47;
              }
            }
            while ( (*(_QWORD *)(v26 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v26 + 24), 0x3FuLL) );
            v1 = 0;
          }
          MiCopyPfnEntry(v26, v25);
          MiCopyPage(v22, v52, 0LL, 6);
          v27 = v21 ^ (v21 ^ (v22 << 12)) & 0xFFFFFFFFF000LL;
          v46 = v27;
          *(_QWORD *)v13 = v27;
          if ( v13 + 0x90482413000LL <= 0x7F8 )
            MiWritePteShadow(v13, v27);
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          *(_QWORD *)(v25 + 24) |= 0x4000000000000000uLL;
          MiInsertTbFlushEntry((__int64)&v63, (__int64)(v13 << 25) >> 16, 1LL, 0);
          MiFlushTbList((__int64)&v63);
          if ( (*(_BYTE *)(v25 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v25 + 0x58000000000LL) / 48,
              *(_BYTE *)(v25 + 34) & 7,
              *(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v28 = *(_QWORD *)(v25 + 24);
          LODWORD(v10) = -1;
          v15 = (v28 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v25 + 24) = v28 ^ (v15 ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v28 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v25, v15);
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8((unsigned __int8)CurrentIrql);
        }
        v13 += 8LL;
        v19 = ++v54;
      }
      while ( v13 < v62 );
      v12 = v60;
      LODWORD(v11) = v57;
      v18 = v48;
    }
    v16 = (char *)v51;
    v13 -= v18;
    goto LABEL_55;
  }
LABEL_74:
  MiFlushTbList((__int64)&v63);
}
