/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x18001E2C8
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18001E1D8 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001E948 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18004A0F0 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800E6504 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x1800E74A0 (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x1800E888C (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1800E8DC4 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1800E999C (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18001F2D0 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x1800E7B50 (RtlpMuiRegGrowStringPool.c)
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
    goto LABEL_8;
  v9 = (*(_BYTE *)a1 & 2) != 0;
  if ( !(_BYTE)a3 || (v10 = 1, (*(_BYTE *)a1 & 2) == 0) )
    v10 = 0;
  LOBYTE(a3) = v10;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v16);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  LOBYTE(v12) = !v9;
  v14 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), v11, v16, v12);
  if ( v14
    && (*(_DWORD *)a1 |= 2u,
        LOBYTE(v15) = 1,
        *(_QWORD *)(a1 + 32) = v14,
        v4 = RtlpMuiRegGetOrAddStringToPool(v14, a2, v15, 0LL),
        v4 >= 0) )
  {
LABEL_12:
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
LABEL_9:
  if ( a4 )
    *a4 = v4;
  return result;
}
