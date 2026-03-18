/*
 * XREFs of AdjustSrcDevGamma @ 0x140145CDC
 * Callers:
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     Log @ 0x140147308 (Log.c)
 */

__int64 __fastcall AdjustSrcDevGamma(__int64 a1, __int64 a2, unsigned __int16 *a3, unsigned __int8 a4, char a5)
{
  int v6; // r14d
  int v9; // r12d
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned int v12; // eax
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // r14d
  unsigned int v16; // edi
  unsigned int v17; // r13d
  int v18; // edx
  unsigned int v20; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // xmm0_8
  int v25; // r13d
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // [rsp+28h] [rbp-28h]
  __int64 v36; // [rsp+38h] [rbp-18h]
  unsigned int v37; // [rsp+98h] [rbp+48h]
  unsigned int v38; // [rsp+A0h] [rbp+50h]
  unsigned int v39; // [rsp+A0h] [rbp+50h]
  unsigned int v41; // [rsp+B0h] [rbp+60h]

  v6 = a4;
  v9 = 0;
  LODWORD(v36) = DivFD6(a3[3], 10000LL, a3);
  HIDWORD(v36) = DivFD6(a3[4], 10000LL, v10);
  v12 = DivFD6(a3[5], 10000LL, v11);
  *(_DWORD *)a2 &= ~0x1000u;
  v13 = 1;
  v37 = 1000000;
  v14 = 1000000;
  v38 = v12;
  if ( (a5 & 8) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
    {
      if ( v6 == 1 || v6 == 2 )
        goto LABEL_11;
      if ( v6 != 5 && v6 != 6 && v6 != 252 && v6 != 253 )
      {
        if ( v6 == 254 )
        {
          v15 = 1025000;
          goto LABEL_12;
        }
        if ( v6 == 255 )
        {
LABEL_11:
          v15 = 1325000;
          a3[6] += 550;
          a3[7] -= 300;
LABEL_12:
          LODWORD(v35) = v15;
          v14 = v15;
          HIDWORD(v35) = v15;
          v16 = v15;
          v17 = 1000000;
          goto LABEL_13;
        }
        return 0LL;
      }
      v15 = 1000000;
      v16 = 1000000;
      v35 = 4294967297000000LL;
      v17 = 1000000;
LABEL_13:
      LODWORD(v36) = MulFD6((unsigned int)v36, v17);
      HIDWORD(v36) = MulFD6(HIDWORD(v36), v17);
      v12 = MulFD6(v38, v17);
      v39 = v12;
      if ( v37 != 1000000 )
      {
        LODWORD(v35) = MulFD6(v14, v37);
        v14 = v35;
        HIDWORD(v35) = MulFD6(v16, v37);
        v16 = HIDWORD(v35);
        v15 = MulFD6(v15, v37);
        v12 = v39;
      }
      goto LABEL_15;
    }
    v20 = RaisePower(1050000LL, (unsigned int)*(unsigned __int8 *)(a1 + 34) - 3, 2LL);
    v21 = MulFD6(932500LL, v20);
    v24 = *(_QWORD *)(a1 + 144);
    v25 = *(_DWORD *)a2 | 0x1000;
    v15 = *(_DWORD *)(a1 + 152);
    *(_DWORD *)a2 = v25;
    v41 = v21;
    v26 = *(unsigned __int8 *)(a1 + 161);
    v35 = v24;
    if ( (unsigned __int8)v26 <= 0xFu )
    {
      v14 = 25000 * ((v26 >> 1) + 41);
      if ( a4 == 1 )
        v14 = MulFD6(v14, 1125000LL);
    }
    v27 = *(_DWORD *)(a1 + 192);
    if ( v27 > 1000000 )
    {
      v29 = DivFD6(333333LL, (unsigned int)v27, v23);
      v32 = (unsigned int)Log(v29, v30, v31);
      v34 = 4294490175LL;
    }
    else
    {
      if ( v27 >= 1000000 )
      {
LABEL_42:
        if ( a4 != 1 && a4 != 2 )
        {
          switch ( a4 )
          {
            case 5u:
            case 6u:
            case 0xFCu:
            case 0xFDu:
              if ( (*(_DWORD *)(a1 + 184) & 0x400) == 0 )
              {
                v28 = 1000000;
                *(_DWORD *)a2 = v25 & 0xFFFFEFFF;
                goto LABEL_51;
              }
              break;
            case 0xFEu:
              if ( (*(_DWORD *)(a1 + 184) & 0x300) == 0x100 )
              {
                v28 = DivFD6(v41, 932500LL, v23);
                v37 = 1000000;
                goto LABEL_51;
              }
              break;
            case 0xFFu:
              break;
            default:
              return 0LL;
          }
        }
        v28 = v41;
LABEL_51:
        v16 = HIDWORD(v24);
        v17 = MulFD6(v14, v28);
        v14 = v24;
        goto LABEL_13;
      }
      LODWORD(v22) = (unsigned __int64)(1431655766LL * v27) >> 32;
      v34 = (unsigned int)Log((unsigned int)(v27 / 3), v22, v23);
      v32 = 4294490175LL;
    }
    v37 = DivFD6(v34, v32, v33);
    goto LABEL_42;
  }
  v9 = 1;
  v15 = 1000000;
  v35 = 4294967297000000LL;
  v16 = 1000000;
LABEL_15:
  if ( (_DWORD)v36 != 1000000 || __PAIR64__(HIDWORD(v36), 1000000) != (v12 | 0xF424000000000LL) )
    v9 |= 2u;
  if ( (_DWORD)v36 == *(_DWORD *)(a2 + 4) && __PAIR64__(v12, HIDWORD(v36)) == *(_QWORD *)(a2 + 8) )
  {
    v18 = 0;
  }
  else
  {
    v18 = 1;
    *(_QWORD *)(a2 + 4) = v36;
    *(_DWORD *)(a2 + 12) = v12;
  }
  if ( v14 != 1000000 || v16 != 1000000 || v15 != 1000000 )
    v9 |= 4u;
  if ( v14 != *(_DWORD *)(a2 + 16) || v16 != *(_DWORD *)(a2 + 20) || v15 != *(_DWORD *)(a2 + 24) )
  {
    v18 = 1;
    *(_QWORD *)(a2 + 16) = v35;
    *(_DWORD *)(a2 + 24) = v15;
  }
  if ( (*(_DWORD *)a2 & 7) != v9 || (v13 = v18) != 0 )
    *(_DWORD *)a2 = v9 | *(_DWORD *)a2 & 0xFFFFFFF8;
  return v13;
}
