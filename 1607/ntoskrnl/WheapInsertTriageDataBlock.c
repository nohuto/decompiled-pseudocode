/*
 * XREFs of WheapInsertTriageDataBlock @ 0x1406BB1E0
 * Callers:
 *     WheapCreateLiveTriageDump @ 0x1406BB0E0 (WheapCreateLiveTriageDump.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall WheapInsertTriageDataBlock(_DWORD *a1, const void *a2, unsigned int a3)
{
  size_t v4; // rbp
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // r8d
  unsigned int v10; // esi
  int v11; // r11d
  unsigned int *i; // r10
  unsigned int v13; // edx
  unsigned int v14; // ecx
  char *j; // rax
  unsigned int v16; // esi

  v4 = a3;
  if ( (a1[1038] & 0x800) != 0 )
  {
    v6 = a1[2079];
    v7 = 0;
    if ( v6 )
    {
      v8 = (unsigned int)a1[2078];
      if ( v8 + 16 * (unsigned __int64)v6 <= 0x40000 )
      {
        v9 = 0x40000;
        v10 = 0;
        v11 = 0;
        for ( i = (_DWORD *)((char *)a1 + v8 + 8); ; i += 4 )
        {
          v13 = *i;
          if ( *i != ((*i + 7) & 0xFFFFFFF8) )
            break;
          if ( v13 < v9 )
            v9 = *i;
          if ( ((i[1] + v13 + 7) & 0xFFFFFFF8) > v10 )
            v10 = (i[1] + v13 + 7) & 0xFFFFFFF8;
          if ( ++v11 >= v6 )
          {
            if ( 262140 - v10 >= 0x40000 || (((_DWORD)v4 + 7) & 0xFFFFFFF8) + 16 > 262140 - v10 )
            {
              return (unsigned int)-1073741789;
            }
            else
            {
              memmove((char *)a1 + v9 + 16, (char *)a1 + v9, v10 - v9);
              v14 = 0;
              for ( j = (char *)a1 + (unsigned int)a1[2078]; v14 < a1[2079]; j += 16 )
              {
                *((_DWORD *)j + 2) += 16;
                ++v14;
              }
              ++a1[2079];
              v16 = v10 + 16;
              *(_QWORD *)j = a2;
              *((_DWORD *)j + 2) = v16;
              *((_DWORD *)j + 3) = v4;
              memmove((char *)a1 + v16, a2, v4);
            }
            return v7;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
