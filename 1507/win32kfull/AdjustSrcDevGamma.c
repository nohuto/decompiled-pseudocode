/*
 * XREFs of AdjustSrcDevGamma @ 0x1C00A67F0
 * Callers:
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 *     Log @ 0x1C00A7ABC (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, unsigned int *a2, unsigned __int16 *a3, __int64 a4, char a5)
{
  unsigned __int8 v7; // bl
  unsigned int v9; // r13d
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // r14d
  unsigned int v19; // esi
  unsigned int v20; // ebx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // xmm0_8
  unsigned __int8 v27; // cl
  unsigned int v28; // r12d
  int v29; // ecx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // [rsp+20h] [rbp-30h]
  unsigned int v38; // [rsp+20h] [rbp-30h]
  unsigned int v39; // [rsp+24h] [rbp-2Ch]
  __int64 v40; // [rsp+28h] [rbp-28h]
  __int64 v41; // [rsp+38h] [rbp-18h]
  unsigned int v42; // [rsp+98h] [rbp+48h]
  unsigned int v43; // [rsp+A0h] [rbp+50h]
  unsigned int v44; // [rsp+B0h] [rbp+60h]

  v7 = a4;
  v9 = 0;
  v10 = 0;
  LODWORD(v41) = DivFD6(a3[3], 10000LL, a3, a4);
  HIDWORD(v41) = DivFD6(a3[4], 10000LL, v11, v12);
  v15 = DivFD6(a3[5], 10000LL, v13, v14);
  *a2 &= ~0x1000u;
  v16 = v15;
  v42 = 1000000;
  v37 = v15;
  if ( (a5 & 8) == 0 )
  {
    v17 = 1000000;
    v43 = 1000000;
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( v7 )
      {
        if ( v7 <= 2u )
        {
LABEL_28:
          v18 = 1325000;
          a3[6] += 550;
          v20 = 1325000;
          a3[7] -= 300;
          v19 = 1325000;
          v40 = 0x1437C8001437C8LL;
          goto LABEL_9;
        }
        if ( v7 > 4u )
        {
          if ( v7 <= 6u )
          {
LABEL_7:
            v18 = 1000000;
            HIDWORD(v40) = 1000000;
            v19 = 1000000;
            v20 = 1000000;
LABEL_8:
            LODWORD(v40) = v20;
            goto LABEL_9;
          }
          if ( v7 > 0xFBu )
          {
            if ( v7 <= 0xFDu )
              goto LABEL_7;
            if ( v7 == 0xFE )
            {
              v18 = 1025000;
              v19 = 1025000;
              HIDWORD(v40) = 1025000;
              v20 = 1025000;
              goto LABEL_8;
            }
            goto LABEL_28;
          }
        }
      }
      return 0LL;
    }
    v22 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v23 = MulFD6(932500LL, v22);
    v26 = *(_QWORD *)(a1 + 144);
    v18 = *(_DWORD *)(a1 + 152);
    *a2 |= 0x1000u;
    v27 = *(_BYTE *)(a1 + 161);
    v44 = v23;
    v40 = v26;
    v39 = *a2;
    if ( v27 > 0xFu )
    {
      v28 = 1000000;
    }
    else
    {
      v28 = 25000 * ((v27 >> 1) + 41);
      if ( v7 == 1 )
        v28 = MulFD6(v28, 1125000LL);
    }
    v29 = *(_DWORD *)(a1 + 192);
    if ( v29 <= 1000000 )
    {
      if ( v29 >= 1000000 )
        goto LABEL_46;
      v34 = (unsigned int)Log((unsigned int)(v29 / 3));
      v31 = 4294490175LL;
    }
    else
    {
      v30 = DivFD6(333333LL, (unsigned int)v29, v24, v25);
      v31 = (unsigned int)Log(v30);
      v34 = 4294490175LL;
    }
    v42 = DivFD6(v34, v31, v32, v33);
LABEL_46:
    if ( !v7 )
      return 0LL;
    if ( v7 > 2u )
    {
      if ( v7 <= 4u )
        return 0LL;
      if ( v7 <= 6u )
        goto LABEL_57;
      if ( v7 <= 0xFBu )
        return 0LL;
      if ( v7 <= 0xFDu )
      {
LABEL_57:
        if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
        {
          *a2 = v39 & 0xFFFFEFFF;
          v35 = 1000000;
          goto LABEL_54;
        }
      }
      else if ( v7 == 0xFE && (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
      {
        v35 = DivFD6(v44, 932500LL, v24, v25);
        v42 = 1000000;
        goto LABEL_54;
      }
    }
    v35 = v44;
LABEL_54:
    v19 = HIDWORD(v26);
    v17 = MulFD6(v28, v35);
    v20 = v26;
    v43 = v17;
LABEL_9:
    LODWORD(v41) = MulFD6((unsigned int)v41, v17);
    HIDWORD(v41) = MulFD6(HIDWORD(v41), v43);
    v38 = MulFD6(v37, v43);
    v16 = v38;
    if ( v42 != 1000000 )
    {
      LODWORD(v40) = MulFD6(v20, v42);
      v20 = v40;
      HIDWORD(v40) = MulFD6(v19, v42);
      v19 = HIDWORD(v40);
      v36 = MulFD6(v18, v42);
      v16 = v38;
      v18 = v36;
    }
    goto LABEL_11;
  }
  v20 = 1000000;
  v10 = 1;
  v40 = 4294967297000000LL;
  v18 = 1000000;
  v19 = 1000000;
LABEL_11:
  if ( (_DWORD)v41 != 1000000 || __PAIR64__(HIDWORD(v41), 1000000) != (v16 | 0xF424000000000LL) )
    v10 |= 2u;
  if ( (_DWORD)v41 != a2[1] || __PAIR64__(v16, HIDWORD(v41)) != *((_QWORD *)a2 + 1) )
  {
    v9 = 1;
    *(_QWORD *)(a2 + 1) = v41;
    a2[3] = v16;
  }
  if ( v20 != 1000000 || v19 != 1000000 || v18 != 1000000 )
    v10 |= 4u;
  if ( v20 != a2[4] || v19 != a2[5] || v18 != a2[6] )
  {
    v9 = 1;
    *((_QWORD *)a2 + 2) = v40;
    a2[6] = v18;
  }
  if ( (*a2 & 7) != v10 )
    v9 = 1;
  if ( v9 )
    *a2 = v10 | *a2 & 0xFFFFFFF8;
  return v9;
}
