/*
 * XREFs of IopFreeIrp @ 0x14004BC80
 * Callers:
 *     IovFreeIrpPrivate @ 0x1407352D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     ExReturnPoolQuota @ 0x140119294 (ExReturnPoolQuota.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     IopFreeIrpExtension @ 0x1401F7D7C (IopFreeIrpExtension.c)
 */

void __fastcall IopFreeIrp(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3)
{
  int v3; // edi
  bool v5; // zf
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v8; // al
  __int16 v9; // r8
  unsigned __int16 v10; // r8
  __int64 v11; // rcx
  _GENERAL_LOOKASIDE *P; // rdi
  char v13; // al

  v3 = 0;
  if ( *(_WORD *)BugCheckParameter1 != 6 )
    KeBugCheckEx(0x44u, BugCheckParameter1, 0x22F0uLL, 0LL, 0LL);
  v5 = (*(_BYTE *)(BugCheckParameter1 + 71) & 0x40) == 0;
  *(_WORD *)BugCheckParameter1 = 0;
  if ( !v5 )
  {
    LOBYTE(a3) = 1;
    IopFreeIrpExtension(BugCheckParameter1, 0xFFFFFFFFLL, a3);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 0x21) == 0x21 )
  {
    IopFreeReserveIrp(BugCheckParameter1);
    return;
  }
  v6 = *(unsigned __int16 *)(BugCheckParameter1 + 4);
  if ( (unsigned int)v6 >= (unsigned int)KeNumberProcessors_0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
  }
  else
  {
    _mm_lfence();
    CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v6];
  }
  v8 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v8 & 8) != 0 )
  {
    *(_BYTE *)(BugCheckParameter1 + 71) = v8 ^ 8;
    _InterlockedIncrement(&CurrentPrcb->LookasideIrpFloat);
  }
  if ( (*(_BYTE *)(BugCheckParameter1 + 71) & 4) == 0 )
    goto LABEL_22;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    v9 = *(_WORD *)(BugCheckParameter1 + 2);
    if ( v9 != 72 * (char)IopLargeIrpStackLocations + 208
      && v9 != 72 * (char)IopMediumIrpStackLocations + 208
      && v9 != 280 )
    {
      goto LABEL_22;
    }
  }
  v10 = *(_WORD *)(BugCheckParameter1 + 2);
  if ( v10 < (unsigned __int16)(72 * (char)IopLargeIrpStackLocations + 208) )
    LOBYTE(v3) = v10 >= (unsigned __int16)(72 * (char)IopMediumIrpStackLocations + 208);
  else
    v3 = 2;
  v11 = v3;
  *(_QWORD *)(BugCheckParameter1 + 56) = v10;
  P = CurrentPrcb->PPLookasideList[v3].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
  {
    ++P->FreeMisses;
    P = CurrentPrcb->PPLookasideList[v11].L;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) >= P->Depth )
    {
      ++P->FreeMisses;
LABEL_22:
      ExFreePoolWithTag((PVOID)BugCheckParameter1, 0);
      return;
    }
  }
  v13 = *(_BYTE *)(BugCheckParameter1 + 71);
  if ( (v13 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter1 + 71) = v13 ^ 1;
    ExReturnPoolQuota(BugCheckParameter1);
  }
  RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)BugCheckParameter1);
}
