/*
 * XREFs of MiFillPerSessionProtos @ 0x14021C1E0
 * Callers:
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MI_INITIALIZE_COLOR_BASE @ 0x140055C20 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiCreatePteCopyList @ 0x1400597DC (MiCreatePteCopyList.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     MiReleasePteCopyList @ 0x140128890 (MiReleasePteCopyList.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KeCopyPrivilegedPage @ 0x1401FF210 (KeCopyPrivilegedPage.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MiAllocateDriverPage @ 0x140452A88 (MiAllocateDriverPage.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 */

__int64 __fastcall MiFillPerSessionProtos(
        int a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int128 *a8,
        __int128 *a9)
{
  __int128 *v9; // r15
  int v10; // r14d
  __int64 v11; // rax
  _WORD *v14; // rax
  unsigned int v15; // edi
  __int64 DriverPage; // r12
  __int64 v17; // rdi
  unsigned int v18; // r13d
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int128 *v24; // r13
  unsigned __int64 *PteFromCopyList; // r13
  unsigned __int8 v26[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h]
  _WORD *v28; // [rsp+40h] [rbp-30h] BYREF
  __int16 v29; // [rsp+48h] [rbp-28h]
  unsigned __int16 v30; // [rsp+4Ah] [rbp-26h]
  int v31; // [rsp+50h] [rbp-20h] BYREF
  int v32; // [rsp+54h] [rbp-1Ch]
  __int64 v35; // [rsp+B0h] [rbp+40h]

  v9 = a8;
  v10 = a4;
  v11 = a3;
  if ( a8 )
  {
    v32 = 0;
  }
  else
  {
    MiCreatePteCopyList((unsigned int)(a4 + 2 * a4 + 1), (unsigned int)(a4 + 2 * a4 + 1), (__int64)&v31);
    if ( !v32 )
      return 3221225626LL;
    MI_INITIALIZE_COLOR_BASE(0LL, 0, (__int64)&v28);
    v11 = a3;
  }
  if ( v10 )
  {
    v35 = v11 - (_QWORD)a2;
    do
    {
      if ( v9 )
      {
        DriverPage = MiAllocateDriverPage(1LL);
      }
      else
      {
        v14 = v28;
        ++*v28;
        v15 = v30 | (unsigned __int16)(v29 & *v14);
        while ( 1 )
        {
          DriverPage = MiGetPage((__int64)MiSystemPartition, v15, 0);
          if ( DriverPage != -1 )
            break;
          MiWaitForFreePage(MiSystemPartition);
        }
      }
      v17 = 48 * DriverPage - 0x58000000000LL;
      v27 = MiLockProtoPoolPage((unsigned __int64)a2, v26);
      if ( !v27 )
      {
        do
        {
          MmAccessFault(2uLL, (signed __int64)a2, 0, 0LL);
          v27 = MiLockProtoPoolPage((unsigned __int64)a2, v26);
        }
        while ( !v27 );
        v9 = a8;
      }
      v18 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v18);
        }
        while ( *(__int64 *)(v17 + 24) < 0 );
      }
      MiInitializePfn(v17, a2, a5, 23);
      if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(0LL) )
        v19 |= 0x100uLL;
      v20 = v19 & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      *a2 = v20;
      if ( (unsigned __int64)(a2 + 0x12090482600LL) <= 0x7F8 )
        MiWritePteShadow(a2, v20);
      v21 = *(_BYTE *)(v17 + 34);
      ++*(_WORD *)(v17 + 32);
      if ( (v21 & 7) != 6 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          48 * DriverPage / 48,
          *(_BYTE *)(48 * DriverPage - 0x58000000000LL + 34) & 7,
          *(_QWORD *)(48 * DriverPage - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
      v22 = *(_QWORD *)(v17 + 24);
      v23 = (v22 & 0x3FFFFFFFFFFFFFFFLL) - 1;
      *(_QWORD *)(v17 + 24) = v22 ^ (v23 ^ v22) & 0x3FFFFFFFFFFFFFFFLL;
      if ( (v22 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
        MiPfnShareCountIsZero(v17, v23);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      MiUnlockProtoPoolPage(v27, v26[0]);
      if ( v9 )
      {
        v24 = a9;
        KeCopyPrivilegedPage(DriverPage, a9, *(__int64 *)((char *)a2 + v35), v9, 0);
        MiMarkPfnVerified(v17, 0);
      }
      else
      {
        MiCopyPage(DriverPage, *(__int64 *)((char *)a2 + v35), &v31, 8);
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)&v31, DriverPage, -1LL);
        MiRelocateImagePfn(a1, (__int64)((_QWORD)PteFromCopyList << 25) >> 16, a6, DriverPage, a7);
        *PteFromCopyList = 0LL;
        if ( (unsigned __int64)(PteFromCopyList + 0x12090482600LL) <= 0x7F8 )
          MiWritePteShadow(PteFromCopyList, 0LL);
        MiReturnPfnReferenceCount(v17);
        v24 = a9;
      }
      ++a2;
      ++a6;
      --v10;
      if ( v9 )
      {
        *(_QWORD *)v9 += 4096LL;
        *(_QWORD *)v24 += 4096LL;
      }
    }
    while ( v10 );
  }
  MiReleasePteCopyList((__int64)&v31);
  return 0LL;
}
