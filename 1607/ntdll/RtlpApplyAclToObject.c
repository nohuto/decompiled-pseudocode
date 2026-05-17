/*
 * XREFs of RtlpApplyAclToObject @ 0x1800040B4
 * Callers:
 *     RtlpSetSecurityObject @ 0x180003850 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x180044AD8 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlMapGenericMask @ 0x1800405F0 (RtlMapGenericMask.c)
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned __int8 *i; // rbx
  int v6; // ecx
  int v7; // eax

  if ( a1 )
  {
    v2 = 0;
    for ( i = (unsigned __int8 *)(a1 + 8); v2 < *(unsigned __int16 *)(a1 + 4); i += *((unsigned __int16 *)i + 1) )
    {
      if ( (*i <= 0xAu || (unsigned __int8)(*i - 13) <= 1u) && (i[1] & 8) == 0 )
      {
        RtlMapGenericMask(i + 4, a2);
        if ( *i <= 0xAu && (v6 = 1651, _bittest(&v6, *i)) )
          v7 = *(_DWORD *)(a2 + 12);
        else
          v7 = *(_DWORD *)(a2 + 12) | 0x1000000;
        *((_DWORD *)i + 1) &= v7;
      }
      ++v2;
    }
  }
}
