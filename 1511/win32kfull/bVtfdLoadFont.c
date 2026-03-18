/*
 * XREFs of bVtfdLoadFont @ 0x1C0115284
 * Callers:
 *     vtfdLoadFontFile @ 0x1C0114F9C (vtfdLoadFontFile.c)
 * Callees:
 *     bVerifyVTFD @ 0x1C0114FF4 (bVerifyVTFD.c)
 *     iDefaultFace @ 0x1C0115A10 (iDefaultFace.c)
 *     vVtfdFill_IFIMetrics @ 0x1C0115A34 (vVtfdFill_IFIMetrics.c)
 *     cjVTFDIFIMETRICS @ 0x1C01163F8 (cjVTFDIFIMETRICS.c)
 *     pcpComputeGlyphset @ 0x1C0117494 (pcpComputeGlyphset.c)
 *     bInitWinResData @ 0x1C011F988 (bInitWinResData.c)
 *     bGetFntResource @ 0x1C011FB44 (bGetFntResource.c)
 */

__int64 __fastcall bVtfdLoadFont(_BYTE *a1, __int64 a2, __int64 a3, int a4, PVOID *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  _BYTE *v8; // r15
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  ULONG v12; // r13d
  unsigned int v13; // eax
  int v14; // eax
  ULONG v15; // eax
  _DWORD *v16; // rax
  unsigned int v17; // r13d
  int v18; // ecx
  unsigned int *v19; // r12
  __int64 v20; // xmm1_8
  _QWORD *v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-50h]
  __int128 v28; // [rsp+28h] [rbp-48h] BYREF
  __int64 v29; // [rsp+38h] [rbp-38h]
  _BYTE v30[24]; // [rsp+40h] [rbp-30h] BYREF
  int v31; // [rsp+58h] [rbp-18h]
  int v34; // [rsp+C8h] [rbp+58h]
  unsigned int v35; // [rsp+D0h] [rbp+60h]

  v34 = a4;
  v6 = 0;
  v28 = 0uLL;
  v7 = a2;
  v8 = 0LL;
  v29 = 0LL;
  *a5 = 0LL;
  v27 = 0;
  if ( a4 == 2 )
  {
    if ( !(unsigned int)bInitWinResData(a1, a2, v30) )
      return v6;
    v9 = v31;
    a4 = 2;
  }
  else
  {
    v9 = 1;
    *(_QWORD *)&v28 = a1;
    v31 = 1;
    v8 = a1;
    DWORD2(v28) = 0;
    HIDWORD(v28) = a2;
    v29 = 0LL;
  }
  v10 = 0;
  v11 = 48 * v9 + 40;
  v35 = 0;
  v12 = v11;
  if ( v9 )
  {
    while ( 1 )
    {
      if ( a4 == 2 )
      {
        if ( !(unsigned int)bGetFntResource(v30, v10, &v28) )
          return v6;
        v9 = v31;
      }
      v13 = v27 + HIDWORD(v28);
      if ( v27 + HIDWORD(v28) < v27 )
        break;
      v27 += HIDWORD(v28);
      if ( v13 > v7 )
        break;
      if ( !(unsigned int)bVerifyVTFD((unsigned __int16 **)&v28) )
        break;
      v8 = (_BYTE *)v28;
      v14 = cjVTFDIFIMETRICS(v28);
      if ( !v14 )
        break;
      v15 = v12 + v14;
      if ( v15 < v12 )
        break;
      v12 = v15;
      if ( v15 - v11 > v7 )
        break;
      a4 = v34;
      v10 = v35 + 1;
      v35 = v10;
      if ( v10 >= v9 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    v16 = EngAllocMem(0, v12, 0x64667456u);
    *a5 = v16;
    if ( v16 )
    {
      v17 = 0;
      v18 = v34;
      *v16 = v34;
      *((_DWORD *)*a5 + 7) = 0;
      *((_DWORD *)*a5 + 8) = 0;
      *((_QWORD *)*a5 + 1) = a3;
      *((_QWORD *)*a5 + 2) = a1;
      *((_DWORD *)*a5 + 6) = v7;
      *((_DWORD *)*a5 + 9) = v9;
      v19 = (unsigned int *)((char *)*a5 + v11);
      if ( v9 )
      {
        while ( 1 )
        {
          if ( v18 == 2 )
          {
            if ( !(unsigned int)bGetFntResource(v30, v17, &v28) )
              break;
            v8 = (_BYTE *)v28;
            v9 = v31;
          }
          v20 = v29;
          v21 = *a5;
          v22 = 6LL * v17;
          *(_OWORD *)&v21[v22 + 5] = v28;
          v21[v22 + 7] = v20;
          *((_DWORD *)*a5 + 12 * v17 + 16) = iDefaultFace(v8);
          *((_QWORD *)*a5 + 6 * v17 + 10) = v19;
          LOBYTE(v23) = v8[85];
          *((_QWORD *)*a5 + 6 * v17 + 9) = pcpComputeGlyphset(
                                             &gpcpVTFD,
                                             (unsigned __int8)v8[95],
                                             (unsigned __int8)v8[96],
                                             v23);
          v24 = *((_QWORD *)*a5 + 6 * v17 + 9);
          if ( !v24 )
            break;
          vVtfdFill_IFIMetrics(v8, v24 + 24, v19);
          v25 = *v19;
          if ( !(_DWORD)v25 )
            break;
          v18 = v34;
          v19 = (unsigned int *)((char *)v19 + v25);
          if ( ++v17 >= v9 )
            return 1;
        }
        EngFreeMem(*a5);
        *a5 = 0LL;
      }
      else
      {
        return 1;
      }
    }
  }
  return v6;
}
