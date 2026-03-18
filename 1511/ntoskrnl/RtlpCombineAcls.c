/*
 * XREFs of RtlpCombineAcls @ 0x140497990
 * Callers:
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpCombineAcls(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        _QWORD *a6,
        _DWORD *a7)
{
  unsigned __int8 *v7; // r12
  unsigned int v8; // ebp
  _BYTE *v12; // r14
  unsigned int v13; // ebx
  __int64 result; // rax
  unsigned int v15; // edi
  unsigned __int8 *v16; // r8
  unsigned int i; // r9d
  unsigned __int8 *v18; // rcx
  unsigned int j; // r9d
  unsigned __int8 *v20; // rcx
  unsigned int k; // r9d
  unsigned __int8 *v22; // rcx
  unsigned int m; // r9d
  unsigned __int8 *v24; // rcx
  unsigned int n; // r9d
  unsigned int v26; // esi
  _BYTE *PoolWithTag; // rax
  unsigned int v28; // esi
  __int64 v29; // rcx
  char *v30; // rdi
  unsigned __int16 *v31; // rbx
  unsigned int v32; // r15d
  unsigned __int16 *v33; // rbx
  unsigned int ii; // r15d
  unsigned __int16 *v35; // rbx
  unsigned int jj; // r15d
  unsigned __int16 *v37; // rbx
  unsigned int kk; // r15d
  unsigned __int16 *v39; // rbx

  v7 = a5;
  v8 = 0;
  v12 = 0LL;
  v13 = 2;
  if ( __PAIR128__((unsigned __int64)a1, (unsigned __int64)a2) != 0 || a3 || a4 || a5 )
  {
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
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x64536553u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( v26 >= 8 )
        {
          if ( v13 - 2 > 2 || v26 > 0xFFFC )
          {
            v28 = -1073741811;
            ExFreePoolWithTag(PoolWithTag, 0);
            v12 = 0LL;
          }
          else
          {
            memset(PoolWithTag, 0, v26);
            v29 = (unsigned __int16)(v15 + 3) & 0xFFFC;
            v30 = 0LL;
            PoolWithTag[1] = 0;
            v28 = 0;
            *((_WORD *)PoolWithTag + 1) = v29;
            *PoolWithTag = v13;
            *((_DWORD *)PoolWithTag + 1) = 0;
            if ( PoolWithTag + 8 <= &PoolWithTag[v29] )
              v30 = PoolWithTag + 8;
            if ( a1 )
            {
              v31 = (unsigned __int16 *)(a1 + 8);
              v32 = 0;
              if ( *((_WORD *)a1 + 2) )
              {
                do
                {
                  if ( *(unsigned __int8 *)v31 <= 0x10u )
                  {
                    switch ( *(_BYTE *)v31 )
                    {
                      case 2:
                      case 3:
                      case 7:
                      case 8:
                      case 0xD:
                      case 0xE:
                      case 0xF:
                      case 0x10:
                        memmove(v30, v31, v31[1]);
                        ++*((_WORD *)v12 + 2);
                        v30 += v31[1];
                        break;
                      default:
                        break;
                    }
                  }
                  ++v32;
                  v31 = (unsigned __int16 *)((char *)v31 + v31[1]);
                }
                while ( v32 < *((unsigned __int16 *)a1 + 2) );
                v7 = a5;
                v28 = 0;
              }
            }
            if ( a2 )
            {
              v33 = (unsigned __int16 *)(a2 + 8);
              for ( ii = 0; ii < *((unsigned __int16 *)a2 + 2); v33 = (unsigned __int16 *)((char *)v33 + v33[1]) )
              {
                if ( *(_BYTE *)v33 == 17 )
                {
                  memmove(v30, v33, v33[1]);
                  ++*((_WORD *)v12 + 2);
                  v30 += v33[1];
                }
                ++ii;
              }
            }
            if ( v7 )
            {
              v35 = (unsigned __int16 *)(v7 + 8);
              for ( jj = 0; jj < *((unsigned __int16 *)v7 + 2); v35 = (unsigned __int16 *)((char *)v35 + v35[1]) )
              {
                if ( *(_BYTE *)v35 == 20 )
                {
                  memmove(v30, v35, v35[1]);
                  ++*((_WORD *)v12 + 2);
                  v30 += v35[1];
                }
                ++jj;
              }
            }
            if ( a3 )
            {
              v37 = (unsigned __int16 *)(a3 + 8);
              for ( kk = 0; kk < *((unsigned __int16 *)a3 + 2); v37 = (unsigned __int16 *)((char *)v37 + v37[1]) )
              {
                if ( *(_BYTE *)v37 == 18 )
                {
                  memmove(v30, v37, v37[1]);
                  ++*((_WORD *)v12 + 2);
                  v30 += v37[1];
                }
                ++kk;
              }
            }
            if ( a4 )
            {
              v39 = (unsigned __int16 *)(a4 + 8);
              if ( *((_WORD *)a4 + 2) )
              {
                do
                {
                  if ( *(_BYTE *)v39 == 19 )
                  {
                    memmove(v30, v39, v39[1]);
                    ++*((_WORD *)v12 + 2);
                    v30 += v39[1];
                  }
                  ++v8;
                  v39 = (unsigned __int16 *)((char *)v39 + v39[1]);
                }
                while ( v8 < *((unsigned __int16 *)a4 + 2) );
              }
            }
          }
        }
        else
        {
          v28 = -1073741789;
          ExFreePoolWithTag(PoolWithTag, 0);
          v12 = 0LL;
        }
      }
      else
      {
        v28 = -1073741801;
      }
    }
    result = v28;
    *a6 = v12;
  }
  else
  {
    *a6 = 0LL;
    return 0LL;
  }
  return result;
}
