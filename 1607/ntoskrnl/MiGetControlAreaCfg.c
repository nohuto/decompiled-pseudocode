/*
 * XREFs of MiGetControlAreaCfg @ 0x1400C038C
 * Callers:
 *     MiMarkSharedImageCfgBits @ 0x1400E9AA0 (MiMarkSharedImageCfgBits.c)
 *     MiRelocateImageAgain @ 0x14042C2BC (MiRelocateImageAgain.c)
 *     MiMarkPrivateImageCfgBits @ 0x1404F45BC (MiMarkPrivateImageCfgBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetControlAreaCfg(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 96);
  if ( result )
    return *(_QWORD *)(result + 72);
  return result;
}
