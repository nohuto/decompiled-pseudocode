/*
 * XREFs of RtlpCombineAcls @ 0x18004DF20
 * Callers:
 *     RtlpSetSecurityObject @ 0x180047EB8 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x1800201C0 (RtlFirstFreeAce.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     memmove @ 0x180098200 (memmove.c)
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
  unsigned int i; // r10d
  unsigned __int8 *v16; // rdx
  unsigned int k; // r10d
  unsigned __int8 *v18; // rdx
  unsigned int m; // r10d
  unsigned __int8 *v20; // rdx
  unsigned int n; // r10d
  ULONG v22; // edi
  ACL *Heap; // rax
  unsigned int v24; // edi
  unsigned __int16 *v25; // rsi
  unsigned int v26; // r14d
  char *v27; // rbp
  unsigned __int16 *v28; // rsi
  unsigned int jj; // r14d
  unsigned __int16 *v30; // rsi
  unsigned int kk; // r14d
  unsigned __int16 *v32; // rsi
  unsigned __int8 *v33; // rdx
  unsigned int j; // r10d
  unsigned __int16 *v35; // rsi
  unsigned int ii; // r14d
  unsigned __int8 v37; // al
  unsigned __int8 v38; // al
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
    v14 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v14 += *((unsigned __int16 *)v14 + 1) )
    {
      v37 = *v14;
      if ( *v14 >= 2u && (v37 <= 3u || v37 > 6u && (v37 <= 8u || (unsigned __int8)(v37 - 13) <= 3u)) )
      {
        if ( v13 + *((unsigned __int16 *)v14 + 1) < v13 )
          goto LABEL_112;
        v13 += *((unsigned __int16 *)v14 + 1);
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
    v33 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v33 += *((unsigned __int16 *)v33 + 1) )
    {
      if ( *v33 == 17 )
      {
        if ( v13 + *((unsigned __int16 *)v33 + 1) < v13 )
          goto LABEL_112;
        v13 += *((unsigned __int16 *)v33 + 1);
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
    v16 = a5 + 8;
    for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v16 += *((unsigned __int16 *)v16 + 1) )
    {
      if ( *v16 == 20 )
      {
        if ( v13 + *((unsigned __int16 *)v16 + 1) < v13 )
          goto LABEL_112;
        v13 += *((unsigned __int16 *)v16 + 1);
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
    v18 = a3 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v18 += *((unsigned __int16 *)v18 + 1) )
    {
      if ( *v18 == 18 )
      {
        if ( v13 + *((unsigned __int16 *)v18 + 1) < v13 )
          goto LABEL_112;
        v13 += *((unsigned __int16 *)v18 + 1);
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
    v20 = a4 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a4 + 2); v20 += *((unsigned __int16 *)v20 + 1) )
    {
      if ( *v20 == 19 )
      {
        if ( v13 + *((unsigned __int16 *)v20 + 1) < v13 )
          goto LABEL_112;
        v13 += *((unsigned __int16 *)v20 + 1);
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
LABEL_112:
    v24 = -1073741675;
  }
  else
  {
    v22 = (v13 + 3) & 0xFFFFFFFC;
    Heap = (ACL *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v22);
    v10 = Heap;
    if ( Heap )
    {
      Acl = RtlCreateAcl(Heap, v22, v11);
      v24 = Acl;
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v10, &FirstFree) )
        {
          if ( a1 && (v25 = (unsigned __int16 *)(a1 + 8), v26 = 0, *((_WORD *)a1 + 2)) )
          {
            v27 = (char *)FirstFree;
            do
            {
              v38 = *(_BYTE *)v25;
              if ( *(_BYTE *)v25 >= 2u && (v38 <= 3u || v38 > 6u && (v38 <= 8u || (unsigned __int8)(v38 - 13) <= 3u)) )
              {
                memmove(v27, v25, v25[1]);
                ++v10->AceCount;
                v27 += v25[1];
              }
              ++v26;
              v25 = (unsigned __int16 *)((char *)v25 + v25[1]);
            }
            while ( v26 < *((unsigned __int16 *)a1 + 2) );
            v24 = Acl;
          }
          else
          {
            v27 = (char *)FirstFree;
          }
          if ( a2 )
          {
            v35 = (unsigned __int16 *)(a2 + 8);
            for ( ii = 0; ii < *((unsigned __int16 *)a2 + 2); v35 = (unsigned __int16 *)((char *)v35 + v35[1]) )
            {
              if ( *(_BYTE *)v35 == 17 )
              {
                memmove(v27, v35, v35[1]);
                ++v10->AceCount;
                v27 += v35[1];
              }
              ++ii;
            }
          }
          if ( a5 )
          {
            v28 = (unsigned __int16 *)(a5 + 8);
            for ( jj = 0; jj < *((unsigned __int16 *)a5 + 2); v28 = (unsigned __int16 *)((char *)v28 + v28[1]) )
            {
              if ( *(_BYTE *)v28 == 20 )
              {
                memmove(v27, v28, v28[1]);
                ++v10->AceCount;
                v27 += v28[1];
              }
              ++jj;
            }
          }
          if ( a3 )
          {
            v30 = (unsigned __int16 *)(a3 + 8);
            for ( kk = 0; kk < *((unsigned __int16 *)a3 + 2); v30 = (unsigned __int16 *)((char *)v30 + v30[1]) )
            {
              if ( *(_BYTE *)v30 == 18 )
              {
                memmove(v27, v30, v30[1]);
                ++v10->AceCount;
                v27 += v30[1];
              }
              ++kk;
            }
          }
          if ( a4 )
          {
            v32 = (unsigned __int16 *)(a4 + 8);
            if ( *((_WORD *)a4 + 2) )
            {
              do
              {
                if ( *(_BYTE *)v32 == 19 )
                {
                  memmove(v27, v32, v32[1]);
                  ++v10->AceCount;
                  v27 += v32[1];
                }
                ++v7;
                v32 = (unsigned __int16 *)((char *)v32 + v32[1]);
              }
              while ( v7 < *((unsigned __int16 *)a4 + 2) );
            }
          }
          goto LABEL_30;
        }
        v24 = -1073741699;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
      v10 = 0LL;
    }
    else
    {
      v24 = -1073741801;
    }
  }
LABEL_30:
  *a6 = v10;
  return v24;
}
