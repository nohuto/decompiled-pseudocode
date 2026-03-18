/*
 * XREFs of bSetXform @ 0x1C01126D0
 * Callers:
 *     bGrabXform @ 0x1C00C2554 (bGrabXform.c)
 * Callees:
 *     fs__NewTransformation @ 0x1C001AE3C (fs__NewTransformation.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     vCalcXformVertical @ 0x1C0243F30 (vCalcXformVertical.c)
 */

__int64 __fastcall bSetXform(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  bool v9; // cc
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // rax
  int v19; // eax
  int v21; // eax
  int v22; // r10d
  int v23; // ecx
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int fixed; // eax
  int v28; // r10d
  int v29; // ecx
  int v30; // r8d
  int v31; // edi
  int v32; // ecx
  __int64 v33; // rdx
  int v34; // eax
  int v35; // r11d
  int v36; // eax
  int v37; // r10d
  int v38; // r11d
  int v39; // r8d
  int v40; // ecx
  __int64 v41; // rdx
  int v42; // r11d
  int v43; // r11d
  int v44; // eax
  int v45; // r10d
  int v46; // eax
  __int128 v47; // xmm1
  __int64 v48; // rcx
  __int128 v49; // [rsp+20h] [rbp-30h] BYREF
  __int128 v50; // [rsp+30h] [rbp-20h]
  int v51; // [rsp+40h] [rbp-10h]

  v5 = *(_OWORD *)(a1 + 80);
  v51 = *(_DWORD *)(a1 + 112);
  v6 = *(_OWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 1;
  v9 = *(_DWORD *)(a1 + 52) <= 0x7FFFu;
  v49 = v5;
  v50 = v6;
  if ( !v9 )
    *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  v12 = *(_DWORD *)(a1 + 116);
  if ( (v12 & 8) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = 786432;
    *(_QWORD *)&v49 = 0x10000LL;
    HIDWORD(v49) = 0;
    LODWORD(v50) = 0x10000;
  }
  else if ( (v12 & 1) != 0 )
  {
    v13 = *(_DWORD *)(a1 + 52);
    if ( v13 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v13 << 16;
      v26 = CompDiv(
              *(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 52),
              72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      fixed = FixMul(v49, v26);
      v29 = *(_DWORD *)(a1 + 48);
      LODWORD(v49) = fixed;
      if ( v29 != *(_DWORD *)(a1 + 44) )
        v28 = CompDiv(*(_DWORD *)(a1 + 52) * v29, 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      LODWORD(v50) = FixMul(v50, v28);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_DWORD *)(a1 + 128);
      v14 = -65536;
      v15 = *(_DWORD *)(a1 + 96);
      if ( v15 > 0 )
        v14 = 0x10000;
      LODWORD(v50) = v14;
      if ( v15 == *(_DWORD *)(a1 + 80) && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
      {
        LODWORD(v49) = v14;
      }
      else
      {
        v21 = CompDiv(
                *(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 124),
                *(int *)(a1 + 48) * (__int64)(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
        LODWORD(v49) = FixMul(v49, v21);
      }
    }
  }
  else
  {
    v22 = *(_DWORD *)(a1 + 52);
    if ( v22 )
    {
      v23 = v22 << 16;
    }
    else
    {
      v23 = *(_DWORD *)(a1 + 128);
      v22 = ((*(int *)(a1 + 128) >> 15) + 1) >> 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v23;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0
      && (v24 = *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 92) == -v24)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
    {
      LODWORD(v49) = 0;
      LODWORD(v50) = 0;
      v25 = -65536;
      if ( v24 > 0 )
        v25 = 0x10000;
      DWORD1(v49) = v25;
      HIDWORD(v49) = -v25;
    }
    else
    {
      v30 = *(_DWORD *)(a1 + 44);
      v31 = v22 + 1;
      if ( v30 * (v22 + 1) <= 0x8000 )
      {
        v32 = v30 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
        v33 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
      }
      else
      {
        v32 = v22 * v30;
        v33 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
      }
      v34 = CompDiv(v32, v33);
      LODWORD(v49) = FixMul(v49, v34);
      v36 = FixMul(SHIDWORD(v49), v35);
      v39 = *(_DWORD *)(a1 + 48);
      HIDWORD(v49) = v36;
      if ( v39 != *(_DWORD *)(a1 + 44) )
      {
        if ( v39 * v31 <= 0x8000 )
        {
          v40 = v39 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
          v41 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        else
        {
          v40 = v37 * v39;
          v41 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        v38 = CompDiv(v40, v41);
      }
      LODWORD(v50) = FixMul(v50, v38);
      DWORD1(v49) = FixMul(SDWORD1(v49), v42);
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    HIDWORD(v49) += FixMul(v49, 22272);
    v44 = FixMul(SDWORD1(v49), v43);
    LODWORD(v50) = v44 + v45;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = &v49;
  if ( *(_DWORD *)(a1 + 308) )
  {
    v46 = v51;
    v47 = v50;
    *(_OWORD *)(a1 + 356) = v49;
    *(_OWORD *)(a1 + 372) = v47;
    *(_DWORD *)(a1 + 388) = v46;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
    vCalcXformVertical(a1);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  v16 = *(_QWORD *)(a1 + 176);
  if ( a3 == -1 )
  {
    v17 = (a4 != 0 ? 0x10 : 0) | 1;
    goto LABEL_18;
  }
  if ( a3 == 1 )
  {
    v17 = (a4 != 0 ? 0x10 : 0) | 3;
LABEL_18:
    *(_WORD *)(v16 + 152) = v17;
    goto LABEL_19;
  }
  *(_WORD *)(v16 + 152) = 0;
LABEL_19:
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 164LL) = a5;
  else
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 164LL) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v18 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    *(_WORD *)(v18 + 138) = 20;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = a2;
  }
  else
  {
    *(_WORD *)(v18 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  v19 = *(_DWORD *)(a1 + 120);
  if ( (v19 & 4) != 0 )
  {
    if ( (v19 & 8) != 0 && (v48 = *(_QWORD *)(a1 + 176), (*(_BYTE *)(v48 + 152) & 1) != 0) && *(_DWORD *)(v48 + 148) )
      *(_DWORD *)(v48 + 160) = 1;
    else
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 160LL) = 0;
  }
  if ( (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184))
    && (unsigned int)fs__NewTransformation(*(_QWORD *)(a1 + 176), *(_QWORD *)(a1 + 184)) )
  {
    return 0LL;
  }
  if ( a2 && (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
    *(_DWORD *)(a1 + 116) |= 0x80u;
  else
    *(_DWORD *)(a1 + 116) &= ~0x80u;
  return 1LL;
}
