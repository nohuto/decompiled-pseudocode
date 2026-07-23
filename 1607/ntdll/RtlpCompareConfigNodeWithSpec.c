/*
 * XREFs of RtlpCompareConfigNodeWithSpec @ 0x180089034
 * Callers:
 *     LdrpGetMUILangConfigNode @ 0x1800890D8 (LdrpGetMUILangConfigNode.c)
 * Callees:
 *     RtlpMuiRegGetLanginfoTypeNSpec @ 0x1800891A0 (RtlpMuiRegGetLanginfoTypeNSpec.c)
 */

char __fastcall RtlpCompareConfigNodeWithSpec(__int64 a1, int a2, __int16 a3, __int16 *a4)
{
  char v4; // r11
  __int16 v7; // dx
  int v8; // eax
  char v10; // al
  __int64 v11; // r8
  int v12[6]; // [rsp+20h] [rbp-18h] BYREF
  __int16 v13; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( !a1 || !a4 )
    return 0;
  v7 = *a4;
  v8 = (unsigned __int16)a4[1] >> 14;
  v12[0] = v8;
  v13 = v7;
  if ( v8 == 2 )
  {
    if ( v7 >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( v7 < (int)*(unsigned __int16 *)(v11 + 6)
        && (int)RtlpMuiRegGetLanginfoTypeNSpec(*(_QWORD *)(v11 + 16) + 28LL * v7, v12, &v13) >= 0 )
      {
        v8 = v12[0];
        v7 = v13;
        goto LABEL_6;
      }
    }
    return 0;
  }
LABEL_6:
  if ( a2 == v8 )
  {
    v10 = v4;
    if ( a3 == v7 )
      return 1;
    return v10;
  }
  return v4;
}
