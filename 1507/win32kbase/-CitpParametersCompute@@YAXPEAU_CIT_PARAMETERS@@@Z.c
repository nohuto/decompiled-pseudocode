/*
 * XREFs of ?CitpParametersCompute@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C005A3DC
 * Callers:
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0016EE8 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z @ 0x1C007954C (-CitpContextUserLogon@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_LUID@@@Z.c)
 *     ?CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z @ 0x1C007A47C (-CitpParametersLoad@@YAXPEAU_CIT_PARAMETERS@@PEBG@Z.c)
 *     ?CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z @ 0x1C007A774 (-CitpParametersInitialize@@YAXPEAU_CIT_PARAMETERS@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C0057B24 (TraceLoggingProviderEnabled.c)
 */

void __fastcall CitpParametersCompute(struct _CIT_PARAMETERS *a1, UCHAR a2)
{
  struct _CIT_PARAMETERS *v2; // r10
  int v3; // r11d
  int v4; // edx
  char v5; // al
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx

  v2 = a1;
  if ( !*((_BYTE *)a1 + 76) || (v3 = 1, !*((_BYTE *)a1 + 75)) )
    v3 = 0;
  *(_WORD *)((char *)a1 + 73) = 0;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine & 0xE00000000800LL) != 0
    || TraceLoggingProviderEnabled(a1, a2, 0xE00000000800uLL) )
  {
    *((_BYTE *)v2 + 73) = 1;
  }
  v4 = *(_DWORD *)v2;
  if ( (*(_DWORD *)v2 & 2) != 0 || (v4 & 1) != 0 && v3 )
  {
    *((_BYTE *)v2 + 72) = 1;
    *((_BYTE *)v2 + 74) = 1;
  }
  else if ( *((_BYTE *)v2 + 73) )
  {
    *((_BYTE *)v2 + 72) = 1;
  }
  else
  {
    *((_BYTE *)v2 + 72) = 0;
  }
  if ( !*((_BYTE *)v2 + 72) )
    goto LABEL_19;
  v5 = *((_BYTE *)v2 + 72);
  if ( (v4 & 4) == 0 && (MEMORY[0x7FFE02D0] & 0x110) == 16 )
    v5 = 0;
  *((_BYTE *)v2 + 72) = v5;
  if ( !v5 )
LABEL_19:
    *((_BYTE *)v2 + 74) = 0;
  v6 = *((_QWORD *)v2 + 3);
  v7 = (v6 + *((_QWORD *)v2 + 4) - 1LL) / *((_QWORD *)v2 + 4);
  if ( v7 >= 0xFF )
  {
    LODWORD(v7) = 255;
    *((_QWORD *)v2 + 4) = v6 / 0xFF;
  }
  *((_DWORD *)v2 + 20) = (unsigned int)(v7 + 7) >> 3;
}
