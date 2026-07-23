/*
 * XREFs of RtlpApplyAclToObject @ 0x14041D040
 * Callers:
 *     ExpWnfSpecializeSecurityDescriptor @ 0x1403F5E24 (ExpWnfSpecializeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlpApplyAclToObject(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // r8d
  unsigned __int8 *v5; // rax
  int v6; // r11d
  int v7; // ecx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  unsigned int v11; // ecx
  int v12; // ecx

  if ( a1 )
  {
    v4 = 0;
    v5 = (unsigned __int8 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 4) )
    {
      v6 = 1651;
      do
      {
        if ( (*v5 <= 0xAu || (unsigned __int8)(*v5 - 13) <= 1u) && (v5[1] & 8) == 0 )
        {
          v7 = *((_DWORD *)v5 + 1);
          if ( v7 < 0 )
            *((_DWORD *)v5 + 1) = *a2 | v7;
          v8 = *((_DWORD *)v5 + 1);
          if ( (v8 & 0x40000000) != 0 )
            *((_DWORD *)v5 + 1) = v8 | a2[1];
          v9 = *((_DWORD *)v5 + 1);
          if ( (v9 & 0x20000000) != 0 )
            *((_DWORD *)v5 + 1) = v9 | a2[2];
          v10 = *((_DWORD *)v5 + 1);
          if ( (v10 & 0x10000000) != 0 )
            *((_DWORD *)v5 + 1) = v10 | a2[3];
          *((_DWORD *)v5 + 1) &= 0xFFFFFFFu;
          v11 = *v5;
          if ( (unsigned __int8)v11 <= 0xAu && _bittest(&v6, v11) )
            v12 = a2[3];
          else
            v12 = a2[3] | 0x1000000;
          *((_DWORD *)v5 + 1) &= v12;
        }
        ++v4;
        v5 += *((unsigned __int16 *)v5 + 1);
      }
      while ( v4 < *(unsigned __int16 *)(a1 + 4) );
    }
  }
}
