/*
 * XREFs of PfTCreateTraceDump @ 0x1403E7070
 * Callers:
 *     PfTGenerateTrace @ 0x1403E7030 (PfTGenerateTrace.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PfTFreeBufferList @ 0x1403E7798 (PfTFreeBufferList.c)
 */

__int64 __fastcall PfTCreateTraceDump(_QWORD *a1)
{
  _WORD *v1; // rbp
  __int64 v2; // rax
  __int64 v3; // r15
  unsigned int v4; // r14d
  int v5; // edi
  int v6; // r12d
  unsigned int i; // edx
  SIZE_T v8; // rbx
  PVOID PoolWithTag; // rax
  __int64 v10; // r13
  __int64 *v11; // rsi
  unsigned int v12; // ebx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // r9
  unsigned __int16 v18; // r8
  unsigned __int16 v19; // cx
  unsigned __int64 v20; // r8
  __int16 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // edi
  int v27; // r12d
  unsigned int v28; // ebx
  _DWORD *v29; // rax
  _DWORD *v30; // r8
  char *v31; // r13
  char *v32; // rdx
  __int64 *v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  int v36; // r12d
  char *v37; // rcx
  char *v38; // rax
  int v39; // eax
  unsigned __int64 v40; // rax
  _WORD *v41; // rbx
  char *v42; // rsi
  int v43; // edi
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 *v46; // rdx
  __int64 v47; // r9
  unsigned __int16 v48; // r8
  unsigned __int16 v49; // ax
  unsigned __int64 v50; // r8
  _OWORD *v51; // rdx
  __int64 v52; // r9
  _OWORD *v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ebx
  __int64 v60; // r8
  __int64 v61; // rax
  unsigned int v62; // ecx
  __int16 v63; // r10
  __int64 v64; // r8
  __int16 v65; // r10
  __int64 v66; // r8
  __int64 v67; // r10
  unsigned __int16 v68; // ax
  __int64 v69; // r10
  unsigned __int16 v70; // cx
  __int16 v71; // [rsp+40h] [rbp+0h] BYREF

  v1 = (_WORD *)((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL);
  memset((void *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 120), 0, 0x58uLL);
  v2 = qword_140328098;
  v3 = qword_1403280A0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  for ( i = 0; (__int64 *)v2 != &qword_140328098; v2 = *(_QWORD *)v2 )
    i += *(_DWORD *)(v2 + 32);
  v8 = 2LL * i;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v8, 0x74546650u);
  *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = PoolWithTag;
  if ( !PoolWithTag )
  {
    v58 = -1073741670;
    goto LABEL_62;
  }
  memset(PoolWithTag, 0, v8);
  v10 = qword_1403280A0;
  v11 = &qword_140328070;
  *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = *(_WORD *)(qword_1403280A0 + 36);
  do
  {
    v11 = (__int64 *)v11[1];
    v12 = 0;
    *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v11;
    if ( !*((_DWORD *)v11 + 4) )
      continue;
    v13 = ((unsigned __int64)v11 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
    do
    {
      v14 = v13 + 16LL * v12;
      if ( (*(_BYTE *)v14 & 3u) >= 2 )
      {
        v39 = (*(_DWORD *)v14 >> 2) & 0x3FF;
        v5 += v39;
        v12 = v39 + v12 - 1;
        if ( (*(_DWORD *)v14 & 3) != 2 )
          goto LABEL_25;
        v14 += 16LL;
      }
      else
      {
        ++v5;
      }
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
      v15 = *(_DWORD *)v14;
      if ( (*(_DWORD *)v14 & 3) != 0 )
      {
        *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = -1;
        if ( (v15 & 0x18) == 0x10 )
          *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_WORD *)(v14 + 10);
        else
          *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = -1;
      }
      else
      {
        *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = *(_WORD *)(v14 + 10);
        *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = *(_WORD *)(v14 + 8);
      }
      v16 = (__int64 *)(v1 + 12);
      v17 = 2LL;
      do
      {
        v18 = *((_WORD *)v16 - 4);
        if ( v18 != 0xFFFF )
        {
          v19 = *(_WORD *)(v3 + 36);
          if ( v18 < v19 || v18 >= (unsigned int)v19 + *(_DWORD *)(v3 + 32) )
          {
            v69 = v3;
            while ( 1 )
            {
              v69 = *(_QWORD *)(v69 + 8);
              if ( (__int64 *)v69 == &qword_140328098 )
                v69 = v10;
              if ( v69 == v3 )
                break;
              v70 = *(_WORD *)(v69 + 36);
              if ( v18 >= v70 && v18 < *(_DWORD *)(v69 + 32) + (unsigned int)v70 )
              {
                v3 = v69;
                v20 = ((v69 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * (5LL * (v18 - *(unsigned __int16 *)(v69 + 36)) + 1);
                goto LABEL_17;
              }
            }
            v20 = 0LL;
          }
          else
          {
            v20 = ((v3 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * (5LL * (v18 - v19) + 1);
          }
LABEL_17:
          *v16 = v3;
          v16[1] = v20;
        }
        v16 += 3;
        --v17;
      }
      while ( v17 );
      v11 = *(__int64 **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
      v21 = *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 2);
      if ( *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
      {
        v22 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v23 = (unsigned __int16)(*(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) - v21);
        if ( *(_WORD *)(v22 + 2 * v23) != 0xFFFF )
        {
          *(_WORD *)(v22 + 2 * v23) = -1;
          ++v6;
          v10 = qword_1403280A0;
        }
      }
      if ( *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) )
      {
        v24 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        v25 = (unsigned __int16)(*(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) - v21);
        if ( *(_WORD *)(v24 + 2 * v25) != 0xFFFF )
        {
          *(_WORD *)(v24 + 2 * v25) = -1;
          ++v6;
          v10 = qword_1403280A0;
        }
      }
LABEL_25:
      ++v12;
    }
    while ( v12 < *((_DWORD *)v11 + 4) );
    v4 = 0;
  }
  while ( v11 != (__int64 *)qword_140328070 );
  if ( v5 )
  {
    v26 = 16 * v5;
    v27 = 32 * v6;
    v28 = v27 + ((v26 + 63) & 0xFFFFFFF8);
    v29 = ExAllocatePoolWithTag(PagedPool, v28, 0x44546650u);
    *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v29;
    v30 = v29;
    if ( v29 )
    {
      *v1 = 0;
      *((_QWORD *)v29 + 2) = 0LL;
      v31 = (char *)(v29 + 8);
      *((_QWORD *)v29 + 3) = 0LL;
      *((_QWORD *)v29 + 4) = 0LL;
      v32 = (char *)(v29 + 14);
      *((_QWORD *)v29 + 5) = 0LL;
      v33 = &qword_140328070;
      *((_QWORD *)v29 + 6) = 0LL;
      v34 = (v26 + 31) & 0xFFFFFFF8;
      v29[4] = 852013;
      v29[6] = v28 - 16;
      v29[5] = 1128485697;
      v29[7] = 0;
      v35 = ((_DWORD)v34 + v27 + 7) & 0xFFFFFFF8;
      v30[10] = v34;
      v36 = 0;
      v37 = (char *)v30 + v34 + 32;
      v30[12] = v35;
      v38 = (char *)v30 + v35 + 32;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v30 + 8;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v38;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = v38;
      v30[8] = 24;
      *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = v37;
      while ( 1 )
      {
        v33 = (__int64 *)v33[1];
        *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = v33;
        if ( *((_DWORD *)v33 + 4) )
        {
          v40 = ((unsigned __int64)v33 + 31) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v40;
          do
          {
            v41 = (_WORD *)(v40 + 16LL * v4);
            v42 = &v32[16 * v36];
            if ( (*(_BYTE *)v41 & 3u) >= 2 )
            {
              v43 = (*(_DWORD *)v41 >> 2) & 0x3FF;
              v4 = v43 + v4 - 1;
            }
            else
            {
              v43 = 1;
            }
            if ( &v42[16 * v43] > v37 )
              break;
            memmove(v42, v41, (unsigned int)(16 * v43));
            *((_DWORD *)v31 + 1) += v43;
            v36 += v43;
            if ( (*(_DWORD *)v41 & 3) == 2 )
            {
              v41 += 8;
              v42 += 16;
            }
            v44 = *(_QWORD *)v41;
            if ( ((unsigned __int8)*(_QWORD *)v41 & 3u) < 2 )
            {
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0LL;
              *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
              if ( (v44 & 3) != 0 )
              {
                *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = -1;
                if ( (v44 & 0x18) == 0x10 )
                  *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v41[5];
                else
                  *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = -1;
              }
              else
              {
                *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v41[5];
                *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) = v41[4];
              }
              v45 = qword_1403280A0;
              v46 = (__int64 *)(v1 + 12);
              v47 = 2LL;
              do
              {
                v48 = *((_WORD *)v46 - 4);
                if ( v48 != 0xFFFF )
                {
                  v49 = *(_WORD *)(v3 + 36);
                  if ( v48 < v49 || v48 >= (unsigned int)v49 + *(_DWORD *)(v3 + 32) )
                  {
                    v67 = v3;
                    while ( 1 )
                    {
                      v67 = *(_QWORD *)(v67 + 8);
                      if ( (__int64 *)v67 == &qword_140328098 )
                        v67 = v45;
                      if ( v67 == v3 )
                        break;
                      v68 = *(_WORD *)(v67 + 36);
                      if ( v48 >= v68 && v48 < *(_DWORD *)(v67 + 32) + (unsigned int)v68 )
                      {
                        v3 = v67;
                        v50 = ((v67 + 47) & 0xFFFFFFFFFFFFFFF8uLL)
                            + 8 * (5LL * (v48 - *(unsigned __int16 *)(v67 + 36)) + 1);
                        goto LABEL_52;
                      }
                    }
                    v50 = 0LL;
                  }
                  else
                  {
                    v50 = ((v3 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 8 * (5LL * (v48 - v49) + 1);
                  }
LABEL_52:
                  *v46 = v3;
                  v46[1] = v50;
                }
                v46 += 3;
                --v47;
              }
              while ( v47 );
              v51 = *(_OWORD **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              v31 = *(char **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
              v52 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
              if ( v51 )
              {
                v60 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                v61 = (unsigned __int16)(*(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)
                                       - *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
                LOWORD(v62) = *(_WORD *)(v60 + 2 * v61);
                if ( (_WORD)v62 == 0xFFFF )
                {
                  v62 = (unsigned __int16)*v1;
                  v63 = *v1 + 1;
                  *(_WORD *)(v60 + 2 * v61) = v62;
                  v64 = 32LL * v62;
                  *v1 = v63;
                  if ( (unsigned __int64)(v64 + v52 + 32) > *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                      + 0x48) )
                  {
                    *v1 = v63 - 1;
                  }
                  else
                  {
                    *(_OWORD *)(v64 + v52) = *v51;
                    *(_OWORD *)(v64 + v52 + 16) = v51[1];
                    ++*((_WORD *)v31 + 6);
                  }
                }
                *((_WORD *)v42 + 4) = v62;
              }
              v53 = *(_OWORD **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
              if ( v53 )
              {
                v54 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
                v55 = (unsigned __int16)(*(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28)
                                       - *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
                LOWORD(v56) = *(_WORD *)(v54 + 2 * v55);
                if ( (_WORD)v56 == 0xFFFF )
                {
                  v56 = (unsigned __int16)*v1;
                  v65 = *v1 + 1;
                  *(_WORD *)(v54 + 2 * v55) = v56;
                  v66 = 32LL * v56;
                  *v1 = v65;
                  if ( (unsigned __int64)(v52 + v66 + 32) > *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                      + 0x48) )
                  {
                    *v1 = v65 - 1;
                  }
                  else
                  {
                    *(_OWORD *)(v66 + v52) = *v53;
                    *(_OWORD *)(v66 + v52 + 16) = v53[1];
                    ++*((_WORD *)v31 + 6);
                  }
                }
                *((_WORD *)v42 + 5) = v56;
              }
            }
            v33 = *(__int64 **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
            v32 = v31 + 24;
            v37 = *(char **)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            ++v4;
            v40 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
          }
          while ( v4 < *((_DWORD *)v33 + 4) );
        }
        if ( v33 == (__int64 *)qword_140328070 )
          break;
        v4 = 0;
      }
      v57 = *(_DWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) - *((_DWORD *)v31 + 4) - (_DWORD)v31;
      *((_WORD *)v31 + 7) = *(_WORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC6);
      v58 = 0;
      *((_DWORD *)v31 + 5) = v57;
      *a1 = *(_QWORD *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
    }
    else
    {
      v58 = -1073741670;
    }
  }
  else
  {
    v58 = -2147483622;
  }
  ExFreePoolWithTag(*(PVOID *)(((unsigned __int64)&v71 & 0xFFFFFFFFFFFFFFE0uLL) + 8), 0);
LABEL_62:
  PfTFreeBufferList(&unk_140328058);
  PfTFreeBufferList(&unk_140328080);
  return v58;
}
