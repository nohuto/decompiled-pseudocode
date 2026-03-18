/*
 * XREFs of RtlpCombineAcls @ 0x140487120
 * Callers:
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlFirstFreeAce @ 0x1404C9220 (RtlFirstFreeAce.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
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
  unsigned int v7; // r14d
  ACL *v12; // r15
  ULONG v13; // ebx
  unsigned int v15; // r8d
  unsigned __int8 *v16; // r9
  unsigned int i; // r10d
  unsigned __int8 *v18; // rcx
  unsigned int j; // r10d
  unsigned __int8 *v20; // rcx
  unsigned int k; // r10d
  unsigned __int8 *v22; // rcx
  unsigned int m; // r10d
  unsigned __int8 *v24; // rcx
  unsigned int n; // r10d
  ULONG v26; // edi
  ACL *PoolWithTag; // rax
  unsigned int v28; // esi
  unsigned __int16 *v29; // rbx
  unsigned int v30; // ebp
  PACE v31; // rdi
  unsigned __int16 *v32; // rbx
  unsigned int ii; // ebp
  unsigned __int16 *v34; // rbx
  unsigned int jj; // ebp
  unsigned __int16 *v36; // rbx
  unsigned int kk; // ebp
  unsigned __int16 *v38; // rbx
  PACE Ace; // [rsp+20h] [rbp-48h] BYREF
  NTSTATUS Acl; // [rsp+70h] [rbp+8h]

  v7 = 0;
  Ace = 0LL;
  v12 = 0LL;
  v13 = 2;
  if ( !a1 && !a2 && !a3 && !a4 && !a5 )
  {
    *a6 = 0LL;
    return 0LL;
  }
  v15 = 8;
  if ( a1 )
  {
    v16 = a1 + 8;
    for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v16 += *((unsigned __int16 *)v16 + 1) )
    {
      if ( *v16 <= 0x10u )
      {
        switch ( *v16 )
        {
          case 2u:
          case 3u:
          case 7u:
          case 8u:
          case 0xDu:
          case 0xEu:
          case 0xFu:
          case 0x10u:
            if ( v15 + *((unsigned __int16 *)v16 + 1) < v15 )
              goto LABEL_90;
            v15 += *((unsigned __int16 *)v16 + 1);
            if ( a7 )
              *a7 |= 8u;
            if ( *a1 > v13 )
              v13 = *a1;
            break;
          default:
            break;
        }
      }
      ++i;
    }
  }
  if ( a2 )
  {
    v18 = a2 + 8;
    for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v18 += *((unsigned __int16 *)v18 + 1) )
    {
      if ( *v18 == 17 )
      {
        if ( v15 + *((unsigned __int16 *)v18 + 1) < v15 )
          goto LABEL_90;
        v15 += *((unsigned __int16 *)v18 + 1);
        if ( a7 )
          *a7 |= 0x10u;
        if ( *a2 > v13 )
          v13 = *a2;
      }
      ++j;
    }
  }
  if ( a5 )
  {
    v20 = a5 + 8;
    for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v20 += *((unsigned __int16 *)v20 + 1) )
    {
      if ( *v20 == 20 )
      {
        if ( v15 + *((unsigned __int16 *)v20 + 1) < v15 )
          goto LABEL_90;
        v15 += *((unsigned __int16 *)v20 + 1);
        if ( a7 )
          *a7 |= 0x80u;
        if ( *a5 > v13 )
          v13 = *a5;
      }
      ++k;
    }
  }
  if ( a3 )
  {
    v22 = a3 + 8;
    for ( m = 0; m < *((unsigned __int16 *)a3 + 2); v22 += *((unsigned __int16 *)v22 + 1) )
    {
      if ( *v22 == 18 )
      {
        if ( v15 + *((unsigned __int16 *)v22 + 1) < v15 )
          goto LABEL_90;
        v15 += *((unsigned __int16 *)v22 + 1);
        if ( a7 )
          *a7 |= 0x20u;
        if ( *a3 > v13 )
          v13 = *a3;
      }
      ++m;
    }
  }
  if ( a4 )
  {
    v24 = a4 + 8;
    for ( n = 0; n < *((unsigned __int16 *)a4 + 2); v24 += *((unsigned __int16 *)v24 + 1) )
    {
      if ( *v24 == 19 )
      {
        if ( v15 + *((unsigned __int16 *)v24 + 1) < v15 )
          goto LABEL_90;
        v15 += *((unsigned __int16 *)v24 + 1);
        if ( a7 )
          *a7 |= 0x40u;
        if ( *a4 > v13 )
          v13 = *a4;
      }
      ++n;
    }
  }
  if ( v15 + 3 < v15 )
  {
LABEL_90:
    v28 = -1073741675;
  }
  else
  {
    v26 = (v15 + 3) & 0xFFFFFFFC;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v26, 0x64536553u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      Acl = RtlCreateAcl(PoolWithTag, v26, v13);
      v28 = Acl;
      if ( Acl >= 0 )
      {
        if ( RtlFirstFreeAce(v12, &Ace) )
        {
          if ( a1 && (v29 = (unsigned __int16 *)(a1 + 8), v30 = 0, *((_WORD *)a1 + 2)) )
          {
            v31 = Ace;
            do
            {
              if ( *(unsigned __int8 *)v29 <= 0x10u )
              {
                switch ( *(_BYTE *)v29 )
                {
                  case 2:
                  case 3:
                  case 7:
                  case 8:
                  case 0xD:
                  case 0xE:
                  case 0xF:
                  case 0x10:
                    memmove(v31, v29, v29[1]);
                    ++v12->AceCount;
                    v31 = (PACE)((char *)v31 + v29[1]);
                    break;
                  default:
                    break;
                }
              }
              ++v30;
              v29 = (unsigned __int16 *)((char *)v29 + v29[1]);
            }
            while ( v30 < *((unsigned __int16 *)a1 + 2) );
            v28 = Acl;
          }
          else
          {
            v31 = Ace;
          }
          if ( a2 )
          {
            v32 = (unsigned __int16 *)(a2 + 8);
            for ( ii = 0; ii < *((unsigned __int16 *)a2 + 2); v32 = (unsigned __int16 *)((char *)v32 + v32[1]) )
            {
              if ( *(_BYTE *)v32 == 17 )
              {
                memmove(v31, v32, v32[1]);
                ++v12->AceCount;
                v31 = (PACE)((char *)v31 + v32[1]);
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
                memmove(v31, v34, v34[1]);
                ++v12->AceCount;
                v31 = (PACE)((char *)v31 + v34[1]);
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
                memmove(v31, v36, v36[1]);
                ++v12->AceCount;
                v31 = (PACE)((char *)v31 + v36[1]);
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
                  memmove(v31, v38, v38[1]);
                  ++v12->AceCount;
                  v31 = (PACE)((char *)v31 + v38[1]);
                }
                ++v7;
                v38 = (unsigned __int16 *)((char *)v38 + v38[1]);
              }
              while ( v7 < *((unsigned __int16 *)a4 + 2) );
            }
          }
          goto LABEL_91;
        }
        v28 = -1073741699;
      }
      ExFreePoolWithTag(v12, 0);
      v12 = 0LL;
    }
    else
    {
      v28 = -1073741801;
    }
  }
LABEL_91:
  *a6 = v12;
  return v28;
}
