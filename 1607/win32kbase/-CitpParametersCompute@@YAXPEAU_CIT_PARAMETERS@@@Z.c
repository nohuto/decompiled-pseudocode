/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005165C
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C004F274 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C0051240 (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00515B0 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1)
{
  _BOOL8 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx
  bool v6; // zf
  bool v7; // al
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax
  char v16; // al

  v2 = *((_BYTE *)a1 + 87) && *((_BYTE *)a1 + 86);
  v3 = *(_DWORD *)a1;
  *((_WORD *)a1 + 42) = 1;
  if ( (v3 & 2) != 0 )
  {
    *((_BYTE *)a1 + 85) = 1;
  }
  else if ( (v3 & 1) != 0 )
  {
    v16 = *((_BYTE *)a1 + 85);
    if ( v2 )
      v16 = 1;
    *((_BYTE *)a1 + 85) = v16;
  }
  if ( (RtlGetSuiteMask(v2) & 0x10) != 0 && (((*(_BYTE *)a1 & 4) == 0) & ((RtlGetSuiteMask(v4) & 0x100) == 0)) != 0 )
    *((_BYTE *)a1 + 84) = 0;
  if ( !*((_BYTE *)a1 + 84) )
    *((_BYTE *)a1 + 85) = 0;
  v5 = *((_DWORD *)a1 + 18);
  v6 = *((_BYTE *)a1 + 85) == 0;
  *((_BYTE *)a1 + 89) = (v5 & 3) == 3;
  v7 = !v6 || (v5 & 3) == 3;
  *((_BYTE *)a1 + 88) = v7;
  if ( !v7 )
    *((_DWORD *)a1 + 1) = 0;
  v8 = *((_QWORD *)a1 + 3);
  v6 = (v5 & 5) == 1;
  v9 = *((_QWORD *)a1 + 4);
  *((_BYTE *)a1 + 90) = !v6;
  v10 = (v8 + v9 - 1) / v9;
  if ( v10 >= 0xFF )
  {
    LODWORD(v10) = 255;
    *((_QWORD *)a1 + 4) = v8 / 0xFF;
  }
  v11 = *((_DWORD *)a1 + 19);
  v12 = v10 + 7;
  v13 = *((_DWORD *)a1 + 20);
  *((_DWORD *)a1 + 23) = v12 >> 3;
  v14 = (v11 + v13 - 1) / v13;
  if ( v14 >= 0xFF )
  {
    LODWORD(v14) = 255;
    *((_DWORD *)a1 + 20) = v11 / 0xFF;
  }
  v15 = ((unsigned int)(v14 + 7) >> 3) + 120;
  if ( v15 < 0x80 )
    v15 = 128;
  *((_DWORD *)a1 + 24) = v15;
}
