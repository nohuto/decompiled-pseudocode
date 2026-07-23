/*
 * XREFs of MiRemoveLockedPageCharge @ 0x14004CD60
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiMigratePfn @ 0x140036990 (MiMigratePfn.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140040EE0 (MiResolveProtoPteFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiDeleteDirectMapFixupPfn @ 0x1401F4728 (MiDeleteDirectMapFixupPfn.c)
 *     MiIdealClusterPage @ 0x1401F6574 (MiIdealClusterPage.c)
 *     MiSwapHardFaultPage @ 0x1401FDE6C (MiSwapHardFaultPage.c)
 * Callees:
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLockedPageCharge(__int64 a1)
{
  __int16 v1; // dx
  bool v2; // zf
  __int16 v3; // dx
  __int64 v4; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // r8d
  __int64 result; // rax
  unsigned int v9; // esi
  unsigned __int64 v10; // r11
  unsigned __int16 v11; // r9
  int *v12; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v15; // eax

  v1 = *(_WORD *)(a1 + 32);
  if ( !v1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (a1 + 0x58000000000LL) / 48, *(_BYTE *)(a1 + 34) & 7, *(unsigned __int16 *)(a1 + 32));
  v2 = v1 == 1;
  v3 = v1 - 1;
  *(_WORD *)(a1 + 32) = v3;
  if ( v2 )
  {
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    {
      if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) == 0 )
        goto LABEL_5;
      return 1LL;
    }
    if ( (*(_QWORD *)(a1 + 40) & 0x10000000000000LL) != 0 )
      return 1LL;
  }
LABEL_5:
  v4 = *(_QWORD *)(a1 + 40);
  if ( (v4 & 0x10000000000000LL) == 0 )
  {
    v5 = 1LL;
    v6 = *(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    v7 = 0;
    if ( !v3 )
    {
      v9 = 1;
LABEL_17:
      v10 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
      if ( (v10 > 0xFFFFF6BFFFFFFF78uLL || v10 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
      {
        result = v9;
        *(_BYTE *)(a1 + 35) &= ~0x20u;
        return result;
      }
      if ( (v4 & 0x200000000000000LL) != 0 && (*(_DWORD *)(a1 + 16) & 0x400LL) != 0 )
      {
        v7 = 1;
      }
      else if ( v10 <= 0xFFFFF6BFFFFFFF78uLL
             && v10 >= 0xFFFFF68000000000uLL
             && ((*(unsigned __int8 *)(a1 + 35) >> 5) & 1) != 0 )
      {
        v7 = 1;
      }
      else if ( v9 == 1 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      {
        v7 = 1;
      }
      v11 = (HIDWORD(v4) >> 8) & 0x3FF;
      if ( v11 == 1023 )
        v12 = MiSystemPartition;
      else
        v12 = *(int **)(qword_140327038 + 8LL * v11);
      if ( v7 == 1 )
        MiReturnCommit(v12, 1LL);
      if ( v12 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            do
            {
              v15 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v2 = (_DWORD)CachedResidentAvailable == v15;
              LODWORD(CachedResidentAvailable) = v15;
              if ( v2 )
                return v9;
            }
            while ( v15 != -1 && (unsigned __int64)(v15 + 1LL) <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v5 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_140324F00, v5);
        return v9;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 816, 1uLL);
      return v9;
    }
    if ( v3 == 1 )
    {
      if ( v6 )
      {
LABEL_15:
        v9 = 0;
        goto LABEL_17;
      }
    }
    else if ( v3 != 2 || !v6 )
    {
      return 0LL;
    }
    if ( (*(_BYTE *)(a1 + 34) & 8) != 0 )
      goto LABEL_15;
  }
  return 0LL;
}
