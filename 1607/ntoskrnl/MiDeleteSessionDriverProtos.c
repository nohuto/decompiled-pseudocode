/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x140546890
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x140664698 (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
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
