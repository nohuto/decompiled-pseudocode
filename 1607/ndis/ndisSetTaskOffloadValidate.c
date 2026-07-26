/*
 * XREFs of ndisSetTaskOffloadValidate @ 0x1C00C6E1C
 * Callers:
 *     ndisPreTaskOffloadSet @ 0x1C00C636C (ndisPreTaskOffloadSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisSetTaskOffloadValidate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned int v4; // r9d
  __int64 v5; // rdi
  _DWORD *v6; // rax
  __int64 v7; // rdx
  _DWORD *i; // r8
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rax

  v3 = *(unsigned int *)(a3 + 48);
  v4 = 0;
  v5 = a2;
  if ( !a2 )
    v5 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)v3 >= 0x1C
    && (v6 = *(_DWORD **)(a3 + 40), v6[1] == 28)
    && *v6 == 1
    && (v7 = (unsigned int)v6[3], (unsigned int)v7 <= (unsigned int)v3) )
  {
    if ( (_DWORD)v7 )
    {
      for ( i = (_DWORD *)((char *)v6 + v7); (unsigned int)v7 < 0xFFFFFFE8; i = (_DWORD *)((char *)i + v13) )
      {
        if ( (unsigned __int64)(unsigned int)v7 + 24 > v3 )
          break;
        v9 = i[4];
        v10 = v9 + v7;
        if ( v9 + (int)v7 < (unsigned int)v7 )
          break;
        if ( v10 > (unsigned int)v3 )
          break;
        v11 = v10 + 20;
        if ( v11 < 0x14 || v11 > (unsigned int)v3 )
          break;
        if ( i[2] == 2 )
        {
          v12 = *(_QWORD *)(v5 + 4152);
          if ( v9 == 16 && i[6] <= *(_DWORD *)(v12 + 228) )
          {
            if ( i[7] < *(_DWORD *)(v12 + 232) )
              v4 = -1073676267;
          }
          else
          {
            v4 = -1073676267;
          }
        }
        v13 = (unsigned int)i[3];
        if ( !(_DWORD)v13 )
          return v4;
        LODWORD(v7) = v13 + v7;
      }
      return (unsigned int)-1073676267;
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
