/*
 * XREFs of RtlpCombineAcls @ 0x1800061A8
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180044AC8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        ACL **a6,
        _DWORD *a7)
{
  unsigned int v7; // ebx
  ACL *v10; // r15
  ULONG v11; // esi
  unsigned int v13; // ecx
  unsigned __int8 *v14; // rdx
  unsigned int j; // r10d
  ULONG v16; // edi
  ACL *Heap; // rax
  unsigned int v18; // edi
  char *v19; // rbp
  unsigned __int16 *v20; // rsi
  unsigned int ii; // r14d
  unsigned __int8 *v22; // rdx
  unsigned int i; // r10d
  unsigned __int8 v24; // al
  unsigned __int8 *v25; // rdx
  unsigned int k; // r10d
  unsigned __int8 *v27; // rdx
  unsigned int m; // r10d
  unsigned __int8 *v29; // rdx
  unsigned int n; // r10d
  unsigned __int16 *v31; // rsi
  unsigned int v32; // r14d
  unsigned __int8 v33; // al
  unsigned __int16 *v34; // rsi
  unsigned int jj; // r14d
  unsigned __int16 *v36; // rsi
  unsigned int kk; // r14d
  unsigned __int16 *v38; // rsi
  PVOID FirstFree; // [rsp+20h] [rbp-48h] BYREF
  NTSTATUS Acl; // [rsp+70h] [rbp+8h]

  v7 = 0;
  FirstFree = 0LL;
  v10 = 0LL;
  v11 = 2;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 )
  {
    *a6 = 0LL;
    return 0LL;
  }
  v13 = 8;
  if ( a1 )
  {
    v22 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v22 += *((unsigned __int16 *)v22 + 1) )
    {
      v24 = *v22;
      if ( *v22 >= 2u && (v24 <= 3u || v24 > 6u && (v24 <= 8u || (unsigned __int8)(v24 - 13) <= 3u)) )
      {
        if ( v13 + *((unsigned __int16 *)v22 + 1) < v13 )
          goto LABEL_110;
        v13 += *((unsigned __int16 *)v22 + 1);
        if ( a7 )
          *a7 |= 8u;
        if ( *a1 > v11 )
          v11 = *a1;
      }
      ++i;
    }
  }
  if ( a2 )
  {
    v14 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v14 += *((unsigned __int16 *)v14 + 1) )
    {
      if ( *v14 == 17 )
      {
        if ( v13 + *((unsigned __int16 *)v14 + 1) < v13 )
          goto LABEL_110;
        v13 += *((unsigned __int16 *)v14 + 1);
        if ( a7 )
          *a7 |= 0x10u;
        if ( *a2 > v11 )
          v11 = *a2;
      }
      ++j;
    }
  }
  if ( a5 )
  {
    v25 = a5 + 8;
    for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v25 += *((unsigned __int16 *)v25 + 1) )
    {
      if ( *v25 == 20 )
      {
        if ( v13 + *((unsigned __int16 *)v25 + 1) < v13 )
          goto LABEL_110;
        v13 += *((unsigned __int16 *)v25 + 1);
        if ( a7 )
          *a7 |= 0x80u;
        if ( *a5 > v11 )
          v11 = *a5;
      }
      ++k;
    }
  }
  if ( a3 )
  {
    v27 = a3 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v27 += *((unsigned __int16 *)v27 + 1) )
    {
      if ( *v27 == 18 )
      {
        if ( v13 + *((unsigned __int16 *)v27 + 1) < v13 )
          goto LABEL_110;
        v13 += *((unsigned __int16 *)v27 + 1);
        if ( a7 )
          *a7 |= 0x20u;
        if ( *a3 > v11 )
          v11 = *a3;
      }
      ++m;
    }
  }
  if ( a4 )
  {
    v29 = a4 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a4 + 2); v29 += *((unsigned __int16 *)v29 + 1) )
    {
      if ( *v29 == 19 )
      {
        if ( v13 + *((unsigned __int16 *)v29 + 1) < v13 )
          goto LABEL_110;
        v13 += *((unsigned __int16 *)v29 + 1);
        if ( a7 )
          *a7 |= 0x40u;
        if ( *a4 > v11 )
          v11 = *a4;
      }
      ++n;
    }
  }
  if ( v13 + 3 < v13 )
  {
LABEL_110:
    v18 = -1073741675;
  }
  else
  {
    v16 = (v13 + 3) & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v16);
    v10 = Heap;
    if ( Heap )
    {
      Acl = RtlCreateAcl(Heap, v16, v11);
      v18 = Acl;
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v10, &FirstFree) )
        {
          if ( a1 && (v31 = (unsigned __int16 *)(a1 + 8), v32 = 0, *((_WORD *)a1 + 2)) )
          {
            v19 = (char *)FirstFree;
            do
            {
              v33 = *(_BYTE *)v31;
              if ( *(_BYTE *)v31 >= 2u && (v33 <= 3u || v33 > 6u && (v33 <= 8u || (unsigned __int8)(v33 - 13) <= 3u)) )
              {
                memmove(v19, v31, v31[1]);
                ++v10->AceCount;
                v19 += v31[1];
              }
              ++v32;
              v31 = (unsigned __int16 *)((char *)v31 + v31[1]);
            }
            while ( v32 < *((unsigned __int16 *)a1 + 2) );
            v18 = Acl;
          }
          else
          {
            v19 = (char *)FirstFree;
          }
          if ( a2 )
          {
            v20 = (unsigned __int16 *)(a2 + 8);
            for ( ii = 0; ii < *((unsigned __int16 *)a2 + 2); v20 = (unsigned __int16 *)((char *)v20 + v20[1]) )
            {
              if ( *(_BYTE *)v20 == 17 )
              {
                memmove(v19, v20, v20[1]);
                ++v10->AceCount;
                v19 += v20[1];
              }
              ++ii;
            }
          }
          if ( a5 )
          {
            v34 = (unsigned __int16 *)(a5 + 8);
            for ( jj = 0; jj < *((unsigned __int16 *)a5 + 2); v34 = (unsigned __int16 *)((char *)v34 + v34[1]) )
            {
              if ( *(_BYTE *)v34 == 20 )
              {
                memmove(v19, v34, v34[1]);
                ++v10->AceCount;
                v19 += v34[1];
              }
              ++jj;
            }
          }
          if ( a3 )
          {
            v36 = (unsigned __int16 *)(a3 + 8);
            for ( kk = 0; kk < *((unsigned __int16 *)a3 + 2); v36 = (unsigned __int16 *)((char *)v36 + v36[1]) )
            {
              if ( *(_BYTE *)v36 == 18 )
              {
                memmove(v19, v36, v36[1]);
                ++v10->AceCount;
                v19 += v36[1];
              }
              ++kk;
            }
          }
          if ( a4 )
          {
            v38 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v38 == 19 )
                {
                  memmove(v19, v38, v38[1]);
                  ++v10->AceCount;
                  v19 += v38[1];
                }
                ++v7;
                v38 = (unsigned __int16 *)((char *)v38 + v38[1]);
              }
              while ( v7 < *((unsigned __int16 *)a4 + 2) );
            }
          }
          goto LABEL_34;
        }
        v18 = -1073741699;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      v10 = 0LL;
    }
    else
    {
      v18 = -1073741801;
    }
  }
LABEL_34:
  *a6 = v10;
  return v18;
}
