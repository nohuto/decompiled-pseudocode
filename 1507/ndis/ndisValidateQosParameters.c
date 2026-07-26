/*
 * XREFs of ndisValidateQosParameters @ 0x1C0043AF0
 * Callers:
 *     ndisMIndicateQosParametersChange @ 0x1C0059ADC (ndisMIndicateQosParametersChange.c)
 *     ndisOidPreQosSetParameters @ 0x1C00C78A0 (ndisOidPreQosSetParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisValidateQosParameters(__int64 a1, char a2, _DWORD *a3, unsigned int a4, unsigned int *a5)
{
  _DWORD *v7; // r11
  int v9; // r12d
  unsigned int v10; // ecx
  int v11; // r15d
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  int v14; // edi
  unsigned int v15; // r9d
  unsigned __int8 *v16; // rdx
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  __int64 v19; // rcx
  char v20; // al
  unsigned __int8 v21; // al
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rdx
  char *v25; // rcx
  __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned int v28; // edx
  int v29; // edx

  if ( a5 )
    *a5 = 52;
  v7 = *(_DWORD **)(a1 + 4976);
  if ( !v7 )
    return 3221225659LL;
  v9 = a3[1];
  if ( (v9 & 2) != 0 )
  {
    v10 = a3[2];
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if ( v10 && (!a2 || v10 <= v7[2]) )
    {
      v15 = 0;
      v16 = (unsigned __int8 *)(a3 + 3);
      while ( 1 )
      {
        v17 = *v16;
        if ( *v16 >= 8u )
          break;
        if ( !_bittest(&v11, v17) )
        {
          v11 |= 1 << v17;
          ++v12;
          if ( *((_BYTE *)a3 + v17 + 28) == 2 )
            ++v13;
        }
        ++v15;
        ++v16;
        if ( v15 >= 8 )
        {
          if ( v12 <= v10 && (!a2 || v13 <= v7[3]) )
          {
            v18 = 0;
            v19 = 0LL;
            do
            {
              if ( _bittest(&v11, v18) )
              {
                v20 = *((_BYTE *)a3 + v19 + 28);
                if ( v20 )
                {
                  if ( v20 != 2 )
                    return 3221291029LL;
                  v21 = *((_BYTE *)a3 + v19 + 20);
                  if ( !v21 )
                    return 3221291029LL;
                  v14 += v21;
                }
                else if ( a2 && (v7[1] & 1) == 0 || *((_BYTE *)a3 + v19 + 20) )
                {
                  return 3221291029LL;
                }
              }
              ++v18;
              ++v19;
            }
            while ( v18 < 8 );
            if ( !v14 || v14 == 100 )
              goto LABEL_32;
          }
          return 3221291029LL;
        }
      }
    }
    return 3221291029LL;
  }
LABEL_32:
  if ( (v9 & 0x20000) == 0 )
    return 0LL;
  v22 = (unsigned int)a3[12];
  v23 = (unsigned int)a3[10];
  v24 = (unsigned int)a3[11];
  v25 = (char *)a3 + v22;
  if ( (_DWORD)v23
    && ((unsigned int)v24 < 0x10
     || (v24 & 3) != 0
     || (unsigned int)v22 < 0x34
     || (unsigned int)v22 > a4
     || ((unsigned __int8)v25 & 3) != 0) )
  {
    return 3221291029LL;
  }
  v26 = (unsigned int)a3[11];
  v27 = v24 * v23;
  if ( v27 > 0xFFFFFFFF )
    return 3221291029LL;
  v28 = v22 + v27;
  if ( v28 < (unsigned int)v22 )
    return 3221291029LL;
  if ( a4 >= v28 )
  {
    v29 = 0;
    if ( (_DWORD)v23 )
    {
      while ( *v25 == -73
           && v25[1]
           && *((_WORD *)v25 + 1) >= 0x10u
           && (*((_DWORD *)v25 + 1) & 0xFF000000) == 0
           && (unsigned __int16)(*((_WORD *)v25 + 4) - 1) <= 5u
           && !*((_WORD *)v25 + 6)
           && *((_WORD *)v25 + 7) < 8u )
      {
        v25 += v26;
        if ( ++v29 >= (unsigned int)v23 )
          return 0LL;
      }
      return 3221291029LL;
    }
    return 0LL;
  }
  if ( a5 )
    *a5 = v28;
  return 3221291028LL;
}
