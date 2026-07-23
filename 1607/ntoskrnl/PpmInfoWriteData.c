/*
 * XREFs of PpmInfoWriteData @ 0x1403F79D0
 * Callers:
 *     PpmInfoAdjustSetting @ 0x1403F7920 (PpmInfoAdjustSetting.c)
 * Callees:
 *     <none>
 */

bool __fastcall PpmInfoWriteData(unsigned __int8 *a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  char v6; // bl
  char v7; // si
  unsigned int v8; // r11d
  _BYTE *v10; // r8
  unsigned int v11; // eax
  int v12; // edx
  unsigned int v14; // ecx
  _BYTE *v15; // rdx
  __int64 v16; // r14
  __int64 v17; // rdi
  _BYTE *v18; // rdx
  __int64 v19; // r8

  v5 = *(_DWORD *)(a4 + 32);
  v6 = 0;
  v7 = *(_BYTE *)(a4 + 37);
  v8 = a2;
  v10 = (_BYTE *)(a5 + *(_QWORD *)(a4 + 24) + v5 * a3);
  if ( (v7 & 8) != 0 )
  {
    v14 = 0;
    if ( a2 >= v5 )
      v8 = *(_DWORD *)(a4 + 32);
    if ( v8 )
    {
      v15 = v10;
      v16 = v8;
      v17 = a1 - v10;
      do
      {
        v14 = (unsigned __int8)v15[v17];
        if ( v14 < *(_DWORD *)(a4 + 16) )
        {
          v14 = *(_DWORD *)(a4 + 16);
        }
        else if ( v14 > *(_DWORD *)(a4 + 20) )
        {
          v14 = *(_DWORD *)(a4 + 20);
          if ( (*(_BYTE *)(a4 + 37) & 0x10) != 0 )
            v14 = *(_DWORD *)(a4 + 16);
        }
        if ( (unsigned __int8)*v15 != v14 )
        {
          v6 = 1;
          *v15 = v14;
        }
        ++v15;
        --v16;
      }
      while ( v16 );
    }
    if ( v8 < v5 )
    {
      v18 = &v10[v8];
      v19 = v5 - v8;
      do
      {
        if ( (unsigned __int8)*v18 != v14 )
        {
          v6 = 1;
          *v18 = v14;
        }
        ++v18;
        --v19;
      }
      while ( v19 );
    }
  }
  else
  {
    if ( v5 == 1 )
    {
      v11 = *a1;
      v12 = (unsigned __int8)*v10;
      if ( v11 < *(_DWORD *)(a4 + 16) )
      {
        v11 = *(_DWORD *)(a4 + 16);
      }
      else if ( v11 > *(_DWORD *)(a4 + 20) )
      {
        v11 = *(_DWORD *)(a4 + 20);
        if ( (v7 & 0x10) != 0 )
          v11 = *(_DWORD *)(a4 + 16);
      }
      *v10 = v11;
    }
    else
    {
      v11 = *(_DWORD *)a1;
      v12 = *(_DWORD *)v10;
      if ( *(_DWORD *)a1 < *(_DWORD *)(a4 + 16) )
      {
        v11 = *(_DWORD *)(a4 + 16);
      }
      else if ( v11 > *(_DWORD *)(a4 + 20) )
      {
        v11 = *(_DWORD *)(a4 + 20);
        if ( (v7 & 0x10) != 0 )
          v11 = *(_DWORD *)(a4 + 16);
      }
      *(_DWORD *)v10 = v11;
    }
    return v12 != v11;
  }
  return v6;
}
