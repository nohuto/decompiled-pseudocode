/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x1400BDAC8
 * Callers:
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x1400B8D54 (MiSetSystemCodeProtection.c)
 *     MiSplitDriverPage @ 0x1401CEF98 (MiSplitDriverPage.c)
 *     MiBackSingleImageWithPagefile @ 0x14050CCBC (MiBackSingleImageWithPagefile.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiDriverPageMustStayResident @ 0x14001A5D0 (MiDriverPageMustStayResident.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateDriverPage @ 0x140484298 (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, KIRQL a4, char a5)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // r14
  char v8; // di
  int v9; // eax
  volatile LONG *v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rbx
  _BOOL8 v13; // rdx
  __int64 DriverPage; // r12
  __int64 v15; // r15
  __int64 v16; // rax
  ULONG_PTR v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  KIRQL v30; // [rsp+30h] [rbp-D0h]
  volatile LONG *SpinLock; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v33; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  int v38; // [rsp+80h] [rbp-80h] BYREF
  __int16 v39; // [rsp+84h] [rbp-7Ch]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]

  v5 = 0;
  v6 = a2;
  v36 = a3;
  v30 = a4;
  v34 = 0LL;
  v8 = a4 == 17;
  if ( (unsigned __int64)(((__int64)(a2 << 25) >> 16) + 0x70000000000LL) > 0x7FFFFFFFFFLL )
  {
    v33 = 0LL;
    v10 = &dword_1402FFA80;
    v9 = 0;
  }
  else
  {
    v9 = 2;
    v33 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
    v10 = (volatile LONG *)(v33 + 2968);
  }
  v11 = (*(_QWORD *)(a1 + 48) >> 9) & 0x7FFFFFFFF8LL;
  SpinLock = v10;
  v40 = 20LL;
  v12 = v11 - 0x98000000000LL;
  v38 = v9;
  v37 = *(_QWORD *)(a1 + 240);
  v39 = 0;
  v13 = (a5 & 4) != 0;
  v41 = 0LL;
  DriverPage = -1LL;
  v42 = 0LL;
  if ( a4 == 17 )
    v30 = ExAcquireSpinLockExclusive(v10);
  if ( v6 <= a3 )
  {
    v15 = v6 - v12;
    while ( 1 )
    {
      v16 = MI_READ_PTE_LOCK_FREE(v6);
      v35 = v16;
      v17 = v16;
      if ( !v16 )
        goto LABEL_47;
      if ( (v16 & 1) == 0 )
        break;
      v22 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v35) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( (*(_QWORD *)(v22 + 40) & 0x200000000000000LL) == 0 || *(__int64 *)(v22 + 8) >= 0 )
        goto LABEL_46;
      if ( (MiFlags & 0x10000) != 0
        && (v33 || (a5 & 2) != 0)
        && (((unsigned __int8)*(_DWORD *)(v22 + 16) >> 5) & 2) != 0 )
      {
        v5 = -1073741755;
        goto LABEL_28;
      }
      if ( (a5 & 4) != 0 && (*(_DWORD *)(a1 + 196) & 3) == 0 && (*(_BYTE *)(v22 + 35) & 8) != 0
        || (a5 & 1) != 0 && ((v17 & 0x800) != 0 || (v17 & 0x200) == 0) )
      {
        goto LABEL_46;
      }
      if ( DriverPage != -1 )
      {
        MiFlushTbList((__int64)&v38, (_KPROCESS *)v13);
        MiCopyOnWriteEx((__int64)(v6 << 25) >> 16, v6, DriverPage, v30, (a5 & 4) != 0);
        v26 = a1;
        if ( v33 )
        {
          if ( !v34 )
          {
            v34 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
            if ( *(_BYTE *)(v34 + 64) )
              v8 |= 2u;
          }
        }
        if ( (v8 & 2) != 0 && MiDriverPageMustStayResident(v26, v6) )
        {
          MiLockPageAtDpcInline(v22, v13, v26);
          MiRemoveLockedPageChargeAndDecRef(v22);
          _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v27 = 48 * DriverPage - 0x58000000000LL;
          MiLockPageAtDpcInline(v27, v28, v29);
          MiAddLockedPageCharge(v27, 1);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          v27 = 48 * DriverPage - 0x58000000000LL;
        }
        DriverPage = -1LL;
        if ( (MiFlags & 0x10000) != 0
          && ((*(_QWORD *)(v27 + 40) >> 54) & 7) == 3
          && (_bittestandset(*(signed __int32 **)(v37 + 8), v15 >> 3), *(_QWORD *)v27)
          && (*(_BYTE *)(v27 + 35) & 8) == 0 )
        {
          MiLockPageAtDpcInline(v27, v13, v26);
          v10 = SpinLock;
          MiRemoveImagePageFromSystemWorkingSet((__int64)SpinLock, v6, v27);
          _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
LABEL_46:
          v10 = SpinLock;
        }
LABEL_47:
        v6 += 8LL;
        v15 += 8LL;
        goto LABEL_48;
      }
      v10 = SpinLock;
      LOBYTE(v13) = v30;
      MiUnlockWorkingSetExclusive((__int64)SpinLock, v13, v21);
      DriverPage = MiAllocateDriverPage();
      v30 = ExAcquireSpinLockExclusive(SpinLock);
      if ( DriverPage == -1 )
      {
        v5 = -1073741801;
        goto LABEL_28;
      }
LABEL_48:
      if ( v6 > v36 )
        goto LABEL_28;
    }
    if ( (v16 & 0x400) != 0 )
    {
      MiFlushTbList((__int64)&v38, (_KPROCESS *)v13);
      LOBYTE(v18) = v30;
      MiUnlockWorkingSetExclusive((__int64)v10, v18, v19);
      v20 = MmAccessFault(0LL, (__int64)(v6 << 25) >> 16, 0, 0LL);
      if ( v20 < 0 )
        KeBugCheckEx(0x1Au, 0x3000uLL, (__int64)(v6 << 25) >> 16, v17, v20);
      v10 = SpinLock;
      v30 = ExAcquireSpinLockExclusive(SpinLock);
      goto LABEL_48;
    }
    goto LABEL_47;
  }
LABEL_28:
  MiFlushTbList((__int64)&v38, (_KPROCESS *)v13);
  if ( (v8 & 1) != 0 )
  {
    LOBYTE(v23) = v30;
    MiUnlockWorkingSetExclusive((__int64)SpinLock, v23, v24);
  }
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x58000000000LL);
  return v5;
}
