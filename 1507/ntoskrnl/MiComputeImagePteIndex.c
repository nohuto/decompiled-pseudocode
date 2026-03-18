/*
 * XREFs of MiComputeImagePteIndex @ 0x140087F2C
 * Callers:
 *     MiReferenceInPageFile @ 0x140088848 (MiReferenceInPageFile.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 * Callees:
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 */

__int64 __fastcall MiComputeImagePteIndex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 PrototypePteDirect; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 SharedProtos; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx

  v4 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  PrototypePteDirect = MiGetPrototypePteDirect(*(_QWORD *)(a1 + 16), a2, a3, a4);
  v7 = PrototypePteDirect;
  v8 = *(_QWORD *)PrototypePteDirect;
  if ( (*(_BYTE *)(PrototypePteDirect + 34) & 2) != 0 && (*(_DWORD *)(v8 + 56) & 0x4000000) != 0 )
  {
    SharedProtos = MiGetSharedProtos(*(_QWORD *)PrototypePteDirect, v6, PrototypePteDirect);
  }
  else
  {
    SharedProtos = *(_QWORD *)(PrototypePteDirect + 24);
    if ( !SharedProtos )
    {
LABEL_10:
      v11 = *(_QWORD *)(v8 + 128);
      LODWORD(v12) = 0;
      return (unsigned int)v12 + (unsigned int)((__int64)(v4 - v11) >> 3);
    }
    v10 = *(_QWORD *)(SharedProtos + 32);
    if ( v4 < v10 || v4 >= v10 + 8LL * *(unsigned int *)(PrototypePteDirect + 44) )
      SharedProtos = 0LL;
  }
  if ( !SharedProtos )
    goto LABEL_10;
  v11 = *(_QWORD *)(SharedProtos + 32);
  v12 = (__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)(v8 + 128)) >> 3;
  return (unsigned int)v12 + (unsigned int)((__int64)(v4 - v11) >> 3);
}
