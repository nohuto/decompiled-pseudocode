/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1406852D8
 * Callers:
 *     RtlpValidAttributeAce @ 0x1406850E4 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140085E34 (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned int *m; // r8
  __int64 v10; // rcx
  unsigned int *k; // r8
  __int64 v12; // rcx
  int v13; // r9d
  unsigned int *j; // r8
  __int64 v15; // rcx
  unsigned int v16; // r11d
  int v17; // ebp
  __int64 v18; // rcx
  unsigned int *i; // rdi
  size_t pcbLength; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        v5 = *a1;
        if ( a2 >= (unsigned int)v5
          && a2 - (unsigned int)v5 >= 4
          && RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v5), a2 - (unsigned int)v5, &pcbLength) >= 0 )
        {
          v6 = a1[3];
          v7 = 4LL * v6;
          if ( v7 <= 0xFFFFFFFF && a2 >= 0x10 && a2 - 16 >= (unsigned int)v7 )
          {
            v8 = *((unsigned __int16 *)a1 + 2);
            if ( *((_WORD *)a1 + 2) )
            {
              if ( *((unsigned __int16 *)a1 + 2) <= 2u )
              {
                if ( v6 )
                {
                  for ( i = a1 + 4; a2 >= *i && a2 - *i >= 8; ++i )
                  {
                    if ( ++v2 >= v6 )
                      return 1;
                  }
                  return 0;
                }
                return 1;
              }
              switch ( v8 )
              {
                case 3:
                  v17 = 0;
                  if ( v6 )
                  {
                    while ( 1 )
                    {
                      v18 = a1[v17 + 4];
                      if ( a2 < (unsigned int)v18
                        || a2 - (unsigned int)v18 < 2
                        || RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v18), a2 - (unsigned int)v18, &pcbLength) < 0 )
                      {
                        break;
                      }
                      if ( ++v17 >= a1[3] )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 5:
                  v13 = 0;
                  if ( v6 )
                  {
                    for ( j = a1 + 4; ; ++j )
                    {
                      v15 = *j;
                      if ( a2 < (unsigned int)v15 )
                        break;
                      if ( a2 - (unsigned int)v15 < 4 )
                        break;
                      v16 = *(unsigned int *)((char *)a1 + v15);
                      if ( !v16 || (int)v15 + 4 < (unsigned int)v15 || a2 - ((_DWORD)v15 + 4) < v16 )
                        break;
                      if ( ++v13 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 6:
                  if ( v6 )
                  {
                    for ( k = a1 + 4; ; ++k )
                    {
                      v12 = *k;
                      if ( a2 < (unsigned int)v12 || a2 - (unsigned int)v12 < 8 || *(_QWORD *)((char *)a1 + v12) > 1uLL )
                        break;
                      if ( ++v2 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
                case 16:
                  if ( v6 )
                  {
                    for ( m = a1 + 4; ; ++m )
                    {
                      v10 = *m;
                      if ( a2 < (unsigned int)v10
                        || a2 - (unsigned int)v10 < 4
                        || (int)v10 + 4 < (unsigned int)v10
                        || a2 - ((_DWORD)v10 + 4) < *(unsigned int *)((char *)a1 + v10) )
                      {
                        break;
                      }
                      if ( ++v2 >= v6 )
                        return 1;
                    }
                    return 0;
                  }
                  return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
