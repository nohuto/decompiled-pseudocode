/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x14054886C
 * Callers:
 *     MiCommitVadCfgBits @ 0x14000FE10 (MiCommitVadCfgBits.c)
 * Callees:
 *     MiGetControlAreaCfg @ 0x14002D808 (MiGetControlAreaCfg.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiLocateVadEvent @ 0x140122918 (MiLocateVadEvent.c)
 *     MiMarkPrivateOpenCfgBits @ 0x140421578 (MiMarkPrivateOpenCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1404215A8 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // r15
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 ControlAreaCfg; // rax
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
    result = MiMarkPrivateOpenCfgBits((int)a1, v7, v6, 0);
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
      v6 = v14;
  }
  v9 = *(_QWORD *)(a2 + 80);
  v10 = *(_QWORD *)(v5 + 64);
  if ( v9 != v10 && !v8 )
  {
    v15 = (v9 - v10) >> 3 << 12;
    v7 += v15;
    v6 += v15;
  }
  ControlAreaCfg = MiGetControlAreaCfg((__int64)v4);
  return MiPopulateCfgBitMap(a1, ControlAreaCfg, v7, v6, 0);
}
