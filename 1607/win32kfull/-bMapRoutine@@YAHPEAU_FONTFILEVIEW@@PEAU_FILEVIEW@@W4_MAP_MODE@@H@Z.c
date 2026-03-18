/*
 * XREFs of ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C0113F1C
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1C00C20D4 (EngMapFontFileFDInternal.c)
 *     ?EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z @ 0x1C027BB24 (-EngMapFontFileInternal@@YAH_KPEAPEAKPEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMapRoutine(__int64 *a1, __int64 *a2, int a3, int a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  __int64 result; // rax
  __int64 v14; // rax

  v5 = 0;
  v6 = *a1;
  if ( !v6 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6) )
  {
    if ( v6 == *a2 )
      goto LABEL_4;
    if ( a4 )
    {
      v14 = *a2 - v6;
      if ( v14 < 0 )
        v14 = v6 - *a2;
      if ( v14 == 36000000000LL )
        goto LABEL_4;
    }
    if ( gbGUISetup )
    {
LABEL_4:
      v8 = *((_DWORD *)a2 + 10);
      v5 = 1;
      v9 = *((_DWORD *)a1 + 10);
      if ( (v8 & 0x10) != 0 || (v9 & 0x10) == 0 )
      {
        if ( a3 == 1 )
          a1[2] = a2[2];
        else
          a1[1] = a2[1];
        *((_DWORD *)a1 + 6) = *((_DWORD *)a2 + 6);
        *a1 = *a2;
        a1[4] = a2[4];
        a1[6] = a2[6];
        v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 4 | 1;
        *((_DWORD *)a1 + 10) = v10;
        v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 8;
        *((_DWORD *)a1 + 10) = v11;
        v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 0x10;
        *((_DWORD *)a1 + 10) = v12;
        *((_DWORD *)a1 + 10) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)*((_DWORD *)a2 + 10)) & 0x20;
        a1[9] = a2[9];
        goto LABEL_8;
      }
      v5 = 0;
    }
  }
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
LABEL_8:
  result = v5;
  *((_DWORD *)a1 + 10) ^= (*((_DWORD *)a1 + 10) ^ *((_DWORD *)a2 + 10)) & 2;
  a1[7] = a2[7];
  return result;
}
