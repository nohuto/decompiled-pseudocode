/*
 * XREFs of itrp_MD @ 0x1C00B32E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeGlobalGSScale @ 0x1C00ADCB0 (InvokeGlobalGSScale.c)
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_MD(__int64 a1, char a2)
{
  __int64 v2; // r14
  _WORD *v3; // r13
  __int64 v4; // rbp
  int v5; // r12d
  unsigned __int16 v6; // bx
  int v7; // edi
  __int64 v8; // rsi
  int v9; // eax
  int v10; // eax
  __int64 v11; // r15
  __int16 v12; // cx
  int v13; // eax
  __int64 v14; // rbx
  __int16 v15; // cx
  __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v21; // eax
  __int64 v22; // r15
  __int16 v23; // cx
  int v24; // eax
  __int64 v25; // rbx
  __int16 v26; // cx
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // [rsp+20h] [rbp-48h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  int *v32; // [rsp+28h] [rbp-40h]
  int v34; // [rsp+80h] [rbp+18h]
  int v35; // [rsp+80h] [rbp+18h]
  int v36; // [rsp+88h] [rbp+20h]
  int v37; // [rsp+88h] [rbp+20h]

  v2 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2 )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v3 = *(_WORD **)(qword_1C0323E30 + 344);
  v4 = *(int *)(qword_1C0323E18 - 4);
  v5 = 4;
  v32 = (int *)(qword_1C0323E18 - 8);
  v6 = v3[4];
  LOWORD(v7) = v3[6];
  v8 = *(int *)(qword_1C0323E18 - 8);
  v9 = v6;
  if ( ((a2 - 1) & 1) != 0 )
  {
    if ( v6 <= (unsigned __int16)v7 )
      v9 = (unsigned __int16)v7;
    if ( v9 <= 1 )
    {
      v34 = 1;
    }
    else
    {
      v10 = v6;
      if ( v6 <= (unsigned __int16)v7 )
        v10 = (unsigned __int16)v7;
      v34 = v10;
    }
    v11 = LocalGS;
    v30 = qword_1C0323E28;
    if ( qword_1C0323E28 == LocalGS )
    {
      if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
        goto LABEL_79;
      v36 = 0;
    }
    else
    {
      if ( (int)v4 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v4 < 0 )
        goto LABEL_79;
      v36 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    {
      v12 = *(_WORD *)(v11 + 80);
      if ( v12 < 1 || v12 > v34 || (int)v4 < *(__int16 *)(*(_QWORD *)(v11 + 64) + 2LL * v12 - 2) + v36 + 1 )
      {
        v13 = v6;
        if ( v6 <= (unsigned __int16)v7 )
          v13 = (unsigned __int16)v7;
        if ( v13 <= 1 )
        {
          v7 = 1;
        }
        else if ( v6 <= (unsigned __int16)v7 )
        {
          v7 = (unsigned __int16)v7;
        }
        else
        {
          v7 = v6;
        }
        v14 = qword_1C0323DF8;
        if ( v30 == qword_1C0323DF8 )
        {
          if ( (int)v8 < (unsigned __int16)v3[8] && (int)v8 >= 0 )
          {
            v5 = 0;
            goto LABEL_26;
          }
        }
        else if ( (int)v8 < *(_DWORD *)(v2 + 440) && (int)v8 >= 0 )
        {
LABEL_26:
          if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323DF8) )
          {
            v15 = *(_WORD *)(v14 + 80);
            if ( v15 < 1 || v15 > v7 || (int)v8 < v5 + *(__int16 *)(*(_QWORD *)(v14 + 64) + 2LL * v15 - 2) + 1 )
            {
              if ( v11 == v30 || v14 == v30 || *(_BYTE *)(v2 + 397) )
              {
                v29 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 24) + 4 * v8)
                                   - *(_DWORD *)(*(_QWORD *)(v11 + 24) + 4 * v4));
                v28 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 16) + 4 * v8)
                                   - *(_DWORD *)(*(_QWORD *)(v11 + 16) + 4 * v4));
              }
              else
              {
                v16 = *(_QWORD *)(v11 + 40);
                if ( *(_BYTE *)(v2 + 340) )
                {
                  v17 = InvokeProject(
                          (unsigned int)dword_1C0323E64,
                          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 32) + 4 * v8)
                                       - *(_DWORD *)(*(_QWORD *)(v11 + 32) + 4 * v4)),
                          (unsigned int)(*(_DWORD *)(*(_QWORD *)(v14 + 40) + 4 * v8) - *(_DWORD *)(v16 + 4 * v4)));
                  v18 = InvokeGlobalGSScale(*(_DWORD *)(v2 + 192), (int *)(v2 + 296), v17);
LABEL_35:
                  v19 = v18;
LABEL_36:
                  *v32 = v19;
                  qword_1C0323E18 = (__int64)(v32 + 1);
                  return a1;
                }
                v27 = InvokeGlobalGSScale(
                        *(_DWORD *)(v2 + 188),
                        (int *)(v2 + 280),
                        *(_DWORD *)(*(_QWORD *)(v14 + 40) + 4 * v8) - *(_DWORD *)(v16 + 4 * v4));
                v28 = (unsigned int)InvokeGlobalGSScale(
                                      *(_DWORD *)(v2 + 184),
                                      (int *)(v2 + 264),
                                      *(_DWORD *)(*(_QWORD *)(qword_1C0323DF8 + 32) + 4 * v8)
                                    - *(_DWORD *)(*(_QWORD *)(LocalGS + 32) + 4 * v4));
                v29 = v27;
              }
              v18 = InvokeProject((unsigned int)dword_1C0323E64, v28, v29);
              goto LABEL_35;
            }
          }
        }
      }
    }
  }
  else
  {
    if ( v6 <= (unsigned __int16)v7 )
      v9 = (unsigned __int16)v7;
    if ( v9 <= 1 )
    {
      v35 = 1;
    }
    else
    {
      v21 = v6;
      if ( v6 <= (unsigned __int16)v7 )
        v21 = (unsigned __int16)v7;
      v35 = v21;
    }
    v22 = LocalGS;
    v31 = qword_1C0323E28;
    if ( qword_1C0323E28 == LocalGS )
    {
      if ( (int)v8 >= (unsigned __int16)v3[8] || (int)v8 < 0 )
        goto LABEL_79;
      v37 = 0;
    }
    else
    {
      if ( (int)v8 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v8 < 0 )
        goto LABEL_79;
      v37 = 4;
    }
    if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    {
      v23 = *(_WORD *)(v22 + 80);
      if ( v23 < 1 || v23 > v35 || (int)v8 < *(__int16 *)(*(_QWORD *)(v22 + 64) + 2LL * v23 - 2) + v37 + 1 )
      {
        v24 = v6;
        if ( v6 <= (unsigned __int16)v7 )
          v24 = (unsigned __int16)v7;
        if ( v24 <= 1 )
        {
          v7 = 1;
        }
        else if ( v6 <= (unsigned __int16)v7 )
        {
          v7 = (unsigned __int16)v7;
        }
        else
        {
          v7 = v6;
        }
        v25 = qword_1C0323DF8;
        if ( v31 == qword_1C0323DF8 )
        {
          if ( (int)v4 >= (unsigned __int16)v3[8] || (int)v4 < 0 )
            goto LABEL_79;
          v5 = 0;
        }
        else if ( (int)v4 >= *(_DWORD *)(v2 + 440) || (int)v4 < 0 )
        {
          goto LABEL_79;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, qword_1C0323DF8) )
        {
          v26 = *(_WORD *)(v25 + 80);
          if ( v26 < 1 || v26 > v7 || (int)v4 < v5 + *(__int16 *)(*(_QWORD *)(v25 + 64) + 2LL * v26 - 2) + 1 )
          {
            v19 = InvokeProject(
                    (unsigned int)dword_1C0323E60,
                    (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 4 * v8) - *(_DWORD *)(*(_QWORD *)v25 + 4 * v4)),
                    (unsigned int)(*(_DWORD *)(*(_QWORD *)(v22 + 8) + 4 * v8)
                                 - *(_DWORD *)(*(_QWORD *)(v25 + 8) + 4 * v4)));
            if ( (*(_BYTE *)(qword_1C0323E30 + 454) & 0xB) == 0xB && v19 == 64 )
              v19 = 65;
            goto LABEL_36;
          }
        }
      }
    }
  }
LABEL_79:
  dword_1C0323E80 = 4370;
  return qword_1C0323E88;
}
