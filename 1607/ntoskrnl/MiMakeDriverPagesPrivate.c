/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x140087988
 * Callers:
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400FBE74 (MiSetSystemCodeProtection.c)
 *     MiSplitDriverPage @ 0x1401E184C (MiSplitDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x140547918 (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiDriverPageMustStayResident @ 0x14008211C (MiDriverPageMustStayResident.c)
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateDriverPage @ 0x1405097F0 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, KIRQL a4, char a5)
{
  unsigned int v5; // esi
  unsigned __int64 v7; // r11
  char v8; // di
  unsigned __int64 v9; // r14
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  int v12; // ecx
  char *AnyMultiplexedVm; // rdx
  unsigned __int64 v14; // r12
  __int64 DriverPage; // r13
  LONG *SharedVm; // rbx
  __int64 v17; // r15
  __int64 v18; // rax
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  LONG *v22; // rbx
  __int64 v23; // rdx
  char v24; // r9
  __int64 v25; // r10
  int v26; // r11d
  __int64 v27; // r12
  LONG *v28; // rbx
  __int64 v29; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // r9
  KIRQL v37; // [rsp+30h] [rbp-D0h]
  __int64 v38; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  __int64 v43; // [rsp+78h] [rbp-88h]
  unsigned __int64 v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+90h] [rbp-70h] BYREF
  __int16 v46; // [rsp+94h] [rbp-6Ch]
  __int64 v47; // [rsp+98h] [rbp-68h]
  __int64 v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]

  v5 = 0;
  v37 = a4;
  v44 = a3;
  v41 = 0LL;
  v7 = 0xFFFFF68000000000uLL;
  v8 = a4 == 17;
  v9 = a2;
  v10 = a1;
  v11 = (__int64)(a2 << 25) >> 16;
  if ( v11 < qword_140326950 || v11 >= qword_140326950 + 0x8000000000LL )
  {
    v40 = 0LL;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v12 = 0;
  }
  else
  {
    v40 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v12 = 2;
    AnyMultiplexedVm = (char *)(v40 + 3008);
  }
  v38 = (__int64)AnyMultiplexedVm;
  v14 = v7 + ((*(_QWORD *)(v10 + 48) >> 9) & 0x7FFFFFFFF8LL);
  v43 = *(_QWORD *)(v10 + 240);
  DriverPage = -1LL;
  v47 = 20LL;
  v45 = v12;
  v46 = 0;
  v48 = 0LL;
  v49 = 0LL;
  if ( (v8 & 1) != 0 )
  {
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v37 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
  }
  if ( v9 <= a3 )
  {
    v17 = v9 - v14;
    while ( 1 )
    {
      v18 = MI_READ_PTE_LOCK_FREE(v9);
      v42 = v18;
      v19 = v18;
      if ( !v18 )
        goto LABEL_47;
      if ( (v18 & 1) == 0 )
        break;
      v27 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v42) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) == 0 || *(__int64 *)(v27 + 8) >= 0 )
        goto LABEL_47;
      if ( (MiFlags & 0x4000) != 0 && (v40 || (a5 & 2) != 0) && (((unsigned __int8)*(_DWORD *)(v27 + 16) >> 5) & 2) != 0 )
      {
        v5 = -1073741755;
        goto LABEL_29;
      }
      if ( v26 && (*(_DWORD *)(v25 + 196) & 3) == 0 && (*(_BYTE *)(v27 + 35) & 8) != 0
        || (a5 & 1) != 0 && ((v19 & 0x800) != 0 || (v19 & 0x200) == 0) )
      {
        goto LABEL_47;
      }
      if ( DriverPage != -1 )
      {
        MiFlushTbList(&v45);
        MiCopyOnWriteEx((__int64)(v9 << 25) >> 16, (a5 & 4) != 0);
        v31 = a1;
        if ( v40 )
        {
          if ( !v41 )
          {
            v41 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
            if ( *(_BYTE *)(v41 + 64) )
              v8 |= 2u;
          }
        }
        if ( (v8 & 2) != 0 && MiDriverPageMustStayResident(v31, v9) )
        {
          MiLockPageAtDpcInline(v27);
          MiRemoveLockedPageChargeAndDecRef(v27, v32, v33, v34);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v35 = 48 * DriverPage - 0x58000000000LL;
          MiLockPageAtDpcInline(v35);
          MiAddLockedPageCharge(v35, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v35 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( (MiFlags & 0x4000) != 0 && ((*(_QWORD *)(v35 + 40) >> 54) & 7) == 3 )
        {
          _bittestandset(*(signed __int32 **)(v43 + 8), v17 >> 3);
          if ( *(_QWORD *)v35 )
          {
            if ( (*(_BYTE *)(v35 + 35) & 8) == 0 )
            {
              MiLockPageAtDpcInline(v35);
              MiRemoveImagePageFromSystemWorkingSet(v38, v9, v35, v36);
              _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
          }
        }
LABEL_47:
        v9 += 8LL;
        v17 += 8LL;
        goto LABEL_48;
      }
      LOBYTE(v23) = v24;
      MiUnlockWorkingSetExclusive(v38, v23);
      DriverPage = MiAllocateDriverPage();
      v28 = MiGetSharedVm(v38);
      v37 = ExAcquireSpinLockExclusive(v28);
      v28[1] = 0;
      if ( DriverPage == -1 )
      {
        v5 = -1073741801;
        goto LABEL_29;
      }
LABEL_48:
      if ( v9 > v44 )
        goto LABEL_29;
    }
    if ( (v18 & 0x400) != 0 )
    {
      MiFlushTbList(&v45);
      LOBYTE(v20) = v37;
      MiUnlockWorkingSetExclusive(v38, v20);
      v21 = MmAccessFault(0LL, (__int64)(v9 << 25) >> 16, 0, 0LL);
      if ( v21 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v9 << 25) >> 16, v19, v21);
      v22 = MiGetSharedVm(v38);
      v37 = ExAcquireSpinLockExclusive(v22);
      v22[1] = 0;
      goto LABEL_48;
    }
    goto LABEL_47;
  }
LABEL_29:
  MiFlushTbList(&v45);
  if ( (v8 & 1) != 0 )
  {
    LOBYTE(v29) = v37;
    MiUnlockWorkingSetExclusive(v38, v29);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
