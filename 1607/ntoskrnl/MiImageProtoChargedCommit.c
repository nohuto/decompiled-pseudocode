/*
 * XREFs of MiImageProtoChargedCommit @ 0x14012DEEC
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1401F4EDC (MiGetSharedProtosAtDpcLevel.c)
 */

_BOOL8 __fastcall MiImageProtoChargedCommit(__int64 a1, unsigned __int64 a2)
{
  unsigned int SessionId; // r14d
  __int64 i; // rbx
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtosAtDpcLevel; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx

  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  for ( i = a1 + 128; ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    v6 = *(_QWORD *)(i + 8);
    v7 = (*(unsigned __int16 *)(i + 32) >> 1) & 0x1F;
    if ( a2 >= v6 && a2 < v6 + 8LL * *(unsigned int *)(i + 44) )
      return v7 >= 4;
    if ( (*(_BYTE *)(i + 34) & 2) == 0 || (*(_DWORD *)(a1 + 56) & 0x4000000) == 0 )
      break;
    SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, SessionId, i);
    if ( SharedProtosAtDpcLevel )
    {
      v11 = *(_QWORD *)(SharedProtosAtDpcLevel + 32);
      if ( a2 >= v11 && a2 < v11 + 8LL * *(unsigned int *)(i + 44) )
        return v7 >= 4;
    }
LABEL_6:
    ;
  }
  SubsectionDriverProtos = MiGetSubsectionDriverProtos((_QWORD *)i);
  if ( !SubsectionDriverProtos )
    goto LABEL_6;
  v12 = *(_QWORD *)(SubsectionDriverProtos + 32);
  if ( a2 < v12 || a2 >= v12 + 8LL * *(unsigned int *)(i + 44) )
    goto LABEL_6;
  v7 = 4;
  return v7 >= 4;
}
