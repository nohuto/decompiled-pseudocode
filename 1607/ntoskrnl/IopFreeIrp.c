/*
 * XREFs of IopFreeIrp @ 0x140055960
 * Callers:
 *     IovFreeIrpPrivate @ 0x140700FA8 (IovFreeIrpPrivate.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     ExReturnPoolQuota @ 0x1400F73A4 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     IopFreeReserveIrp @ 0x1401C4C78 (IopFreeReserveIrp.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  bool v6; // zf
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  char v9; // al
  __int16 v10; // r8
  unsigned __int16 v11; // r8
  __int64 v12; // rcx
  _GENERAL_LOOKASIDE *P; // rdi
  char v14; // al

  v4 = 0;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x2437uLL, 0LL, 0LL);
  v6 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v6 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3, a4);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
  }
  else
  {
    v7 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
    if ( (unsigned int)v7 >= (unsigned int)KeNumberProcessors_0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      _mm_lfence();
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v7];
    }
    v9 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v9 & 8) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v9 ^ 8;
      _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
    }
    if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 4) == 0 )
      goto LABEL_24;
    if ( (IopIrpStackProfilerFlags & 3) != 0 )
    {
      v10 = *(_WORD *)(BugCheckParameter1 + 2);
      if ( v10 != 72 * (char)IopLargeIrpStackLocations + 208
        && v10 != 72 * (char)IopMediumIrpStackLocations + 208
        && v10 != 280 )
      {
        goto LABEL_24;
      }
    }
    v11 = *(_WORD *)(BugCheckParameter1 + 2);
    if ( v11 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
      LOBYTE(v4) = v11 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
    else
      v4 = 2;
    v12 = v4;
    *(_QWORD *)(BugCheckParameter1 + 56) = v11;
    P = CurrentPrcb->PPLookasideList[v4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
      P = CurrentPrcb->PPLookasideList[v12].L;
      ++P->TotalFrees;
      if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
      {
        ++P->FreeMisses;
LABEL_24:
        ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
        return;
      }
    }
    v14 = *(_BYTE *)(BugCheckParameter1 + 71);
    if ( (v14 & 1) != 0 )
    {
      *(_BYTE *)(BugCheckParameter1 + 71) = v14 ^ 1;
      ExReturnPoolQuota(BugCheckParameter1);
    }
    RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter1);
  }
}
