/*
 * XREFs of PspSetEffectiveJobLimits @ 0x14054FF0C
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     PspSetJobLimitsJobPreCallback @ 0x14054FEDC (PspSetJobLimitsJobPreCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspSetEffectiveLimit @ 0x140550190 (PspSetEffectiveLimit.c)
 */

__int64 __fastcall PspSetEffectiveJobLimits(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // al
  int v4; // ecx
  unsigned int v5; // r12d
  __int64 v6; // r13
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r9
  unsigned int v12; // ecx
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  int v15; // r8d
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int16 *v22; // r9
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // dx
  unsigned __int16 *v25; // r11
  unsigned __int16 v26; // r8
  unsigned __int16 i; // dx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned __int16 v30; // r10
  unsigned __int16 *v31; // rsi
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // cx
  char *v34; // r9
  unsigned __int8 v35; // r8
  unsigned int v36; // eax
  unsigned __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int16 v39; // [rsp+20h] [rbp-99h] BYREF
  unsigned __int16 v40; // [rsp+22h] [rbp-97h]
  int v41; // [rsp+24h] [rbp-95h]
  _QWORD v42[21]; // [rsp+28h] [rbp-91h]

  v1 = *(_QWORD *)(a1 + 1064);
  v3 = PspSetEffectiveLimit(16LL);
  v5 = v4 - 15;
  v6 = (unsigned int)(v4 + 112);
  if ( v3 )
  {
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v4) != 0 )
    {
      if ( v1 )
      {
        v22 = (unsigned __int16 *)(v1 + 616);
        v23 = 0;
        v24 = *(_WORD *)(v1 + 616);
        if ( v24 )
        {
          while ( !*(_QWORD *)&v22[4 * v23 + 4] )
          {
            v23 += v5;
            if ( v23 >= v24 )
              goto LABEL_43;
          }
          v25 = (unsigned __int16 *)(a1 + 264);
          v26 = *v22;
          if ( *v22 >= *(_WORD *)(a1 + 264) )
            v26 = *(_WORD *)(a1 + 264);
          v39 = v26;
          for ( i = 0; i < v39; v26 = v39 )
          {
            v28 = i;
            i += v5;
            v42[v28] = *(_QWORD *)&v25[4 * v28 + 4] & *(_QWORD *)&v22[4 * v28 + 4];
          }
          v41 = 0;
          v40 = 20;
          if ( i < 0x14u )
          {
            do
            {
              v29 = i;
              i += v5;
              v42[v29] = 0LL;
            }
            while ( i < v40 );
            v26 = v39;
          }
          v30 = *v25;
          if ( *v25 >= v26 )
          {
            v31 = (unsigned __int16 *)(a1 + 264);
            v30 = v26;
          }
          else
          {
            v31 = &v39;
          }
          v32 = 0;
          if ( v30 )
          {
            while ( *(_QWORD *)&v25[4 * v32 + 4] == v42[v32] )
            {
              v32 += v5;
              if ( v32 >= v30 )
                goto LABEL_60;
            }
          }
          else
          {
LABEL_60:
            while ( v32 < *v31 )
            {
              if ( *(_QWORD *)&v31[4 * v32 + 4] )
                goto LABEL_64;
              v32 += v5;
            }
            v33 = 0;
            if ( v26 )
            {
              while ( !v42[v33] )
              {
                v33 += v5;
                if ( v33 >= v26 )
                  goto LABEL_64;
              }
              v7 = &v39;
              goto LABEL_5;
            }
          }
LABEL_64:
          *(_OWORD *)(a1 + 616) = *(_OWORD *)v22;
          *(_OWORD *)(a1 + 632) = *(_OWORD *)(v1 + 632);
          *(_OWORD *)(a1 + 648) = *(_OWORD *)(v1 + 648);
          *(_OWORD *)(a1 + 664) = *(_OWORD *)(v1 + 664);
          *(_OWORD *)(a1 + 680) = *(_OWORD *)(v1 + 680);
          *(_OWORD *)(a1 + 696) = *(_OWORD *)(v1 + 696);
          *(_OWORD *)(a1 + 712) = *(_OWORD *)(v1 + 712);
          v8 = v6 + a1 + 616;
          v34 = (char *)v22 + v6;
          *(_OWORD *)(v8 - 16) = *(_OWORD *)(v1 + 728);
          *(_OWORD *)v8 = *(_OWORD *)v34;
          *(_OWORD *)(v8 + 16) = *((_OWORD *)v34 + 1);
          v9 = *((_QWORD *)v34 + 4);
          goto LABEL_6;
        }
      }
LABEL_43:
      v7 = (unsigned __int16 *)(a1 + 264);
LABEL_5:
      *(_OWORD *)(a1 + 616) = *(_OWORD *)v7;
      *(_OWORD *)(a1 + 632) = *((_OWORD *)v7 + 1);
      *(_OWORD *)(a1 + 648) = *((_OWORD *)v7 + 2);
      *(_OWORD *)(a1 + 664) = *((_OWORD *)v7 + 3);
      *(_OWORD *)(a1 + 680) = *((_OWORD *)v7 + 4);
      *(_OWORD *)(a1 + 696) = *((_OWORD *)v7 + 5);
      *(_OWORD *)(a1 + 712) = *((_OWORD *)v7 + 6);
      v8 = v6 + a1 + 616;
      *(_OWORD *)(v8 - 16) = *((_OWORD *)v7 + 7);
      *(_OWORD *)v8 = *(_OWORD *)((char *)v7 + v6);
      *(_OWORD *)(v8 + 16) = *(_OWORD *)((char *)v7 + v6 + 16);
      v9 = *(_QWORD *)((char *)v7 + v6 + 32);
LABEL_6:
      *(_QWORD *)(v8 + 32) = v9;
      goto LABEL_7;
    }
    if ( v1 )
    {
      v7 = (unsigned __int16 *)(v1 + 616);
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 616) = 1310721LL;
    memset((void *)(a1 + 624), 0, 0xA0uLL);
  }
LABEL_7:
  if ( (unsigned __int8)PspSetEffectiveLimit(32LL) )
  {
    if ( v1 )
      v11 = *(_BYTE *)(v1 + 880);
    else
      v11 = 0;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & v10) != 0 )
    {
      v35 = *(_BYTE *)(a1 + 881);
      if ( *((_BYTE *)&PspPriorityClassRank + v11) < *((_BYTE *)&PspPriorityClassRank + v35) )
        v35 = v11;
      *(_BYTE *)(a1 + 880) = v35;
    }
    else
    {
      *(_BYTE *)(a1 + 880) = v11;
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit((unsigned int)v6) )
  {
    if ( v1 )
      v12 = *(_DWORD *)(v1 + 860);
    else
      v12 = 10;
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v6) != 0 && (v36 = *(_DWORD *)(a1 + 484), v36 < v12) )
      *(_DWORD *)(a1 + 860) = v36;
    else
      *(_DWORD *)(a1 + 860) = v12;
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(v5) )
  {
    if ( v1 )
    {
      v13 = *(_QWORD *)(v1 + 792);
      v14 = *(_QWORD *)(v1 + 800);
    }
    else
    {
      v13 = 0LL;
      v14 = 0LL;
    }
    if ( ((unsigned __int8)*(_DWORD *)(a1 + 256) & (unsigned __int8)v5) == 0
      || (v37 = *(_QWORD *)(a1 + 248), v37 >= v14) && v14 )
    {
      *(_QWORD *)(a1 + 800) = v14;
      *(_QWORD *)(a1 + 792) = v13;
    }
    else
    {
      *(_QWORD *)(a1 + 800) = v37;
      *(_QWORD *)(a1 + 792) = *(_QWORD *)(a1 + 240);
    }
  }
  if ( (unsigned __int8)PspSetEffectiveLimit(256LL) )
  {
    if ( v1 )
    {
      v16 = *(_QWORD *)(v1 + 808);
      v17 = *(_QWORD *)(v1 + 816);
    }
    else
    {
      v16 = 0LL;
      v17 = 0LL;
    }
    if ( (v15 & *(_DWORD *)(a1 + 256)) == 0 || (v21 = *(_QWORD *)(a1 + 576), v21 >= v16) && v16 )
    {
      *(_QWORD *)(a1 + 808) = v16;
      *(_QWORD *)(a1 + 816) = v17;
    }
    else
    {
      *(_QWORD *)(a1 + 808) = v21;
      *(_QWORD *)(a1 + 816) = a1;
    }
  }
  result = PspSetEffectiveLimit(2LL);
  if ( (_BYTE)result )
  {
    if ( v1 )
    {
      result = *(_QWORD *)(v1 + 784);
      v19 = *(_QWORD *)(v1 + 824);
    }
    else
    {
      result = 0LL;
      v19 = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 256) & 2) == 0 || (v38 = *(_QWORD *)(a1 + 224), v38 >= result) && result )
    {
      *(_QWORD *)(a1 + 784) = result;
      *(_QWORD *)(a1 + 824) = v19;
    }
    else
    {
      *(_QWORD *)(a1 + 784) = v38;
      *(_QWORD *)(a1 + 824) = a1;
    }
  }
  v20 = *(_DWORD *)(a1 + 256);
  *(_DWORD *)(a1 + 856) = v20;
  if ( v1 )
  {
    result = v20 | *(_DWORD *)(v1 + 856);
    *(_DWORD *)(a1 + 856) = result;
  }
  return result;
}
