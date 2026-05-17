/*
 * XREFs of RtlAddCompoundAce @ 0x1800D89B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x1800196D0 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180019A30 (RtlValidSid.c)
 *     RtlCopySid @ 0x180062220 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddCompoundAce(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  char v10; // r14
  __int64 result; // rax
  __int64 v12; // rdi
  unsigned __int16 v13; // dx
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(a5) || !RtlValidSid(a6) )
    return 3221225592LL;
  if ( *(_BYTE *)a1 > 4u || (unsigned int)(a2 - 3) > 1 )
    return 3221225561LL;
  v10 = a2;
  if ( *(_BYTE *)a1 > (unsigned __int8)a2 )
    v10 = *(_BYTE *)a1;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v14) )
    return 3221225591LL;
  v12 = v14[0];
  v13 = 4 * (a6[1] + a5[1] + 7);
  if ( !v14[0] || v14[0] + (unsigned __int64)v13 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v14[0] + 2LL) = v13;
  *(_WORD *)(v12 + 8) = a3;
  *(_WORD *)v12 = 4;
  *(_DWORD *)(v12 + 4) = a4;
  RtlCopySid(4 * a5[1] + 8, (void *)(v12 + 12), a5);
  RtlCopySid(4 * a6[1] + 8, (void *)(4 * a5[1] + 8 + v12 + 12), a6);
  ++*(_WORD *)(a1 + 4);
  result = 0LL;
  *(_BYTE *)a1 = v10;
  return result;
}
