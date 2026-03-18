/*
 * XREFs of MiSegmentDelete @ 0x1404B2AE4
 * Callers:
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     MiDestroySection @ 0x140158E20 (MiDestroySection.c)
 * Callees:
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     MiUpdatePageFileSectionList @ 0x140082D08 (MiUpdatePageFileSectionList.c)
 *     MiDereferenceControlAreaProbe @ 0x140083900 (MiDereferenceControlAreaProbe.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     MiPrepareSegmentForDeletion @ 0x14008506C (MiPrepareSegmentForDeletion.c)
 *     ObFastReplaceObject @ 0x1400864A0 (ObFastReplaceObject.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     MiReleaseControlAreaCharges @ 0x140089C74 (MiReleaseControlAreaCharges.c)
 *     MiReturnSubsectionCharges @ 0x140230538 (MiReturnSubsectionCharges.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MiLogSectionCreate @ 0x1406A2DF4 (MiLogSectionCreate.c)
 */

__int64 __fastcall MiSegmentDelete(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rbp
  int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  void *v12; // rax

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
  v7 = MiDeleteSegmentPages((__int64 *)a1);
  if ( (v1 & 0x82) == 0x80 )
  {
    v12 = (void *)ObFastReplaceObject((volatile __int64 *)(a1 + 64), 0LL);
    ObfDereferenceObject(v12);
  }
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
        MiUpdatePageFileSectionList(v9, 0, v8);
        ExFreePoolWithTag(*(PVOID *)(v9 + 8), 0);
      }
      v9 = *(_QWORD *)(v9 + 16);
    }
    while ( v9 );
  }
  v10 = MiReleaseControlAreaCharges(a1);
  if ( v10 )
    MiReturnSubsectionCharges(v10);
  ExFreePoolWithTag((PVOID)v3, 0);
  MiDereferenceControlAreaProbe(a1);
  return v7;
}
