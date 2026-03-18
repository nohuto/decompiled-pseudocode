/*
 * XREFs of fsc_FillGlyph @ 0x1C00AFD48
 * Callers:
 *     fs_ContourScan @ 0x1C00AF620 (fs_ContourScan.c)
 * Callees:
 *     fsc_SetupScan @ 0x1C00AED9C (fsc_SetupScan.c)
 *     fsc_FillBitMap @ 0x1C00AF2A0 (fsc_FillBitMap.c)
 *     fsc_CalcLine @ 0x1C00AF9CC (fsc_CalcLine.c)
 *     EvaluateSpline @ 0x1C00B01D0 (EvaluateSpline.c)
 *     fsc_CheckEndPoint @ 0x1C00B04F8 (fsc_CheckEndPoint.c)
 *     fsc_EndContourEndpoint @ 0x1C00B0ED8 (fsc_EndContourEndpoint.c)
 */

__int64 __fastcall fsc_FillGlyph(__int64 a1, __int16 *a2, __int64 a3, __int16 a4, unsigned __int16 a5)
{
  __int16 v5; // ax
  __int16 v7; // r8
  __int16 *v9; // rbp
  __int64 v10; // r12
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
  unsigned __int16 v21; // r13
  __int16 v22; // dx
  __int16 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r11
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int *v29; // rbx
  int *v30; // rsi
  int *v31; // r8
  char *v32; // r14
  int v33; // r10d
  char v34; // r9
  unsigned int v35; // r12d
  int v36; // edi
  int v37; // ebp
  __int64 v38; // rdx
  int v39; // r12d
  int v40; // r13d
  unsigned int v41; // r13d
  int v42; // r12d
  char v43; // [rsp+50h] [rbp-78h]
  unsigned int v44; // [rsp+54h] [rbp-74h]
  int v45; // [rsp+58h] [rbp-70h]
  __int16 v46; // [rsp+5Ch] [rbp-6Ch]
  int v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+64h] [rbp-64h]
  int v49; // [rsp+68h] [rbp-60h]
  int v50; // [rsp+6Ch] [rbp-5Ch]
  unsigned int *v51; // [rsp+70h] [rbp-58h]
  int v52; // [rsp+78h] [rbp-50h]
  _BOOL8 v53; // [rsp+80h] [rbp-48h]

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
  v52 = v12;
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
      return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v52, v11);
  }
  v16 = *(_QWORD *)(a3 + 40);
  v17 = *(_QWORD *)(a3 + 32) + *(int *)(a3 + 4);
  qword_1C0322FF8 = *(_QWORD *)(a3 + 32);
  qword_1C0323008 = v17;
  v18 = v16 + *(int *)(a3 + 8);
  qword_1C0323000 = v16;
  qword_1C0323010 = v18;
  qword_1C0322FA8 = (__int64)CalcHorizLineSubpix;
  qword_1C0322FC0 = (__int64)CalcVertLineSubpix;
  qword_1C0322FB0 = (__int64)CalcHorizSpSubpix;
  qword_1C0322FC8 = (__int64)CalcVertSpSubpix;
  qword_1C0322FB8 = (__int64)CalcHorizEpSubpix;
  qword_1C0322FD0 = (__int64)CalcVertEpSubpix;
  v19 = v13 < v14 || v12 > v7;
  v48 = (v13 << 6) - 32;
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
    v46 = 0;
    if ( *(_WORD *)v10 )
    {
      v53 = v19;
      while ( 1 )
      {
        v22 = *(_WORD *)(*(_QWORD *)(v10 + 8) + 2LL * v21);
        v23 = *(_WORD *)(*(_QWORD *)(v10 + 16) + 2LL * v21);
        if ( v22 != v23 )
        {
          v24 = *(_QWORD *)(v10 + 24);
          v25 = *(_QWORD *)(v10 + 40);
          v26 = v22;
          v27 = *(_QWORD *)(v10 + 32);
          v28 = v23;
          v29 = (unsigned int *)(v24 + 4 * v26);
          v30 = (int *)(v27 + 4 * v26);
          v31 = (int *)(v24 + 4LL * v23);
          v32 = (char *)(v25 + v26);
          v51 = (unsigned int *)v31;
          if ( (*(_BYTE *)(v28 + v25) & 1) != 0 )
          {
            v33 = *v31;
            v34 = *v32;
            ++v31;
            v35 = *v29;
            v36 = *(_DWORD *)(v27 + 4 * v28);
            v37 = *v30;
            v51 = (unsigned int *)v31;
            v45 = v33;
            v44 = *v29;
            v43 = *v32;
          }
          else
          {
            v33 = *(_DWORD *)(v24 + 4 * v28 - 4);
            v35 = *v31;
            v36 = *(_DWORD *)(v27 + 4 * v28 - 4);
            v37 = *(_DWORD *)(v27 + 4 * v28);
            v45 = v33;
            v44 = *v31;
            if ( (*(_BYTE *)(v28 + v25 - 1) & 1) == 0 )
            {
              v33 = (int)(v35 + v33 + 1) >> 1;
              v45 = v33;
              v36 = (v37 + v36 + 1) >> 1;
            }
            --v29;
            --v30;
            v43 = 0;
            v34 = 0;
            --v32;
          }
          dword_1C0322ED8 = v33;
          dword_1C0322EDC = v36;
          State[0] = 0x7FFFFFFF;
          if ( (v11 & 6) == 4 )
          {
            v38 = dword_1C0322FEC;
            *(_DWORD *)(qword_1C0322FD8 + 4LL * dword_1C0322FEC) = v33;
            *(_DWORD *)(qword_1C0322FE0 + 4 * v38) = v36;
            dword_1C0322FEC = v38 + 1;
            if ( (int)v38 + 1 > dword_1C0322FE8 )
              return 6656LL;
          }
          if ( v53 )
          {
            if ( v29 < (unsigned int *)v31 )
            {
              do
              {
                if ( (v34 & 1) != 0 )
                {
                  result = fsc_CheckEndPoint(v35, (unsigned int)v37, v11);
                  if ( (_DWORD)result )
                    return result;
                  if ( (v36 <= v48 || v37 <= v48) && (v36 >= v47 || v37 >= v47) )
                  {
                    result = fsc_CalcLine(v45, v36, v35, v37, v11);
                    if ( (_DWORD)result )
                      return result;
                  }
                  ++v29;
                  ++v30;
                  v33 = v35;
                  ++v32;
                  v36 = v37;
                }
                else
                {
                  ++v29;
                  ++v30;
                  ++v32;
                  v41 = *v29;
                  v42 = *v30;
                  if ( (*v32 & 1) != 0 )
                  {
                    ++v29;
                    ++v30;
                    ++v32;
                  }
                  else
                  {
                    v41 = (int)(v44 + v41 + 1) >> 1;
                    v42 = (v37 + v42 + 1) >> 1;
                  }
                  if ( (v36 <= v48 || v37 <= v48 || v42 <= v48) && (v36 >= v47 || v37 >= v47 || v42 >= v47) )
                    result = EvaluateSpline(v33, v36, v44, v37, v41, v42, v11);
                  else
                    result = fsc_CheckEndPoint(v41, (unsigned int)v42, v11);
                  if ( (_DWORD)result )
                    return result;
                  v36 = v42;
                  v35 = v44;
                  v33 = v41;
                }
                v45 = v33;
                if ( v29 == v51 )
                {
                  v34 = v43;
                }
                else
                {
                  v34 = *v32;
                  v35 = *v29;
                  v37 = *v30;
                  v43 = *v32;
                  v44 = *v29;
                }
              }
              while ( v29 < v51 );
LABEL_36:
              v21 = v46;
            }
          }
          else if ( v29 < (unsigned int *)v31 )
          {
            while ( 1 )
            {
              if ( (v34 & 1) != 0 )
              {
                result = fsc_CheckEndPoint(v35, (unsigned int)v37, v11);
                if ( (_DWORD)result )
                  return result;
                result = fsc_CalcLine(v45, v36, v35, v37, v11);
                if ( (_DWORD)result )
                  return result;
                ++v29;
                ++v30;
                v33 = v35;
                ++v32;
                v36 = v37;
              }
              else
              {
                ++v29;
                ++v30;
                ++v32;
                v39 = *v29;
                v40 = *v30;
                if ( (*v32 & 1) != 0 )
                {
                  ++v29;
                  ++v30;
                  ++v32;
                }
                else
                {
                  v39 = (int)(v44 + v39 + 1) >> 1;
                  v40 = (v37 + v40 + 1) >> 1;
                }
                result = EvaluateSpline(v33, v36, v44, v37, v39, v40, v11);
                if ( (_DWORD)result )
                  return result;
                v33 = v39;
                v35 = v44;
                v36 = v40;
              }
              v45 = v33;
              if ( v29 == v51 )
              {
                v34 = v43;
              }
              else
              {
                v34 = *v32;
                v35 = *v29;
                v37 = *v30;
                v43 = *v32;
                v44 = *v29;
              }
              if ( v29 >= v51 )
                goto LABEL_36;
            }
          }
          result = fsc_EndContourEndpoint(v11);
          if ( (_DWORD)result )
            return result;
          v10 = a1;
        }
        v46 = ++v21;
        if ( v21 >= *(_WORD *)v10 )
        {
          v9 = a2;
          return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v52, v11);
        }
      }
    }
    return fsc_FillBitMap(*((char **)v9 + 5), v50, v49, *v9, v52, v11);
  }
  return result;
}
