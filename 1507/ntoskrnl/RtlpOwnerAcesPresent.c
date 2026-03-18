/*
 * XREFs of RtlpOwnerAcesPresent @ 0x1400150CC
 * Callers:
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     RtlOwnerAcesPresent @ 0x14010D754 (RtlOwnerAcesPresent.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  PSID SeOwnerRightsSid; // r15
  unsigned int v4; // esi
  unsigned __int8 *v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // cl
  int v9; // edx
  char *v10; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = (unsigned __int8 *)(a2 + 8);
  v6 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return 0;
  while ( 1 )
  {
    v7 = v5[1];
    if ( (v7 & 8) == 0 )
    {
      v8 = *v5;
      if ( *v5 <= 0x10u && (v9 = 104928, _bittest(&v9, v8)) )
      {
        v10 = (char *)&v5[16 * (*((_DWORD *)v5 + 2) & 1) + 12 + 8 * (*((_DWORD *)v5 + 2) & 2)];
      }
      else if ( v8 == 4 )
      {
        v10 = (char *)(v5 + 12);
      }
      else
      {
        v10 = v8 <= 0xAu || (unsigned __int8)(v8 - 13) <= 1u ? (char *)(v5 + 8) : 0LL;
      }
      if ( v10 && RtlEqualSid(v10, SeOwnerRightsSid) && (!a1 || (v7 & a1) != 0) )
        break;
    }
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v4 )
      return 0;
  }
  return 1;
}
