/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x14050BE0C
 * Callers:
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x140621578 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1)
{
  __int64 i; // rbx
  __int64 *SubsectionDriverProtos; // rax
  PVOID *v3; // rdi
  unsigned __int64 v4; // rax

  for ( i = a1 + 120; i; i = *(_QWORD *)(i + 16) )
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
