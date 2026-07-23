/*
 * XREFs of RtlpCombineAcls @ 0x14041D100
 * Callers:
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlFirstFreeAce @ 0x14041F930 (RtlFirstFreeAce.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
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
  unsigned __int8 *v7; // r12
  unsigned int v8; // edi
  unsigned int v10; // r8d
  unsigned __int8 *v11; // r13
  ACL *v14; // rbp
  unsigned int v15; // edx
  unsigned __int8 *v16; // rcx
  unsigned int j; // r11d
  ULONG v18; // r14d
  ACL *PoolWithTag; // rax
  NTSTATUS Acl; // eax
  unsigned __int16 *v21; // rsi
  unsigned int v22; // r14d
  PACE v23; // r12
  PACE v24; // rbx
  unsigned int v25; // ebx
  unsigned __int8 *v27; // rcx
  unsigned int m; // r9d
  unsigned __int16 *v29; // rsi
  unsigned int jj; // r14d
  unsigned __int8 *v31; // rcx
  unsigned int k; // r9d
  unsigned __int8 *v33; // rcx
  unsigned int n; // r9d
  unsigned __int16 *v35; // rsi
  unsigned int ii; // r14d
  unsigned __int16 *v37; // rsi
  unsigned __int8 *v38; // r9
  unsigned int i; // r11d
  unsigned __int16 *v40; // r14
  unsigned int v41; // edx
  PACE v42; // r12
  unsigned int v43; // [rsp+20h] [rbp-48h]
  PACE Ace; // [rsp+28h] [rbp-40h] BYREF
  ULONG AclRevision; // [rsp+70h] [rbp+8h]
  ULONG AclRevisiona; // [rsp+70h] [rbp+8h]

  v7 = a5;
  v8 = 0;
  Ace = 0LL;
  v10 = 2;
  v11 = a4;
  AclRevision = 2;
  v14 = 0LL;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 )
  {
    v15 = 8;
    if ( a1 )
    {
      v38 = a1 + 8;
      for ( i = 0; i < *((unsigned __int16 *)a1 + 2); v38 += *((unsigned __int16 *)v38 + 1) )
      {
        if ( *v38 <= 0x10u )
        {
          switch ( *v38 )
          {
            case 2u:
            case 3u:
            case 7u:
            case 8u:
            case 0xDu:
            case 0xEu:
            case 0xFu:
            case 0x10u:
              if ( v15 + *((unsigned __int16 *)v38 + 1) < v15 )
                goto LABEL_85;
              v15 += *((unsigned __int16 *)v38 + 1);
              if ( a7 )
                *a7 |= 8u;
              if ( *a1 > v10 )
              {
                v10 = *a1;
                AclRevision = v10;
              }
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
      v16 = a2 + 8;
      for ( j = 0; j < *((unsigned __int16 *)a2 + 2); v16 += *((unsigned __int16 *)v16 + 1) )
      {
        if ( *v16 == 17 )
        {
          if ( v15 + *((unsigned __int16 *)v16 + 1) < v15 )
            goto LABEL_85;
          v15 += *((unsigned __int16 *)v16 + 1);
          if ( a7 )
            *a7 |= 0x10u;
          if ( *a2 > v10 )
          {
            v10 = *a2;
            AclRevision = v10;
          }
        }
        ++j;
      }
    }
    if ( a5 )
    {
      v31 = a5 + 8;
      for ( k = 0; k < *((unsigned __int16 *)a5 + 2); v31 += *((unsigned __int16 *)v31 + 1) )
      {
        if ( *v31 == 20 )
        {
          if ( v15 + *((unsigned __int16 *)v31 + 1) < v15 )
            goto LABEL_85;
          v15 += *((unsigned __int16 *)v31 + 1);
          if ( a7 )
            *a7 |= 0x80u;
          if ( *a5 > v10 )
          {
            v10 = *a5;
            AclRevision = v10;
          }
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
          if ( v15 + *((unsigned __int16 *)v27 + 1) < v15 )
            goto LABEL_85;
          v15 += *((unsigned __int16 *)v27 + 1);
          if ( a7 )
            *a7 |= 0x20u;
          if ( *a3 > v10 )
            v10 = *a3;
          AclRevision = v10;
        }
        ++m;
      }
    }
    if ( v11 )
    {
      v33 = v11 + 8;
      for ( n = 0; n < *((unsigned __int16 *)v11 + 2); v33 += *((unsigned __int16 *)v33 + 1) )
      {
        if ( *v33 == 19 )
        {
          if ( v15 + *((unsigned __int16 *)v33 + 1) < v15 )
            goto LABEL_85;
          v15 += *((unsigned __int16 *)v33 + 1);
          if ( a7 )
            *a7 |= 0x40u;
          if ( *v11 > v10 )
            v10 = *v11;
          AclRevision = v10;
        }
        ++n;
      }
    }
    if ( v15 + 3 < v15 )
    {
LABEL_85:
      v25 = -1073741675;
    }
    else
    {
      v18 = (v15 + 3) & 0xFFFFFFFC;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v18, 0x64536553u);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        Acl = RtlCreateAcl(PoolWithTag, v18, AclRevision);
        AclRevisiona = Acl;
        if ( Acl < 0 )
        {
          v25 = Acl;
        }
        else
        {
          if ( RtlFirstFreeAce(v14, &Ace) )
          {
            if ( a1 )
            {
              v40 = (unsigned __int16 *)(a1 + 8);
              v41 = 0;
              v43 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                v42 = Ace;
                do
                {
                  if ( *(unsigned __int8 *)v40 <= 0x10u )
                  {
                    switch ( *(_BYTE *)v40 )
                    {
                      case 2:
                      case 3:
                      case 7:
                      case 8:
                      case 0xD:
                      case 0xE:
                      case 0xF:
                      case 0x10:
                        memmove(v42, v40, v40[1]);
                        ++v14->AceCount;
                        v41 = v43;
                        v42 = (PACE)((char *)v42 + v40[1]);
                        break;
                      default:
                        break;
                    }
                  }
                  ++v41;
                  v40 = (unsigned __int16 *)((char *)v40 + v40[1]);
                  v43 = v41;
                }
                while ( v41 < *((unsigned __int16 *)a1 + 2) );
                v11 = a4;
                Ace = v42;
                v7 = a5;
              }
            }
            if ( a2 )
            {
              v21 = (unsigned __int16 *)(a2 + 8);
              v22 = 0;
              if ( *((_WORD *)a2 + 2) )
              {
                v23 = Ace;
                do
                {
                  if ( *(_BYTE *)v21 == 17 )
                  {
                    memmove(v23, v21, v21[1]);
                    ++v14->AceCount;
                    v23 = (PACE)((char *)v23 + v21[1]);
                  }
                  ++v22;
                  v21 = (unsigned __int16 *)((char *)v21 + v21[1]);
                }
                while ( v22 < *((unsigned __int16 *)a2 + 2) );
                Ace = v23;
                v7 = a5;
              }
            }
            v24 = Ace;
            if ( v7 )
            {
              v35 = (unsigned __int16 *)(v7 + 8);
              for ( ii = 0; ii < *((unsigned __int16 *)v7 + 2); v35 = (unsigned __int16 *)((char *)v35 + v35[1]) )
              {
                if ( *(_BYTE *)v35 == 20 )
                {
                  memmove(v24, v35, v35[1]);
                  ++v14->AceCount;
                  v24 = (PACE)((char *)v24 + v35[1]);
                }
                ++ii;
              }
            }
            if ( a3 )
            {
              v29 = (unsigned __int16 *)(a3 + 8);
              for ( jj = 0; jj < *((unsigned __int16 *)a3 + 2); v29 = (unsigned __int16 *)((char *)v29 + v29[1]) )
              {
                if ( *(_BYTE *)v29 == 18 )
                {
                  memmove(v24, v29, v29[1]);
                  ++v14->AceCount;
                  v24 = (PACE)((char *)v24 + v29[1]);
                }
                ++jj;
              }
            }
            if ( v11 )
            {
              v37 = (unsigned __int16 *)(v11 + 8);
              if ( *((_WORD *)v11 + 2) )
              {
                do
                {
                  if ( *(_BYTE *)v37 == 19 )
                  {
                    memmove(v24, v37, v37[1]);
                    ++v14->AceCount;
                    v24 = (PACE)((char *)v24 + v37[1]);
                  }
                  ++v8;
                  v37 = (unsigned __int16 *)((char *)v37 + v37[1]);
                }
                while ( v8 < *((unsigned __int16 *)v11 + 2) );
              }
            }
            v25 = AclRevisiona;
            goto LABEL_31;
          }
          v25 = -1073741699;
        }
        ExFreePoolWithTag(v14, 0);
        v14 = 0LL;
      }
      else
      {
        v25 = -1073741801;
      }
    }
LABEL_31:
    *a6 = v14;
    return v25;
  }
  *a6 = 0LL;
  return 0LL;
}
