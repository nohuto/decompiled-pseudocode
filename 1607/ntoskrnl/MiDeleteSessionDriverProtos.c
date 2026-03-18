/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140546350
 * Callers:
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140484528 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406645B4 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026CD4 (MiGetSubsectionDriverProtos.c)
 *     MiReturnCommit @ 0x14004E500 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x1401F4ECC (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  __int64 i; // rbx
  __int64 *SubsectionDriverProtos; // rax
  PVOID *v3; // rdi
  unsigned __int64 v4; // rax

  for ( i = a1 + 128; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      SubsectionDriverProtos = (__int64 *)MiGetSubsectionDriverProtos((_QWORD *)i);
      v3 = (PVOID *)SubsectionDriverProtos;
      if ( SubsectionDriverProtos )
      {
        *(_QWORD *)(i + 24) = 0LL;
        SubsectionDriverProtos[3] = i;
        v4 = MiDeletePerSessionProtos(SubsectionDriverProtos);
        MiReturnCommit((__int64)MiSystemPartition, v4);
        ExFreePoolWithTag(v3[4], 0);
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
}
