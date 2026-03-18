/*
 * XREFs of MiGetControlAreaCfg @ 0x1400367AC
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x140036380 (MiMarkSharedImageCfgBits.c)
 *     MiMarkPrivateImageCfgBits @ 0x1403CA63C (MiMarkPrivateImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x1403F753C (MiRelocateImageAgain.c)
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
