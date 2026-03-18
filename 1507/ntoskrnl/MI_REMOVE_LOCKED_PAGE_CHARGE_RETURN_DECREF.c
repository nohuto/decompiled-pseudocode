/*
 * XREFs of MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70
 * Callers:
 *     MmCopyToCachedPage @ 0x1400B3650 (MmCopyToCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwapHardFaultPage @ 0x140217428 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(__int64 a1)
{
  __int16 v1; // ax
  __int64 v2; // r10
  __int16 v3; // ax
  __int64 v4; // r8
  int v5; // edx
  unsigned int v6; // esi
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r11
  __int64 v10; // r8
  unsigned __int16 v11; // r8
  __int16 *v12; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v14; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v16; // zf
  signed __int32 v17; // eax

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v2 = *(_QWORD *)(a1 + 24);
  v3 = v1 - 1;
  *(_WORD *)(a1 + 32) = v3;
  v4 = v2 & 0x3FFFFFFFFFFFFFFFLL;
  v5 = 0;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( v4 )
      {
LABEL_9:
        v6 = 0;
        goto LABEL_12;
      }
    }
    else if ( v3 != 2 || !v4 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      goto LABEL_9;
    return 0LL;
  }
  v6 = 1;
LABEL_12:
  v8 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v9 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v8 <= v9 && v8 >= 0xFFFFF68000000000uLL || ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) == 0 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
    {
      v5 = 1;
    }
    else if ( v8 <= v9 && v8 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
    {
      v5 = 1;
    }
    else if ( v6 == 1 && (v2 & 0x4000000000000000LL) != 0 )
    {
      v5 = 1;
    }
    v11 = (HIDWORD(v10) >> 8) & 0x3FF;
    if ( v11 == 1023 )
      v12 = MiSystemPartition;
    else
      v12 = *(__int16 **)(qword_14034F0E8 + 8LL * v11);
    if ( v5 == 1 )
      MiReturnCommit(v12, 1LL);
    if ( v12 != MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 696, 1uLL);
      return v6;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 1LL;
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
      {
        do
        {
          v17 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + 1,
                  CachedResidentAvailable);
          v16 = (_DWORD)CachedResidentAvailable == v17;
          LODWORD(CachedResidentAvailable) = v17;
          if ( v16 )
            goto LABEL_41;
        }
        while ( v17 != -1 && (unsigned __int64)(v17 + 1LL) <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v14 = (int)CachedResidentAvailable - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_1403552C0, v14);
LABEL_41:
    _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
    return v6;
  }
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return v6;
}
