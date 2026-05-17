/*
 * XREFs of RtlAddScopedPolicyIDAce @ 0x1800D8E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlCopySid @ 0x180062220 (RtlCopySid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlAddScopedPolicyIDAce(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int64 result; // rax
  int v10; // ecx
  char v11; // bp
  __int64 v12; // r9
  unsigned __int16 v13; // dx
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15; // [rsp+28h] [rbp-40h]
  unsigned __int16 v16; // [rsp+2Ch] [rbp-3Ch]

  v14 = 0LL;
  v15 = 0;
  v16 = 4352;
  if ( !a1 )
    return 3221225591LL;
  if ( !RtlValidSid((_BYTE *)a5) )
    return 3221225592LL;
  v10 = *(_DWORD *)(a5 + 2) - v15;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(a5 + 6) - v16;
  if ( v10 )
    return 3221225485LL;
  if ( *(_BYTE *)a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v11 = a2;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    v11 = *(_BYTE *)a1;
  if ( (a3 & 0xFFFFFFE0) != 0 || a4 )
    return 3221225485LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, &v14) )
    return 3221225591LL;
  v12 = v14;
  v13 = 4 * (*(unsigned __int8 *)(a5 + 1) + 4);
  if ( !v14 || v14 + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_DWORD *)(v14 + 4) = 0;
  *(_WORD *)(v12 + 2) = v13;
  *(_BYTE *)(v12 + 1) = a3;
  *(_BYTE *)v12 = 19;
  RtlCopySid(4 * *(unsigned __int8 *)(a5 + 1) + 8, (void *)(v12 + 8), (unsigned __int8 *)a5);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v11;
  return result;
}
