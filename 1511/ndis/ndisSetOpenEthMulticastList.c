/*
 * XREFs of ndisSetOpenEthMulticastList @ 0x1C0096B84
 * Callers:
 *     ndisOidPreEthMulticastList @ 0x1C0096AC0 (ndisOidPreEthMulticastList.c)
 * Callees:
 *     ndisIsValidMulticastFilter @ 0x1C0010460 (ndisIsValidMulticastFilter.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     Template_jqxqqq @ 0x1C004084C (Template_jqxqqq.c)
 *     WPP_SF_qqqDD @ 0x1C0040BEC (WPP_SF_qqqDD.c)
 */

unsigned __int8 __fastcall ndisSetOpenEthMulticastList(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rbx
  int *v4; // r12
  unsigned __int8 v7; // bp
  __int64 *v8; // rdi
  int IsValidMulticastFilter; // r15d
  int v10; // eax
  char *v11; // r12
  unsigned int v12; // edx
  __int64 v13; // r13
  unsigned int v14; // edx
  int v15; // ecx
  __int64 v16; // rbx
  unsigned int v17; // r9d
  __int64 v18; // r10
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 *v21; // r12
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // r8d
  __int64 v26; // r13
  int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // r9d
  unsigned __int8 result; // al
  __int64 v34; // r8
  char *v35; // rdx
  char *v36; // rcx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // dx
  __int64 v40; // [rsp+50h] [rbp-48h]
  unsigned int v41; // [rsp+A0h] [rbp+8h]
  __int64 v43; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = a3;
  v43 = v3;
  v7 = 1;
  v8 = *(__int64 **)(v3 + 400);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(0x71u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1, a2);
  IsValidMulticastFilter = ndisIsValidMulticastFilter(*(_QWORD *)(a1 + 16), a1, a2);
  if ( IsValidMulticastFilter )
  {
    if ( (unsigned __int8)byte_1C0083712 >= 2u )
      WPP_SF_qqq(0x72u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1, a2);
  }
  else if ( *(_DWORD *)(a1 + 440) )
  {
    memmove(*(void **)(a1 + 464), *(const void **)(a1 + 448), 12LL * *(unsigned int *)(a1 + 456));
    v10 = *(_DWORD *)(a1 + 456);
    *(_DWORD *)(a1 + 456) = IsValidMulticastFilter & v10;
    *(_DWORD *)(a1 + 472) = v10;
    v11 = *(char **)(a2 + 40);
    v12 = *(_DWORD *)(a2 + 48) / 6u;
    if ( v12 )
    {
      v13 = v12;
      do
      {
        v14 = *(_DWORD *)(a1 + 456);
        v15 = -1;
        v16 = 0LL;
        if ( v14 )
        {
          v17 = *(_DWORD *)(v11 + 2);
          v15 = -1;
          v18 = *(_QWORD *)(a1 + 448);
          while ( 1 )
          {
            v19 = *(_DWORD *)(v18 + 12 * v16 + 6);
            if ( v19 > v17 )
              break;
            if ( v19 >= v17 )
            {
              v37 = *(_WORD *)(v18 + 12 * v16 + 4);
              if ( v37 > *(_WORD *)v11 )
                break;
              if ( v37 >= *(_WORD *)v11 )
                goto LABEL_17;
            }
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v14 )
              goto LABEL_14;
          }
          v15 = 1;
        }
LABEL_14:
        *(_DWORD *)(a1 + 456) = v14 + 1;
        if ( v15 > 0 )
          memmove(
            (void *)(*(_QWORD *)(a1 + 448) + 12LL * (unsigned int)(v16 + 1)),
            (const void *)(*(_QWORD *)(a1 + 448) + 12 * v16),
            12LL * (v14 - (unsigned int)v16));
        v20 = 3 * v16;
        memmove((void *)(*(_QWORD *)(a1 + 448) + 4LL + 4 * v20), v11, 6uLL);
        *(_DWORD *)(*(_QWORD *)(a1 + 448) + 4 * v20) = 1;
LABEL_17:
        v11 += 6;
        --v13;
      }
      while ( v13 );
    }
    else
    {
      *(_DWORD *)(a1 + 456) = 0;
    }
    v21 = v8;
    v22 = *v8;
    memmove((void *)v8[45], (const void *)v8[44], (unsigned int)(6 * *((_DWORD *)v8 + 86)));
    v23 = *((_DWORD *)v8 + 92);
    *((_DWORD *)v8 + 92) = 0;
    *((_DWORD *)v8 + 93) = v23;
    do
    {
      if ( v22 )
        goto LABEL_22;
LABEL_36:
      if ( v21 != v8 || (v21 = v8 + 1, (v22 = v8[1]) == 0) )
      {
        if ( v21 != v8 + 1 )
          continue;
        v21 = v8 + 2;
        v22 = v8[2];
        if ( !v22 )
          continue;
      }
LABEL_22:
      while ( !IsValidMulticastFilter )
      {
        v24 = 0LL;
        v41 = 0;
        if ( *(_DWORD *)(v22 + 456) )
        {
          while ( 1 )
          {
            v25 = *((_DWORD *)v8 + 92);
            v26 = 0LL;
            v27 = -1;
            if ( v25 )
            {
              v28 = v8[44];
              v29 = 3 * v24;
              v40 = *(_QWORD *)(v22 + 448);
              v30 = *(_DWORD *)(v40 + 12 * v24 + 6);
              while ( 1 )
              {
                v31 = *(_DWORD *)(v28 + 6 * v26 + 2);
                if ( v31 > v30 )
                  break;
                if ( v31 >= v30 )
                {
                  v38 = *(_WORD *)(v28 + 6 * v26);
                  v39 = *(_WORD *)(v40 + 4 * v29 + 4);
                  if ( v38 > v39 )
                    break;
                  if ( v38 >= v39 )
                    goto LABEL_33;
                }
                v26 = (unsigned int)(v26 + 1);
                if ( (unsigned int)v26 >= v25 )
                  goto LABEL_29;
              }
              v27 = 1;
            }
LABEL_29:
            *((_DWORD *)v8 + 92) = v25 + 1;
            if ( v25 + 1 > *((_DWORD *)v8 + 86) )
              break;
            if ( v27 > 0 )
              memmove(
                (void *)(v8[44] + 6LL * (unsigned int)(v26 + 1)),
                (const void *)(v8[44] + 6 * v26),
                6 * (v25 - (unsigned int)v26));
            memmove((void *)(v8[44] + 6 * v26), (const void *)(*(_QWORD *)(v22 + 448) + 4 * (3LL * v41 + 1)), 6uLL);
LABEL_33:
            v24 = v41 + 1;
            v41 = v24;
            if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 456) )
              goto LABEL_34;
          }
          IsValidMulticastFilter = -1073676279;
        }
LABEL_34:
        v22 = *(_QWORD *)(v22 + 424);
        if ( !v22 )
        {
          if ( IsValidMulticastFilter )
            goto LABEL_41;
          goto LABEL_36;
        }
      }
      goto LABEL_41;
    }
    while ( v21 != v8 + 2 );
    v32 = *((_DWORD *)v8 + 92);
    if ( v32 == *((_DWORD *)v8 + 93) )
    {
      v34 = 0LL;
      if ( v32 )
      {
        v35 = (char *)v8[45];
        v36 = (char *)v8[44];
        while ( *(_DWORD *)&v36[6 * v34 + 2] == *(_DWORD *)&v35[6 * v34 + 2]
             && *(_WORD *)&v36[6 * v34] == *(_WORD *)&v35[6 * v34] )
        {
          v34 = (unsigned int)(v34 + 1);
          if ( (unsigned int)v34 >= v32 )
          {
            memmove(v36, v35, (unsigned int)(6 * *((_DWORD *)v8 + 86)));
            *((_DWORD *)v8 + 93) = 0;
            IsValidMulticastFilter = 0;
            goto LABEL_41;
          }
        }
      }
    }
    v7 = 0;
    *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
    *(_QWORD *)(a2 + 40) = v8[44];
    *(_DWORD *)(a2 + 48) = 6 * *((_DWORD *)v8 + 92);
LABEL_41:
    v3 = v43;
    v4 = a3;
  }
  else
  {
    IsValidMulticastFilter = 0;
  }
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqqDD(0x73u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a1, a2, IsValidMulticastFilter, v7);
  if ( IsValidMulticastFilter && (Microsoft_Windows_NDISEnableBits & 0x400000000LL) != 0 )
    Template_jqxqqq(
      *(unsigned int *)(v3 + 4112),
      &SetOpenEthMulticastListFailed,
      (const GUID *)(v3 + 4064),
      v3 + 4064,
      *(_DWORD *)(v3 + 4112),
      *(_QWORD *)(v3 + 4080),
      IsValidMulticastFilter,
      141,
      a1);
  result = v7;
  *v4 = IsValidMulticastFilter;
  return result;
}
