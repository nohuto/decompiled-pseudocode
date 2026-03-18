/*
 * XREFs of fsc_FillGlyph @ 0x1C00BFBAC
 * Callers:
 *     fs_ContourScan @ 0x1C00C142C (fs_ContourScan.c)
 * Callees:
 *     fsc_SetupScan @ 0x1C00BF494 (fsc_SetupScan.c)
 *     fsc_FillBitMap @ 0x1C00BF998 (fsc_FillBitMap.c)
 *     EvaluateSpline @ 0x1C00C0038 (EvaluateSpline.c)
 *     fsc_CheckEndPoint @ 0x1C00C02E4 (fsc_CheckEndPoint.c)
 *     fsc_CalcLine @ 0x1C00C03E0 (fsc_CalcLine.c)
 *     fsc_EndContourEndpoint @ 0x1C00C126C (fsc_EndContourEndpoint.c)
 */

__int64 __fastcall fsc_FillGlyph(__int64 a1, __int16 *a2, __int64 a3, __int16 a4, unsigned __int16 a5)
{
  __int16 v5; // ax
  __int16 v7; // r8
  __int16 *v9; // rbp
  __int64 v10; // r13
  unsigned __int16 v11; // r15
  int v12; // r11d
  int v13; // edi
  int v14; // r9d
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  BOOL v19; // ebx
  __int64 result; // rax
  unsigned __int16 v21; // ax
  __int16 v22; // r8
  __int16 v23; // dx
  __int64 v24; // r12
  __int64 v25; // r10
  __int64 v26; // r9
  unsigned int *v27; // rbx
  int *v28; // r13
  int *v29; // rsi
  char *v30; // r14
  int v31; // r10d
  int v32; // edi
  char v33; // r8
  unsigned int v34; // r11d
  int v35; // ebp
  __int64 v36; // rcx
  __int64 v37; // rdx
  int v38; // r12d
  int v39; // r13d
  unsigned int v40; // r13d
  int v41; // r12d
  char v42; // [rsp+50h] [rbp-78h]
  int v43; // [rsp+54h] [rbp-74h]
  int v44; // [rsp+58h] [rbp-70h]
  unsigned __int16 v45; // [rsp+5Ch] [rbp-6Ch]
  int v46; // [rsp+60h] [rbp-68h]
  int v47; // [rsp+64h] [rbp-64h]
  int v48; // [rsp+68h] [rbp-60h]
  int v49; // [rsp+6Ch] [rbp-5Ch]
  int v50; // [rsp+70h] [rbp-58h]
  int *v51; // [rsp+78h] [rbp-50h]
  _BOOL8 v52; // [rsp+80h] [rbp-48h]

  v5 = a2[3];
  v7 = a2[5];
  v9 = a2;
  v10 = a1;
  if ( v5 <= v7 )
    return 0LL;
  v11 = a5;
  if ( *((_DWORD *)a2 + 4) )
    v11 = a5 & 0xFFFE;
  v12 = a2[2];
  v13 = a2[1];
  v48 = v12;
  if ( (v11 & 2) == 0 )
    --v12;
  v14 = v5;
  if ( v13 > v5 )
    v13 = v5;
  v50 = v13;
  if ( v12 < v7 )
    v12 = v7;
  v49 = v12;
  if ( a4 == 2 )
  {
    v13 = v5;
    v12 = v7;
    v15 = 1;
  }
  else
  {
    v15 = 0;
    if ( a4 == 3 )
      return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v48, v11);
  }
  v16 = *(_QWORD *)(a3 + 40);
  v17 = *(_QWORD *)(a3 + 32) + *(int *)(a3 + 4);
  qword_1C0329418 = *(_QWORD *)(a3 + 32);
  qword_1C0329428 = v17;
  v18 = v16 + *(int *)(a3 + 8);
  qword_1C0329420 = v16;
  qword_1C0329430 = v18;
  qword_1C03293C8 = (__int64)CalcHorizLineSubpix;
  qword_1C03293E0 = (__int64)CalcVertLineSubpix;
  qword_1C03293D0 = (__int64)CalcHorizSpSubpix;
  qword_1C03293E8 = (__int64)CalcVertSpSubpix;
  qword_1C03293D8 = (__int64)CalcHorizEpSubpix;
  qword_1C03293F0 = (__int64)CalcVertEpSubpix;
  v19 = v13 < v14 || v12 > v7;
  v46 = (v13 << 6) - 32;
  v47 = (v12 << 6) + 32;
  result = fsc_SetupScan(
             v9 + 3,
             v11,
             v13,
             v12,
             v15,
             *v9,
             *(_DWORD *)(a3 + 12),
             *(_DWORD *)(a3 + 16),
             *(_DWORD *)(a3 + 20),
             *(__int64 **)(a3 + 24));
  if ( !(_DWORD)result )
  {
    v21 = 0;
    v45 = 0;
    if ( *(_WORD *)v10 )
    {
      v52 = v19;
      while ( 1 )
      {
        v22 = *(_WORD *)(*(_QWORD *)(v10 + 8) + 2LL * v21);
        v23 = *(_WORD *)(*(_QWORD *)(v10 + 16) + 2LL * v21);
        if ( v22 != v23 )
        {
          v24 = *(_QWORD *)(v10 + 40);
          v25 = *(_QWORD *)(v10 + 24);
          v26 = *(_QWORD *)(v10 + 32);
          v27 = (unsigned int *)(v25 + 4LL * v22);
          v28 = (int *)(v25 + 4LL * v23);
          v29 = (int *)(v26 + 4LL * v22);
          v51 = v28;
          v30 = (char *)(v24 + v22);
          if ( (*(_BYTE *)(v23 + v24) & 1) != 0 )
          {
            v31 = *v28++;
            v32 = *(_DWORD *)(v26 + 4LL * v23);
            v33 = *v30;
            v34 = *v27;
            v35 = *v29;
            v42 = *v30;
            v51 = v28;
            v44 = v31;
            v43 = *v27;
          }
          else
          {
            v34 = *v28;
            v35 = *(_DWORD *)(v26 + 4LL * v23);
            v43 = *v28;
            v36 = v23 - 1;
            v31 = *(_DWORD *)(v25 + 4 * v36);
            v32 = *(_DWORD *)(v26 + 4 * v36);
            v44 = v31;
            if ( (*(_BYTE *)(v36 + v24) & 1) == 0 )
            {
              v31 = (int)(v34 + v31 + 1) >> 1;
              v44 = v31;
              v32 = (v35 + v32 + 1) >> 1;
            }
            --v27;
            --v29;
            v42 = 0;
            v33 = 0;
            --v30;
          }
          dword_1C03292F8 = v31;
          dword_1C03292FC = v32;
          State[0] = 0x7FFFFFFF;
          if ( (v11 & 6) == 4 )
          {
            v37 = dword_1C032940C;
            *(_DWORD *)(qword_1C03293F8 + 4LL * dword_1C032940C) = v31;
            *(_DWORD *)(qword_1C0329400 + 4 * v37) = v32;
            dword_1C032940C = v37 + 1;
            if ( (int)v37 + 1 > dword_1C0329408 )
              return 6656LL;
          }
          if ( v52 )
          {
            while ( v27 < (unsigned int *)v28 )
            {
              if ( (v33 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v34, (unsigned int)v35, v11);
                if ( (_DWORD)result )
                  return result;
                if ( (v32 <= v46 || v35 <= v46) && (v32 >= v47 || v35 >= v47) )
                {
                  result = fsc_CalcLine(v44, v32, v43, v35, v11);
                  if ( (_DWORD)result )
                    return result;
                }
                v34 = v43;
                ++v27;
                ++v29;
                ++v30;
                v31 = v43;
                v32 = v35;
              }
              else
              {
                ++v27;
                ++v29;
                ++v30;
                v40 = *v27;
                v41 = *v29;
                if ( (*v30 & 1) != 0 )
                {
                  ++v27;
                  ++v29;
                  ++v30;
                }
                else
                {
                  v40 = (int)(v34 + v40 + 1) >> 1;
                  v41 = (v35 + v41 + 1) >> 1;
                }
                if ( (v32 <= v46 || v35 <= v46 || v41 <= v46) && (v32 >= v47 || v35 >= v47 || v41 >= v47) )
                  result = EvaluateSpline(v31, v32, v34, v35, v40, v41, v11);
                else
                  result = fsc_CheckEndPoint(v40, (unsigned int)v41, v11);
                if ( (_DWORD)result )
                  return result;
                v34 = v43;
                v31 = v40;
                v32 = v41;
                v28 = v51;
              }
              v44 = v31;
              if ( v27 == (unsigned int *)v28 )
              {
                v33 = v42;
              }
              else
              {
                v33 = *v30;
                v34 = *v27;
                v35 = *v29;
                v42 = *v30;
                v43 = *v27;
              }
            }
          }
          else
          {
            while ( v27 < (unsigned int *)v28 )
            {
              if ( (v33 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v34, (unsigned int)v35, v11);
                if ( (_DWORD)result )
                  return result;
                result = fsc_CalcLine(v44, v32, v43, v35, v11);
                if ( (_DWORD)result )
                  return result;
                v34 = v43;
                ++v27;
                ++v29;
                ++v30;
                v31 = v43;
                v32 = v35;
              }
              else
              {
                ++v27;
                ++v29;
                ++v30;
                v38 = *v27;
                v39 = *v29;
                if ( (*v30 & 1) != 0 )
                {
                  ++v27;
                  ++v29;
                  ++v30;
                }
                else
                {
                  v38 = (int)(v34 + v38 + 1) >> 1;
                  v39 = (v35 + v39 + 1) >> 1;
                }
                result = EvaluateSpline(v31, v32, v34, v35, v38, v39, v11);
                if ( (_DWORD)result )
                  return result;
                v34 = v43;
                v31 = v38;
                v32 = v39;
                v28 = v51;
              }
              v44 = v31;
              if ( v27 == (unsigned int *)v28 )
              {
                v33 = v42;
              }
              else
              {
                v33 = *v30;
                v34 = *v27;
                v35 = *v29;
                v42 = *v30;
                v43 = *v27;
              }
            }
          }
          result = fsc_EndContourEndpoint(v11);
          if ( (_DWORD)result )
            return result;
          v10 = a1;
        }
        v21 = v45 + 1;
        v45 = v21;
        if ( v21 >= *(_WORD *)v10 )
        {
          v9 = a2;
          return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v48, v11);
        }
      }
    }
    return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v48, v11);
  }
  return result;
}
