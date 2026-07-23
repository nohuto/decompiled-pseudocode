/*
 * XREFs of _RtlpMuiRegValidateLIPLanguage @ 0x1800F6D6C
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x1800F69B8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLangInfoIndex @ 0x18007E984 (RtlpMuiRegGetInstalledLangInfoIndex.c)
 */

__int64 __fastcall RtlpMuiRegValidateLIPLanguage(__int64 a1, int a2)
{
  __int64 v3; // r9
  int v4; // r15d
  int v5; // r12d
  _WORD *v6; // rbx
  int v7; // edi
  unsigned __int8 v8; // dl
  __int16 v9; // r8
  __int64 v10; // rdx
  _WORD *v11; // r8
  __int16 v12; // ax
  __int16 v13; // dx
  __int64 v14; // rbp
  __int16 v15; // r8
  __int16 v16; // ax
  char v17; // cl
  __int16 v20; // [rsp+58h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v5 = 0;
  v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * a2);
  v7 = 0;
  while ( 1 )
  {
    v8 = (v6[4] >> (2 * v5)) & 3;
    if ( !v8 )
      goto LABEL_26;
    v9 = v6[v5 + 6];
    if ( v8 != 2 )
    {
      v14 = *(_QWORD *)(v3 + 24);
      v20 = -1;
      if ( (int)RtlpMuiRegGetInstalledLangInfoIndex(v14, v8, v9, &v20) < 0
        || (v15 = v20, v20 < 0)
        || v20 >= (int)*(unsigned __int16 *)(v14 + 6)
        || v20 == a2
        || (v16 = *(_WORD *)(*(_QWORD *)(v14 + 16) + 28LL * v20), (v16 & 4) != 0) )
      {
        v3 = a1;
        v17 = v7;
LABEL_25:
        v6[4] &= ~(3 << v17);
        goto LABEL_26;
      }
      v3 = a1;
      v17 = v7;
      if ( (v16 & 0x1820) != 0x820 )
        goto LABEL_25;
      v6[4] = (2 << v7) | v6[4] & ~(3 << v7);
      v6[v5 + 6] = v15;
LABEL_23:
      ++v4;
      goto LABEL_26;
    }
    if ( v9 < 0 || (v10 = *(_QWORD *)(v3 + 24), v9 >= (int)*(unsigned __int16 *)(v10 + 6)) || v9 == a2 )
    {
      v13 = 3 << v7;
LABEL_15:
      v6[4] &= ~v13;
      v6[v5 + 6] = 0;
      goto LABEL_26;
    }
    v11 = (_WORD *)(*(_QWORD *)(v10 + 16) + 28LL * v9);
    if ( (*v11 & 4) != 0 )
      break;
    if ( (*v11 & 0x1820) == 0x820 )
      goto LABEL_23;
    if ( v11[2] )
    {
      v6[4] = v6[4] & ~(3 << v7) | (1 << v7);
      v12 = v11[2];
    }
    else
    {
      v13 = 3 << v7;
      if ( (__int16)v11[3] <= 0 )
        goto LABEL_15;
      v6[4] = v13 | v6[4] & ~v13;
      v12 = v11[3];
    }
    v6[v5 + 6] = v12;
LABEL_26:
    ++v5;
    v7 += 2;
    if ( v7 >= 8 )
      goto LABEL_29;
  }
  *v6 |= 0x1000u;
LABEL_29:
  if ( v4 >= 1 )
    return 0LL;
  *v6 |= 0x1000u;
  return 3221225473LL;
}
