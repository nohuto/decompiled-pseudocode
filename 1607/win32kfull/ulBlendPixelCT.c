/*
 * XREFs of ulBlendPixelCT @ 0x1C015AA58
 * Callers:
 *     ?vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AX000JPEAPEAG@Z0@Z @ 0x1C02626D8 (-vSrcTranCopyS8D16New@@YAXPEAEJJ0JJJJKKPEAVSURFACE@@P6AX000JPEAPEAG@Z0@Z.c)
 *     vSrcTranCopyS8D24 @ 0x1C0264E20 (vSrcTranCopyS8D24.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulBlendPixelCT(__int64 a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  int v5; // r9d
  unsigned int v6; // edi
  int v7; // r9d
  unsigned int v8; // edi
  int v9; // r9d

  v3 = *(_QWORD *)(a1 + 48);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & *(_DWORD *)(a1 + 24)) << *(_DWORD *)a1) >> *(_DWORD *)(a1 + 4))
                          + v3);
  v6 = (unsigned int)(*(unsigned __int8 *)((unsigned int)(v5
                                                        + (((*(_DWORD *)(a1 + 36) - v5) * alAlpha[*a3] + 0x80000) >> 20))
                                         + v4) << *(_DWORD *)(a1 + 4)) >> *(_DWORD *)a1;
  v7 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & *(_DWORD *)(a1 + 28)) << *(_DWORD *)(a1 + 8)) >> *(_DWORD *)(a1 + 12))
                          + v3);
  v8 = *(_DWORD *)(a1 + 28) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v7
                                                                                + (((*(_DWORD *)(a1 + 40) - v7)
                                                                                  * alAlpha[a3[1]]
                                                                                  + 0x80000) >> 20))
                                                                 + v4) << *(_DWORD *)(a1 + 12)) >> *(_DWORD *)(a1 + 8)) | *(_DWORD *)(a1 + 24) & v6;
  v9 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & *(_DWORD *)(a1 + 32)) << *(_DWORD *)(a1 + 16)) >> *(_DWORD *)(a1 + 20))
                          + v3);
  return v8 | *(_DWORD *)(a1 + 32) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v9
                                                                                       + (((*(_DWORD *)(a1 + 44) - v9)
                                                                                         * alAlpha[a3[2]]
                                                                                         + 0x80000) >> 20))
                                                                        + v4) << *(_DWORD *)(a1 + 20)) >> *(_DWORD *)(a1 + 16));
}
