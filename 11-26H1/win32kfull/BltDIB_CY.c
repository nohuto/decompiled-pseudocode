/*
 * XREFs of BltDIB_CY @ 0x1400F16E0
 * Callers:
 *     <none>
 * Callees:
 *     MappingBGRF @ 0x1400F03F4 (MappingBGRF.c)
 *     AlphaBlendBGRF @ 0x1400F1A88 (AlphaBlendBGRF.c)
 *     FixupGrayScan @ 0x1400F28F4 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1400F2CA4 (FixupColorScan.c)
 *     MappingBGR @ 0x14030A2A0 (MappingBGR.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BltDIB_CY(__int128 *a1)
{
  int *v1; // rdx
  __int64 v2; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  int v16; // edi
  unsigned int v17; // ecx
  __int64 v18; // r8
  char v19; // al
  char v20; // dl
  _WORD *v21; // rdx
  __int64 v22; // r8
  __int16 v23; // ax
  __int64 v24; // rcx
  __int64 v25; // rbx
  unsigned __int8 *v26; // rcx
  unsigned __int8 *v28; // rax
  unsigned __int8 *v29; // rcx
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[16]; // [rsp+68h] [rbp-98h] BYREF
  void (__fastcall *v32)(_BYTE *, __int64, __int64, _QWORD); // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h]
  unsigned int v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  unsigned int v36; // [rsp+98h] [rbp-68h]
  unsigned int v37; // [rsp+9Ch] [rbp-64h]
  int v38; // [rsp+A4h] [rbp-5Ch]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  unsigned int v40; // [rsp+F4h] [rbp-Ch]
  int v41; // [rsp+FCh] [rbp-4h]
  void (__fastcall *v42)(int *); // [rsp+120h] [rbp+20h]
  void (__fastcall *v43)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  void (__fastcall *v45)(__int64, __int64, __int64, __int64, int); // [rsp+180h] [rbp+80h]
  __int64 v46; // [rsp+190h] [rbp+90h]
  __int64 v47; // [rsp+198h] [rbp+98h]
  __int64 v48; // [rsp+1E0h] [rbp+E0h]
  __int64 v49; // [rsp+1E8h] [rbp+E8h]
  __int64 v50; // [rsp+1F8h] [rbp+F8h]
  __int64 v51; // [rsp+200h] [rbp+100h]
  __int64 v52; // [rsp+208h] [rbp+108h]
  int v53; // [rsp+210h] [rbp+110h]
  int v54; // [rsp+214h] [rbp+114h]
  int v55; // [rsp+218h] [rbp+118h]
  unsigned __int8 *v56; // [rsp+220h] [rbp+120h]
  unsigned __int8 *v57; // [rsp+228h] [rbp+128h]
  unsigned __int8 *v58; // [rsp+230h] [rbp+130h]
  int v59; // [rsp+238h] [rbp+138h]
  __int64 v60; // [rsp+278h] [rbp+178h]
  unsigned __int8 *v61; // [rsp+280h] [rbp+180h]
  unsigned __int64 v62; // [rsp+288h] [rbp+188h]
  __int64 v63; // [rsp+290h] [rbp+190h]
  __int64 v64; // [rsp+298h] [rbp+198h]
  __int64 v65; // [rsp+2A0h] [rbp+1A0h]
  __int64 v66; // [rsp+2A8h] [rbp+1A8h]
  int v67; // [rsp+2B0h] [rbp+1B0h]

  v1 = &v30;
  v2 = 4LL;
  do
  {
    v3 = *a1;
    v4 = a1[1];
    a1 += 8;
    *(_OWORD *)v1 = v3;
    v5 = *(a1 - 6);
    *((_OWORD *)v1 + 1) = v4;
    v6 = *(a1 - 5);
    *((_OWORD *)v1 + 2) = v5;
    v7 = *(a1 - 4);
    *((_OWORD *)v1 + 3) = v6;
    v8 = *(a1 - 3);
    *((_OWORD *)v1 + 4) = v7;
    v9 = *(a1 - 2);
    *((_OWORD *)v1 + 5) = v8;
    v10 = *(a1 - 1);
    *((_OWORD *)v1 + 6) = v9;
    v1 += 32;
    *((_OWORD *)v1 - 1) = v10;
    --v2;
  }
  while ( v2 );
  v11 = *((_QWORD *)a1 + 10);
  v12 = a1[1];
  *(_OWORD *)v1 = *a1;
  v13 = a1[2];
  *((_OWORD *)v1 + 1) = v12;
  v14 = a1[3];
  *((_OWORD *)v1 + 2) = v13;
  v15 = a1[4];
  *((_OWORD *)v1 + 3) = v14;
  *((_OWORD *)v1 + 4) = v15;
  *((_QWORD *)v1 + 10) = v11;
  v16 = *(_DWORD *)(v47 + 4);
  while ( v16 )
  {
    v20 = v30;
    --v16;
    v25 = v60;
    if ( (v30 & 0x40) != 0 )
    {
      if ( (v31[0] & 4) != 0 )
        FixupGrayScan(&v30, v60);
      else
        FixupColorScan(&v30, v60);
      goto LABEL_8;
    }
    v17 = v37;
    if ( (v30 & 0x20) != 0 )
    {
      v17 = v37 + 1;
      if ( (int)(v37 + 1) > (int)v34 )
        v17 = v34;
      v37 = v17;
      v18 = v33 + (int)(v38 * (v34 - v17));
      v19 = v31[0] | 2;
      v35 = v18;
      v20 = v30 & 0xDF;
      v31[0] |= 2u;
      v30 &= ~0x20u;
    }
    else
    {
      v18 = v35;
      v19 = v31[0];
    }
    if ( v60 )
    {
      v32(v31, v60, v18, v34);
LABEL_8:
      v20 = v30;
      goto LABEL_9;
    }
    if ( (v19 & 2) != 0 )
    {
      if ( !v17 || (v37 = v17 - 1, v17 == 1) )
      {
        if ( (v19 & 1) != 0 )
        {
          v35 = v33;
          v37 = v34;
        }
        else
        {
          v31[0] = v19 & 0xFD;
        }
      }
      else
      {
        v35 = v38 + v18;
      }
    }
LABEL_9:
    if ( (v20 & 8) != 0 && v25 )
    {
      MappingBGR(v25, v36, v49, v56);
      v29 = &v56[v59];
      if ( v29 == v57 )
        v29 = v58;
      v56 = v29;
    }
    v45(v46, v25, v65, v66, v67);
    if ( (v31[0] & 4) != 0 )
    {
      v26 = v61;
      do
      {
        v21 = GrayIdxWORD;
        *(_WORD *)v26 = GrayIdxWORD[*v26];
        v26 += 4;
      }
      while ( (unsigned __int64)v26 < v62 );
    }
    v23 = v30;
    if ( (v30 & 0x80u) != 0 )
    {
      v42(&v30);
      v23 = v30;
    }
    if ( (v23 & 0x800) != 0 )
    {
      AlphaBlendBGRF(&v30, v21, v22);
      LOBYTE(v23) = v30;
    }
    if ( (v23 & 0x10) != 0 )
    {
      MappingBGRF(v61, v62, v49, v56);
      v28 = &v56[v59];
      if ( v28 == v57 )
        v28 = v58;
      v56 = v28;
    }
    v43(&v30, v63, v64, v39, v48, v50, v50 + v54, v55, v44);
    v24 = v53 + v50;
    if ( v24 == v51 )
      v24 = v52;
    v39 += v41;
    v50 = v24;
  }
  return v40;
}
