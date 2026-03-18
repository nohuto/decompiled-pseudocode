/*
 * XREFs of ?AlphaDivide_64bppABGRFloat@@YAXPEBUPipelineParams@@PEBUScanOpParams@@@Z @ 0x1801480E0
 * Callers:
 *     <none>
 * Callees:
 *     ??BCFloat16@@QEAAMXZ @ 0x1801410E0 (--BCFloat16@@QEAAMXZ.c)
 */

void __fastcall AlphaDivide_64bppABGRFloat(const struct PipelineParams *a1, const struct ScanOpParams *a2)
{
  int v2; // ebx
  unsigned __int16 *v3; // r11
  float v4; // xmm1_4
  float v5; // xmm1_4
  unsigned __int16 *v6; // r10
  float v7; // edx
  int v8; // r8d
  float v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // r8d
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  float v19; // xmm1_4
  _WORD *v20; // r9
  __int64 v21; // r10
  float v22; // edx
  int v23; // r8d
  float v24; // eax
  int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ecx
  unsigned int v28; // edx
  int v29; // r8d
  unsigned int v30; // eax
  int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // ecx
  __int64 v34; // r9
  __int64 v35; // r10
  float v36; // edx
  int v37; // r8d
  float v38; // eax
  int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // ecx
  unsigned int v42; // edx
  int v43; // r8d
  unsigned int v44; // eax
  int v45; // ecx
  unsigned int v46; // edx
  unsigned int v47; // ecx
  __int64 v48; // r9
  __int64 v49; // r11
  float v50; // edx
  int v51; // r8d
  float v52; // eax
  int v53; // ecx
  unsigned int v54; // edx
  unsigned int v55; // ecx
  float v56; // [rsp+50h] [rbp+30h] BYREF
  float v57; // [rsp+58h] [rbp+38h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  if ( v2 )
  {
    v3 = (unsigned __int16 *)(*((_QWORD *)a2 + 1) + 6LL);
    do
    {
      --v2;
      v4 = CFloat16::operator float(v3);
      if ( v4 != CFloat16::operator float((unsigned __int16 *)&word_180195E40) )
      {
        v5 = CFloat16::operator float(v3);
        if ( v5 != CFloat16::operator float((unsigned __int16 *)&word_180195F58) )
        {
          v56 = 1.0 / CFloat16::operator float(v3);
          v7 = fabs(v56);
          v8 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( LODWORD(v7) <= 0x47FFEFFF )
          {
            v9 = v7;
            if ( LODWORD(v7) >= 0x38800000 )
            {
              v12 = LODWORD(v7) - 939520001;
            }
            else
            {
              v10 = 113 - (LODWORD(v7) >> 23);
              if ( v10 >= 24 )
                v11 = 0;
              else
                v11 = (LODWORD(v7) & 0x7FFFFF | 0x800000u) >> v10;
              v9 = *(float *)&v11;
              v12 = v11 + 4095;
            }
            LOWORD(v56) = v8 | ((((LODWORD(v9) >> 13) & 1) + v12) >> 13);
          }
          else
          {
            LOWORD(v56) = v8 | 0x7FFF;
          }
          v57 = (float)*v6;
          v13 = LODWORD(v57) & 0x7FFFFFFF;
          v14 = HIWORD(LODWORD(v57)) & 0x8000;
          if ( (LODWORD(v57) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v15 = LODWORD(v57) & 0x7FFFFFFF;
            if ( v13 >= 0x38800000 )
            {
              v18 = v13 - 939520001;
            }
            else
            {
              v16 = 113 - (v13 >> 23);
              if ( v16 >= 24 )
                v17 = 0;
              else
                v17 = (LODWORD(v57) & 0x7FFFFF | 0x800000u) >> v16;
              v15 = v17;
              v18 = v17 + 4095;
            }
            LOWORD(v57) = v14 | ((((v15 >> 13) & 1) + v18) >> 13);
          }
          else
          {
            LOWORD(v57) = v14 | 0x7FFF;
          }
          v19 = CFloat16::operator float((unsigned __int16 *)&v56);
          v56 = CFloat16::operator float((unsigned __int16 *)&v57) * v19;
          v22 = fabs(v56);
          v23 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( LODWORD(v22) <= 0x47FFEFFF )
          {
            v24 = v22;
            if ( LODWORD(v22) >= 0x38800000 )
            {
              v27 = LODWORD(v22) - 939520001;
            }
            else
            {
              v25 = 113 - (LODWORD(v22) >> 23);
              if ( v25 >= 24 )
                v26 = 0;
              else
                v26 = (LODWORD(v22) & 0x7FFFFF | 0x800000u) >> v25;
              v24 = *(float *)&v26;
              v27 = v26 + 4095;
            }
            *v20 = v23 | ((((LODWORD(v24) >> 13) & 1) + v27) >> 13);
          }
          else
          {
            *v20 = v23 | 0x7FFF;
          }
          v56 = (float)*(unsigned __int16 *)(v21 + 2);
          v28 = LODWORD(v56) & 0x7FFFFFFF;
          v29 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( (LODWORD(v56) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v30 = LODWORD(v56) & 0x7FFFFFFF;
            if ( v28 >= 0x38800000 )
            {
              v33 = v28 - 939520001;
            }
            else
            {
              v31 = 113 - (v28 >> 23);
              if ( v31 >= 24 )
                v32 = 0;
              else
                v32 = (LODWORD(v56) & 0x7FFFFF | 0x800000u) >> v31;
              v30 = v32;
              v33 = v32 + 4095;
            }
            LOWORD(v56) = v29 | ((((v30 >> 13) & 1) + v33) >> 13);
          }
          else
          {
            LOWORD(v56) = v29 | 0x7FFF;
          }
          v56 = CFloat16::operator float((unsigned __int16 *)&v56) * v19;
          v36 = fabs(v56);
          v37 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( LODWORD(v36) <= 0x47FFEFFF )
          {
            v38 = v36;
            if ( LODWORD(v36) >= 0x38800000 )
            {
              v41 = LODWORD(v36) - 939520001;
            }
            else
            {
              v39 = 113 - (LODWORD(v36) >> 23);
              if ( v39 >= 24 )
                v40 = 0;
              else
                v40 = (LODWORD(v36) & 0x7FFFFF | 0x800000u) >> v39;
              v38 = *(float *)&v40;
              v41 = v40 + 4095;
            }
            *(_WORD *)(v34 + 2) = v37 | ((((LODWORD(v38) >> 13) & 1) + v41) >> 13);
          }
          else
          {
            *(_WORD *)(v34 + 2) = v37 | 0x7FFF;
          }
          v56 = (float)*(unsigned __int16 *)(v35 + 4);
          v42 = LODWORD(v56) & 0x7FFFFFFF;
          v43 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( (LODWORD(v56) & 0x7FFFFFFFu) <= 0x47FFEFFF )
          {
            v44 = LODWORD(v56) & 0x7FFFFFFF;
            if ( v42 >= 0x38800000 )
            {
              v47 = v42 - 939520001;
            }
            else
            {
              v45 = 113 - (v42 >> 23);
              if ( v45 >= 24 )
                v46 = 0;
              else
                v46 = (LODWORD(v56) & 0x7FFFFF | 0x800000u) >> v45;
              v44 = v46;
              v47 = v46 + 4095;
            }
            LOWORD(v56) = v43 | ((((v44 >> 13) & 1) + v47) >> 13);
          }
          else
          {
            LOWORD(v56) = v43 | 0x7FFF;
          }
          v56 = CFloat16::operator float((unsigned __int16 *)&v56) * v19;
          v50 = fabs(v56);
          v51 = HIWORD(LODWORD(v56)) & 0x8000;
          if ( LODWORD(v50) <= 0x47FFEFFF )
          {
            v52 = v50;
            if ( LODWORD(v50) >= 0x38800000 )
            {
              v55 = LODWORD(v50) - 939520001;
            }
            else
            {
              v53 = 113 - (LODWORD(v50) >> 23);
              if ( v53 >= 24 )
                v54 = 0;
              else
                v54 = (LODWORD(v50) & 0x7FFFFF | 0x800000u) >> v53;
              v52 = *(float *)&v54;
              v55 = v54 + 4095;
            }
            *(_WORD *)(v48 + 4) = v51 | ((((LODWORD(v52) >> 13) & 1) + v55) >> 13);
          }
          else
          {
            *(_WORD *)(v48 + 4) = v51 | 0x7FFF;
          }
          v3 = (unsigned __int16 *)(v49 + 8);
        }
      }
    }
    while ( v2 );
  }
}
