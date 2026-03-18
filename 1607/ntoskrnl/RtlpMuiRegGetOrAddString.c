/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x1405615A4
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x140560D70 (_RtlpMuiRegValidateInstalled.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1405614BC (_RtlpMuiRegInitAnyLanguage.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1406E6564 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x1406E6F18 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x1406E6FE0 (RtlpMuiRegGetLanguageSpec.c)
 *     _RtlMuiRegAddLIPParent @ 0x1406E74C4 (_RtlMuiRegAddLIPParent.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x14056163C (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1406E7098 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  bool v9; // bl
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_12;
  v9 = (*(_BYTE *)a1 & 2) != 0;
  if ( !(_BYTE)a3 || (v10 = 1, (*(_BYTE *)a1 & 2) == 0) )
    v10 = 0;
  LOBYTE(a3) = v10;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v16);
  if ( v4 >= 0 )
    goto LABEL_7;
  if ( v6 )
  {
    LOBYTE(v12) = !v9;
    v14 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), v11, v16, v12);
    if ( v14 )
    {
      *(_DWORD *)a1 |= 2u;
      LOBYTE(v15) = 1;
      *(_QWORD *)(a1 + 32) = v14;
      v4 = RtlpMuiRegGetOrAddStringToPool(v14, a2, v15, 0LL);
      if ( v4 >= 0 )
      {
LABEL_7:
        result = 0LL;
        goto LABEL_8;
      }
    }
    result = 3221225495LL;
  }
  else
  {
LABEL_12:
    result = 3221225485LL;
  }
LABEL_8:
  if ( a4 )
    *a4 = v4;
  return result;
}
