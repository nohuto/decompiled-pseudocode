/*
 * XREFs of bSetXform @ 0x1C00ECDE8
 * Callers:
 *     bGrabXform @ 0x1C00B1F98 (bGrabXform.c)
 * Callees:
 *     fs__NewTransformation @ 0x1C00AAC30 (fs__NewTransformation.c)
 *     FixMul @ 0x1C00B6E4C (FixMul.c)
 *     CompDiv @ 0x1C00D3E04 (CompDiv.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     vCalcXformVertical @ 0x1C0247C60 (vCalcXformVertical.c)
 */

__int64 __fastcall bSetXform(__int64 a1, int a2, int a3, int a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  bool v8; // cc
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  int v20; // eax
  int v21; // r10d
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edi
  int v27; // ecx
  __int64 v28; // rdx
  int v29; // eax
  int v30; // r11d
  int v31; // eax
  int v32; // r10d
  int v33; // r11d
  int v34; // r8d
  int v35; // r11d
  int v36; // eax
  int fixed; // eax
  int v38; // r10d
  int v39; // ecx
  int v40; // ecx
  __int64 v41; // rdx
  int v42; // r11d
  int v43; // eax
  int v44; // r10d
  int v45; // eax
  __int128 v46; // xmm1
  __int64 v47; // rcx
  __int128 v48; // [rsp+20h] [rbp-30h] BYREF
  __int128 v49; // [rsp+30h] [rbp-20h]
  int v50; // [rsp+40h] [rbp-10h]

  v4 = *(_OWORD *)(a1 + 80);
  v50 = *(_DWORD *)(a1 + 112);
  v5 = *(_OWORD *)(a1 + 96);
  *(_DWORD *)(a1 + 16) = -1;
  *(_DWORD *)(a1 + 20) = -1;
  *(_DWORD *)(a1 + 32) = 1;
  v8 = *(_DWORD *)(a1 + 52) <= 0x7FFFu;
  v48 = v4;
  v49 = v5;
  if ( !v8 )
    *(_DWORD *)(a1 + 52) = 0;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 108LL) = *(_WORD *)(a1 + 44);
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 110LL) = *(_WORD *)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 116);
  if ( (v11 & 8) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = 786432;
    *(_QWORD *)&v48 = 0x10000LL;
    HIDWORD(v48) = 0;
    LODWORD(v49) = 0x10000;
  }
  else if ( (v11 & 1) != 0 )
  {
    v12 = *(_DWORD *)(a1 + 52);
    if ( v12 )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v12 << 16;
      v36 = CompDiv(
              *(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 52),
              72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      fixed = FixMul(v48, v36);
      v39 = *(_DWORD *)(a1 + 48);
      LODWORD(v48) = fixed;
      if ( v39 != *(_DWORD *)(a1 + 44) )
        v38 = CompDiv(*(_DWORD *)(a1 + 52) * v39, 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
      LODWORD(v49) = FixMul(v49, v38);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = *(_DWORD *)(a1 + 128);
      v13 = -65536;
      v14 = *(_DWORD *)(a1 + 96);
      if ( v14 > 0 )
        v13 = 0x10000;
      LODWORD(v49) = v13;
      if ( v14 == *(_DWORD *)(a1 + 80) && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
      {
        LODWORD(v48) = v13;
      }
      else
      {
        v20 = CompDiv(
                *(_DWORD *)(a1 + 44) * *(_DWORD *)(a1 + 124),
                *(int *)(a1 + 48) * (__int64)(*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16));
        LODWORD(v48) = FixMul(v48, v20);
      }
    }
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 52);
    if ( v21 )
    {
      v22 = v21 << 16;
    }
    else
    {
      v22 = *(_DWORD *)(a1 + 128);
      v21 = ((*(int *)(a1 + 128) >> 15) + 1) >> 1;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL) = v22;
    if ( (*(_DWORD *)(a1 + 116) & 2) != 0
      && (v23 = *(_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 92) == -v23)
      && *(_DWORD *)(a1 + 48) == *(_DWORD *)(a1 + 44) )
    {
      LODWORD(v48) = 0;
      LODWORD(v49) = 0;
      v24 = -65536;
      if ( v23 > 0 )
        v24 = 0x10000;
      DWORD1(v48) = v24;
      HIDWORD(v48) = -v24;
    }
    else
    {
      v25 = *(_DWORD *)(a1 + 44);
      v26 = v21 + 1;
      if ( v25 * (v21 + 1) > 0x8000 )
      {
        v27 = v21 * v25;
        v28 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
      }
      else
      {
        v27 = v25 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
        v28 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
      }
      v29 = CompDiv(v27, v28);
      LODWORD(v48) = FixMul(v48, v29);
      v31 = FixMul(SHIDWORD(v48), v30);
      v34 = *(_DWORD *)(a1 + 48);
      HIDWORD(v48) = v31;
      if ( v34 != *(_DWORD *)(a1 + 44) )
      {
        if ( v34 * v26 <= 0x8000 )
        {
          v40 = v34 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
          v41 = 4718592LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        else
        {
          v40 = v32 * v34;
          v41 = 72LL * (*(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 308LL) << 16);
        }
        v33 = CompDiv(v40, v41);
      }
      LODWORD(v49) = FixMul(v49, v33);
      DWORD1(v48) = FixMul(SDWORD1(v48), v35);
    }
  }
  if ( (*(_DWORD *)(a1 + 40) & 0x4000) != 0 )
  {
    HIDWORD(v48) += FixMul(v48, 22272);
    v43 = FixMul(SDWORD1(v48), v42);
    LODWORD(v49) = v43 + v44;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 120LL) = &v48;
  if ( *(_DWORD *)(a1 + 308) )
  {
    v45 = v50;
    v46 = v49;
    *(_OWORD *)(a1 + 356) = v48;
    *(_OWORD *)(a1 + 372) = v46;
    *(_DWORD *)(a1 + 388) = v45;
    *(_DWORD *)(a1 + 316) = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 104LL);
    vCalcXformVertical(a1);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 112LL) = 92682;
  *(_WORD *)(*(_QWORD *)(a1 + 176) + 136LL) = *(_WORD *)(a1 + 402);
  v15 = *(_QWORD *)(a1 + 176);
  if ( a3 == -1 )
  {
    *(_WORD *)(v15 + 152) = 1;
  }
  else if ( a3 == 1 )
  {
    *(_WORD *)(v15 + 152) = 3;
  }
  else
  {
    *(_WORD *)(v15 + 152) = 0;
  }
  v16 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 )
    *(_DWORD *)(v16 + 164) = a4;
  else
    *(_DWORD *)(v16 + 164) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 128LL) = 0LL;
  v17 = *(_QWORD *)(a1 + 176);
  if ( (*(_DWORD *)(a1 + 40) & 0x2000) != 0 )
  {
    *(_WORD *)(v17 + 138) = 20;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 20;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = *(_DWORD *)(a1 + 148);
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = a2;
  }
  else
  {
    *(_WORD *)(v17 + 138) = 0;
    *(_WORD *)(*(_QWORD *)(a1 + 176) + 140LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 144LL) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 148LL) = 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 156LL) = 0;
  v18 = *(_DWORD *)(a1 + 120);
  if ( (v18 & 4) != 0 )
  {
    if ( (v18 & 8) != 0 && (v47 = *(_QWORD *)(a1 + 176), (*(_BYTE *)(v47 + 152) & 1) != 0) && *(_DWORD *)(v47 + 148) )
      *(_DWORD *)(v47 + 160) = 1;
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
