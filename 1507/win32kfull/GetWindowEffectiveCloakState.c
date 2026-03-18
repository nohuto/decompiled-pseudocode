/*
 * XREFs of GetWindowEffectiveCloakState @ 0x1C0064DD0
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0064940 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0064EE4 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     _FindProp @ 0x1C0065DC0 (_FindProp.c)
 */

__int64 __fastcall GetWindowEffectiveCloakState(__int64 a1)
{
  unsigned __int16 v1; // r15
  unsigned int CloakFlags; // edi
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 *Prop; // rax
  __int64 v11; // rax
  __int128 v12; // xmm1
  __m256i v13; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  v1 = atomDWMProp;
  CloakFlags = 0;
  v4 = a1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v4 + 88);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v4 + 24);
      v7 = 0LL;
      if ( v6 )
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( v8 )
          v7 = *(_QWORD *)(v8 + 16);
      }
      if ( v5 == v7 )
        goto LABEL_22;
    }
    if ( (*(_BYTE *)(v4 + 50) & 8) != 0 && GetTopLevelWindow(v4) )
    {
LABEL_22:
      if ( *(_QWORD *)(v4 + 168) && (Prop = (__int64 *)FindProp(v4, v1, 1LL)) != 0LL && (v11 = *Prop) != 0 )
      {
        v12 = *(_OWORD *)(v11 + 16);
        *(_OWORD *)v13.m256i_i8 = *(_OWORD *)v11;
        v14 = *(_QWORD *)(v11 + 32);
        *(_OWORD *)&v13.m256i_u64[2] = v12;
      }
      else
      {
        v13.m256i_i64[0] = v13.m256i_i32[0] & 0xFFFFE000;
        v14 = 0LL;
        memset(&v13.m256i_u64[1], 0, 24);
      }
      CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)&v13);
      if ( CloakFlags )
        break;
    }
    v4 = v5;
    if ( !v5 )
      return CloakFlags;
  }
  if ( v4 != a1 )
    CloakFlags |= 4u;
  return CloakFlags;
}
