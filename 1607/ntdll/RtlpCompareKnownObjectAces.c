/*
 * XREFs of RtlpCompareKnownObjectAces @ 0x18008EA10
 * Callers:
 *     RtlpIsDuplicateAce @ 0x18003FE90 (RtlpIsDuplicateAce.c)
 *     RtlpCompareAces @ 0x1800DFE98 (RtlpCompareAces.c)
 * Callees:
 *     RtlEqualSid @ 0x1800043F0 (RtlEqualSid.c)
 *     RtlInitializeSid @ 0x18000D5E0 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x180040520 (RtlEqualPrefixSid.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

char __fastcall RtlpCompareKnownObjectAces(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  int v9; // ebp
  int v10; // esi
  _DWORD *v11; // r9
  int v12; // ebp
  _DWORD *v13; // rdx
  int v14; // r15d
  int v15; // r14d
  _DWORD *v16; // r8
  int v17; // r15d
  _DWORD *v18; // rcx
  int v20; // edx
  void *v21; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[8]; // [rsp+28h] [rbp-70h] BYREF
  int v24; // [rsp+30h] [rbp-68h]

  v6 = *a2;
  if ( RtlBaseAceType[v6] != RtlBaseAceType[*a1] || RtlIsSystemAceType[v6] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2);
  v10 = v9 & 1;
  if ( (v9 & 1) != 0 )
    v11 = a2 + 12;
  else
    v11 = 0LL;
  v12 = v9 & 2;
  if ( v12 )
  {
    if ( v10 )
      v13 = a2 + 28;
    else
      v13 = a2 + 12;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *((_DWORD *)a1 + 2);
  v15 = v14 & 1;
  if ( (v14 & 1) != 0 )
    v16 = a1 + 12;
  else
    v16 = 0LL;
  v17 = v14 & 2;
  if ( v17 )
  {
    if ( v15 )
      v18 = a1 + 28;
    else
      v18 = a1 + 12;
  }
  else
  {
    v18 = 0LL;
  }
  if ( v13 )
  {
    if ( !v18 || *v13 != *v18 || v13[1] != v18[1] || v13[2] != v18[2] || v13[3] != v18[3] )
      return 0;
  }
  else if ( v18 )
  {
    return 0;
  }
  if ( v11 )
  {
    if ( !v16 || *v11 != *v16 || v11[1] != v16[1] || v11[2] != v16[2] || v11[3] != v16[3] )
      return 0;
  }
  else if ( v16 )
  {
    return 0;
  }
  if ( RtlEqualSid(
         &a2[(v12 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v10 != 0 ? 0x10 : 0)],
         &a1[(v17 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v15 != 0 ? 0x10 : 0)]) )
  {
    return 1;
  }
  if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
    return 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
    return 0;
  v24 = 0;
  if ( !RtlEqualPrefixSid(&a1[(v17 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v15 != 0 ? 0x10 : 0)], Sid) )
    return 0;
  v20 = *(_DWORD *)&a1[(v17 != 0 ? 0x10 : 0) + 20 + (unsigned __int64)(v15 != 0 ? 0x10 : 0)];
  if ( !v20 )
  {
    if ( a3 )
    {
      v21 = a3;
      return RtlEqualSid(&a2[(v10 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v12 != 0 ? 0x10 : 0)], v21) != 0;
    }
    return 0;
  }
  if ( v20 != 1 || !a4 )
    return 0;
  v21 = a4;
  return RtlEqualSid(&a2[(v10 != 0 ? 0x10 : 0) + 12 + (unsigned __int64)(v12 != 0 ? 0x10 : 0)], v21) != 0;
}
