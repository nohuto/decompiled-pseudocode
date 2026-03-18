/*
 * XREFs of ?AlphaMultiply_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801568C0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1801504D0 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaMultiply_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  unsigned int v7; // edx
  int v8; // r8d
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  float v13; // xmm1_4
  _WORD *v14; // r9
  __int64 v15; // r10
  unsigned __int16 *v16; // r11
  float v17; // edx
  int v18; // r8d
  float v19; // eax
  int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // r8d
  unsigned int v25; // eax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  float v29; // xmm1_4
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int16 *v32; // r11
  float v33; // edx
  int v34; // r8d
  float v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  unsigned int v39; // edx
  int v40; // r8d
  int v41; // ecx
  unsigned int v42; // edx
  float v43; // xmm1_4
  __int64 v44; // r9
  __int64 v45; // r11
  float v46; // edx
  int v47; // r8d
  float v48; // eax
  int v49; // ecx
  unsigned int v50; // edx
  unsigned int v51; // ecx
  float v52; // [rsp+40h] [rbp+20h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = CFloat16::operator float(v3);
      if ( v4 != CFloat16::operator float((unsigned __int16 *)&word_1801A3E28) )
      {
        v5 = CFloat16::operator float(v3);
        if ( v5 != CFloat16::operator float((unsigned __int16 *)&word_1801A3FD8) )
        {
          v52 = (float)*v6;
          v7 = LODWORD(v52) & 0x7FFFFFFF;
          v8 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( (LODWORD(v52) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v9 = LODWORD(v52) & 0x7FFFFFFF;
            if ( v7 >= 0x38800000 )
            {
              v12 = v7 - 939520001;
            }
            else
            {
              v10 = 113 - (v7 >> 23);
              if ( v10 >= 24 )
                v11 = 0;
              else
                v11 = (LODWORD(v52) & 0x7FFFFF | 0x800000u) >> v10;
              v9 = v11;
              v12 = v11 + 4095;
            }
            LOWORD(v52) = v8 | ((((v9 >> 13) & 1) + v12) >> 13);
          }
          else
          {
            LOWORD(v52) = v8 | 0x7FFF;
          }
          v13 = CFloat16::operator float(v3);
          v52 = v13 * CFloat16::operator float((unsigned __int16 *)&v52);
          v17 = fabs(v52);
          v18 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( LODWORD(v17) <= 0x47FFEFFF )
          {
            v19 = v17;
            if ( LODWORD(v17) >= 0x38800000 )
            {
              v22 = LODWORD(v17) - 939520001;
            }
            else
            {
              v20 = 113 - (LODWORD(v17) >> 23);
              if ( v20 >= 24 )
                v21 = 0;
              else
                v21 = (LODWORD(v17) & 0x7FFFFF | 0x800000u) >> v20;
              v19 = *(float *)&v21;
              v22 = v21 + 4095;
            }
            *v14 = v18 | ((((LODWORD(v19) >> 13) & 1) + v22) >> 13);
          }
          else
          {
            *v14 = v18 | 0x7FFF;
          }
          v52 = (float)*(unsigned __int16 *)(v15 + 2);
          v23 = LODWORD(v52) & 0x7FFFFFFF;
          v24 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( (LODWORD(v52) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v25 = LODWORD(v52) & 0x7FFFFFFF;
            if ( v23 >= 0x38800000 )
            {
              v28 = v23 - 939520001;
            }
            else
            {
              v26 = 113 - (v23 >> 23);
              if ( v26 >= 24 )
                v27 = 0;
              else
                v27 = (LODWORD(v52) & 0x7FFFFF | 0x800000u) >> v26;
              v25 = v27;
              v28 = v27 + 4095;
            }
            LOWORD(v52) = v24 | ((((v25 >> 13) & 1) + v28) >> 13);
          }
          else
          {
            LOWORD(v52) = v24 | 0x7FFF;
          }
          v29 = CFloat16::operator float(v16);
          v52 = v29 * CFloat16::operator float((unsigned __int16 *)&v52);
          v33 = fabs(v52);
          v34 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( LODWORD(v33) <= 0x47FFEFFF )
          {
            v35 = v33;
            if ( LODWORD(v33) >= 0x38800000 )
            {
              v38 = LODWORD(v33) - 939520001;
            }
            else
            {
              v36 = 113 - (LODWORD(v33) >> 23);
              if ( v36 >= 24 )
                v37 = 0;
              else
                v37 = (LODWORD(v33) & 0x7FFFFF | 0x800000u) >> v36;
              v35 = *(float *)&v37;
              v38 = v37 + 4095;
            }
            *(_WORD *)(v30 + 2) = v34 | ((((LODWORD(v35) >> 13) & 1) + v38) >> 13);
          }
          else
          {
            *(_WORD *)(v30 + 2) = v34 | 0x7FFF;
          }
          v52 = (float)*(unsigned __int16 *)(v31 + 4);
          v39 = LODWORD(v52) & 0x7FFFFFFF;
          v40 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( (LODWORD(v52) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            if ( v39 >= 0x38800000 )
            {
              LOWORD(v52) = v40 | ((((v39 >> 13) & 1) + v39 - 939520001) >> 13);
            }
            else
            {
              v41 = 113 - (v39 >> 23);
              if ( v41 >= 24 )
                v42 = 0;
              else
                v42 = (LODWORD(v52) & 0x7FFFFF | 0x800000u) >> v41;
              LOWORD(v52) = v40 | ((((v42 >> 13) & 1) + v42 + 4095) >> 13);
            }
          }
          else
          {
            LOWORD(v52) = v40 | 0x7FFF;
          }
          v43 = CFloat16::operator float(v32);
          v52 = v43 * CFloat16::operator float((unsigned __int16 *)&v52);
          v46 = fabs(v52);
          v47 = HIWORD(LODWORD(v52)) & 0x8000;
          if ( LODWORD(v46) <= 0x47FFEFFF )
          {
            v48 = v46;
            if ( LODWORD(v46) >= 0x38800000 )
            {
              v51 = LODWORD(v46) - 939520001;
            }
            else
            {
              v49 = 113 - (LODWORD(v46) >> 23);
              if ( v49 >= 24 )
                v50 = 0;
              else
                v50 = (LODWORD(v46) & 0x7FFFFF | 0x800000u) >> v49;
              v48 = *(float *)&v50;
              v51 = v50 + 4095;
            }
            *(_WORD *)(v44 + 4) = v47 | ((((LODWORD(v48) >> 13) & 1) + v51) >> 13);
          }
          else
          {
            *(_WORD *)(v44 + 4) = v47 | 0x7FFF;
          }
          v3 = (unsigned __int16 *)(v45 + 8);
        }
      }
    }
    while ( v2 );
  }
}
