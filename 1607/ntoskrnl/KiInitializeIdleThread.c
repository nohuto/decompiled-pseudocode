/*
 * XREFs of KiInitializeIdleThread @ 0x1403D4908
 * Callers:
 *     KiInitializeKernel @ 0x1403D3DE0 (KiInitializeKernel.c)
 * Callees:
 *     KeStartThread @ 0x1400F08BC (KeStartThread.c)
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 */

unsigned __int64 __fastcall KiInitializeIdleThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  unsigned __int64 result; // rax

  *(_DWORD *)(a1 + 80) = 0;
  KeInitThread(a1, a2, (__int64)KiIdleLoop, 0LL, 0LL, 0LL, 0LL, a3, 0);
  *(_DWORD *)(a1 + 116) &= ~0x4000u;
  KeStartThread(a1, 0LL, 0LL);
  *(_DWORD *)(a1 + 536) = *(_DWORD *)(a4 + 36);
  *(_BYTE *)(a1 + 388) = 2;
  *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(a4 + 1616);
  *(_QWORD *)(a1 + 552) = *(_QWORD *)(a4 + 1608);
  *(_DWORD *)(a1 + 196) = *(_DWORD *)(a4 + 36);
  *(_WORD *)(a1 + 584) = *(_WORD *)(a1 + 560);
  *(_QWORD *)(a1 + 576) = *(_QWORD *)(a1 + 552);
  v7 = *(_DWORD *)(a1 + 196);
  *(_DWORD *)(a1 + 116) |= 8u;
  *(_DWORD *)(a1 + 588) = v7;
  *(_BYTE *)(a1 + 113) = 1;
  *(_BYTE *)(a1 + 390) = 2;
  *(_QWORD *)(a1 + 1544) = KiIdleLoop;
  *(_QWORD *)(a1 + 1672) = KiIdleLoop;
  **(_BYTE **)(a4 + 56) = 127;
  *(_BYTE *)(a1 + 195) = 127;
  if ( !*(_DWORD *)(a4 + 36) )
  {
    qword_1403BFDD0 = (__int64)&qword_1403BFDC8;
    qword_1403BFDC8 = (__int64)&qword_1403BFDC8;
  }
  *(_QWORD *)(a1 + 1808) = a1 + 1800;
  *(_QWORD *)(a1 + 1800) = a1 + 1800;
  *(_QWORD *)(a1 + 1824) = a1 + 1816;
  *(_QWORD *)(a1 + 1816) = a1 + 1816;
  *(_QWORD *)(a1 + 1832) = 0LL;
  v8 = (_QWORD *)(a1 + 1688);
  v9 = (_QWORD *)qword_1403BFDD0;
  if ( *(__int64 **)qword_1403BFDD0 != &qword_1403BFDC8 )
    __fastfail(3u);
  *v8 = &qword_1403BFDC8;
  v8[1] = v9;
  *v9 = v8;
  qword_1403BFDD0 = (__int64)v8;
  result = (unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a4 + 36)] >> 6;
  _InterlockedOr64(
    (volatile signed __int64 *)(a3 + 8 * result + 280),
    1LL << (KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a4 + 36)] & 0x3F));
  return result;
}
