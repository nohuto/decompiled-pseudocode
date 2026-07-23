/*
 * XREFs of RtlpOwnerAcesPresent @ 0x18004E988
 * Callers:
 *     RtlpNewSecurityObject @ 0x18004B1E8 (RtlpNewSecurityObject.c)
 *     RtlOwnerAcesPresent @ 0x18007F180 (RtlOwnerAcesPresent.c)
 * Callees:
 *     RtlInitializeSid @ 0x18004EAE0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memcmp @ 0x180087B20 (memcmp.c)
 */

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  unsigned __int8 *v4; // rcx
  __int64 v5; // rbx
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int16 v8; // r14
  int v9; // edx
  _SID_IDENTIFIER_AUTHORITY v11; // [rsp+20h] [rbp-28h] BYREF
  __int16 Buf2; // [rsp+28h] [rbp-20h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  *(_DWORD *)v11.Value = 0;
  *(_WORD *)&v11.Value[4] = 768;
  if ( RtlInitializeSid(&Buf2, &v11, 1u) < 0 )
    return 0;
  v13 = 4;
  if ( !a2 )
    return 0;
  v5 = a2 + 8;
  v6 = 0;
  v7 = *(unsigned __int16 *)(a2 + 4);
  if ( !v7 )
    return 0;
  v8 = Buf2;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v5 + 1) & 8) == 0 )
    {
      LOBYTE(v4) = *(_BYTE *)v5;
      if ( *(_BYTE *)v5 <= 0x10u && (v9 = 104928, _bittest(&v9, (unsigned int)v4)) )
      {
        v4 = (unsigned __int8 *)(16LL * (*(_BYTE *)(v5 + 8) & 1) + 8LL * (*(_BYTE *)(v5 + 8) & 2) + v5 + 12);
      }
      else if ( (_BYTE)v4 == 4 )
      {
        v4 = (unsigned __int8 *)(v5 + 12);
      }
      else
      {
        v4 = (unsigned __int8)v4 <= 0xAu || (unsigned __int8)((_BYTE)v4 - 13) <= 1u ? (unsigned __int8 *)(v5 + 8) : 0LL;
      }
      if ( v4
        && *(_WORD *)v4 == v8
        && !memcmp(v4, &Buf2, 4 * (unsigned int)v4[1] + 8)
        && (!a1 || (a1 & *(_BYTE *)(v5 + 1)) != 0) )
      {
        break;
      }
    }
    ++v6;
    v5 += *(unsigned __int16 *)(v5 + 2);
    if ( v6 >= v7 )
      return 0;
  }
  return 1;
}
