/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x1403CA63C
 * Callers:
 *     MiCommitVadCfgBits @ 0x140037DF0 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiGetControlAreaCfg @ 0x1400367AC (MiGetControlAreaCfg.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiLocateVadEvent @ 0x1400B8A24 (MiLocateVadEvent.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1403CAE00 (MiMarkPrivateOpenCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1403CAE30 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(__int64 a1, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  int ControlAreaCfg; // eax
  __int64 result; // rax
  _BOOL8 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v15; // rax

  v4 = **(__int64 ***)(a2 + 72);
  v5 = *v4;
  v6 = ((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) + 4096;
  v7 = (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12;
  if ( MiVadMapsLargeImage(a2) )
  {
    result = MiMarkPrivateOpenCfgBits(a1, v7, v6, 0LL);
    if ( (int)result < 0 )
      return result;
    v7 += (unsigned __int64)*(unsigned __int8 *)(MiLocateVadEvent(a2, 16)[2] + 28) << 16;
    v13 = (_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), -1LL, -1LL) & 0xFFF) != 0;
    v8 = 1;
    v14 = v7
        + ((__int64)(*(_QWORD *)(v5 + 64)
                   + 8
                   * (v13
                    + ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 24), -1LL, -1LL) >> 12))
                   - *(_QWORD *)(a2 + 80)) >> 3 << 12);
    if ( v6 > v14 )
      LODWORD(v6) = v14;
  }
  v9 = *(_QWORD *)(a2 + 80);
  v10 = *(_QWORD *)(v5 + 64);
  if ( v9 != v10 && !v8 )
  {
    v15 = (v9 - v10) >> 3 << 12;
    LODWORD(v7) = v15 + v7;
    LODWORD(v6) = v15 + v6;
  }
  ControlAreaCfg = MiGetControlAreaCfg((__int64)v4);
  return MiPopulateCfgBitMap(a1, ControlAreaCfg, v7, v6, 0);
}
