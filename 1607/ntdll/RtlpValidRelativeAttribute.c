/*
 * XREFs of RtlpValidRelativeAttribute @ 0x1800E291C
 * Callers:
 *     RtlpValidAttributeAce @ 0x1800E27A8 (RtlpValidAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x18007053C (RtlStringCbLengthW.c)
 */

char __fastcall RtlpValidRelativeAttribute(unsigned int *a1, unsigned int a2)
{
  int v2; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  int v8; // eax
  unsigned int *m; // r8
  __int64 v10; // rdx
  unsigned int *k; // rdx
  int v12; // r9d
  unsigned int *j; // r8
  __int64 v14; // rdx
  unsigned int v15; // r11d
  int v16; // ebp
  __int64 v17; // rcx
  unsigned int *i; // rdi
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
  {
    if ( a2 >= 0x14 && !*((_WORD *)a1 + 3) && (a1[2] & 0xFFC0) == 0 )
    {
      if ( a1[3] )
      {
        if ( a2 >= *a1 )
        {
          v5 = a2 - *a1;
          if ( v5 >= 4 && (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v5, &v20) >= 0 )
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
                    v16 = 0;
                    if ( v6 )
                    {
                      while ( 1 )
                      {
                        v17 = a1[v16 + 4];
                        if ( a2 < (unsigned int)v17
                          || a2 - (unsigned int)v17 < 2
                          || (int)RtlStringCbLengthW((unsigned int *)((char *)a1 + v17), a2 - (unsigned int)v17, &v20) < 0 )
                        {
                          break;
                        }
                        if ( ++v16 >= a1[3] )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 5:
                    v12 = 0;
                    if ( v6 )
                    {
                      for ( j = a1 + 4; ; ++j )
                      {
                        v14 = *j;
                        if ( a2 < (unsigned int)v14 )
                          break;
                        if ( a2 - (unsigned int)v14 < 4 )
                          break;
                        v15 = *(unsigned int *)((char *)a1 + v14);
                        if ( !v15 || (int)v14 + 4 < (unsigned int)v14 || a2 - ((_DWORD)v14 + 4) < v15 )
                          break;
                        if ( ++v12 >= v6 )
                          return 1;
                      }
                      return 0;
                    }
                    return 1;
                  case 6:
                    if ( v6 )
                    {
                      for ( k = a1 + 4; a2 >= *k && a2 - *k >= 8 && *(_QWORD *)((char *)a1 + *k) <= 1uLL; ++k )
                      {
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
  }
  return 0;
}
