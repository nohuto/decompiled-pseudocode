/*
 * XREFs of fsg_Embold @ 0x1C0116F9C
 * Callers:
 *     fsg_GridFit @ 0x1C00B56AC (fsg_GridFit.c)
 * Callees:
 *     EmboldPoint @ 0x1C02D8DDC (EmboldPoint.c)
 */

__int64 __fastcall fsg_Embold(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v5; // r12
  unsigned __int16 v6; // ax
  BOOL v7; // ecx
  __int64 v9; // r10
  __int16 v10; // dx
  __int64 v11; // r8
  int v12; // r11d
  __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 result; // rax
  int v17; // r11d
  int v18; // r14d
  int v19; // r13d
  int v20; // r15d
  int v21; // r9d
  int v22; // r14d
  int v23; // r13d
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r11
  unsigned int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // r10d
  int v35; // ecx
  int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rdx
  BOOL v39; // [rsp+70h] [rbp-21h]
  BOOL v40; // [rsp+74h] [rbp-1Dh]
  unsigned int v41; // [rsp+78h] [rbp-19h]
  __int64 v42; // [rsp+80h] [rbp-11h]
  int v43; // [rsp+8Ch] [rbp-5h]
  __int64 v44; // [rsp+90h] [rbp-1h]
  __int64 v45; // [rsp+98h] [rbp+7h]
  __int64 v46; // [rsp+A0h] [rbp+Fh]
  int v47; // [rsp+F0h] [rbp+5Fh]
  int v49; // [rsp+108h] [rbp+77h]
  unsigned int v50; // [rsp+110h] [rbp+7Fh]

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_WORD *)(a2 + 446);
  v7 = 0;
  v9 = a2;
  v39 = v6 == 1;
  if ( a5 )
  {
    LOBYTE(v7) = v6 <= 1u;
    v39 = v7;
  }
  v10 = *(_WORD *)(*(_QWORD *)(v5 + 64) + 2LL * *(__int16 *)(v5 + 80) - 2);
  v11 = (unsigned __int16)(v10 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v11);
  if ( v12 != *(_DWORD *)(*(_QWORD *)v5 + 4LL * (unsigned __int16)(v10 + 1)) )
    *(_DWORD *)(*(_QWORD *)v5 + 4 * v11) = v12 + 64;
  v13 = *(_WORD *)(*(_QWORD *)(v5 + 64) + 2LL * *(__int16 *)(v5 + 80) - 2);
  v14 = *(_QWORD *)(v5 + 8);
  v15 = (unsigned __int16)(v13 + 4);
  result = (unsigned __int16)(v13 + 3);
  v17 = *(_DWORD *)(v14 + 4 * v15);
  if ( v17 != *(_DWORD *)(v14 + 4 * result) )
  {
    result = (unsigned int)(v17 - 64);
    *(_DWORD *)(v14 + 4 * v15) = result;
  }
  if ( !a4 )
  {
    if ( a3 )
    {
      v18 = *(unsigned __int16 *)(v9 + 446) >> 1;
      v19 = *(unsigned __int16 *)(v9 + 444) >> 1;
      v20 = (*(unsigned __int16 *)(v9 + 446) - v18) << 6;
      v21 = (*(unsigned __int16 *)(v9 + 444) - v19) << 6;
      v22 = v18 << 6;
      v23 = v19 << 6;
    }
    else
    {
      v22 = 32 * *(unsigned __int16 *)(v9 + 446);
      v23 = 32 * *(unsigned __int16 *)(v9 + 444);
      v20 = v22;
      v21 = v23;
    }
    v24 = 0;
    v47 = v21;
    v49 = 0;
    if ( *(__int16 *)(v5 + 80) > 0 )
    {
      v25 = 0LL;
      v45 = 0LL;
      do
      {
        v26 = (unsigned int)*(__int16 *)(*(_QWORD *)(v5 + 56) + 2 * v25);
        v41 = *(__int16 *)(*(_QWORD *)(v5 + 64) + 2 * v25);
        v27 = v41;
        if ( v41 - (unsigned int)v26 >= 2 )
        {
          v28 = *(_QWORD *)(v5 + 8);
          v40 = (*(_BYTE *)(v25 + *(_QWORD *)(v5 + 88)) & 1) != 0;
          LODWORD(v46) = *(_DWORD *)(*(_QWORD *)v5 + 4 * v26);
          HIDWORD(v46) = *(_DWORD *)(v28 + 4 * v26);
          v29 = v46;
          v30 = (unsigned int)(v26 + 1);
          v43 = HIDWORD(v46);
          v31 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v30);
          HIDWORD(v42) = *(_DWORD *)(v28 + 4 * v30);
          LODWORD(v42) = v31;
          if ( (unsigned int)v26 <= v41 )
          {
            HIDWORD(v44) = *(_DWORD *)(v28 + 4LL * v41);
            LODWORD(v44) = *(_DWORD *)(*(_QWORD *)v5 + 4LL * v41);
            v32 = v44;
            do
            {
              v33 = v26;
              v50 = v26;
              if ( v31 == (_DWORD)v29 )
              {
                v34 = v26;
                v35 = v43;
                do
                {
                  if ( HIDWORD(v42) != v35 || v34 >= v27 )
                    break;
                  if ( ++v34 < v27 )
                  {
                    v37 = v34 + 1;
                    v36 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v37);
                    LODWORD(v42) = v36;
                    v35 = v43;
                    HIDWORD(v42) = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v37);
                  }
                  else
                  {
                    v42 = v46;
                    v36 = v46;
                  }
                }
                while ( v36 == (_DWORD)v29 );
                v50 = v34;
                v33 = v34;
                v9 = a2;
              }
              EmboldPoint(v26, v33, v39, v40, v32, v29, v42, v20, v22, v23, v21, *(_DWORD *)(v9 + 448), v5);
              v32 = v29;
              LODWORD(v26) = v50 + 1;
              v43 = HIDWORD(v42);
              v29 = v42;
              v27 = v41;
              if ( v50 + 1 < v41 )
              {
                v38 = v50 + 2;
                v31 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v38);
                LODWORD(v42) = v31;
                HIDWORD(v42) = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 4 * v38);
              }
              else
              {
                v42 = v46;
                v31 = v46;
              }
              v21 = v47;
              v9 = a2;
            }
            while ( (unsigned int)v26 <= v41 );
          }
          v24 = v49;
          v25 = v45;
        }
        result = (unsigned int)*(__int16 *)(v5 + 80);
        ++v24;
        v21 = v47;
        ++v25;
        v49 = v24;
        v45 = v25;
      }
      while ( v24 < (int)result );
    }
  }
  return result;
}
