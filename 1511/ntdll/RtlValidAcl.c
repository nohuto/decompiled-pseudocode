/*
 * XREFs of RtlValidAcl @ 0x1800196D0
 * Callers:
 *     RtlpAddKnownAce @ 0x180019524 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180019930 (RtlValidSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1800620B0 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x180065620 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180065780 (RtlAddProcessTrustLabelAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180075A60 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x180079030 (RtlDeleteAce.c)
 *     RtlpAddKnownObjectAce @ 0x18008B09C (RtlpAddKnownObjectAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800D7628 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddCompoundAce @ 0x1800D89B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800D8B20 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800D8E70 (RtlAddScopedPolicyIDAce.c)
 *     _ResCreateSecurityDescriptor @ 0x1800F95B4 (_ResCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1800D9D08 (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800D9E00 (RtlpValidCompoundAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r15
  _BYTE *v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  unsigned __int64 v7; // rcx
  unsigned __int16 *v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // al
  unsigned int v12; // ecx
  int v13; // r8d
  int v14; // r8d
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // al
  char result; // al

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (_BYTE *)(a1 + 8);
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
      v7 = a1 + (unsigned __int16)*v2;
      if ( (unsigned __int64)(v3 + 4) >= v7 )
        return 0;
      v8 = (unsigned __int16 *)(v3 + 2);
      if ( (_BYTE *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
        return 0;
      v9 = *v8;
      if ( (unsigned __int64)&v3[v9] > v7 )
        return 0;
      v10 = *v3;
      if ( *v3 <= 0x14u && _bittest(&v5, v10) )
      {
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
          return 0;
        if ( (unsigned int)v9 < 0x10 )
          return 0;
        if ( v3[8] != 1 )
          return 0;
        v11 = v3[9];
        if ( v11 > 0xFu || v9 < 4 * v11 + 8 + 8LL )
          return 0;
      }
      else if ( v10 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( v10 <= 0x10u && _bittest(&v6, v10) )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        v12 = 0;
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 || (unsigned int)v9 < 0xC )
          return 0;
        v13 = *((_DWORD *)v3 + 2);
        if ( (v13 & 1) != 0 )
          v12 = 16;
        v14 = v13 & 2;
        if ( v14 )
          v12 += 16;
        v15 = v12;
        if ( v9 < (unsigned __int64)v12 + 24 )
          return 0;
        v16 = (*((_DWORD *)v3 + 2) & 1) != 0 ? 16LL : 0LL;
        v17 = v16 + (v14 != 0 ? 0x10 : 0);
        if ( v3[v17 + 12] != 1 )
          return 0;
        v18 = v3[v17 + 13];
        if ( v18 > 0xFu || v9 < v15 + 4 * v18 + 8 + 12LL )
          return 0;
      }
      else if ( v10 == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 += *v8;
      ++v4;
    }
  }
  return 0;
}
