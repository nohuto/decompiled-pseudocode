/*
 * XREFs of SepSecureBootValidateBcdDataAgainstBcdRule @ 0x140694634
 * Callers:
 *     NtFilterBootOption @ 0x140693C88 (NtFilterBootOption.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 * Callees:
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     SepSecureBootGetQWordPolicyValue @ 0x140694460 (SepSecureBootGetQWordPolicyValue.c)
 */

__int64 __fastcall SepSecureBootValidateBcdDataAgainstBcdRule(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _WORD *v3; // r9
  unsigned int QWordPolicyValue; // ebx
  __int16 v5; // r10
  bool v6; // zf
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = (_WORD *)(qword_1403581C8 + *(unsigned int *)(a1 + 8));
  QWordPolicyValue = 0;
  v5 = *v3 & 0x1F;
  if ( v5 != 8 )
  {
    switch ( *(_BYTE *)(a1 + 7) & 0xF )
    {
      case 2:
        if ( v5 || (a3 & 1) != 0 )
          return (unsigned int)-1069350910;
        for ( ; a3; a3 -= 2 )
        {
          if ( *((_WORD *)a2 + ((unsigned __int64)a3 >> 1) - 1) )
            break;
        }
        if ( a3 != (unsigned __int16)v3[1] )
          return (unsigned int)-1069350910;
        v6 = memcmp(a2, v3 + 2, a3) == 0;
        break;
      case 5:
        if ( a3 != 8 )
          return (unsigned int)-1069350910;
        v7 = *a2;
        v8 = qword_1403581C8 + *(unsigned int *)(a1 + 8);
        v10 = *a2;
        QWordPolicyValue = SepSecureBootGetQWordPolicyValue(v8, &v10);
        if ( (QWordPolicyValue & 0x80000000) != 0 )
          return QWordPolicyValue;
        v6 = v7 == v10;
        break;
      case 6:
        if ( v5 != 1 || a3 - 1 > 1 )
          return (unsigned int)-1069350910;
        v6 = (v3[1] != 0) == (*(_BYTE *)a2 != 0);
        break;
      default:
        return QWordPolicyValue;
    }
    if ( v6 )
      return QWordPolicyValue;
    return (unsigned int)-1069350910;
  }
  if ( !v3[1] )
    return (unsigned int)-1069350910;
  return QWordPolicyValue;
}
