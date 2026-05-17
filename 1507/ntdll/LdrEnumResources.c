/*
 * XREFs of LdrEnumResources @ 0x1800CAFC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800CB640 (LdrpCompareResourceNamesWithValidation.c)
 */

__int64 __fastcall LdrEnumResources(unsigned __int64 a1, _QWORD *a2, unsigned int a3, unsigned int *a4, __int64 a5)
{
  unsigned int v5; // edi
  unsigned int v7; // esi
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rbx
  int v12; // ecx
  unsigned int *v13; // r14
  int v14; // eax
  unsigned int v15; // ebp
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned int *v22; // rbp
  int v23; // edx
  int v24; // eax
  unsigned int v25; // edx
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rsi
  unsigned int *v30; // r15
  unsigned int v31; // r13d
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r9
  unsigned int v37; // [rsp+30h] [rbp-78h]
  unsigned int v38; // [rsp+34h] [rbp-74h]
  unsigned int v39; // [rsp+38h] [rbp-70h]
  char v40; // [rsp+3Ch] [rbp-6Ch] BYREF
  _BYTE v41[3]; // [rsp+3Dh] [rbp-6Bh] BYREF
  unsigned int v42; // [rsp+40h] [rbp-68h]
  int v43; // [rsp+44h] [rbp-64h]
  int v44; // [rsp+48h] [rbp-60h]
  unsigned int v45; // [rsp+4Ch] [rbp-5Ch]
  unsigned int v46; // [rsp+50h] [rbp-58h]
  int v50; // [rsp+C8h] [rbp+20h] BYREF

  v5 = 0;
  v7 = a3;
  v8 = a2;
  v37 = 0;
  if ( a5 )
    v42 = *a4;
  else
    v42 = 0;
  *a4 = 0;
  v9 = RtlImageDirectoryEntryToData(a1, 1, 2u, &v50);
  v10 = v9;
  if ( !v9 )
    return 3221225609LL;
  v12 = *(unsigned __int16 *)(v9 + 14);
  v13 = (unsigned int *)(v9 + 16);
  v14 = *(unsigned __int16 *)(v9 + 12);
  v15 = 0;
  v16 = v14 + v12 == 0;
  v17 = v14 + v12;
  v44 = 0;
  v39 = v17;
  v43 = 0;
  if ( v16 )
  {
LABEL_37:
    *a4 = v5;
    return v15;
  }
  while ( v7 )
  {
    v18 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, *v8, v10, v13, &v50);
    v17 = v39;
    if ( !v18 )
      break;
LABEL_35:
    v13 += 2;
    if ( ++v43 >= v17 )
    {
      v5 = v37;
      v15 = v44;
      goto LABEL_37;
    }
  }
  v19 = v13[1];
  if ( (v19 & 0x80000000) != 0 )
  {
    v20 = *v13;
    if ( (v20 & 0x80000000) != 0 )
    {
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      v21 = v10 + v20;
    }
    else
    {
      v21 = *(unsigned __int16 *)v13;
    }
    LODWORD(v19) = v19 & 0x7FFFFFFF;
    v45 = 0;
    v22 = (unsigned int *)(v19 + v10 + 16);
    v23 = *(unsigned __int16 *)(v19 + v10 + 14);
    v24 = *(unsigned __int16 *)(v19 + v10 + 12);
    v16 = v24 + v23 == 0;
    v25 = v24 + v23;
    v38 = v25;
    if ( !v16 )
    {
      do
      {
        if ( v7 <= 1 || (v26 = LdrpCompareResourceNamesWithValidation(0LL, 0LL, v8[1], v10, v22, v41), v25 = v38, !v26) )
        {
          v27 = v22[1];
          if ( (v27 & 0x80000000) == 0 )
            return 3221225595LL;
          v28 = *v22;
          if ( (v28 & 0x80000000) != 0 )
          {
            LODWORD(v28) = v28 & 0x7FFFFFFF;
            v29 = v10 + v28;
          }
          else
          {
            v29 = *(unsigned __int16 *)v22;
          }
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v30 = (unsigned int *)(v27 + v10 + 16);
          v31 = 0;
          v46 = *(unsigned __int16 *)(v27 + v10 + 12) + *(unsigned __int16 *)(v27 + v10 + 14);
          if ( v46 )
          {
            do
            {
              if ( a3 <= 2 || !(unsigned int)LdrpCompareResourceNamesWithValidation(0LL, 0LL, a2[2], v10, v30, &v40) )
              {
                if ( (v30[1] & 0x80000000) != 0 )
                  return 3221225595LL;
                v32 = *v30;
                if ( (v32 & 0x80000000) != 0 )
                {
                  LODWORD(v32) = v32 & 0x7FFFFFFF;
                  v33 = v10 + v32;
                }
                else
                {
                  v33 = *(unsigned __int16 *)v30;
                }
                v34 = v30[1];
                v35 = 5LL * v37++;
                if ( v37 > v42 )
                {
                  v44 = -1073741820;
                }
                else
                {
                  v36 = a5;
                  *(_QWORD *)(a5 + 8 * v35) = v21;
                  *(_QWORD *)(v36 + 8 * v35 + 8) = v29;
                  *(_QWORD *)(v36 + 8 * v35 + 16) = v33;
                  *(_QWORD *)(v36 + 8 * v35 + 24) = a1 + *(unsigned int *)(v34 + v10);
                  *(_QWORD *)(v36 + 8 * v35 + 32) = *(unsigned int *)(v34 + v10 + 4);
                }
              }
              ++v31;
              v30 += 2;
            }
            while ( v31 < v46 );
            v25 = v38;
          }
          v8 = a2;
          v7 = a3;
        }
        v22 += 2;
        ++v45;
      }
      while ( v45 < v25 );
      v17 = v39;
    }
    goto LABEL_35;
  }
  return 3221225595LL;
}
