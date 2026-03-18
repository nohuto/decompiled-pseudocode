/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x1401419E4
 * Callers:
 *     KiOp_Div @ 0x1401418F8 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x1401CB9B4 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTR @ 0x1401CBADC (KiOp_SLDTSTR.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x1401CB62C (KiOpComputeLinearAddress.c)
 */

__int64 __fastcall KiOpRetrieveRegMemAddress(__int64 a1, __int64 *a2, _BYTE *a3, int *a4)
{
  char v4; // r14
  unsigned __int8 v6; // cl
  __int64 v7; // rdi
  __int64 v8; // rbp
  char v9; // r11
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int8 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a1 + 73);
  v6 = *(_BYTE *)(a1 + 57);
  v7 = 0LL;
  v8 = 0LL;
  v9 = v6 >> 6;
  if ( v6 >> 6 == 3 )
  {
    v13 = v6 & 7;
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
      v13 = (unsigned int)(v13 + 8);
    v14 = 1;
    v4 = 0;
    v7 = *(_QWORD *)(a1 + 16) + 120LL + 8 * v13;
  }
  else
  {
    if ( (v6 & 7) == 4 )
    {
      v18 = *(_BYTE *)(a1 + 58);
      if ( (v18 & 7) != 5 || v9 )
      {
        v19 = v18 & 7;
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          v19 = (unsigned int)(v19 + 8);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v19 + 120);
      }
      v20 = (v18 >> 3) & 7;
      if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
        v20 += 8;
      if ( v20 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v20 + 120) << (v18 >> 6);
    }
    else
    {
      v21 = v6 & 7;
      if ( v9 || (_DWORD)v21 != 5 )
      {
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          v21 = (unsigned int)(v21 + 8);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v21 + 120);
      }
      else if ( !*(_BYTE *)(a1 + 50) )
      {
        v7 = *(_QWORD *)(a1 + 8);
      }
    }
    v14 = 0;
  }
  v15 = 0;
  v16 = v7 + v8 + *(int *)(a1 + 60);
  v23 = v16;
  if ( !v14 && (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    v22 = KiOpComputeLinearAddress(a1, &v23);
    v16 = v23;
    v15 = v22;
  }
  *a2 = v16;
  *a3 = v4;
  if ( a4 )
    *a4 = v14;
  return v15;
}
