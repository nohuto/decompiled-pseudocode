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

char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v5; // rcx
  __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int16 v9; // r14
  int v10; // edx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int16 v13; // [rsp+24h] [rbp-24h]
  __int16 Buf2; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+30h] [rbp-18h]

  v12 = 0;
  v13 = 768;
  LOBYTE(a3) = 1;
  if ( (int)RtlInitializeSid(&Buf2, &v12, a3) < 0 )
    return 0;
  v15 = 4;
  if ( !a2 )
    return 0;
  v6 = a2 + 8;
  v7 = 0;
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( !v8 )
    return 0;
  v9 = Buf2;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v6 + 1) & 8) == 0 )
    {
      LOBYTE(v5) = *(_BYTE *)v6;
      if ( *(_BYTE *)v6 <= 0x10u && (v10 = 104928, _bittest(&v10, (unsigned int)v5)) )
      {
        v5 = (unsigned __int8 *)(16LL * (*(_BYTE *)(v6 + 8) & 1) + 8LL * (*(_BYTE *)(v6 + 8) & 2) + v6 + 12);
      }
      else if ( (_BYTE)v5 == 4 )
      {
        v5 = (unsigned __int8 *)(v6 + 12);
      }
      else
      {
        v5 = (unsigned __int8)v5 <= 0xAu || (unsigned __int8)((_BYTE)v5 - 13) <= 1u ? (unsigned __int8 *)(v6 + 8) : 0LL;
      }
      if ( v5
        && *(_WORD *)v5 == v9
        && !memcmp(v5, &Buf2, 4 * (unsigned int)v5[1] + 8)
        && (!a1 || (a1 & *(_BYTE *)(v6 + 1)) != 0) )
      {
        break;
      }
    }
    ++v7;
    v6 += *(unsigned __int16 *)(v6 + 2);
    if ( v7 >= v8 )
      return 0;
  }
  return 1;
}
