/*
 * XREFs of MiSegmentDelete @ 0x1404A25C4
 * Callers:
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x140112284 (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 * Callees:
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MiDereferenceControlAreaProbe @ 0x140026304 (MiDereferenceControlAreaProbe.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x140026ED0 (MiReleaseControlAreaCharges.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     MiDeleteSegmentPages @ 0x14008F7E0 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x14008F8B4 (MiPrepareSegmentForDeletion.c)
 *     MiUpdatePageFileSectionList @ 0x14008F97C (MiUpdatePageFileSectionList.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x1406592F4 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // r15
  void *v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rbx

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( (v1 & 0xA0) == 0x80 )
    v5 = a1 + 128;
  else
    v5 = 0LL;
  v8 = MiPrepareSegmentForDeletion(a1, v5);
  if ( ((v1 >> 7) & 1) != 0 )
  {
    if ( (v4 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v3 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v8);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v9 = 0LL;
  v10 = MiDeleteSegmentPages((__int64 *)a1, v6, v7);
  if ( (v1 & 0x82) == 0x80 )
    v9 = (void *)ObFastReplaceObject((volatile __int64 *)(a1 + 64), 0LL);
  if ( ((v1 >> 7) & 1) != 0 )
  {
    if ( (v1 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 64), 0);
  }
  else
  {
    v11 = a1 + 128;
    do
    {
      if ( *(_QWORD *)(v11 + 8) )
      {
        MiUpdatePageFileSectionList(v11, 0);
        ExFreePoolWithTag(*(PVOID *)(v11 + 8), 0);
      }
      v11 = *(_QWORD *)(v11 + 16);
    }
    while ( v11 );
  }
  v12 = MiReleaseControlAreaCharges(a1);
  if ( v12 )
    MiReturnSubsectionCharges(v12);
  if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
    v13 = 0LL;
  else
    v13 = 8LL * *(_QWORD *)(a1 + 120);
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( v13 )
    IoDiskIoAttributionDereference(v13);
  ExFreePoolWithTag((PVOID)v3, 0);
  return v10;
}
