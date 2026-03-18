/*
 * XREFs of MiComputeImagePteIndex @ 0x14003906C
 * Callers:
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x1400390D8 (MiGetSubsectionDriverProtos.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 SubsectionDriverProtos; // rax
  __int64 SharedProtos; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v10; // rcx

  v2 = *(__int64 *)(a1 + 16) >> 16;
  v3 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v4 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 0x22) & 2) != 0 && (*(_DWORD *)(v4 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)v2, a2, *(__int64 *)(a1 + 16) >> 16);
  }
  else
  {
    SubsectionDriverProtos = MiGetSubsectionDriverProtos(v2);
    SharedProtos = SubsectionDriverProtos;
    if ( !SubsectionDriverProtos )
      goto LABEL_3;
    v10 = *(_QWORD *)(SubsectionDriverProtos + 32);
    if ( v3 < v10 || v3 >= v10 + 8LL * *(unsigned int *)(v2 + 44) )
      SharedProtos = 0LL;
  }
  if ( SharedProtos )
  {
    v7 = *(_QWORD *)(SharedProtos + 32);
    v8 = (__int64)(*(_QWORD *)(v2 + 8) - *(_QWORD *)(v4 + 128)) >> 3;
    return (unsigned int)v8 + (unsigned int)((__int64)(v3 - v7) >> 3);
  }
LABEL_3:
  v7 = *(_QWORD *)(v4 + 128);
  LODWORD(v8) = 0;
  return (unsigned int)v8 + (unsigned int)((__int64)(v3 - v7) >> 3);
}
