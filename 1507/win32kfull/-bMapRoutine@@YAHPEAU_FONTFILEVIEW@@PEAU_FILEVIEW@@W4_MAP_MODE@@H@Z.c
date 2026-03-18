/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00EFF7C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00B1728 (EngMapFontFileFDInternal.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027DEF4 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  int v11; // edx
  __int64 result; // rax

  v6 = *a1;
  v7 = 0;
  if ( v6 )
  {
    if ( *((_DWORD *)a1 + 6) != *((_DWORD *)a2 + 6) )
      goto LABEL_12;
    if ( v6 != *a2 )
    {
      if ( !a4 )
        goto LABEL_8;
      v8 = *a2 - v6;
      if ( v8 < 0 )
        v8 = v6 - *a2;
      if ( v8 != 36000000000LL )
      {
LABEL_8:
        if ( !gbGUISetup )
          goto LABEL_12;
      }
    }
  }
  v7 = 1;
  if ( (a1[5] & 0x10) != 0 && (a2[5] & 0x10) == 0 )
  {
    v7 = 0;
LABEL_12:
    if ( a3 == 1 )
    {
      --*((_DWORD *)a1 + 25);
      a1[2] = 0LL;
    }
    else
    {
      --*((_DWORD *)a1 + 24);
      a1[1] = 0LL;
    }
    *((_DWORD *)a1 + 10) &= ~1u;
    goto LABEL_20;
  }
  if ( a3 == 1 )
    a1[2] = a2[2];
  else
    a1[1] = a2[1];
  *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
  *a1 = *a2;
  a1[4] = a2[4];
  a1[6] = a2[6];
  v9 = *((_DWORD *)a1 + 10) ^ (*((_DWORD *)a1 + 10) ^ *((_DWORD *)a2 + 10)) & 4 | 1;
  *((_DWORD *)a1 + 10) = v9;
  v10 = v9 ^ (*((_DWORD *)a2 + 10) ^ v9) & 8;
  *((_DWORD *)a1 + 10) = v10;
  v11 = v10 ^ (*((_DWORD *)a2 + 10) ^ v10) & 0x10;
  *((_DWORD *)a1 + 10) = v11;
  *((_DWORD *)a1 + 10) = v11 ^ (*((_DWORD *)a2 + 10) ^ v11) & 0x20;
  a1[9] = a2[9];
LABEL_20:
  result = v7;
  *((_DWORD *)a1 + 10) ^= (*((_DWORD *)a1 + 10) ^ *((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
