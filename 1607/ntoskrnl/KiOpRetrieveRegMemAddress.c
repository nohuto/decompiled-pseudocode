/*
 * XREFs of KiOpRetrieveRegMemAddress @ 0x1401DB32C
 * Callers:
 *     KiOp_Div @ 0x1401DB480 (KiOp_Div.c)
 *     KiOp_SGDTSIDT @ 0x1401DB6B0 (KiOp_SGDTSIDT.c)
 *     KiOp_SLDTSTR @ 0x1401DB848 (KiOp_SLDTSTR.c)
 * Callees:
 *     KiOpComputeLinearAddress @ 0x1401DAF9C (KiOpComputeLinearAddress.c)
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
  unsigned __int8 v15; // r9
  __int64 v16; // rcx
  unsigned int v17; // ecx
  __int64 v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
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
      v15 = *(_BYTE *)(a1 + 58);
      if ( (v15 & 7) != 5 || v9 )
      {
        v16 = v15 & 7;
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          v16 = (unsigned int)(v16 + 8);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v16 + 120);
      }
      v17 = (v15 >> 3) & 7;
      if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
        v17 += 8;
      if ( v17 != 4 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * v17 + 120) << (v15 >> 6);
    }
    else
    {
      v18 = v6 & 7;
      if ( v9 || (_DWORD)v18 != 5 )
      {
        if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
          v18 = (unsigned int)(v18 + 8);
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v18 + 120);
      }
      else if ( !*(_BYTE *)(a1 + 50) )
      {
        v7 = *(_QWORD *)(a1 + 8);
      }
    }
    v14 = 0;
  }
  v19 = 0;
  v20 = v7 + v8 + *(int *)(a1 + 60);
  v23 = v20;
  if ( !v14 && (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    v21 = KiOpComputeLinearAddress(a1, &v23);
    v20 = v23;
    v19 = v21;
  }
  *a2 = v20;
  *a3 = v4;
  if ( a4 )
    *a4 = v14;
  return v19;
}
