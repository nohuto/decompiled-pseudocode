/*
 * XREFs of vComputeSimulatedGLYPHDATA @ 0x1C0018784
 * Callers:
 *     BmfdQueryFontData @ 0x1C0018508 (BmfdQueryFontData.c)
 * Callees:
 *     vFindTAndB @ 0x1C0018868 (vFindTAndB.c)
 */

__int64 __fastcall vComputeSimulatedGLYPHDATA(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  int v9; // ebp
  int v11; // esi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // r8d
  int v16; // edi
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  int v22; // esi
  __int64 result; // rax
  int v24; // [rsp+50h] [rbp+8h] BYREF
  int v25; // [rsp+60h] [rbp+18h] BYREF

  v9 = a4;
  v11 = 0;
  vFindTAndB(a2, a3, a4, (unsigned int)&v24, (__int64)&v25);
  v12 = a7;
  v13 = v24;
  v14 = v25;
  v15 = a5;
  if ( a7 != 1 )
  {
    v13 = a7 * v24;
    v14 = a7 * v25;
    v9 *= a7;
    v15 = a7 * a5;
  }
  v16 = a6 * a3;
  *(_QWORD *)a1 = 0LL;
  if ( v13 == v14 )
  {
    v13 = 0;
    v14 = v12 * v9;
  }
  v17 = v14 - v15;
  v18 = v13 - v15;
  *(_DWORD *)(a1 + 44) = v17;
  *(_DWORD *)(a1 + 36) = v18;
  *(_DWORD *)(a1 + 28) = -16 * v17;
  v19 = a8;
  *(_DWORD *)(a1 + 24) = -16 * v18;
  v20 = *(_DWORD *)(v19 + 12) & 0x6000;
  switch ( v20 )
  {
    case 0:
      v21 = v16;
LABEL_7:
      v11 = v16;
      break;
    case 8192:
      v11 = v16 + 1;
      v21 = v16 + 1;
      break;
    case 16384:
      v21 = v16 + ((unsigned int)(v9 - 1) >> 1);
      goto LABEL_7;
    case 24576:
      v11 = v16 + 1;
      v21 = v16 + ((unsigned int)(v9 + 1) >> 1);
      break;
    default:
      v21 = 1;
      break;
  }
  if ( !v16 )
  {
    v21 = 1;
    v11 = 0;
  }
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v22 = 16 * v11;
  *(_DWORD *)(a1 + 40) = v21;
  result = (unsigned int)(16 * v21);
  *(_DWORD *)(a1 + 20) = result;
  *(_DWORD *)(a1 + 12) = v22;
  *(_DWORD *)(a1 + 52) = v22;
  return result;
}
