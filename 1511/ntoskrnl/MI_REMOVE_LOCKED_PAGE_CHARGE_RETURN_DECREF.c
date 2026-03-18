/*
 * XREFs of MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x14006A630
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1400517B0 (MiResolveProtoPteFault.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiSwapHardFaultPage @ 0x1401D54F0 (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(__int64 a1)
{
  __int16 v1; // r8
  __int64 v2; // r10
  bool v3; // zf
  __int16 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r9d
  unsigned int v8; // edi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r11
  unsigned __int16 v11; // cx
  int *v12; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v14; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v16; // eax

  v1 = *(_WORD *)(a1 + 32);
  v2 = a1;
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v3 = v1 == 1;
  v4 = v1 - 1;
  *(_WORD *)(a1 + 32) = v4;
  if ( !v3 || !(unsigned int)MI_IS_PFN_FILE_ONLY(a1) )
  {
    v5 = *(_QWORD *)(v2 + 40);
    if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (v5 & 0x10000000000000LL) != 0 )
        return 0LL;
    }
    else if ( (v5 & 0x10000000000000LL) != 0 )
    {
      return 0LL;
    }
    v6 = *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v7 = 0;
    if ( !v4 )
    {
      v8 = 1;
LABEL_9:
      v9 = *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL;
      v10 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (v9 > v10 || v9 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v2 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v2 + 35) &= ~0x20u;
        return v8;
      }
      if ( (v5 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v2 + 16) & 0x400LL) != 0
        || v9 <= v10 && v9 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v2 + 35) >> 5) & 1) != 0
        || v8 == 1 && (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
      {
        v7 = 1;
      }
      v11 = (HIDWORD(v5) >> 8) & 0x3FF;
      if ( v11 == 1023 )
        v12 = &MiSystemPartition;
      else
        v12 = *(int **)(qword_1402FEC28 + 8LL * v11);
      if ( v7 == 1 )
        MiReturnCommit((__int64)v12, 1uLL);
      if ( v12 != &MiSystemPartition )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 744, 1uLL);
        return v8;
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
            v16 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v3 = (_DWORD)CachedResidentAvailable == v16;
            LODWORD(CachedResidentAvailable) = v16;
            if ( v3 )
              goto LABEL_22;
          }
          while ( v16 != -1 && (unsigned __int64)(v16 + 1LL) <= 0x100 );
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
      _InterlockedExchangeAdd64(&qword_140301480, v14);
LABEL_22:
      _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
      return v8;
    }
    if ( v4 == 1 )
    {
      if ( v6 || (*(_BYTE *)(v2 + 34) & 8) != 0 )
      {
LABEL_8:
        v8 = 0;
        goto LABEL_9;
      }
    }
    else if ( v4 == 2 && v6 && (*(_BYTE *)(v2 + 34) & 8) != 0 )
    {
      goto LABEL_8;
    }
    return 0LL;
  }
  return 1LL;
}
