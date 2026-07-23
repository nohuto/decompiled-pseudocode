/*
 * XREFs of MiMarkPrivateImageCfgBits @ 0x1404D7548
 * Callers:
 *     MiMarkProcessCfgBits @ 0x1404288E4 (MiMarkProcessCfgBits.c)
 * Callees:
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     MiGetControlAreaCfg @ 0x1400BE21C (MiGetControlAreaCfg.c)
 *     MiMarkPrivateOpenCfgBits @ 0x1404D73D8 (MiMarkPrivateOpenCfgBits.c)
 *     MiPopulateCfgBitMap @ 0x1404D7414 (MiPopulateCfgBitMap.c)
 */

__int64 __fastcall MiMarkPrivateImageCfgBits(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 *v6; // r15
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  int v10; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG_PTR ControlAreaCfg; // rax
  __int64 result; // rax
  _BOOL8 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax

  v6 = **(__int64 ***)(a3 + 72);
  v7 = *v6;
  v8 = ((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) + 4096;
  v9 = (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) << 12;
  if ( MiVadMapsLargeImage(a3) )
  {
    result = MiMarkPrivateOpenCfgBits((int)a1, v9, v8, 0);
    if ( (int)result < 0 )
      return result;
    v9 += (unsigned __int64)*((unsigned __int8 *)MiLocateVadEvent(a3, 16) + 16) << 16;
    v15 = (_InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) & 0xFFF) != 0;
    v10 = 1;
    v16 = v9
        + ((__int64)(*(_QWORD *)(v7 + 64)
                   + 8
                   * (v15
                    + ((unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 24), -1LL, -1LL) >> 12))
                   - *(_QWORD *)(a3 + 80)) >> 3 << 12);
    if ( v8 > v16 )
      v8 = v16;
  }
  v11 = *(_QWORD *)(a3 + 80);
  v12 = *(_QWORD *)(v7 + 64);
  if ( v11 != v12 && !v10 )
  {
    v17 = (v11 - v12) >> 3 << 12;
    v9 += v17;
    v8 += v17;
  }
  ControlAreaCfg = MiGetControlAreaCfg((__int64)v6);
  return MiPopulateCfgBitMap(a1, ControlAreaCfg, a2, v9, v8, 0);
}
