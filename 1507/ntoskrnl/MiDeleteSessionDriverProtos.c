/*
 * XREFs of MiDeleteSessionDriverProtos @ 0x1405833BC
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 *     MiCreateSessionDriverProtos @ 0x1406A0C0C (MiCreateSessionDriverProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteSessionDriverProtos(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  _KPROCESS *v3; // rdi
  __int64 v4; // rax

  for ( i = a1 + 120; i; i = *(_QWORD *)(i + 16) )
  {
    if ( (*(_BYTE *)(i + 34) & 2) == 0 )
    {
      v3 = *(_KPROCESS **)(i + 24);
      if ( v3 )
      {
        *(_QWORD *)(i + 24) = 0LL;
        v3->ProfileListHead.Flink = (struct _LIST_ENTRY *)i;
        v4 = MiDeletePerSessionProtos(v3, a2);
        MiReturnCommit((__int64)MiSystemPartition, v4);
        ExFreePoolWithTag(v3->ProfileListHead.Blink, 0);
        ExFreePoolWithTag(v3, 0);
      }
    }
  }
}
