/*
 * XREFs of MiSegmentDelete @ 0x1403C7FD8
 * Callers:
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiDestroySection @ 0x1401070FC (MiDestroySection.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 * Callees:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140002318 (DbgUnLoadImageSymbolsUnicode.c)
 *     MiDereferenceControlAreaProbe @ 0x14000BADC (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x14000C4EC (MiPrepareSegmentForDeletion.c)
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiUpdatePageFileSectionList @ 0x14000C770 (MiUpdatePageFileSectionList.c)
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     MiReleaseControlAreaCharges @ 0x1400A8680 (MiReleaseControlAreaCharges.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x140623BE0 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // r15
  void *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rax

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(_QWORD *)a1;
  v4 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( (v1 & 0xA0) == 0x80 )
    v5 = a1 + 120;
  else
    v5 = 0LL;
  v6 = (_QWORD *)MiPrepareSegmentForDeletion(a1, v5);
  if ( ((v1 >> 7) & 1) != 0 )
  {
    if ( (v4 & 0x2000) != 0 )
      DbgUnLoadImageSymbolsUnicode(
        (PCUNICODE_STRING)((*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFFFFF0uLL) + 88),
        *(_QWORD *)(v3 + 32),
        (__int64)KeGetCurrentThread()->ApcState.Process);
    MiReleaseControlAreaWaiters(v6);
  }
  else if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 )
  {
    MiLogSectionCreate(a1, 0LL);
  }
  v7 = 0LL;
  v8 = MiDeleteSegmentPages((__int64 *)a1);
  if ( (v1 & 0x82) == 0x80 )
    v7 = (void *)ObFastReplaceObject((volatile __int64 *)(a1 + 64), 0LL);
  if ( ((v1 >> 7) & 1) != 0 )
  {
    if ( (v1 & 0x20) != 0 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 64), 0);
  }
  else
  {
    v9 = a1 + 120;
    do
    {
      if ( *(_QWORD *)(v9 + 8) )
      {
        MiUpdatePageFileSectionList(v9, 0);
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
      }
      v9 = *(_QWORD *)(v9 + 16);
    }
    while ( v9 );
  }
  v10 = MiReleaseControlAreaCharges(a1);
  if ( v10 )
    MiReturnSubsectionCharges(v10);
  MiDereferenceControlAreaProbe(a1, 0);
  if ( v7 )
    ObfDereferenceObject(v7);
  ExFreePoolWithTag((PVOID)v3, 0);
  return v8;
}
