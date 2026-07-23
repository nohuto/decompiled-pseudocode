/*
 * XREFs of MiComputeImagePteIndex @ 0x1400267A0
 * Callers:
 *     MiReferenceInPageFile @ 0x1400249D0 (MiReferenceInPageFile.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x140026854 (MiGetSubsectionDriverProtos.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 SharedProtos; // rdx
  __int64 SubsectionDriverProtos; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16));
  v4 = PrototypePteDirect;
  v5 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v3, PrototypePteDirect);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(PrototypePteDirect);
    SharedProtos = SubsectionDriverProtos;
    if ( !SubsectionDriverProtos )
    {
LABEL_10:
      v9 = *(_QWORD *)(v5 + 136);
      LODWORD(v10) = 0;
      return (unsigned int)v10 + (unsigned int)((__int64)(v1 - v9) >> 3);
    }
    v8 = *(_QWORD *)(SubsectionDriverProtos + 32);
    if ( v1 < v8 || v1 >= v8 + 8LL * *(unsigned int *)(v4 + 44) )
      SharedProtos = 0LL;
  }
  if ( !SharedProtos )
    goto LABEL_10;
  v9 = *(_QWORD *)(SharedProtos + 32);
  v10 = (__int64)(*(_QWORD *)(v4 + 8) - *(_QWORD *)(v5 + 136)) >> 3;
  return (unsigned int)v10 + (unsigned int)((__int64)(v1 - v9) >> 3);
}
