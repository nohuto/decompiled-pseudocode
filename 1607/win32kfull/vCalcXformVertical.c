/*
 * XREFs of vCalcXformVertical @ 0x1C0243F30
 * Callers:
 *     bSetXform @ 0x1C01126D0 (bSetXform.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 */

__int64 __fastcall vCalcXformVertical(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  int v4; // r11d
  int fixed; // eax
  int v6; // r10d
  int v7; // r11d
  __int64 result; // rax
  int v9; // r10d

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(__int16 *)(v1 + 422);
  v4 = *(__int16 *)(v1 + 424);
  *(_DWORD *)(a1 + 320) = *(_DWORD *)(a1 + 368);
  *(_DWORD *)(a1 + 324) = *(_DWORD *)(a1 + 372);
  LODWORD(v1) = -*(_DWORD *)(a1 + 356);
  *(_DWORD *)(a1 + 352) = 0x40000000;
  *(_DWORD *)(a1 + 332) = v1;
  *(_DWORD *)(a1 + 336) = -*(_DWORD *)(a1 + 360);
  v3 <<= 16;
  *(_DWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 340) = 0LL;
  *(_DWORD *)(a1 + 348) = 0;
  FixMul(*(_DWORD *)(a1 + 92), v4 << 16);
  fixed = FixMul(*(_DWORD *)(a1 + 80), v3);
  *(_DWORD *)(a1 + 392) = fixed + v6;
  FixMul(*(_DWORD *)(a1 + 96), v7);
  result = FixMul(*(_DWORD *)(a1 + 84), v3);
  *(_DWORD *)(a1 + 396) = result + v9;
  return result;
}
