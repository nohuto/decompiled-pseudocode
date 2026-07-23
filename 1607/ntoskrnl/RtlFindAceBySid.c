/*
 * XREFs of RtlFindAceBySid @ 0x14000BC80
 * Callers:
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     SepRemoveAceFromTokenDefaultDacl @ 0x140080AD4 (SepRemoveAceFromTokenDefaultDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 */

unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  int v9; // r12d
  unsigned int v10; // ecx
  unsigned __int8 *v11; // rcx

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  v8 = 1992207;
  v9 = 104928;
  while ( 1 )
  {
    v10 = *v6;
    if ( (unsigned __int8)v10 <= 0x14u && _bittest(&v8, v10) )
    {
      v11 = v6 + 8;
    }
    else if ( (_BYTE)v10 == 4 )
    {
      v11 = v6 + 12;
    }
    else
    {
      if ( (unsigned __int8)v10 > 0x10u || !_bittest(&v9, v10) )
        goto LABEL_10;
      v11 = &v6[16 * (*((_DWORD *)v6 + 2) & 1) + 12 + 8 * (*((_DWORD *)v6 + 2) & 2)];
    }
    if ( v11 )
      break;
LABEL_10:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    if ( *(_WORD *)v11 == *a2 && !memcmp(v11, a2, 4 * (unsigned int)v11[1] + 8) )
      return v6;
    goto LABEL_10;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_10;
  *a3 = v7;
  return v6;
}
