/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C00685CC
 * Callers:
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C0065164 (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C0067EF8 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0068118 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C006825C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0049DF0 (TraceLoggingProviderEnabled.c)
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1, UCHAR a2)
{
  struct _CIT_PARAMETERS *v2; // r10
  int v3; // r11d
  __int64 v4; // rax
  int v5; // edx
  char v6; // al
  int v7; // ecx
  char v8; // al
  unsigned __int64 v9; // r8
  bool v10; // zf
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax

  v2 = a1;
  if ( !*((_BYTE *)a1 + 88) || (v3 = 1, !*((_BYTE *)a1 + 87)) )
    v3 = 0;
  v4 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  *(_WORD *)((char *)a1 + 85) = 0;
  if ( (v4 & 0xE00000000800LL) != 0 || TraceLoggingProviderEnabled(a1, a2, 0xE00000000800uLL) )
    *((_BYTE *)v2 + 85) = 1;
  v5 = *(_DWORD *)v2;
  if ( (*(_DWORD *)v2 & 2) != 0 || (v5 & 1) != 0 && v3 )
  {
    *((_BYTE *)v2 + 84) = 1;
    *((_BYTE *)v2 + 86) = 1;
  }
  else if ( *((_BYTE *)v2 + 85) )
  {
    *((_BYTE *)v2 + 84) = 1;
  }
  else
  {
    *((_BYTE *)v2 + 84) = 0;
  }
  if ( !*((_BYTE *)v2 + 84) )
    goto LABEL_30;
  v6 = *((_BYTE *)v2 + 84);
  if ( (v5 & 4) == 0 && (MEMORY[0x7FFE02D0] & 0x110) == 16 )
    v6 = 0;
  *((_BYTE *)v2 + 84) = v6;
  if ( !v6 )
LABEL_30:
    *((_BYTE *)v2 + 86) = 0;
  v7 = *((_DWORD *)v2 + 18);
  *((_BYTE *)v2 + 90) = (v7 & 3) == 3;
  if ( *((_BYTE *)v2 + 86) || (v8 = 0, (v7 & 3) == 3) )
    v8 = 1;
  *((_BYTE *)v2 + 89) = v8;
  if ( !v8 )
    *((_DWORD *)v2 + 1) = 0;
  v9 = *((_QWORD *)v2 + 3);
  v10 = (v7 & 5) == 1;
  v11 = *((_QWORD *)v2 + 4);
  *((_BYTE *)v2 + 91) = !v10;
  v12 = (v9 + v11 - 1) / v11;
  if ( v12 >= 0xFF )
  {
    LODWORD(v12) = 255;
    *((_QWORD *)v2 + 4) = v9 / 0xFF;
  }
  v13 = *((_DWORD *)v2 + 19);
  v14 = v12 + 7;
  v15 = *((_DWORD *)v2 + 20);
  *((_DWORD *)v2 + 23) = v14 >> 3;
  v16 = (v13 + v15 - 1) / v15;
  if ( v16 >= 0xFF )
  {
    LODWORD(v16) = 255;
    *((_DWORD *)v2 + 20) = v13 / 0xFF;
  }
  v17 = ((unsigned int)(v16 + 7) >> 3) + 120;
  if ( v17 < 0x80 )
    v17 = 128;
  *((_DWORD *)v2 + 24) = v17;
}
