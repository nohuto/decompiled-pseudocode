/*
 * XREFs of MiGetControlAreaCfg @ 0x14002D808
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14046B548 (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x14054886C (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaCfg(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 96);
  if ( result )
    return *(_QWORD *)(result + 64);
  return result;
}
