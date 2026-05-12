/*
 * XREFs of RaidBusEnumeratorAllocateReportLunsResources @ 0x1C000F3F4
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C000E8EC (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00049EC (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0004A6C (RaidAllocatePool.c)
 *     RaidPrepareSrbForReuse @ 0x1C00515C8 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateReportLunsResources(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  void *v5; // rcx
  SIZE_T v6; // rsi
  void *v7; // rcx
  PVOID v8; // rax
  struct _MDL *v9; // rcx
  PMDL Mdl; // rax
  _BYTE *Srb; // rax
  PVOID Pool; // rax
  PIRP Irp; // rax

  v3 = *a1;
  v5 = *(void **)(a3 + 16);
  v6 = a2;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 402), 1);
    *(_QWORD *)(a3 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a3 + 24) )
  {
    Pool = RaidAllocatePool(NonPagedPoolNx, 0x12uLL, 0x4E536152u, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a3 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( *(_QWORD *)a3 )
  {
    IoReuseIrp(*(PIRP *)a3, -1073741823);
    goto LABEL_6;
  }
  Irp = IoAllocateIrp(1, 0);
  *(_QWORD *)a3 = Irp;
  if ( !Irp )
    return 3221225495LL;
LABEL_6:
  v7 = *(void **)(a3 + 32);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6C526152u);
  v8 = RaidAllocatePool(NonPagedPoolNx, v6, 0x6C526152u, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a3 + 32) = v8;
  if ( !v8 )
    return 3221225495LL;
  v9 = *(struct _MDL **)(a3 + 8);
  *(_DWORD *)(a3 + 40) = v6;
  if ( v9 )
    IoFreeMdl(v9);
  Mdl = IoAllocateMdl(*(PVOID *)(a3 + 32), *(_DWORD *)(a3 + 40), 0, 0, 0LL);
  *(_QWORD *)(a3 + 8) = Mdl;
  return Mdl == 0LL ? 0xC0000017 : 0;
}
