/*
 * XREFs of ulBlendPixelCT @ 0x1400EE630
 * Callers:
 *     ?vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z @ 0x1400EE428 (-vSrcTranCopyS8D16NewUnsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@P6AX011JPEAPEAG@Z1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ulBlendPixelCT(__int64 a1, int a2, unsigned __int8 *a3)
{
  __int64 v4; // r9
  int v5; // r11d
  unsigned int v6; // r14d
  int v7; // esi
  int v8; // edi
  unsigned int v9; // ebx
  __int64 v10; // r12
  int v11; // r15d
  int v12; // r8d
  unsigned int v14; // [rsp+58h] [rbp+18h]
  int v15; // [rsp+60h] [rbp+20h]

  v14 = *(_DWORD *)(a1 + 24);
  v4 = *(_QWORD *)(a1 + 48);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 32);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 28);
  v10 = *(_QWORD *)(a1 + 56);
  v15 = *(_DWORD *)(a1 + 4);
  v11 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & v14) << *(_DWORD *)a1) >> v15) + v4);
  v12 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & v9) << v5) >> *(_DWORD *)(a1 + 12)) + v4);
  LODWORD(v4) = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a2 & v6) << v7) >> v8) + v4);
  return v6 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v4
                                                                + ((dword_14035EC88[a3[2]]
                                                                  * (*(_DWORD *)(a1 + 44) - (int)v4)
                                                                  + 0x80000) >> 20))
                                                 + v10) << v8) >> v7) | v9 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v12 + ((dword_14035EC88[a3[1]] * (*(_DWORD *)(a1 + 40) - v12) + 0x80000) >> 20)) + v10) << *(_DWORD *)(a1 + 12)) >> v5) | v14 & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v11 + ((dword_14035EC88[*a3] * (*(_DWORD *)(a1 + 36) - v11) + 0x80000) >> 20)) + v10) << v15) >> *(_DWORD *)a1);
}
